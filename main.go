package main

import (
	"bufio"
	"os"

	"github.com/RiwEz/open-api-lsp/rpc"
	"github.com/rs/zerolog"
	"github.com/rs/zerolog/log"
)

func handleMsg(_ any) {
}

func initLogger(filename string) {
	logfile, err := os.OpenFile(filename, os.O_CREATE|os.O_TRUNC|os.O_WRONLY, 0666)
	if err != nil {
		panic("no file for me bro")
	}
  output := zerolog.ConsoleWriter{Out: logfile}
  log.Logger = zerolog.New(output).With().Timestamp().Logger()
}

func main() {
	initLogger("/home/tanat/projects/open-api-lsp/log.txt")

	log.Info().Msg("Started LSP server")

	scanner := bufio.NewScanner(os.Stdin)
	scanner.Split(rpc.Split)

	for scanner.Scan() {
		msg := scanner.Text()
		handleMsg(msg)
	}
}
