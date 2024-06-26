package main

import (
	"bufio"
	"context"
	"encoding/json"
	"io"
	"os"

	"github.com/RiwEz/open-api-lsp/analysis"
	"github.com/RiwEz/open-api-lsp/lsp"
	"github.com/RiwEz/open-api-lsp/rpc"
	"github.com/rs/zerolog"
	"github.com/rs/zerolog/log"
)

func writeResponse(writer io.Writer, msg any) {
	resp := rpc.EncodeMsg(msg)
	writer.Write([]byte(resp))
}

func handleMsg(
	writer io.Writer,
	ctx context.Context,
	state *analysis.State,
	method string,
	contents []byte,
) {
	log.Info().Msgf("Received msg with method: %s", method)

	switch method {
	case "initialize":
		var request lsp.InitializeRequest
		if err := json.Unmarshal(contents, &request); err != nil {
			log.Err(err).Msg("Couldn't parse initialize request")
		}
		log.Info().Msgf("Connected to: %s %s",
			request.Params.ClientInfo.Name,
			request.Params.ClientInfo.Version)

		writeResponse(writer, lsp.NewInitializeResponse(request.ID))

	case "textDocument/didOpen":
		var request lsp.DidOpenTextDocumentNotification
		if err := json.Unmarshal(contents, &request); err != nil {
			log.Err(err).Msg("Couldn't parse textDocument/didOpen notification")
		}

		diagnostics := state.SetDocument(
			ctx,
			request.Params.TextDocument.URI,
			request.Params.TextDocument.Text,
		)
		writeResponse(writer, lsp.PublishDiagnosticNotifaction{
			Notification: lsp.Notification{
				RPC:    "2.0",
				Method: "textDocument/publishDiagnostics",
			},
			Params: lsp.PublishDiagnosticParams{
				URI:         request.Params.TextDocument.URI,
				Diagnostics: diagnostics,
			},
		})

	case "textDocument/didChange":
		var request lsp.DidChangeTextDocumentNotification
		if err := json.Unmarshal(contents, &request); err != nil {
			log.Err(err).Msg("Couldn't parse textDocument/didChange notification")
		}

		// handle change ?
		for _, change := range request.Params.ContentChanges {
			state.UpdateDocument(ctx, request.Params.TextDocument.URI, change.Text)
		}

	case "textDocument/didSave":
		var request lsp.DidSaveTextDocumentNotification
		if err := json.Unmarshal(contents, &request); err != nil {
			log.Err(err).Msg("Couldn't parse textDocument/didSave notification")
		}

		diagnostics := state.SetDocument(
			ctx,
			request.Params.TextDocument.URI,
			request.Params.Text,
		)
		writeResponse(writer, lsp.PublishDiagnosticNotifaction{
			Notification: lsp.Notification{
				RPC:    "2.0",
				Method: "textDocument/publishDiagnostics",
			},
			Params: lsp.PublishDiagnosticParams{
				URI:         request.Params.TextDocument.URI,
				Diagnostics: diagnostics,
			},
		})

	case "textDocument/hover":
		var request lsp.HoverRequest
		if err := json.Unmarshal(contents, &request); err != nil {
			log.Err(err).Msg("Couldn't parse textDocument/hover request")
		}

		resp := state.Hover(request.ID, request.Params.TextDocument.URI, request.Params.Position)
		writeResponse(writer, resp)

	case "textDocument/definition":
		var request lsp.DefinitionRequest
		if err := json.Unmarshal(contents, &request); err != nil {
			log.Err(err).Msg("Couldn't parse textDocument/definition request")
		}

		resp := state.Definition(request.ID, request.Params.TextDocument.URI, request.Params.Position)
		writeResponse(writer, resp)

	case "textDocument/codeAction":
		var request lsp.CodeActionRequest
		if err := json.Unmarshal(contents, &request); err != nil {
			log.Err(err).Msg("Couldn't parse textDocument/codeAction request")
		}

		resp := state.CodeAction(request.ID, request.Params.TextDocument.URI)
		writeResponse(writer, resp)

	case "textDocument/completion":
		var request lsp.CompletionRequest
		if err := json.Unmarshal(contents, &request); err != nil {
			log.Err(err).Msg("Couldn't parse textDocument/completion request")
		}

		resp := state.Completion(request.ID, request.Params)
		writeResponse(writer, resp)

	}
}

func initLogger(filename string) {
	logfile, err := os.OpenFile(filename, os.O_CREATE|os.O_TRUNC|os.O_WRONLY, 0666)
	if err != nil {
		panic("no file for me bro")
	}
	// we can change logfile for stderr in the future for :LspLog to work
	output := zerolog.ConsoleWriter{Out: logfile}
	log.Logger = zerolog.New(output).With().Timestamp().Logger()
}

func main() {
	initLogger("/home/tanat/projects/open-api-lsp/log.txt")

	log.Info().Msg("Started LSP server")

	ctx := context.Background()

	scanner := bufio.NewScanner(os.Stdin)
	scanner.Split(rpc.Split)

	state := analysis.NewState()
	writer := os.Stdout

	for scanner.Scan() {
		msg := scanner.Bytes()
		method, contents, err := rpc.DecodeMsg(msg)
		if err != nil {
			log.Err(err)
			continue
		}

		handleMsg(writer, ctx, &state, method, contents)
	}
}
