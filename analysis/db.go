package analysis

import (
	"github.com/RiwEz/open-api-lsp/lsp"
	"github.com/rs/zerolog/log"
	sitter "github.com/smacker/go-tree-sitter"
)

type RangeDB interface {
	Prepare(*sitter.Tree, *sitter.Language) []lsp.Diagnostic
	Get(lsp.Position) (LspInfo, bool)
	AnyAfter(lsp.Position) (LspInfo, bool)
}

type LspInfo struct {
	Hover       lsp.HoverResult
	Completions []lsp.CompletionItem // completion after label node ?
	Diagnostics lsp.Diagnostic       // when missing?
}

// This currently only support one file
type ConcreteRangeDB struct {
	data map[lsp.Range]LspInfo
}

func (c *ConcreteRangeDB) Prepare(tree *sitter.Tree, lang *sitter.Language) []lsp.Diagnostic {
	infos := map[string]LspInfo{
		"openapiFieldName": {
			Hover: lsp.HoverResult{
				Contents: lsp.MarkupContent{
					Kind:  "markdown",
					Value: "**REQUIRED**. This string MUST be the version number of the OpenAPI Specification that the OpenAPI document uses.\nThe openapi field SHOULD be used by tooling to interpret the OpenAPI document. This is not related to the API info.version string.",
				},
			},
			Completions: []lsp.CompletionItem{{
				Label:         "3.0.0",
				Detail:        "string",
				Documentation: "Default version number",
				Kind:          lsp.Value,
			}},
			Diagnostics: lsp.Diagnostic{
				Range:    LineRange(0, 0, 0),
				Severity: 1,
				Source:   "open-api-lsp",
				Message:  "`openapi:` is missing",
			},
		},
		"infoFieldName": {
			Hover: lsp.HoverResult{
				Contents: lsp.MarkupContent{
					Kind:  "markdown",
					Value: "**REQUIRED**. Provides metadata about the API.\nThe metadata MAY be used by tooling as required.",
				},
			},
			Completions: nil,
			Diagnostics: lsp.Diagnostic{
				Range:    LineRange(0, 0, 0),
				Severity: 1,
				Source:   "open-api-lsp",
				Message:  "`info:` is missing",
			},
		},
	}

	requires := map[string]bool{}
	for label := range infos {
		requires[label] = false
	}

	db := map[lsp.Range]LspInfo{}

	q, err := sitter.NewQuery([]byte(
		"(openapiFieldName) @version (infoFieldName) @info"),
		lang,
	)
	if err != nil {
		log.Err(err).Msg("can't create query")
		return []lsp.Diagnostic{}
	}
	qc := sitter.NewQueryCursor()
	qc.Exec(q, tree.RootNode())

	for {
		m, ok := qc.NextMatch()
		if !ok {
			break
		}

		for _, n := range m.Captures {
			start := n.Node.StartPoint()
			end := n.Node.EndPoint()
			nodeType := n.Node.Type()
			r := LspRangeFromTreeSitter(start, end)

			for label, info := range infos {
				if nodeType == label {
					db[r] = info
					requires[label] = true
				}
			}
		}
	}

	diagnostics := []lsp.Diagnostic{}
	for label, marked := range requires {
		if !marked {
			diagnostics = append(diagnostics, infos[label].Diagnostics)
		}
	}

	c.data = db
	return diagnostics
}

func (c *ConcreteRangeDB) Get(position lsp.Position) (LspInfo, bool) {
	// this run in O(n), maybe we can use interval or segment Tree to improve it
	for key, value := range c.data {
		if (position.Line >= key.Start.Line && position.Line <= key.End.Line) &&
			(position.Character >= key.Start.Character && position.Character <= key.End.Character) {
			return value, true
		}
	}

	// TODO, what is the default LspInfo?
	return LspInfo{}, false
}

func (c *ConcreteRangeDB) AnyAfter(position lsp.Position) (LspInfo, bool) {
	// also O(n)
	for key, value := range c.data {
		if position.Line == key.End.Line && position.Character >= key.End.Character {
			return value, true
		}
	}

	return LspInfo{}, false
}
