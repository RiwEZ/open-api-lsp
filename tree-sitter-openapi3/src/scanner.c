#include "tree_sitter/parser.h"
#include "tree_sitter/alloc.h"
#include "tree_sitter/array.h"

enum TokenType {
    INDENT,
    DEDENT,
    ERR
};

void *tree_sitter_openapi3_external_scanner_create(void) {
    /*
    void *payload = ts_calloc(1, sizeof(Array(uint32_t)));
    Array(uint32_t) *stack = payload;

    // the fuck, is this initialized? ??
    array_init(stack);
    array_push(stack, 0);
    */

    return ts_calloc(1, sizeof(Array(uint32_t)));
}

void tree_sitter_openapi3_external_scanner_destroy(void *payload) {
    // tree sitter already handled this ? or should we do it?
    ts_free(payload);
}

unsigned tree_sitter_openapi3_external_scanner_serialize(
    void *payload,
    char *buffer
) {
    Array(uint32_t) *stack = payload;
    for (uint32_t j = 0; j < stack->size; j++) {
        uint32_t *value = array_get(stack, j);
        memcpy(buffer + j * sizeof(uint32_t), value, sizeof(uint32_t));
    }
    return stack->size * sizeof(uint32_t);
}

void tree_sitter_openapi3_external_scanner_deserialize(
    void *payload,
    const char *buffer,
    unsigned length
) {
    Array(uint32_t) *stack = payload;

    array_clear(stack);
    array_init(stack);

    /*
    if (length % sizeof(uint32_t) != 0 ) {
        // this should not happend
        return;
    }
    */

    uint32_t stack_length = length / sizeof(uint32_t);

    for (uint32_t j = 0; j < stack_length; j++) {
        uint32_t value;
        memcpy(&value, buffer + j * sizeof(uint32_t), sizeof(uint32_t));
        array_push(stack, value);
    }

    return;
}

bool tree_sitter_openapi3_external_scanner_scan(
    void *payload,
    TSLexer *lexer,
    const bool *valid_symbols
) {
    if (lexer->eof(lexer)) {
        return false;
    }

    if (valid_symbols[INDENT] || valid_symbols[DEDENT]) {
        // skipping the space, and we use lexer->get_column later
        // this also may make uneven tab work, fuck
        while (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
             lexer->advance(lexer, true);
        }

        // generating INDENT and DEDENT
        Array(uint32_t) *stack = payload;

        uint32_t curr_indent = lexer->get_column(lexer);
        uint32_t last_indent = stack->size > 0 ? *array_back(stack) : 0; // this is weird too

        if (curr_indent > last_indent && valid_symbols[INDENT] && !valid_symbols[ERR]) {
            // if not valid, we don't increase the indent level on the stack ?
            array_push(stack, curr_indent);
            lexer->mark_end(lexer);
            lexer->result_symbol = INDENT;
            return true;
        }

        if (curr_indent < last_indent && valid_symbols[DEDENT] && !valid_symbols[ERR]) {
            array_pop(stack); // maybe need to handle the case when there's nothing left
            lexer->mark_end(lexer);
            lexer->result_symbol = DEDENT;
            return true;
        }

    }

    return false;
}
