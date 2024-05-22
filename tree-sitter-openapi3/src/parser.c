#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 67
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 43
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_openapiFieldName = 1,
  sym_infoFieldName = 2,
  sym_titleFieldName = 3,
  sym_versionFieldName = 4,
  anon_sym_description_COLON = 5,
  sym_pathsFieldName = 6,
  sym_pathFieldPattern = 7,
  anon_sym_get_COLON = 8,
  anon_sym_responses_COLON = 9,
  anon_sym_components_COLON = 10,
  anon_sym_schemas_COLON = 11,
  sym_value = 12,
  sym_key = 13,
  anon_sym_LF = 14,
  anon_sym_CR_LF = 15,
  sym_indent = 16,
  sym_dedent = 17,
  sym_err = 18,
  sym_source_file = 19,
  sym_openAPIObject = 20,
  sym_openapi = 21,
  sym_info = 22,
  sym_infoObject = 23,
  sym_title = 24,
  sym_version = 25,
  sym_description = 26,
  sym_paths = 27,
  sym_pathsObject = 28,
  sym_pathItemObject = 29,
  sym_operationObject = 30,
  sym_components = 31,
  sym_componentsObject = 32,
  sym_schemas = 33,
  sym_schemaObject = 34,
  sym__newline = 35,
  aux_sym_openAPIObject_repeat1 = 36,
  aux_sym_infoObject_repeat1 = 37,
  aux_sym_pathsObject_repeat1 = 38,
  aux_sym_pathItemObject_repeat1 = 39,
  aux_sym_operationObject_repeat1 = 40,
  aux_sym_componentsObject_repeat1 = 41,
  aux_sym_schemaObject_repeat1 = 42,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_openapiFieldName] = "openapiFieldName",
  [sym_infoFieldName] = "infoFieldName",
  [sym_titleFieldName] = "titleFieldName",
  [sym_versionFieldName] = "versionFieldName",
  [anon_sym_description_COLON] = "description:",
  [sym_pathsFieldName] = "pathsFieldName",
  [sym_pathFieldPattern] = "pathFieldPattern",
  [anon_sym_get_COLON] = "get:",
  [anon_sym_responses_COLON] = "responses:",
  [anon_sym_components_COLON] = "components:",
  [anon_sym_schemas_COLON] = "schemas:",
  [sym_value] = "value",
  [sym_key] = "key",
  [anon_sym_LF] = "\n",
  [anon_sym_CR_LF] = "\r\n",
  [sym_indent] = "indent",
  [sym_dedent] = "dedent",
  [sym_err] = "err",
  [sym_source_file] = "source_file",
  [sym_openAPIObject] = "openAPIObject",
  [sym_openapi] = "openapi",
  [sym_info] = "info",
  [sym_infoObject] = "infoObject",
  [sym_title] = "title",
  [sym_version] = "version",
  [sym_description] = "description",
  [sym_paths] = "paths",
  [sym_pathsObject] = "pathsObject",
  [sym_pathItemObject] = "pathItemObject",
  [sym_operationObject] = "operationObject",
  [sym_components] = "components",
  [sym_componentsObject] = "componentsObject",
  [sym_schemas] = "schemas",
  [sym_schemaObject] = "schemaObject",
  [sym__newline] = "_newline",
  [aux_sym_openAPIObject_repeat1] = "openAPIObject_repeat1",
  [aux_sym_infoObject_repeat1] = "infoObject_repeat1",
  [aux_sym_pathsObject_repeat1] = "pathsObject_repeat1",
  [aux_sym_pathItemObject_repeat1] = "pathItemObject_repeat1",
  [aux_sym_operationObject_repeat1] = "operationObject_repeat1",
  [aux_sym_componentsObject_repeat1] = "componentsObject_repeat1",
  [aux_sym_schemaObject_repeat1] = "schemaObject_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_openapiFieldName] = sym_openapiFieldName,
  [sym_infoFieldName] = sym_infoFieldName,
  [sym_titleFieldName] = sym_titleFieldName,
  [sym_versionFieldName] = sym_versionFieldName,
  [anon_sym_description_COLON] = anon_sym_description_COLON,
  [sym_pathsFieldName] = sym_pathsFieldName,
  [sym_pathFieldPattern] = sym_pathFieldPattern,
  [anon_sym_get_COLON] = anon_sym_get_COLON,
  [anon_sym_responses_COLON] = anon_sym_responses_COLON,
  [anon_sym_components_COLON] = anon_sym_components_COLON,
  [anon_sym_schemas_COLON] = anon_sym_schemas_COLON,
  [sym_value] = sym_value,
  [sym_key] = sym_key,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_CR_LF] = anon_sym_CR_LF,
  [sym_indent] = sym_indent,
  [sym_dedent] = sym_dedent,
  [sym_err] = sym_err,
  [sym_source_file] = sym_source_file,
  [sym_openAPIObject] = sym_openAPIObject,
  [sym_openapi] = sym_openapi,
  [sym_info] = sym_info,
  [sym_infoObject] = sym_infoObject,
  [sym_title] = sym_title,
  [sym_version] = sym_version,
  [sym_description] = sym_description,
  [sym_paths] = sym_paths,
  [sym_pathsObject] = sym_pathsObject,
  [sym_pathItemObject] = sym_pathItemObject,
  [sym_operationObject] = sym_operationObject,
  [sym_components] = sym_components,
  [sym_componentsObject] = sym_componentsObject,
  [sym_schemas] = sym_schemas,
  [sym_schemaObject] = sym_schemaObject,
  [sym__newline] = sym__newline,
  [aux_sym_openAPIObject_repeat1] = aux_sym_openAPIObject_repeat1,
  [aux_sym_infoObject_repeat1] = aux_sym_infoObject_repeat1,
  [aux_sym_pathsObject_repeat1] = aux_sym_pathsObject_repeat1,
  [aux_sym_pathItemObject_repeat1] = aux_sym_pathItemObject_repeat1,
  [aux_sym_operationObject_repeat1] = aux_sym_operationObject_repeat1,
  [aux_sym_componentsObject_repeat1] = aux_sym_componentsObject_repeat1,
  [aux_sym_schemaObject_repeat1] = aux_sym_schemaObject_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_openapiFieldName] = {
    .visible = true,
    .named = true,
  },
  [sym_infoFieldName] = {
    .visible = true,
    .named = true,
  },
  [sym_titleFieldName] = {
    .visible = true,
    .named = true,
  },
  [sym_versionFieldName] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_description_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_pathsFieldName] = {
    .visible = true,
    .named = true,
  },
  [sym_pathFieldPattern] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_get_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_responses_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_components_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_schemas_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_key] = {
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
  [sym_openAPIObject] = {
    .visible = true,
    .named = true,
  },
  [sym_openapi] = {
    .visible = true,
    .named = true,
  },
  [sym_info] = {
    .visible = true,
    .named = true,
  },
  [sym_infoObject] = {
    .visible = true,
    .named = true,
  },
  [sym_title] = {
    .visible = true,
    .named = true,
  },
  [sym_version] = {
    .visible = true,
    .named = true,
  },
  [sym_description] = {
    .visible = true,
    .named = true,
  },
  [sym_paths] = {
    .visible = true,
    .named = true,
  },
  [sym_pathsObject] = {
    .visible = true,
    .named = true,
  },
  [sym_pathItemObject] = {
    .visible = true,
    .named = true,
  },
  [sym_operationObject] = {
    .visible = true,
    .named = true,
  },
  [sym_components] = {
    .visible = true,
    .named = true,
  },
  [sym_componentsObject] = {
    .visible = true,
    .named = true,
  },
  [sym_schemas] = {
    .visible = true,
    .named = true,
  },
  [sym_schemaObject] = {
    .visible = true,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_openAPIObject_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_infoObject_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pathsObject_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pathItemObject_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_operationObject_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_componentsObject_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_schemaObject_repeat1] = {
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
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(143);
      ADVANCE_MAP(
        '/', 141,
        'c', 34,
        'd', 7,
        'g', 8,
        'i', 27,
        'o', 41,
        'p', 2,
        'r', 12,
        's', 5,
        't', 19,
        'v', 9,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(158);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(1);
      END_STATE();
    case 2:
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 'a') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 3:
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 'a') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 4:
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 'a') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 5:
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 'c') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 6:
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 'c') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 'e') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 8:
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 'e') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 'e') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 'e') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 'e') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 'e') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 'e') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 'e') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 'e') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 'f') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 'h') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 'h') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 'i') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 'i') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 'i') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 'i') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 'i') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 'l') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 'm') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 'm') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 'n') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 'n') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 'n') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 'n') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 'n') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 'n') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 33:
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 'n') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 'o') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 35:
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 'o') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 36:
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 'o') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 37:
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 'o') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 38:
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 'o') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 39:
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 'o') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 40:
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 'p') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 'p') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 42:
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 'p') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 43:
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 'p') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 44:
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 'p') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 45:
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 'r') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 46:
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 'r') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 47:
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 's') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 48:
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 's') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 49:
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 's') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 50:
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 's') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 51:
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 's') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 52:
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 's') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 53:
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 's') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 54:
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 's') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 55:
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 't') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 56:
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 't') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 57:
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 't') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 58:
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 't') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 59:
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == 't') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 60:
      if (lookahead == ':') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 61:
      if (lookahead == ':') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 62:
      if (lookahead == ':') ADVANCE(151);
      END_STATE();
    case 63:
      if (lookahead == ':') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 64:
      if (lookahead == ':') ADVANCE(145);
      END_STATE();
    case 65:
      if (lookahead == ':') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 66:
      if (lookahead == ':') ADVANCE(149);
      END_STATE();
    case 67:
      if (lookahead == ':') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 68:
      if (lookahead == ':') ADVANCE(146);
      END_STATE();
    case 69:
      if (lookahead == ':') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 70:
      if (lookahead == ':') ADVANCE(144);
      END_STATE();
    case 71:
      if (lookahead == ':') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 72:
      if (lookahead == ':') ADVANCE(154);
      END_STATE();
    case 73:
      if (lookahead == ':') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 74:
      if (lookahead == ':') ADVANCE(147);
      END_STATE();
    case 75:
      if (lookahead == ':') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 76:
      if (lookahead == ':') ADVANCE(152);
      END_STATE();
    case 77:
      if (lookahead == ':') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 78:
      if (lookahead == ':') ADVANCE(153);
      END_STATE();
    case 79:
      if (lookahead == ':') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 80:
      if (lookahead == ':') ADVANCE(148);
      END_STATE();
    case 81:
      if (lookahead == ':') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 82:
      if (lookahead == 'a') ADVANCE(137);
      END_STATE();
    case 83:
      if (lookahead == 'a') ADVANCE(122);
      END_STATE();
    case 84:
      if (lookahead == 'a') ADVANCE(130);
      END_STATE();
    case 85:
      if (lookahead == 'c') ADVANCE(98);
      END_STATE();
    case 86:
      if (lookahead == 'c') ADVANCE(125);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 96:
      if (lookahead == 'f') ADVANCE(115);
      END_STATE();
    case 97:
      if (lookahead == 'h') ADVANCE(129);
      END_STATE();
    case 98:
      if (lookahead == 'h') ADVANCE(91);
      END_STATE();
    case 99:
      if (lookahead == 'i') ADVANCE(136);
      END_STATE();
    case 100:
      if (lookahead == 'i') ADVANCE(123);
      END_STATE();
    case 101:
      if (lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 102:
      if (lookahead == 'i') ADVANCE(118);
      END_STATE();
    case 103:
      if (lookahead == 'i') ADVANCE(119);
      END_STATE();
    case 104:
      if (lookahead == 'l') ADVANCE(93);
      END_STATE();
    case 105:
      if (lookahead == 'm') ADVANCE(120);
      END_STATE();
    case 106:
      if (lookahead == 'm') ADVANCE(84);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 109:
      if (lookahead == 'n') ADVANCE(133);
      END_STATE();
    case 110:
      if (lookahead == 'n') ADVANCE(138);
      END_STATE();
    case 111:
      if (lookahead == 'n') ADVANCE(94);
      END_STATE();
    case 112:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 113:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 114:
      if (lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 115:
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 116:
      if (lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 117:
      if (lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 118:
      if (lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 119:
      if (lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 120:
      if (lookahead == 'p') ADVANCE(116);
      END_STATE();
    case 121:
      if (lookahead == 'p') ADVANCE(90);
      END_STATE();
    case 122:
      if (lookahead == 'p') ADVANCE(101);
      END_STATE();
    case 123:
      if (lookahead == 'p') ADVANCE(139);
      END_STATE();
    case 124:
      if (lookahead == 'p') ADVANCE(117);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 127:
      if (lookahead == 's') ADVANCE(86);
      END_STATE();
    case 128:
      if (lookahead == 's') ADVANCE(102);
      END_STATE();
    case 129:
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 130:
      if (lookahead == 's') ADVANCE(72);
      END_STATE();
    case 131:
      if (lookahead == 's') ADVANCE(76);
      END_STATE();
    case 132:
      if (lookahead == 's') ADVANCE(78);
      END_STATE();
    case 133:
      if (lookahead == 's') ADVANCE(95);
      END_STATE();
    case 134:
      if (lookahead == 's') ADVANCE(124);
      END_STATE();
    case 135:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 136:
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 137:
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 138:
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 140:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 141:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 142:
      if (eof) ADVANCE(143);
      ADVANCE_MAP(
        '/', 141,
        'c', 114,
        'd', 87,
        'g', 88,
        'i', 107,
        'o', 121,
        'p', 82,
        'r', 92,
        's', 85,
        't', 99,
        'v', 89,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_openapiFieldName);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_infoFieldName);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_titleFieldName);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_versionFieldName);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_description_COLON);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_pathsFieldName);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_pathFieldPattern);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_get_COLON);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_responses_COLON);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_components_COLON);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_schemas_COLON);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == '\n') ADVANCE(155);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(155);
      if (lookahead != 0) ADVANCE(156);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_value);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(156);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_key);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(158);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 142},
  [2] = {.lex_state = 142},
  [3] = {.lex_state = 142},
  [4] = {.lex_state = 142},
  [5] = {.lex_state = 142, .external_lex_state = 2},
  [6] = {.lex_state = 142, .external_lex_state = 2},
  [7] = {.lex_state = 142},
  [8] = {.lex_state = 142},
  [9] = {.lex_state = 142},
  [10] = {.lex_state = 142},
  [11] = {.lex_state = 142},
  [12] = {.lex_state = 142, .external_lex_state = 2},
  [13] = {.lex_state = 142, .external_lex_state = 2},
  [14] = {.lex_state = 142, .external_lex_state = 2},
  [15] = {.lex_state = 142, .external_lex_state = 2},
  [16] = {.lex_state = 142, .external_lex_state = 2},
  [17] = {.lex_state = 142, .external_lex_state = 2},
  [18] = {.lex_state = 142, .external_lex_state = 2},
  [19] = {.lex_state = 0, .external_lex_state = 2},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 142, .external_lex_state = 2},
  [23] = {.lex_state = 142, .external_lex_state = 2},
  [24] = {.lex_state = 142},
  [25] = {.lex_state = 140, .external_lex_state = 2},
  [26] = {.lex_state = 0, .external_lex_state = 2},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 142, .external_lex_state = 2},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 140, .external_lex_state = 2},
  [39] = {.lex_state = 142},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 140},
  [42] = {.lex_state = 0, .external_lex_state = 2},
  [43] = {.lex_state = 142, .external_lex_state = 2},
  [44] = {.lex_state = 140, .external_lex_state = 2},
  [45] = {.lex_state = 142, .external_lex_state = 2},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0, .external_lex_state = 3},
  [48] = {.lex_state = 155},
  [49] = {.lex_state = 0, .external_lex_state = 3},
  [50] = {.lex_state = 155},
  [51] = {.lex_state = 0, .external_lex_state = 2},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0, .external_lex_state = 2},
  [54] = {.lex_state = 155},
  [55] = {.lex_state = 0, .external_lex_state = 2},
  [56] = {.lex_state = 0, .external_lex_state = 3},
  [57] = {.lex_state = 0, .external_lex_state = 2},
  [58] = {.lex_state = 0, .external_lex_state = 3},
  [59] = {.lex_state = 155},
  [60] = {.lex_state = 0, .external_lex_state = 2},
  [61] = {.lex_state = 0, .external_lex_state = 3},
  [62] = {.lex_state = 140},
  [63] = {.lex_state = 155},
  [64] = {.lex_state = 155},
  [65] = {.lex_state = 0, .external_lex_state = 2},
  [66] = {.lex_state = 0, .external_lex_state = 3},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_openapiFieldName] = ACTIONS(1),
    [sym_infoFieldName] = ACTIONS(1),
    [sym_titleFieldName] = ACTIONS(1),
    [sym_versionFieldName] = ACTIONS(1),
    [anon_sym_description_COLON] = ACTIONS(1),
    [sym_pathsFieldName] = ACTIONS(1),
    [sym_pathFieldPattern] = ACTIONS(1),
    [anon_sym_get_COLON] = ACTIONS(1),
    [anon_sym_responses_COLON] = ACTIONS(1),
    [anon_sym_components_COLON] = ACTIONS(1),
    [anon_sym_schemas_COLON] = ACTIONS(1),
    [sym_key] = ACTIONS(1),
    [sym_indent] = ACTIONS(1),
    [sym_dedent] = ACTIONS(1),
    [sym_err] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(46),
    [sym_openAPIObject] = STATE(52),
    [sym_openapi] = STATE(2),
    [sym_info] = STATE(2),
    [sym_paths] = STATE(2),
    [sym_components] = STATE(2),
    [aux_sym_openAPIObject_repeat1] = STATE(2),
    [sym_openapiFieldName] = ACTIONS(3),
    [sym_infoFieldName] = ACTIONS(5),
    [sym_pathsFieldName] = ACTIONS(7),
    [anon_sym_components_COLON] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(3), 1,
      sym_openapiFieldName,
    ACTIONS(5), 1,
      sym_infoFieldName,
    ACTIONS(7), 1,
      sym_pathsFieldName,
    ACTIONS(9), 1,
      anon_sym_components_COLON,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    STATE(3), 5,
      sym_openapi,
      sym_info,
      sym_paths,
      sym_components,
      aux_sym_openAPIObject_repeat1,
  [23] = 6,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      sym_openapiFieldName,
    ACTIONS(18), 1,
      sym_infoFieldName,
    ACTIONS(21), 1,
      sym_pathsFieldName,
    ACTIONS(24), 1,
      anon_sym_components_COLON,
    STATE(3), 5,
      sym_openapi,
      sym_info,
      sym_paths,
      sym_components,
      aux_sym_openAPIObject_repeat1,
  [46] = 5,
    ACTIONS(27), 1,
      sym_titleFieldName,
    ACTIONS(29), 1,
      sym_versionFieldName,
    ACTIONS(31), 1,
      anon_sym_description_COLON,
    STATE(60), 1,
      sym_infoObject,
    STATE(6), 4,
      sym_title,
      sym_version,
      sym_description,
      aux_sym_infoObject_repeat1,
  [65] = 5,
    ACTIONS(33), 1,
      sym_titleFieldName,
    ACTIONS(36), 1,
      sym_versionFieldName,
    ACTIONS(39), 1,
      anon_sym_description_COLON,
    ACTIONS(42), 1,
      sym_dedent,
    STATE(5), 4,
      sym_title,
      sym_version,
      sym_description,
      aux_sym_infoObject_repeat1,
  [84] = 5,
    ACTIONS(27), 1,
      sym_titleFieldName,
    ACTIONS(29), 1,
      sym_versionFieldName,
    ACTIONS(31), 1,
      anon_sym_description_COLON,
    ACTIONS(44), 1,
      sym_dedent,
    STATE(5), 4,
      sym_title,
      sym_version,
      sym_description,
      aux_sym_infoObject_repeat1,
  [103] = 1,
    ACTIONS(46), 5,
      ts_builtin_sym_end,
      sym_openapiFieldName,
      sym_infoFieldName,
      sym_pathsFieldName,
      anon_sym_components_COLON,
  [111] = 1,
    ACTIONS(48), 5,
      ts_builtin_sym_end,
      sym_openapiFieldName,
      sym_infoFieldName,
      sym_pathsFieldName,
      anon_sym_components_COLON,
  [119] = 1,
    ACTIONS(50), 5,
      ts_builtin_sym_end,
      sym_openapiFieldName,
      sym_infoFieldName,
      sym_pathsFieldName,
      anon_sym_components_COLON,
  [127] = 1,
    ACTIONS(52), 5,
      ts_builtin_sym_end,
      sym_openapiFieldName,
      sym_infoFieldName,
      sym_pathsFieldName,
      anon_sym_components_COLON,
  [135] = 3,
    ACTIONS(54), 1,
      anon_sym_schemas_COLON,
    STATE(55), 1,
      sym_componentsObject,
    STATE(12), 2,
      sym_schemas,
      aux_sym_componentsObject_repeat1,
  [146] = 3,
    ACTIONS(54), 1,
      anon_sym_schemas_COLON,
    ACTIONS(56), 1,
      sym_dedent,
    STATE(17), 2,
      sym_schemas,
      aux_sym_componentsObject_repeat1,
  [157] = 3,
    ACTIONS(60), 1,
      anon_sym_get_COLON,
    STATE(13), 1,
      aux_sym_pathItemObject_repeat1,
    ACTIONS(58), 2,
      sym_dedent,
      sym_pathFieldPattern,
  [168] = 1,
    ACTIONS(63), 4,
      sym_dedent,
      sym_titleFieldName,
      sym_versionFieldName,
      anon_sym_description_COLON,
  [175] = 1,
    ACTIONS(65), 4,
      sym_dedent,
      sym_titleFieldName,
      sym_versionFieldName,
      anon_sym_description_COLON,
  [182] = 1,
    ACTIONS(67), 4,
      sym_dedent,
      sym_titleFieldName,
      sym_versionFieldName,
      anon_sym_description_COLON,
  [189] = 3,
    ACTIONS(69), 1,
      anon_sym_schemas_COLON,
    ACTIONS(72), 1,
      sym_dedent,
    STATE(17), 2,
      sym_schemas,
      aux_sym_componentsObject_repeat1,
  [200] = 3,
    ACTIONS(76), 1,
      anon_sym_get_COLON,
    STATE(13), 1,
      aux_sym_pathItemObject_repeat1,
    ACTIONS(74), 2,
      sym_dedent,
      sym_pathFieldPattern,
  [211] = 3,
    ACTIONS(78), 1,
      sym_pathFieldPattern,
    ACTIONS(81), 1,
      sym_dedent,
    STATE(19), 1,
      aux_sym_pathsObject_repeat1,
  [221] = 3,
    ACTIONS(83), 1,
      sym_pathFieldPattern,
    STATE(26), 1,
      aux_sym_pathsObject_repeat1,
    STATE(57), 1,
      sym_pathsObject,
  [231] = 2,
    STATE(65), 1,
      sym__newline,
    ACTIONS(85), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [239] = 3,
    ACTIONS(87), 1,
      anon_sym_responses_COLON,
    ACTIONS(90), 1,
      sym_dedent,
    STATE(22), 1,
      aux_sym_operationObject_repeat1,
  [249] = 1,
    ACTIONS(92), 3,
      sym_dedent,
      sym_pathFieldPattern,
      anon_sym_get_COLON,
  [255] = 3,
    ACTIONS(76), 1,
      anon_sym_get_COLON,
    STATE(18), 1,
      aux_sym_pathItemObject_repeat1,
    STATE(42), 1,
      sym_pathItemObject,
  [265] = 3,
    ACTIONS(94), 1,
      sym_key,
    ACTIONS(97), 1,
      sym_dedent,
    STATE(25), 1,
      aux_sym_schemaObject_repeat1,
  [275] = 3,
    ACTIONS(83), 1,
      sym_pathFieldPattern,
    ACTIONS(99), 1,
      sym_dedent,
    STATE(19), 1,
      aux_sym_pathsObject_repeat1,
  [285] = 2,
    STATE(49), 1,
      sym__newline,
    ACTIONS(101), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [293] = 2,
    STATE(44), 1,
      sym__newline,
    ACTIONS(103), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [301] = 2,
    STATE(16), 1,
      sym__newline,
    ACTIONS(105), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [309] = 2,
    STATE(15), 1,
      sym__newline,
    ACTIONS(107), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [317] = 2,
    STATE(14), 1,
      sym__newline,
    ACTIONS(109), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [325] = 3,
    ACTIONS(111), 1,
      anon_sym_responses_COLON,
    ACTIONS(113), 1,
      sym_dedent,
    STATE(22), 1,
      aux_sym_operationObject_repeat1,
  [335] = 2,
    STATE(56), 1,
      sym__newline,
    ACTIONS(115), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [343] = 2,
    STATE(61), 1,
      sym__newline,
    ACTIONS(117), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [351] = 2,
    STATE(58), 1,
      sym__newline,
    ACTIONS(119), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [359] = 2,
    STATE(10), 1,
      sym__newline,
    ACTIONS(121), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [367] = 2,
    STATE(66), 1,
      sym__newline,
    ACTIONS(123), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [375] = 3,
    ACTIONS(125), 1,
      sym_key,
    ACTIONS(127), 1,
      sym_dedent,
    STATE(25), 1,
      aux_sym_schemaObject_repeat1,
  [385] = 3,
    ACTIONS(111), 1,
      anon_sym_responses_COLON,
    STATE(32), 1,
      aux_sym_operationObject_repeat1,
    STATE(53), 1,
      sym_operationObject,
  [395] = 2,
    STATE(47), 1,
      sym__newline,
    ACTIONS(129), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [403] = 3,
    ACTIONS(125), 1,
      sym_key,
    STATE(38), 1,
      aux_sym_schemaObject_repeat1,
    STATE(51), 1,
      sym_schemaObject,
  [413] = 1,
    ACTIONS(81), 2,
      sym_dedent,
      sym_pathFieldPattern,
  [418] = 1,
    ACTIONS(131), 2,
      sym_dedent,
      anon_sym_responses_COLON,
  [423] = 1,
    ACTIONS(133), 2,
      sym_dedent,
      sym_key,
  [428] = 1,
    ACTIONS(135), 2,
      sym_dedent,
      anon_sym_schemas_COLON,
  [433] = 1,
    ACTIONS(137), 1,
      ts_builtin_sym_end,
  [437] = 1,
    ACTIONS(139), 1,
      sym_indent,
  [441] = 1,
    ACTIONS(141), 1,
      sym_value,
  [445] = 1,
    ACTIONS(143), 1,
      sym_indent,
  [449] = 1,
    ACTIONS(145), 1,
      sym_value,
  [453] = 1,
    ACTIONS(147), 1,
      sym_dedent,
  [457] = 1,
    ACTIONS(149), 1,
      ts_builtin_sym_end,
  [461] = 1,
    ACTIONS(151), 1,
      sym_dedent,
  [465] = 1,
    ACTIONS(153), 1,
      sym_value,
  [469] = 1,
    ACTIONS(155), 1,
      sym_dedent,
  [473] = 1,
    ACTIONS(157), 1,
      sym_indent,
  [477] = 1,
    ACTIONS(159), 1,
      sym_dedent,
  [481] = 1,
    ACTIONS(161), 1,
      sym_indent,
  [485] = 1,
    ACTIONS(163), 1,
      sym_value,
  [489] = 1,
    ACTIONS(165), 1,
      sym_dedent,
  [493] = 1,
    ACTIONS(167), 1,
      sym_indent,
  [497] = 1,
    ACTIONS(169), 1,
      sym_key,
  [501] = 1,
    ACTIONS(171), 1,
      sym_value,
  [505] = 1,
    ACTIONS(173), 1,
      sym_value,
  [509] = 1,
    ACTIONS(175), 1,
      sym_dedent,
  [513] = 1,
    ACTIONS(177), 1,
      sym_indent,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 23,
  [SMALL_STATE(4)] = 46,
  [SMALL_STATE(5)] = 65,
  [SMALL_STATE(6)] = 84,
  [SMALL_STATE(7)] = 103,
  [SMALL_STATE(8)] = 111,
  [SMALL_STATE(9)] = 119,
  [SMALL_STATE(10)] = 127,
  [SMALL_STATE(11)] = 135,
  [SMALL_STATE(12)] = 146,
  [SMALL_STATE(13)] = 157,
  [SMALL_STATE(14)] = 168,
  [SMALL_STATE(15)] = 175,
  [SMALL_STATE(16)] = 182,
  [SMALL_STATE(17)] = 189,
  [SMALL_STATE(18)] = 200,
  [SMALL_STATE(19)] = 211,
  [SMALL_STATE(20)] = 221,
  [SMALL_STATE(21)] = 231,
  [SMALL_STATE(22)] = 239,
  [SMALL_STATE(23)] = 249,
  [SMALL_STATE(24)] = 255,
  [SMALL_STATE(25)] = 265,
  [SMALL_STATE(26)] = 275,
  [SMALL_STATE(27)] = 285,
  [SMALL_STATE(28)] = 293,
  [SMALL_STATE(29)] = 301,
  [SMALL_STATE(30)] = 309,
  [SMALL_STATE(31)] = 317,
  [SMALL_STATE(32)] = 325,
  [SMALL_STATE(33)] = 335,
  [SMALL_STATE(34)] = 343,
  [SMALL_STATE(35)] = 351,
  [SMALL_STATE(36)] = 359,
  [SMALL_STATE(37)] = 367,
  [SMALL_STATE(38)] = 375,
  [SMALL_STATE(39)] = 385,
  [SMALL_STATE(40)] = 395,
  [SMALL_STATE(41)] = 403,
  [SMALL_STATE(42)] = 413,
  [SMALL_STATE(43)] = 418,
  [SMALL_STATE(44)] = 423,
  [SMALL_STATE(45)] = 428,
  [SMALL_STATE(46)] = 433,
  [SMALL_STATE(47)] = 437,
  [SMALL_STATE(48)] = 441,
  [SMALL_STATE(49)] = 445,
  [SMALL_STATE(50)] = 449,
  [SMALL_STATE(51)] = 453,
  [SMALL_STATE(52)] = 457,
  [SMALL_STATE(53)] = 461,
  [SMALL_STATE(54)] = 465,
  [SMALL_STATE(55)] = 469,
  [SMALL_STATE(56)] = 473,
  [SMALL_STATE(57)] = 477,
  [SMALL_STATE(58)] = 481,
  [SMALL_STATE(59)] = 485,
  [SMALL_STATE(60)] = 489,
  [SMALL_STATE(61)] = 493,
  [SMALL_STATE(62)] = 497,
  [SMALL_STATE(63)] = 501,
  [SMALL_STATE(64)] = 505,
  [SMALL_STATE(65)] = 509,
  [SMALL_STATE(66)] = 513,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_openAPIObject, 1, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_openAPIObject_repeat1, 2, 0, 0),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_openAPIObject_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_openAPIObject_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_openAPIObject_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_openAPIObject_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_infoObject_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_infoObject_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_infoObject_repeat1, 2, 0, 0), SHIFT_REPEAT(64),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_infoObject_repeat1, 2, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_infoObject, 1, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_components, 5, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paths, 5, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_info, 5, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_openapi, 3, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_componentsObject, 1, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pathItemObject_repeat1, 2, 0, 0),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pathItemObject_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 3, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 3, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title, 3, 0, 0),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_componentsObject_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_componentsObject_repeat1, 2, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pathItemObject, 1, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pathsObject_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pathsObject_repeat1, 2, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_operationObject_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_operationObject_repeat1, 2, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pathItemObject_repeat1, 5, 0, 0),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schemaObject_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_schemaObject_repeat1, 2, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pathsObject, 1, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operationObject, 1, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schemaObject, 1, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_operationObject_repeat1, 7, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_schemaObject_repeat1, 3, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schemas, 5, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
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
    [ts_external_token_dedent] = true,
  },
  [3] = {
    [ts_external_token_indent] = true,
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
