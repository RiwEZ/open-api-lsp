package analysis

import (
	"github.com/RiwEz/open-api-lsp/lsp"
	sitter "github.com/smacker/go-tree-sitter"
)

func LspRangeFromTreeSitter(start, end sitter.Point) lsp.Range {
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
