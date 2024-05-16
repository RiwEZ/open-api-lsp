package rpc

import (
	"bytes"
	"encoding/json"
	"errors"
	"fmt"
	"strconv"
)

func EncodeMsg(msg any) string {
	content, err := json.Marshal(msg)
	if err != nil {
		// TODO: handle the error
		panic(err)
	}
	return fmt.Sprintf("Content-Length: %d\r\n\r\n%s", len(content), content)
}

type BaseMessage struct {
	Method string `json:"method"`
}

// return (method, contents, err)
func DecodeMsg(msg []byte) (string, []byte, error) {
	header, content, founded := bytes.Cut(msg, []byte{'\r', '\n', '\r', '\n'})

	if !founded {
		return "", nil, errors.New("Did not find the separators")
	}

	contentLengthBytes := header[len("Content-Length: "):]
	contentLength, err := strconv.Atoi(string(contentLengthBytes))
	if err != nil {
		return "", nil, err
	}

	var baseMessage BaseMessage
	if err := json.Unmarshal(content[:contentLength], &baseMessage); err != nil {
		return "", nil, err
	}

	return baseMessage.Method, content[:contentLength], nil
}

func Split(data []byte, atEOF bool) (advance int, token []byte, err error) {
	header, content, founded := bytes.Cut(data, []byte{'\r', '\n', '\r', '\n'})
	if !founded {
		return 0, nil, nil
	}

	contentLengthBytes := header[len("Content-Length: "):]
	contentLength, err := strconv.Atoi(string(contentLengthBytes))
	if err != nil {
		return 0, nil, err
	}

	if len(content) < contentLength {
		return 0, nil, nil
	}

	totalLength := len(header) + 4 + contentLength
	return totalLength, data[:totalLength], nil
}
