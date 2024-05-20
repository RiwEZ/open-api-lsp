package lsp

type DidSaveTextDocumentParams struct {
	TextDocument TextDocumentIdentifier `json:"textDocument"`
	Text         string                 `json:"text"`
}

type DidSaveTextDocumentNotification struct {
	Notification
	Params DidSaveTextDocumentParams `json:"params"`
}
