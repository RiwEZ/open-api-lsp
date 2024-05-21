#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 22
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 19
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_versionLabel = 1,
  sym_versionValue = 2,
  sym_infoLabel = 3,
  anon_sym_title_COLON = 4,
  anon_sym_description_COLON = 5,
  anon_sym_version_COLON = 6,
  anon_sym_0_DOT1_DOT9 = 7,
  sym_any = 8,
  anon_sym_LF = 9,
  anon_sym_CR_LF = 10,
  sym_indent = 11,
  sym_dedent = 12,
  sym_err = 13,
  sym_source_file = 14,
  sym_version = 15,
  sym_info = 16,
  sym_infoValue = 17,
  sym__newline = 18,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_versionLabel] = "versionLabel",
  [sym_versionValue] = "versionValue",
  [sym_infoLabel] = "infoLabel",
  [anon_sym_title_COLON] = "title:",
  [anon_sym_description_COLON] = "description:",
  [anon_sym_version_COLON] = "version:",
  [anon_sym_0_DOT1_DOT9] = "0.1.9",
  [sym_any] = "any",
  [anon_sym_LF] = "\n",
  [anon_sym_CR_LF] = "\r\n",
  [sym_indent] = "indent",
  [sym_dedent] = "dedent",
  [sym_err] = "err",
  [sym_source_file] = "source_file",
  [sym_version] = "version",
  [sym_info] = "info",
  [sym_infoValue] = "infoValue",
  [sym__newline] = "_newline",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_versionLabel] = sym_versionLabel,
  [sym_versionValue] = sym_versionValue,
  [sym_infoLabel] = sym_infoLabel,
  [anon_sym_title_COLON] = anon_sym_title_COLON,
  [anon_sym_description_COLON] = anon_sym_description_COLON,
  [anon_sym_version_COLON] = anon_sym_version_COLON,
  [anon_sym_0_DOT1_DOT9] = anon_sym_0_DOT1_DOT9,
  [sym_any] = sym_any,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_CR_LF] = anon_sym_CR_LF,
  [sym_indent] = sym_indent,
  [sym_dedent] = sym_dedent,
  [sym_err] = sym_err,
  [sym_source_file] = sym_source_file,
  [sym_version] = sym_version,
  [sym_info] = sym_info,
  [sym_infoValue] = sym_infoValue,
  [sym__newline] = sym__newline,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_versionLabel] = {
    .visible = true,
    .named = true,
  },
  [sym_versionValue] = {
    .visible = true,
    .named = true,
  },
  [sym_infoLabel] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_title_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_description_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_version_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_0_DOT1_DOT9] = {
    .visible = true,
    .named = false,
  },
  [sym_any] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CR_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_indent] = {
    .visible = true,
    .named = true,
  },
  [sym_dedent] = {
    .visible = true,
    .named = true,
  },
  [sym_err] = {
    .visible = true,
    .named = true,
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
  [sym_infoValue] = {
    .visible = true,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
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
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(44);
      if (lookahead == '0') ADVANCE(2);
      if (lookahead == '3') ADVANCE(3);
      if (lookahead == 'd') ADVANCE(17);
      if (lookahead == 'i') ADVANCE(28);
      if (lookahead == 'o') ADVANCE(36);
      if (lookahead == 't') ADVANCE(22);
      if (lookahead == 'v') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(54);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(1);
      END_STATE();
    case 2:
      if (lookahead == '.') ADVANCE(8);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(7);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(9);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '0') ADVANCE(46);
      END_STATE();
    case 7:
      if (lookahead == '0') ADVANCE(5);
      END_STATE();
    case 8:
      if (lookahead == '1') ADVANCE(4);
      END_STATE();
    case 9:
      if (lookahead == '9') ADVANCE(51);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(47);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(48);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(45);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(50);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(49);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(39);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 21:
      if (lookahead == 'f') ADVANCE(32);
      END_STATE();
    case 22:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 24:
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 25:
      if (lookahead == 'i') ADVANCE(12);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(20);
      END_STATE();
    case 28:
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 29:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 30:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 31:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 32:
      if (lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 33:
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 34:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 35:
      if (lookahead == 'p') ADVANCE(43);
      END_STATE();
    case 36:
      if (lookahead == 'p') ADVANCE(19);
      END_STATE();
    case 37:
      if (lookahead == 'p') ADVANCE(25);
      END_STATE();
    case 38:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 39:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 40:
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 41:
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_versionLabel);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_versionValue);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_infoLabel);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_title_COLON);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_description_COLON);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_version_COLON);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_0_DOT1_DOT9);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_any);
      if (lookahead == '\n') ADVANCE(52);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(52);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_any);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(54);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0, .external_lex_state = 2},
  [12] = {.lex_state = 52},
  [13] = {.lex_state = 0, .external_lex_state = 3},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 52},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0, .external_lex_state = 3},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_versionLabel] = ACTIONS(1),
    [sym_versionValue] = ACTIONS(1),
    [sym_infoLabel] = ACTIONS(1),
    [anon_sym_title_COLON] = ACTIONS(1),
    [anon_sym_description_COLON] = ACTIONS(1),
    [anon_sym_version_COLON] = ACTIONS(1),
    [anon_sym_0_DOT1_DOT9] = ACTIONS(1),
    [sym_indent] = ACTIONS(1),
    [sym_dedent] = ACTIONS(1),
    [sym_err] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(20),
    [sym_version] = STATE(8),
    [sym_versionLabel] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    STATE(21), 1,
      sym__newline,
    ACTIONS(5), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [8] = 2,
    STATE(18), 1,
      sym__newline,
    ACTIONS(7), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [16] = 2,
    STATE(16), 1,
      sym__newline,
    ACTIONS(9), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [24] = 2,
    STATE(10), 1,
      sym__newline,
    ACTIONS(11), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [32] = 2,
    STATE(11), 1,
      sym__newline,
    ACTIONS(13), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [40] = 2,
    ACTIONS(15), 1,
      anon_sym_title_COLON,
    STATE(13), 1,
      sym_infoValue,
  [47] = 2,
    ACTIONS(17), 1,
      sym_infoLabel,
    STATE(9), 1,
      sym_info,
  [54] = 1,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
  [58] = 1,
    ACTIONS(21), 1,
      sym_infoLabel,
  [62] = 1,
    ACTIONS(23), 1,
      sym_indent,
  [66] = 1,
    ACTIONS(25), 1,
      sym_any,
  [70] = 1,
    ACTIONS(27), 1,
      sym_dedent,
  [74] = 1,
    ACTIONS(29), 1,
      sym_versionValue,
  [78] = 1,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
  [82] = 1,
    ACTIONS(33), 1,
      anon_sym_description_COLON,
  [86] = 1,
    ACTIONS(35), 1,
      sym_any,
  [90] = 1,
    ACTIONS(37), 1,
      anon_sym_version_COLON,
  [94] = 1,
    ACTIONS(39), 1,
      anon_sym_0_DOT1_DOT9,
  [98] = 1,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
  [102] = 1,
    ACTIONS(43), 1,
      sym_dedent,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 8,
  [SMALL_STATE(4)] = 16,
  [SMALL_STATE(5)] = 24,
  [SMALL_STATE(6)] = 32,
  [SMALL_STATE(7)] = 40,
  [SMALL_STATE(8)] = 47,
  [SMALL_STATE(9)] = 54,
  [SMALL_STATE(10)] = 58,
  [SMALL_STATE(11)] = 62,
  [SMALL_STATE(12)] = 66,
  [SMALL_STATE(13)] = 70,
  [SMALL_STATE(14)] = 74,
  [SMALL_STATE(15)] = 78,
  [SMALL_STATE(16)] = 82,
  [SMALL_STATE(17)] = 86,
  [SMALL_STATE(18)] = 90,
  [SMALL_STATE(19)] = 94,
  [SMALL_STATE(20)] = 98,
  [SMALL_STATE(21)] = 102,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 3, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_info, 5, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [41] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_infoValue, 9, 0, 0),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_indent = 0,
  ts_external_token_dedent = 1,
  ts_external_token_err = 2,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_indent] = sym_indent,
  [ts_external_token_dedent] = sym_dedent,
  [ts_external_token_err] = sym_err,
};

static const bool ts_external_scanner_states[4][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_indent] = true,
    [ts_external_token_dedent] = true,
    [ts_external_token_err] = true,
  },
  [2] = {
    [ts_external_token_indent] = true,
  },
  [3] = {
    [ts_external_token_dedent] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_openapi3_external_scanner_create(void);
void tree_sitter_openapi3_external_scanner_destroy(void *);
bool tree_sitter_openapi3_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_openapi3_external_scanner_serialize(void *, char *);
void tree_sitter_openapi3_external_scanner_deserialize(void *, const char *, unsigned);

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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_openapi3_external_scanner_create,
      tree_sitter_openapi3_external_scanner_destroy,
      tree_sitter_openapi3_external_scanner_scan,
      tree_sitter_openapi3_external_scanner_serialize,
      tree_sitter_openapi3_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
