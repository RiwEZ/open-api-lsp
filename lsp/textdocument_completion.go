package lsp

type CompletionParams struct {
	TextDocumentPositionParams
}

type CompletionRequest struct {
	Request
	Params CompletionParams `json:"params"`
}

type CompletionItemKind int

const (
	Text CompletionItemKind = iota + 1
	Method
	Function
	Constructor
	Field
	Variable
	Class
	Interface
	Module
	Property
	Unit
	Value
	Enum
	Keyword
	Snippet
	Color
	File
	Reference
	Folder
	EnumMember
	Constant
	Struct
	Event
	Operator
	TypeParameter
)

type CompletionItem struct {
	Label         string             `json:"label"`
	Detail        string             `json:"detail"`
	Documentation string             `json:"documentation"`
	Kind          CompletionItemKind `json:"kind"`
}

type CompletionResponse struct {
	Response
	Result []CompletionItem `json:"result"`
}
