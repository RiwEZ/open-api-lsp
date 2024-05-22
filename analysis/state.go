package analysis

import (
	"context"
	"strings"

	"github.com/RiwEz/open-api-lsp/lsp"
	"github.com/rs/zerolog/log"
	sitter "github.com/smacker/go-tree-sitter"
	b "github.com/tree-sitter/tree-sitter-openapi3"
)

type State struct {
	// Map of file names to content
	Documents map[string]string
	DB        RangeDB
	Tree      *sitter.Tree
	Lang      *sitter.Language
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
		DB:        &ConcreteRangeDB{data: map[lsp.Range]LspInfo{}},
		Tree:      nil,
		Lang:      nil,
	}
}

func (s *State) SetDocument(ctx context.Context, uri, text string) []lsp.Diagnostic {
	s.Documents[uri] = text

	parser := sitter.NewParser()
	lang := sitter.NewLanguage(b.Language())
	parser.SetLanguage(lang)

	tree, err := parser.ParseCtx(ctx, nil, []byte(text))
	if err != nil {
		log.Err(err).Msg("can't parse the file")
		return []lsp.Diagnostic{}
	}

	diagnostics := s.DB.Prepare(tree, lang)

	s.Tree = tree
	s.Lang = lang
	return diagnostics
}

func (s *State) UpdateDocument(ctx context.Context, uri, text string) {
	// maybe support some incremental shit in the future
	s.Documents[uri] = text
}

func (s *State) Hover(id int, uri string, position lsp.Position) lsp.HoverResponse {
	lspInfo, founded := s.DB.Get(position)

	if !founded {
		return lsp.HoverResponse{
			Response: lsp.DefaultResponse(&id),
			Result:   nil,
		}
	}

	return lsp.HoverResponse{
		Response: lsp.DefaultResponse(&id),
		Result:   &lspInfo.Hover,
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

func (s *State) Completion(id int, params lsp.CompletionParams) lsp.CompletionResponse {
	lspInfo, founded := s.DB.AnyAfter(params.Position)

	if !founded {
		return lsp.CompletionResponse{
			Response: lsp.DefaultResponse(&id),
			Result:   nil,
		}
	}

	return lsp.CompletionResponse{
		Response: lsp.DefaultResponse(&id),
		Result:   lspInfo.Completions,
	}
}
