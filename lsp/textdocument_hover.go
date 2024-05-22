package lsp

type HoverParams struct {
	TextDocumentPositionParams
}

type HoverRequest struct {
	Request
	Params HoverParams `json:"params"`
}

type MarkupContent struct {
	Kind  string `json:"kind"`
	Value string `json:"value"`
}

type HoverResult struct {
	Contents MarkupContent `json:"contents"` // MarkedString only now
}

type HoverResponse struct {
	Response
	Result *HoverResult `json:"result"`
}
