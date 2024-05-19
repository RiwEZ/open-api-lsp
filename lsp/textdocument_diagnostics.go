package lsp

type Diagnostic struct {
	Range    Range  `json:"range"`
	Severity int    `json:"severity"`
	Source   string `json:"source"`
	Message  string `json:"message"`
}

type PublishDiagnosticParams struct {
	URI         DocumentUri  `json:"uri"`
	Diagnostics []Diagnostic `json:"diagnostics"`
}

type PublishDiagnosticNotifaction struct {
	Notification
	Params PublishDiagnosticParams `json:"params"`
}
