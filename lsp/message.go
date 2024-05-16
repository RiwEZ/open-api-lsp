package lsp

type Request struct {
	RPC    string `json:"rpc"`
	ID     int    `json:"id"`
	Method string `json:"method"`
}

type Response struct {
	RPC string `json:"rpc"`
	ID  *int   `json:"id,omitempty"`
}

type Notification struct {
	RPC string `json:"rpc"`
	Method string `json:"method"`
}
