#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 8
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 8
#define ALIAS_COUNT 0
#define TOKEN_COUNT 4
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 2
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_openapi_COLON = 1,
  anon_sym_3_DOT0_DOT0 = 2,
  anon_sym_info_COLON = 3,
  sym_source_file = 4,
  sym_version = 5,
  sym_info = 6,
  aux_sym_source_file_repeat1 = 7,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_openapi_COLON] = "openapi:",
  [anon_sym_3_DOT0_DOT0] = "3.0.0",
  [anon_sym_info_COLON] = "info:",
  [sym_source_file] = "source_file",
  [sym_version] = "version",
  [sym_info] = "info",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_openapi_COLON] = anon_sym_openapi_COLON,
  [anon_sym_3_DOT0_DOT0] = anon_sym_3_DOT0_DOT0,
  [anon_sym_info_COLON] = anon_sym_info_COLON,
  [sym_source_file] = sym_source_file,
  [sym_version] = sym_version,
  [sym_info] = sym_info,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_openapi_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_3_DOT0_DOT0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_info_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_version] = {
    .visible = true,
    .named = true,
  },
  [sym_info] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(16);
      if (lookahead == '3') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(11);
      if (lookahead == 'o') ADVANCE(14);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '.') ADVANCE(4);
      END_STATE();
    case 2:
      if (lookahead == '.') ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '0') ADVANCE(18);
      END_STATE();
    case 4:
      if (lookahead == '0') ADVANCE(2);
      END_STATE();
    case 5:
      if (lookahead == ':') ADVANCE(19);
      END_STATE();
    case 6:
      if (lookahead == ':') ADVANCE(17);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(15);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 9:
      if (lookahead == 'f') ADVANCE(13);
      END_STATE();
    case 10:
      if (lookahead == 'i') ADVANCE(6);
      END_STATE();
    case 11:
      if (lookahead == 'n') ADVANCE(9);
      END_STATE();
    case 12:
      if (lookahead == 'n') ADVANCE(7);
      END_STATE();
    case 13:
      if (lookahead == 'o') ADVANCE(5);
      END_STATE();
    case 14:
      if (lookahead == 'p') ADVANCE(8);
      END_STATE();
    case 15:
      if (lookahead == 'p') ADVANCE(10);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_openapi_COLON);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_3_DOT0_DOT0);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_info_COLON);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_openapi_COLON] = ACTIONS(1),
    [anon_sym_3_DOT0_DOT0] = ACTIONS(1),
    [anon_sym_info_COLON] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(7),
    [sym_version] = STATE(2),
    [sym_info] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_openapi_COLON] = ACTIONS(5),
    [anon_sym_info_COLON] = ACTIONS(7),
  },
  [2] = {
    [sym_version] = STATE(3),
    [sym_info] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(9),
    [anon_sym_openapi_COLON] = ACTIONS(5),
    [anon_sym_info_COLON] = ACTIONS(7),
  },
  [3] = {
    [sym_version] = STATE(3),
    [sym_info] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_openapi_COLON] = ACTIONS(13),
    [anon_sym_info_COLON] = ACTIONS(16),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(19), 3,
      ts_builtin_sym_end,
      anon_sym_openapi_COLON,
      anon_sym_info_COLON,
  [6] = 1,
    ACTIONS(21), 3,
      ts_builtin_sym_end,
      anon_sym_openapi_COLON,
      anon_sym_info_COLON,
  [12] = 1,
    ACTIONS(23), 1,
      anon_sym_3_DOT0_DOT0,
  [16] = 1,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 6,
  [SMALL_STATE(6)] = 12,
  [SMALL_STATE(7)] = 16,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_info, 1, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 2, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [25] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_openapi3(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
