package analysis

import (
	"context"
	"fmt"
	"strings"

	"github.com/RiwEz/open-api-lsp/lsp"
	"github.com/rs/zerolog/log"
	sitter "github.com/smacker/go-tree-sitter"
	b "github.com/tree-sitter/tree-sitter-openapi3"
)

type State struct {
	// Map of file names to content
	Documents map[string]string
	DB        map[lsp.Range]string
}

func LineRange(line, start, end uint) lsp.Range {
	return lsp.Range{
		Start: lsp.Position{
			Line:      line,
			Character: start,
		},
		End: lsp.Position{
			Line:      line,
			Character: end,
		},
	}
}

func NewState() State {
	return State{
		Documents: map[string]string{},
		DB:        map[lsp.Range]string{},
	}
}

func rangeFromTreeSitter(start, end sitter.Point) lsp.Range {
	return lsp.Range{
		Start: lsp.Position{
			Line:      uint(start.Row),
			Character: uint(start.Column),
		},
		End: lsp.Position{
			Line:      uint(end.Row),
			Character: uint(end.Column),
		},
	}
}

func prepareDB(tree *sitter.Tree, lang *sitter.Language) (map[lsp.Range]string, []lsp.Diagnostic) {
	// map[lsp.Range]<hover content>
	db := map[lsp.Range]string{}

	q, err := sitter.NewQuery([]byte("(version) @version (info) @info"), lang)
	if err != nil {
		log.Err(err).Msg("can't create query")
		return db, []lsp.Diagnostic{}
	}
	qc := sitter.NewQueryCursor()
	qc.Exec(q, tree.RootNode())

	for {
		m, ok := qc.NextMatch()
		if !ok {
			// if not found any match, we can return some diagnostic from here too
			break
		}
		for _, n := range m.Captures {
			start := n.Node.StartPoint()
			end := n.Node.EndPoint()
			nodeType := n.Node.Type()
			r := rangeFromTreeSitter(start, end)

			if nodeType == "version" {
				db[r] = "OpenAPI version"
			}
			if nodeType == "info" {
				db[r] = "Info about this OpenAPI"
			}
		}
	}

	if len(db) == 0 {
		return db, []lsp.Diagnostic{{
			Range:    LineRange(0, 0, 0),
			Severity: 1,
			Source:   "open-api-lsp",
			Message:  "This file does not have correct OpenAPI shits",
		}}
	}

	return db, []lsp.Diagnostic{}
}

func getDB(position lsp.Position, db map[lsp.Range]string) (string, bool) {
	// this run in O(n), maybe we can use Interval/Segment Tree to improve it
	for key, value := range db {
		if (position.Line >= key.Start.Line && position.Line <= key.End.Line) &&
			(position.Character >= key.Start.Character && position.Character <= key.End.Character) {
			return value, true
		}
	}
	return "", false
}

func (s *State) SetDocument(ctx context.Context, uri, text string) []lsp.Diagnostic {
	s.Documents[uri] = text

	// maybe this need to to have debounce shits on here
	parser := sitter.NewParser()
	lang := sitter.NewLanguage(b.Language())
	parser.SetLanguage(lang)

	tree, err := parser.ParseCtx(ctx, nil, []byte(text))
	if err != nil {
		log.Err(err).Msg("can't parse the file")
		return []lsp.Diagnostic{}
	}

	db, diagnostics := prepareDB(tree, lang)
	s.DB = db
	return diagnostics
}

func (s *State) UpdateDocument(ctx context.Context, uri, text string) {
	// maybe support some incremental shit in the future
	s.Documents[uri] = text
}

func (s *State) Hover(id int, uri string, position lsp.Position) lsp.HoverResponse {
	document := s.Documents[uri]

	content, founded := getDB(position, s.DB)
	if !founded {
		return lsp.HoverResponse{
			Response: lsp.Response{
				RPC: "2.0",
				ID:  &id,
			},
			Result: lsp.HoverResult{
				Contents: fmt.Sprintf("File: %s, Chars: %d", uri, len(document)),
			},
		}
	}

	return lsp.HoverResponse{
		Response: lsp.Response{
			RPC: "2.0",
			ID:  &id,
		},
		Result: lsp.HoverResult{
			Contents: content,
		},
	}
}

func (s *State) Definition(id int, uri string, position lsp.Position) lsp.DefinitionResponse {
	return lsp.DefinitionResponse{
		Response: lsp.Response{
			RPC: "2.0",
			ID:  &id,
		},
		Result: lsp.Location{
			URI:   uri,
			Range: LineRange(position.Line-1, 0, 0),
		},
	}
}

func (s *State) CodeAction(id int, uri string) lsp.CodeActionResponse {
	file := s.Documents[uri]
	actions := []lsp.CodeAction{}
	for row, line := range strings.Split(file, "\n") {
		target := "Vs Code"
		idx := strings.Index(line, target)
		if idx >= 0 {
			replaceChange := map[string][]lsp.TextEdit{}
			replaceChange[uri] = []lsp.TextEdit{
				{
					Range:   LineRange(uint(row), uint(idx), uint(idx+len(target))),
					NewText: "Neovim",
				},
			}

			actions = append(actions, lsp.CodeAction{
				Title: "Replace Vs Code with NeoVim :D",
				Edit:  &lsp.WorkSpaceEdit{Changes: replaceChange},
			})

			censorChange := map[string][]lsp.TextEdit{}
			censorChange[uri] = []lsp.TextEdit{
				{
					Range:   LineRange(uint(row), uint(idx), uint(idx+len(target))),
					NewText: "Vs Cuck",
				},
			}

			actions = append(actions, lsp.CodeAction{
				Title: "Censor to Vs Cuck",
				Edit:  &lsp.WorkSpaceEdit{Changes: censorChange},
			})
		}
	}

	return lsp.CodeActionResponse{
		Response: lsp.Response{
			RPC: "2.0",
			ID:  &id,
		},
		Result: actions,
	}
}

func (s *State) Completion(id int, uri string) lsp.CompletionResponse {
	items := []lsp.CompletionItem{
		{
			Label:         "Neovim BTW",
			Detail:        "good job to myself :D",
			Documentation: "who read doc?",
		},
	}

	// ask your static analysis tools to figure out good completion
	// for our case, I think we will start with possible $ref

	return lsp.CompletionResponse{
		Response: lsp.Response{
			RPC: "2.0",
			ID:  &id,
		},
		Result: items,
	}
}
