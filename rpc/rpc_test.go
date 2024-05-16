package rpc_test

import (
	"testing"

	"github.com/RiwEz/open-api-lsp/rpc"
)

type EncodingExample struct {
	Testing bool
}

func TestEncode(t *testing.T) {
	expected := "Content-Length: 16\r\n\r\n{\"Testing\":true}"
	actual := rpc.EncodeMsg(EncodingExample{Testing: true})

	if expected != actual {
		t.Fatalf("Expected: %s, Actual: %s", expected, actual)
	}
}

func TestDecode(t *testing.T) {
	msg := "Content-Length: 15\r\n\r\n{\"method\":\"hi\"}"
  method, content, err := rpc.DecodeMsg([]byte(msg))
  contentLength := len(content)

  if err != nil {
    t.Fatal(err)
  }

  if contentLength != 15 {
    t.Fatalf("Expected: 15, Actual: %d", contentLength)
  }

  if method != "hi" {
    t.Fatalf("Expected: hi, Actual: %s", msg)
  } 
}
