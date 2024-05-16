package lsp

type DefinitionParams struct {
	TextDocumentPositionParams
}

type DefinitionRequest struct {
	Request
	Params DefinitionParams `json:"params"`
}

type DefinitionResponse struct {
	Response
	Result Location `json:"result"`
}
