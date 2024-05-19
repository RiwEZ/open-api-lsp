module github.com/RiwEz/open-api-lsp

go 1.22.1

require (
	github.com/rs/zerolog v1.32.0
	github.com/smacker/go-tree-sitter v0.0.0-20240514083259-c5d1f3f5f99e
	github.com/tree-sitter/tree-sitter-openapi3 v0.0.0-00010101000000-000000000000
)

require (
	github.com/mattn/go-colorable v0.1.13 // indirect
	github.com/mattn/go-isatty v0.0.20 // indirect
	golang.org/x/sys v0.20.0 // indirect
)

replace github.com/tree-sitter/tree-sitter-openapi3 => ./tree-sitter-openapi3/bindings/go
