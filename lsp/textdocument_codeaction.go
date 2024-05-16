package lsp

type CodeActionContext struct {
}

type CodeActionParams struct {
	TextDocument TextDocumentIdentifier `json:"textDocument"`
	Range        Range                  `json:"Range"`
	Context      CodeActionContext      `json:"Context"`
}

type CodeActionRequest struct {
	Request
	Params CodeActionParams `json:"params"`
}

type TextEdit struct {
	Range   Range  `json:"range"`
	NewText string `json:"newText"`
}

type WorkSpaceEdit struct {
	Changes map[string][]TextEdit `json:"changes"`
}

type Command struct {
	Title     string        `json:"title"`
	Command   string        `json:"command"`
	Arguments []interface{} `json:"arguments,omitempty"`
}

type CodeAction struct {
	Title   string         `json:"title"`
	Edit    *WorkSpaceEdit `json:"edit,omitempty"`
	Command *Command       `json:"command,omitempty"`
}

type CodeActionResponse struct {
	Response
	Result []CodeAction `json:"result"`
}
