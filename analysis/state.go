package analysis

import (
	"fmt"
	"strings"

	"github.com/RiwEz/open-api-lsp/lsp"
)

type State struct {
	// Map of file names to content
	Documents map[string]string
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

func (s *State) OpenDocument(uri, text string) {
	s.Documents[uri] = text
}

func (s *State) UpdateDocument(uri, text string) {
	// maybe support some incremental shit in the future
	s.Documents[uri] = text
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
				Edit:  &lsp.WorkSpaceEdit{Changes: replaceChange},
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
