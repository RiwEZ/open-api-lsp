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
	Tree      *sitter.Tree
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
	}
}

func (s *State) OpenDocument(ctx context.Context, uri, text string) {
	s.Documents[uri] = text

	parser := sitter.NewParser()
	parser.SetLanguage(sitter.NewLanguage(b.Language()))

  tree, err := parser.ParseCtx(ctx, nil, []byte(text))
  if err != nil {
    // TODO do some thing
    return
  }
  s.Tree = tree
	log.Info().Msgf("Tree Root Node: %v", s.Tree.RootNode())
}

func getDiagnosticForFile(text string) []lsp.Diagnostic {
	diagnostics := []lsp.Diagnostic{}
	for row, line := range strings.Split(text, "\n") {
		if strings.Contains(line, "VS Code") {
			idx := strings.Index(line, "VS Code")
			diagnostics = append(diagnostics, lsp.Diagnostic{
				Range:    LineRange(uint(row), uint(idx), uint(idx+len("VS Code"))),
				Severity: 1,
				Source:   "open-api-lsp",
				Message:  "VS Code detected, :C",
			})
		}

		if strings.Contains(line, "Neovim") {
			idx := strings.Index(line, "Neovim")
			diagnostics = append(diagnostics, lsp.Diagnostic{
				Range:    LineRange(uint(row), uint(idx), uint(idx+len("Neovim"))),
				Severity: 0,
				Source:   "open-api-lsp",
				Message:  "SUper great choice",
			})
		}
	}
	return diagnostics
}

func (s *State) UpdateDocument(uri, text string) []lsp.Diagnostic {
	// maybe support some incremental shit in the future
	s.Documents[uri] = text

	return getDiagnosticForFile(text)
}

func (s *State) Hover(id int, uri string, position lsp.Position) lsp.HoverResponse {
	// look up for type ?
	document := s.Documents[uri]

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
