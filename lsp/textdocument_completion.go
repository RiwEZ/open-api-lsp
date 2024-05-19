package lsp

type CompletionParams struct {
	TextDocumentPositionParams
}

type CompletionRequest struct {
	Request
	Params CompletionParams `json:"params"`
}

type CompletionItem struct {
	Label         string `json:"label"`
	Detail        string `json:"detail"`
	Documentation string `json:"documentation"`
}

type CompletionResponse struct {
	Response
	Result []CompletionItem `json:"result"`
}
