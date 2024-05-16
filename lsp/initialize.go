package lsp

type ClientInfo struct {
	Name    string `json:"name"`
	Version string `json:"version"`
}

type InitializeRequestParams struct {
	ClientInfo *ClientInfo `json:"clientInfo"`
	// TODO, ... more shits
}

type InitializeRequest struct {
	Request
	Params InitializeRequestParams `json:"params"`
}

type ServerCapabilities struct {
	TextDocumentSyncKind int  `json:"textDocumentSync"`
	HoverProvider        bool `json:"hoverProvider"`
	DefinitionProvider   bool `json:"definitionProvider"`
	CodeActionProvider   bool `json:"codeActionProvider"`
}

type ServerInfo struct {
	Name    string `json:"name"`
	Version string `json:"version"`
}

type InitializeResult struct {
	Capabilities ServerCapabilities `json:"capabilities"`
	ServerInfo   *ServerInfo        `json:"serverInfo"`
}

type InitializeResponse struct {
	Response
	Result InitializeResult `json:"result"`
}

func NewInitializeResponse(id int) InitializeResponse {
	return InitializeResponse{
		Response: Response{
			RPC: "2.0",
			ID:  &id,
		},
		Result: InitializeResult{
			Capabilities: ServerCapabilities{
				TextDocumentSyncKind: 1,
				HoverProvider:        true,
				DefinitionProvider:   true,
				CodeActionProvider:   true,
			},
			ServerInfo: &ServerInfo{
				Name:    "open-api-lsp",
				Version: "0.0.1",
			},
		},
	}
}
