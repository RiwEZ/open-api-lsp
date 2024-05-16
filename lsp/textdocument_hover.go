package lsp

type HoverParams struct {
	TextDocumentPositionParams
}

type HoverRequest struct {
	Request
	Params HoverParams `json:"params"`
}

type HoverResult struct {
	Contents string `json:"contents"` // MarkedString only now
}

type HoverResponse struct {
	Response
	Result HoverResult `json:"result"`
}
