#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 50
#define LARGE_STATE_COUNT 17
#define SYMBOL_COUNT 31
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 5

enum {
  sym__ws = 1,
  sym_comment = 2,
  sym_nil = 3,
  sym_boolean = 4,
  sym_number = 5,
  anon_sym_DQUOTE = 6,
  aux_sym_string_token1 = 7,
  aux_sym_string_token2 = 8,
  anon_sym_COLON = 9,
  aux_sym_symbol_token1 = 10,
  anon_sym_DOT = 11,
  aux_sym_colon_string_token1 = 12,
  aux_sym_colon_string_token2 = 13,
  anon_sym_LPAREN = 14,
  anon_sym_RPAREN = 15,
  anon_sym_LBRACE = 16,
  anon_sym_RBRACE = 17,
  anon_sym_LBRACK = 18,
  anon_sym_RBRACK = 19,
  sym_source = 20,
  sym__form = 21,
  sym_string = 22,
  sym_symbol = 23,
  sym_colon_string = 24,
  sym_list = 25,
  sym_table = 26,
  sym_seq_table = 27,
  aux_sym_source_repeat1 = 28,
  aux_sym_string_repeat1 = 29,
  aux_sym_list_repeat1 = 30,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__ws] = "_ws",
  [sym_comment] = "comment",
  [sym_nil] = "nil",
  [sym_boolean] = "boolean",
  [sym_number] = "number",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [aux_sym_string_token2] = "string_token2",
  [anon_sym_COLON] = ":",
  [aux_sym_symbol_token1] = "symbol_token1",
  [anon_sym_DOT] = ".",
  [aux_sym_colon_string_token1] = "colon_string_token1",
  [aux_sym_colon_string_token2] = "colon_string_token2",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_source] = "source",
  [sym__form] = "_form",
  [sym_string] = "string",
  [sym_symbol] = "symbol",
  [sym_colon_string] = "colon_string",
  [sym_list] = "list",
  [sym_table] = "table",
  [sym_seq_table] = "seq_table",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__ws] = sym__ws,
  [sym_comment] = sym_comment,
  [sym_nil] = sym_nil,
  [sym_boolean] = sym_boolean,
  [sym_number] = sym_number,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_symbol_token1] = aux_sym_symbol_token1,
  [anon_sym_DOT] = anon_sym_DOT,
  [aux_sym_colon_string_token1] = aux_sym_colon_string_token1,
  [aux_sym_colon_string_token2] = aux_sym_colon_string_token2,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_source] = sym_source,
  [sym__form] = sym__form,
  [sym_string] = sym_string,
  [sym_symbol] = sym_symbol,
  [sym_colon_string] = sym_colon_string,
  [sym_list] = sym_list,
  [sym_table] = sym_table,
  [sym_seq_table] = sym_seq_table,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_list_repeat1] = aux_sym_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__ws] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_nil] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_symbol_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_colon_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_colon_string_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym__form] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_colon_string] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_table] = {
    .visible = true,
    .named = true,
  },
  [sym_seq_table] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_close = 1,
  field_open = 2,
  field_value = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_close] = "close",
  [field_open] = "open",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 3},
  [4] = {.index = 6, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_close, 1},
    {field_open, 0},
  [2] =
    {field_value, 0},
  [3] =
    {field_close, 2},
    {field_open, 0},
    {field_value, 1, .inherited = true},
  [6] =
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
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
  [8] = 4,
  [9] = 9,
  [10] = 7,
  [11] = 6,
  [12] = 5,
  [13] = 13,
  [14] = 13,
  [15] = 15,
  [16] = 15,
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
  [27] = 17,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 18,
  [32] = 26,
  [33] = 21,
  [34] = 20,
  [35] = 23,
  [36] = 24,
  [37] = 25,
  [38] = 22,
  [39] = 30,
  [40] = 29,
  [41] = 28,
  [42] = 42,
  [43] = 43,
  [44] = 42,
  [45] = 45,
  [46] = 45,
  [47] = 47,
  [48] = 47,
  [49] = 49,
};

static inline bool aux_sym_string_token2_character_set_1(int32_t c) {
  return (c < ':'
    ? (c < '"'
      ? (c < '\r'
        ? (c >= '\t' && c <= '\n')
        : (c <= '\r' || c == ' '))
      : (c <= '"' || (c < ','
        ? (c >= '\'' && c <= ')')
        : (c <= ',' || c == '.'))))
    : (c <= ';' || (c < '`'
      ? (c < '['
        ? c == '@'
        : (c <= '[' || c == ']'))
      : (c <= '`' || (c < '}'
        ? c == '{'
        : c <= '~')))));
}

static inline bool aux_sym_symbol_token1_character_set_1(int32_t c) {
  return (c < '.'
    ? (c < ' '
      ? (c < '\t'
        ? c == 0
        : (c <= '\n' || c == '\r'))
      : (c <= ' ' || (c < '\''
        ? c == '"'
        : (c <= ')' || c == ','))))
    : (c <= '.' || (c < ']'
      ? (c < '@'
        ? (c >= ':' && c <= ';')
        : (c <= '@' || c == '['))
      : (c <= ']' || (c < '{'
        ? c == '`'
        : (c <= '{' || (c >= '}' && c <= '~')))))));
}

static inline bool aux_sym_symbol_token1_character_set_2(int32_t c) {
  return (c < ':'
    ? (c < ' '
      ? (c < '\t'
        ? c == 0
        : (c <= '\n' || c == '\r'))
      : (c <= ' ' || (c < '\''
        ? c == '"'
        : (c <= ')' || c == ','))))
    : (c <= ';' || (c < '`'
      ? (c < '['
        ? c == '@'
        : (c <= '[' || c == ']'))
      : (c <= '`' || (c < '}'
        ? c == '{'
        : c <= '~')))));
}

static inline bool aux_sym_symbol_token1_character_set_3(int32_t c) {
  return (c < ';'
    ? (c < ' '
      ? (c < '\t'
        ? c == 0
        : (c <= '\n' || c == '\r'))
      : (c <= ' ' || (c < '\''
        ? c == '"'
        : (c <= ')' || c == ','))))
    : (c <= ';' || (c < '`'
      ? (c < '['
        ? c == '@'
        : (c <= '[' || c == ']'))
      : (c <= '`' || (c < '}'
        ? c == '{'
        : c <= '~')))));
}

static inline bool aux_sym_symbol_token1_character_set_4(int32_t c) {
  return (c < ':'
    ? (c < '"'
      ? (c < '\t'
        ? c == 0
        : (c <= '\n' || c == ' '))
      : (c <= '"' || (c < ','
        ? (c >= '\'' && c <= ')')
        : (c <= ',' || c == '.'))))
    : (c <= ';' || (c < '`'
      ? (c < '['
        ? c == '@'
        : (c <= '[' || c == ']'))
      : (c <= '`' || (c < '}'
        ? c == '{'
        : c <= '~')))));
}

static inline bool aux_sym_symbol_token1_character_set_5(int32_t c) {
  return (c < '.'
    ? (c < ' '
      ? (c < '\t'
        ? c == 0
        : (c <= '\n' || c == '\r'))
      : (c <= ' ' || (c < '\''
        ? c == '"'
        : (c <= ')' || c == ','))))
    : (c <= '.' || (c < ']'
      ? (c < '@'
        ? (c >= ':' && c <= ';')
        : (c <= '@' || c == '['))
      : (c <= ']' || (c < '}'
        ? c == '`'
        : c <= '~')))));
}

static inline bool aux_sym_symbol_token1_character_set_6(int32_t c) {
  return (c < ':'
    ? (c < ' '
      ? (c < '\t'
        ? c == 0
        : (c <= '\n' || c == '\r'))
      : (c <= ' ' || (c < '\''
        ? c == '"'
        : (c <= ')' || (c >= ',' && c <= '.')))))
    : (c <= ';' || (c < '`'
      ? (c < '['
        ? c == '@'
        : (c <= '[' || c == ']'))
      : (c <= '`' || (c < '}'
        ? c == '{'
        : c <= '~')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(22);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '"') ADVANCE(40);
      if (lookahead == '(') ADVANCE(76);
      if (lookahead == ')') ADVANCE(77);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == '0') ADVANCE(27);
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == '[') ADVANCE(80);
      if (lookahead == '\\') ADVANCE(60);
      if (lookahead == ']') ADVANCE(81);
      if (lookahead == 'f') ADVANCE(53);
      if (lookahead == 'n') ADVANCE(55);
      if (lookahead == 't') ADVANCE(58);
      if (lookahead == '{') ADVANCE(78);
      if (lookahead == '}') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(19)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '\'' &&
          lookahead != ',' &&
          lookahead != '@' &&
          lookahead != '`' &&
          lookahead != '~') ADVANCE(72);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(4);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '"') ADVANCE(40);
      if (lookahead == '(') ADVANCE(76);
      if (lookahead == ')') ADVANCE(77);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == '0') ADVANCE(27);
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == '[') ADVANCE(80);
      if (lookahead == ']') ADVANCE(81);
      if (lookahead == 'f') ADVANCE(53);
      if (lookahead == 'n') ADVANCE(55);
      if (lookahead == 't') ADVANCE(58);
      if (lookahead == '{') ADVANCE(78);
      if (lookahead == '}') ADVANCE(79);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(5)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '\'' &&
          lookahead != ',' &&
          lookahead != '@' &&
          lookahead != '`' &&
          lookahead != '~') ADVANCE(72);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == 11) ADVANCE(23);
      END_STATE();
    case 4:
      if (lookahead == '\f') ADVANCE(50);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '"') ADVANCE(40);
      if (lookahead == '(') ADVANCE(76);
      if (lookahead == ')') ADVANCE(77);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == '0') ADVANCE(27);
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == '[') ADVANCE(80);
      if (lookahead == ']') ADVANCE(81);
      if (lookahead == 'f') ADVANCE(53);
      if (lookahead == 'n') ADVANCE(55);
      if (lookahead == 't') ADVANCE(58);
      if (lookahead == '{') ADVANCE(78);
      if (lookahead == '}') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(5)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '\'' &&
          lookahead != ',' &&
          lookahead != '@' &&
          lookahead != '`' &&
          lookahead != '~') ADVANCE(72);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '"') ADVANCE(40);
      if (lookahead == '(') ADVANCE(76);
      if (lookahead == ')') ADVANCE(77);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == '0') ADVANCE(27);
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == '[') ADVANCE(80);
      if (lookahead == ']') ADVANCE(81);
      if (lookahead == 'f') ADVANCE(53);
      if (lookahead == 'n') ADVANCE(55);
      if (lookahead == 't') ADVANCE(58);
      if (lookahead == '{') ADVANCE(78);
      if (lookahead == '}') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(5)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '\'' &&
          lookahead != ',' &&
          lookahead != '@' &&
          lookahead != '`' &&
          lookahead != '~') ADVANCE(72);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(40);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 7:
      if (lookahead == 'u') ADVANCE(8);
      if (lookahead == 'x') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 8:
      if (lookahead == '{') ADVANCE(16);
      END_STATE();
    case 9:
      if (lookahead == '}') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 11:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(39);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(34);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(9);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(39);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(14);
      END_STATE();
    case 19:
      if (eof) ADVANCE(22);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '"') ADVANCE(40);
      if (lookahead == '(') ADVANCE(76);
      if (lookahead == ')') ADVANCE(77);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == '0') ADVANCE(27);
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == '[') ADVANCE(80);
      if (lookahead == ']') ADVANCE(81);
      if (lookahead == 'f') ADVANCE(53);
      if (lookahead == 'n') ADVANCE(55);
      if (lookahead == 't') ADVANCE(58);
      if (lookahead == '{') ADVANCE(78);
      if (lookahead == '}') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(19)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '\'' &&
          lookahead != ',' &&
          lookahead != '@' &&
          lookahead != '`' &&
          lookahead != '~') ADVANCE(72);
      END_STATE();
    case 20:
      if (eof) ADVANCE(22);
      if (lookahead == '"') ADVANCE(40);
      if (lookahead == '(') ADVANCE(76);
      if (lookahead == ')') ADVANCE(77);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == '0') ADVANCE(27);
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == '[') ADVANCE(80);
      if (lookahead == ']') ADVANCE(81);
      if (lookahead == 'f') ADVANCE(53);
      if (lookahead == 'n') ADVANCE(55);
      if (lookahead == 't') ADVANCE(58);
      if (lookahead == '{') ADVANCE(78);
      if (lookahead == '}') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '\'' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '`' &&
          lookahead != '~') ADVANCE(72);
      END_STATE();
    case 21:
      if (eof) ADVANCE(22);
      if (lookahead == '"') ADVANCE(40);
      if (lookahead == '(') ADVANCE(76);
      if (lookahead == ')') ADVANCE(77);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (lookahead == '.') ADVANCE(66);
      if (lookahead == '0') ADVANCE(27);
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == '[') ADVANCE(80);
      if (lookahead == ']') ADVANCE(81);
      if (lookahead == 'f') ADVANCE(53);
      if (lookahead == 'n') ADVANCE(55);
      if (lookahead == 't') ADVANCE(58);
      if (lookahead == '{') ADVANCE(78);
      if (lookahead == '}') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '\'' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '@' &&
          lookahead != '`' &&
          lookahead != '~') ADVANCE(72);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym__ws);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_nil);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(72);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_boolean);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(72);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(63);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(28);
      if (!aux_sym_symbol_token1_character_set_2(lookahead)) ADVANCE(72);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(28);
      if (!aux_sym_symbol_token1_character_set_2(lookahead)) ADVANCE(72);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(29);
      if (!aux_sym_symbol_token1_character_set_2(lookahead)) ADVANCE(72);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(30);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(73);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(35);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(72);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(36);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(73);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(38);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(72);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(42);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(72);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(72);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(72);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\r') ADVANCE(2);
      if (!aux_sym_symbol_token1_character_set_4(lookahead)) ADVANCE(72);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == '0') ADVANCE(27);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (!aux_sym_symbol_token1_character_set_2(lookahead)) ADVANCE(72);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(29);
      if (!aux_sym_symbol_token1_character_set_2(lookahead)) ADVANCE(72);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'a') ADVANCE(56);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(72);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'e') ADVANCE(26);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(72);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'i') ADVANCE(57);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(72);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'l') ADVANCE(59);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(72);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'l') ADVANCE(25);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(72);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'r') ADVANCE(61);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(72);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 's') ADVANCE(54);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(72);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'u') ADVANCE(62);
      if (lookahead == 'x') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (aux_sym_string_token2_character_set_1(lookahead)) ADVANCE(43);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'u') ADVANCE(54);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(72);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '{') ADVANCE(16);
      if (!aux_sym_symbol_token1_character_set_5(lookahead)) ADVANCE(72);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (!aux_sym_symbol_token1_character_set_6(lookahead)) ADVANCE(72);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(73);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(38);
      if (!aux_sym_symbol_token1_character_set_6(lookahead)) ADVANCE(72);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(73);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(72);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(73);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(48);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(72);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(38);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(72);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(72);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (!aux_sym_symbol_token1_character_set_1(lookahead)) ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(73);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_colon_string_token1);
      if (!aux_sym_symbol_token1_character_set_3(lookahead)) ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 21},
  [2] = {.lex_state = 21},
  [3] = {.lex_state = 21},
  [4] = {.lex_state = 21},
  [5] = {.lex_state = 21},
  [6] = {.lex_state = 21},
  [7] = {.lex_state = 21},
  [8] = {.lex_state = 21},
  [9] = {.lex_state = 21},
  [10] = {.lex_state = 21},
  [11] = {.lex_state = 21},
  [12] = {.lex_state = 21},
  [13] = {.lex_state = 21},
  [14] = {.lex_state = 21},
  [15] = {.lex_state = 21},
  [16] = {.lex_state = 21},
  [17] = {.lex_state = 20},
  [18] = {.lex_state = 21},
  [19] = {.lex_state = 21},
  [20] = {.lex_state = 21},
  [21] = {.lex_state = 21},
  [22] = {.lex_state = 21},
  [23] = {.lex_state = 21},
  [24] = {.lex_state = 21},
  [25] = {.lex_state = 21},
  [26] = {.lex_state = 21},
  [27] = {.lex_state = 20},
  [28] = {.lex_state = 21},
  [29] = {.lex_state = 21},
  [30] = {.lex_state = 21},
  [31] = {.lex_state = 21},
  [32] = {.lex_state = 21},
  [33] = {.lex_state = 21},
  [34] = {.lex_state = 21},
  [35] = {.lex_state = 21},
  [36] = {.lex_state = 21},
  [37] = {.lex_state = 21},
  [38] = {.lex_state = 21},
  [39] = {.lex_state = 21},
  [40] = {.lex_state = 21},
  [41] = {.lex_state = 21},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 6},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 6},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 75},
  [48] = {.lex_state = 75},
  [49] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__ws] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_nil] = ACTIONS(1),
    [sym_boolean] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_string_token2] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_symbol_token1] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [aux_sym_colon_string_token2] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(49),
    [sym__form] = STATE(9),
    [sym_string] = STATE(9),
    [sym_symbol] = STATE(9),
    [sym_colon_string] = STATE(9),
    [sym_list] = STATE(9),
    [sym_table] = STATE(9),
    [sym_seq_table] = STATE(9),
    [aux_sym_source_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_nil] = ACTIONS(5),
    [sym_boolean] = ACTIONS(5),
    [sym_number] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_COLON] = ACTIONS(9),
    [aux_sym_symbol_token1] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
  },
  [2] = {
    [sym__form] = STATE(19),
    [sym_string] = STATE(19),
    [sym_symbol] = STATE(19),
    [sym_colon_string] = STATE(19),
    [sym_list] = STATE(19),
    [sym_table] = STATE(19),
    [sym_seq_table] = STATE(19),
    [aux_sym_list_repeat1] = STATE(2),
    [sym_nil] = ACTIONS(19),
    [sym_boolean] = ACTIONS(19),
    [sym_number] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(22),
    [anon_sym_COLON] = ACTIONS(25),
    [aux_sym_symbol_token1] = ACTIONS(28),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_RPAREN] = ACTIONS(34),
    [anon_sym_LBRACE] = ACTIONS(36),
    [anon_sym_RBRACE] = ACTIONS(34),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_RBRACK] = ACTIONS(34),
  },
  [3] = {
    [sym__form] = STATE(3),
    [sym_string] = STATE(3),
    [sym_symbol] = STATE(3),
    [sym_colon_string] = STATE(3),
    [sym_list] = STATE(3),
    [sym_table] = STATE(3),
    [sym_seq_table] = STATE(3),
    [aux_sym_source_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(42),
    [sym_nil] = ACTIONS(44),
    [sym_boolean] = ACTIONS(44),
    [sym_number] = ACTIONS(44),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [anon_sym_COLON] = ACTIONS(50),
    [aux_sym_symbol_token1] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(56),
    [anon_sym_LBRACE] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(62),
  },
  [4] = {
    [sym__form] = STATE(19),
    [sym_string] = STATE(19),
    [sym_symbol] = STATE(19),
    [sym_colon_string] = STATE(19),
    [sym_list] = STATE(19),
    [sym_table] = STATE(19),
    [sym_seq_table] = STATE(19),
    [aux_sym_list_repeat1] = STATE(2),
    [sym_nil] = ACTIONS(65),
    [sym_boolean] = ACTIONS(65),
    [sym_number] = ACTIONS(65),
    [anon_sym_DQUOTE] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(69),
    [aux_sym_symbol_token1] = ACTIONS(71),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_RPAREN] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(79),
  },
  [5] = {
    [sym__form] = STATE(19),
    [sym_string] = STATE(19),
    [sym_symbol] = STATE(19),
    [sym_colon_string] = STATE(19),
    [sym_list] = STATE(19),
    [sym_table] = STATE(19),
    [sym_seq_table] = STATE(19),
    [aux_sym_list_repeat1] = STATE(4),
    [sym_nil] = ACTIONS(65),
    [sym_boolean] = ACTIONS(65),
    [sym_number] = ACTIONS(65),
    [anon_sym_DQUOTE] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(69),
    [aux_sym_symbol_token1] = ACTIONS(71),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_RPAREN] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(79),
  },
  [6] = {
    [sym__form] = STATE(19),
    [sym_string] = STATE(19),
    [sym_symbol] = STATE(19),
    [sym_colon_string] = STATE(19),
    [sym_list] = STATE(19),
    [sym_table] = STATE(19),
    [sym_seq_table] = STATE(19),
    [aux_sym_list_repeat1] = STATE(15),
    [sym_nil] = ACTIONS(65),
    [sym_boolean] = ACTIONS(65),
    [sym_number] = ACTIONS(65),
    [anon_sym_DQUOTE] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(69),
    [aux_sym_symbol_token1] = ACTIONS(71),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_RBRACE] = ACTIONS(83),
    [anon_sym_LBRACK] = ACTIONS(79),
  },
  [7] = {
    [sym__form] = STATE(19),
    [sym_string] = STATE(19),
    [sym_symbol] = STATE(19),
    [sym_colon_string] = STATE(19),
    [sym_list] = STATE(19),
    [sym_table] = STATE(19),
    [sym_seq_table] = STATE(19),
    [aux_sym_list_repeat1] = STATE(14),
    [sym_nil] = ACTIONS(65),
    [sym_boolean] = ACTIONS(65),
    [sym_number] = ACTIONS(65),
    [anon_sym_DQUOTE] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(69),
    [aux_sym_symbol_token1] = ACTIONS(71),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_RBRACK] = ACTIONS(85),
  },
  [8] = {
    [sym__form] = STATE(19),
    [sym_string] = STATE(19),
    [sym_symbol] = STATE(19),
    [sym_colon_string] = STATE(19),
    [sym_list] = STATE(19),
    [sym_table] = STATE(19),
    [sym_seq_table] = STATE(19),
    [aux_sym_list_repeat1] = STATE(2),
    [sym_nil] = ACTIONS(65),
    [sym_boolean] = ACTIONS(65),
    [sym_number] = ACTIONS(65),
    [anon_sym_DQUOTE] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(69),
    [aux_sym_symbol_token1] = ACTIONS(71),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_RPAREN] = ACTIONS(87),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(79),
  },
  [9] = {
    [sym__form] = STATE(3),
    [sym_string] = STATE(3),
    [sym_symbol] = STATE(3),
    [sym_colon_string] = STATE(3),
    [sym_list] = STATE(3),
    [sym_table] = STATE(3),
    [sym_seq_table] = STATE(3),
    [aux_sym_source_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(89),
    [sym_nil] = ACTIONS(91),
    [sym_boolean] = ACTIONS(91),
    [sym_number] = ACTIONS(91),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_COLON] = ACTIONS(9),
    [aux_sym_symbol_token1] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
  },
  [10] = {
    [sym__form] = STATE(19),
    [sym_string] = STATE(19),
    [sym_symbol] = STATE(19),
    [sym_colon_string] = STATE(19),
    [sym_list] = STATE(19),
    [sym_table] = STATE(19),
    [sym_seq_table] = STATE(19),
    [aux_sym_list_repeat1] = STATE(13),
    [sym_nil] = ACTIONS(65),
    [sym_boolean] = ACTIONS(65),
    [sym_number] = ACTIONS(65),
    [anon_sym_DQUOTE] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(69),
    [aux_sym_symbol_token1] = ACTIONS(71),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_RBRACK] = ACTIONS(93),
  },
  [11] = {
    [sym__form] = STATE(19),
    [sym_string] = STATE(19),
    [sym_symbol] = STATE(19),
    [sym_colon_string] = STATE(19),
    [sym_list] = STATE(19),
    [sym_table] = STATE(19),
    [sym_seq_table] = STATE(19),
    [aux_sym_list_repeat1] = STATE(16),
    [sym_nil] = ACTIONS(65),
    [sym_boolean] = ACTIONS(65),
    [sym_number] = ACTIONS(65),
    [anon_sym_DQUOTE] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(69),
    [aux_sym_symbol_token1] = ACTIONS(71),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_RBRACE] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(79),
  },
  [12] = {
    [sym__form] = STATE(19),
    [sym_string] = STATE(19),
    [sym_symbol] = STATE(19),
    [sym_colon_string] = STATE(19),
    [sym_list] = STATE(19),
    [sym_table] = STATE(19),
    [sym_seq_table] = STATE(19),
    [aux_sym_list_repeat1] = STATE(8),
    [sym_nil] = ACTIONS(65),
    [sym_boolean] = ACTIONS(65),
    [sym_number] = ACTIONS(65),
    [anon_sym_DQUOTE] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(69),
    [aux_sym_symbol_token1] = ACTIONS(71),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_RPAREN] = ACTIONS(97),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(79),
  },
  [13] = {
    [sym__form] = STATE(19),
    [sym_string] = STATE(19),
    [sym_symbol] = STATE(19),
    [sym_colon_string] = STATE(19),
    [sym_list] = STATE(19),
    [sym_table] = STATE(19),
    [sym_seq_table] = STATE(19),
    [aux_sym_list_repeat1] = STATE(2),
    [sym_nil] = ACTIONS(65),
    [sym_boolean] = ACTIONS(65),
    [sym_number] = ACTIONS(65),
    [anon_sym_DQUOTE] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(69),
    [aux_sym_symbol_token1] = ACTIONS(71),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_RBRACK] = ACTIONS(99),
  },
  [14] = {
    [sym__form] = STATE(19),
    [sym_string] = STATE(19),
    [sym_symbol] = STATE(19),
    [sym_colon_string] = STATE(19),
    [sym_list] = STATE(19),
    [sym_table] = STATE(19),
    [sym_seq_table] = STATE(19),
    [aux_sym_list_repeat1] = STATE(2),
    [sym_nil] = ACTIONS(65),
    [sym_boolean] = ACTIONS(65),
    [sym_number] = ACTIONS(65),
    [anon_sym_DQUOTE] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(69),
    [aux_sym_symbol_token1] = ACTIONS(71),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_RBRACK] = ACTIONS(101),
  },
  [15] = {
    [sym__form] = STATE(19),
    [sym_string] = STATE(19),
    [sym_symbol] = STATE(19),
    [sym_colon_string] = STATE(19),
    [sym_list] = STATE(19),
    [sym_table] = STATE(19),
    [sym_seq_table] = STATE(19),
    [aux_sym_list_repeat1] = STATE(2),
    [sym_nil] = ACTIONS(65),
    [sym_boolean] = ACTIONS(65),
    [sym_number] = ACTIONS(65),
    [anon_sym_DQUOTE] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(69),
    [aux_sym_symbol_token1] = ACTIONS(71),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_RBRACE] = ACTIONS(103),
    [anon_sym_LBRACK] = ACTIONS(79),
  },
  [16] = {
    [sym__form] = STATE(19),
    [sym_string] = STATE(19),
    [sym_symbol] = STATE(19),
    [sym_colon_string] = STATE(19),
    [sym_list] = STATE(19),
    [sym_table] = STATE(19),
    [sym_seq_table] = STATE(19),
    [aux_sym_list_repeat1] = STATE(2),
    [sym_nil] = ACTIONS(65),
    [sym_boolean] = ACTIONS(65),
    [sym_number] = ACTIONS(65),
    [anon_sym_DQUOTE] = ACTIONS(67),
    [anon_sym_COLON] = ACTIONS(69),
    [aux_sym_symbol_token1] = ACTIONS(71),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_RBRACE] = ACTIONS(105),
    [anon_sym_LBRACK] = ACTIONS(79),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(111), 1,
      anon_sym_DOT,
    ACTIONS(113), 1,
      aux_sym_colon_string_token2,
    ACTIONS(107), 4,
      sym_nil,
      sym_boolean,
      sym_number,
      aux_sym_symbol_token1,
    ACTIONS(109), 8,
      anon_sym_DQUOTE,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [23] = 2,
    ACTIONS(115), 4,
      sym_nil,
      sym_boolean,
      sym_number,
      aux_sym_symbol_token1,
    ACTIONS(117), 8,
      anon_sym_DQUOTE,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [40] = 2,
    ACTIONS(119), 4,
      sym_nil,
      sym_boolean,
      sym_number,
      aux_sym_symbol_token1,
    ACTIONS(121), 8,
      anon_sym_DQUOTE,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [57] = 2,
    ACTIONS(123), 4,
      sym_nil,
      sym_boolean,
      sym_number,
      aux_sym_symbol_token1,
    ACTIONS(125), 8,
      anon_sym_DQUOTE,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [74] = 2,
    ACTIONS(127), 4,
      sym_nil,
      sym_boolean,
      sym_number,
      aux_sym_symbol_token1,
    ACTIONS(129), 8,
      anon_sym_DQUOTE,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [91] = 2,
    ACTIONS(131), 4,
      sym_nil,
      sym_boolean,
      sym_number,
      aux_sym_symbol_token1,
    ACTIONS(133), 8,
      anon_sym_DQUOTE,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [108] = 2,
    ACTIONS(135), 4,
      sym_nil,
      sym_boolean,
      sym_number,
      aux_sym_symbol_token1,
    ACTIONS(137), 8,
      anon_sym_DQUOTE,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [125] = 2,
    ACTIONS(139), 4,
      sym_nil,
      sym_boolean,
      sym_number,
      aux_sym_symbol_token1,
    ACTIONS(141), 8,
      anon_sym_DQUOTE,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [142] = 2,
    ACTIONS(143), 4,
      sym_nil,
      sym_boolean,
      sym_number,
      aux_sym_symbol_token1,
    ACTIONS(145), 8,
      anon_sym_DQUOTE,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [159] = 2,
    ACTIONS(147), 4,
      sym_nil,
      sym_boolean,
      sym_number,
      aux_sym_symbol_token1,
    ACTIONS(149), 8,
      anon_sym_DQUOTE,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [176] = 4,
    ACTIONS(151), 1,
      anon_sym_DOT,
    ACTIONS(153), 1,
      aux_sym_colon_string_token2,
    ACTIONS(107), 4,
      sym_nil,
      sym_boolean,
      sym_number,
      aux_sym_symbol_token1,
    ACTIONS(109), 6,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [197] = 2,
    ACTIONS(107), 4,
      sym_nil,
      sym_boolean,
      sym_number,
      aux_sym_symbol_token1,
    ACTIONS(109), 8,
      anon_sym_DQUOTE,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [214] = 2,
    ACTIONS(155), 4,
      sym_nil,
      sym_boolean,
      sym_number,
      aux_sym_symbol_token1,
    ACTIONS(157), 8,
      anon_sym_DQUOTE,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [231] = 2,
    ACTIONS(159), 4,
      sym_nil,
      sym_boolean,
      sym_number,
      aux_sym_symbol_token1,
    ACTIONS(161), 8,
      anon_sym_DQUOTE,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [248] = 2,
    ACTIONS(115), 4,
      sym_nil,
      sym_boolean,
      sym_number,
      aux_sym_symbol_token1,
    ACTIONS(117), 6,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [263] = 2,
    ACTIONS(147), 4,
      sym_nil,
      sym_boolean,
      sym_number,
      aux_sym_symbol_token1,
    ACTIONS(149), 6,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [278] = 2,
    ACTIONS(127), 4,
      sym_nil,
      sym_boolean,
      sym_number,
      aux_sym_symbol_token1,
    ACTIONS(129), 6,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [293] = 2,
    ACTIONS(123), 4,
      sym_nil,
      sym_boolean,
      sym_number,
      aux_sym_symbol_token1,
    ACTIONS(125), 6,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [308] = 2,
    ACTIONS(135), 4,
      sym_nil,
      sym_boolean,
      sym_number,
      aux_sym_symbol_token1,
    ACTIONS(137), 6,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [323] = 2,
    ACTIONS(139), 4,
      sym_nil,
      sym_boolean,
      sym_number,
      aux_sym_symbol_token1,
    ACTIONS(141), 6,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [338] = 2,
    ACTIONS(143), 4,
      sym_nil,
      sym_boolean,
      sym_number,
      aux_sym_symbol_token1,
    ACTIONS(145), 6,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [353] = 2,
    ACTIONS(131), 4,
      sym_nil,
      sym_boolean,
      sym_number,
      aux_sym_symbol_token1,
    ACTIONS(133), 6,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [368] = 2,
    ACTIONS(159), 4,
      sym_nil,
      sym_boolean,
      sym_number,
      aux_sym_symbol_token1,
    ACTIONS(161), 6,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [383] = 2,
    ACTIONS(155), 4,
      sym_nil,
      sym_boolean,
      sym_number,
      aux_sym_symbol_token1,
    ACTIONS(157), 6,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [398] = 2,
    ACTIONS(107), 4,
      sym_nil,
      sym_boolean,
      sym_number,
      aux_sym_symbol_token1,
    ACTIONS(109), 6,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_COLON,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [413] = 3,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    STATE(45), 1,
      aux_sym_string_repeat1,
    ACTIONS(165), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [424] = 3,
    ACTIONS(167), 1,
      anon_sym_DQUOTE,
    STATE(43), 1,
      aux_sym_string_repeat1,
    ACTIONS(169), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [435] = 3,
    ACTIONS(172), 1,
      anon_sym_DQUOTE,
    STATE(46), 1,
      aux_sym_string_repeat1,
    ACTIONS(174), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [446] = 3,
    ACTIONS(176), 1,
      anon_sym_DQUOTE,
    STATE(43), 1,
      aux_sym_string_repeat1,
    ACTIONS(178), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [457] = 3,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    STATE(43), 1,
      aux_sym_string_repeat1,
    ACTIONS(178), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [468] = 1,
    ACTIONS(182), 1,
      aux_sym_colon_string_token1,
  [472] = 1,
    ACTIONS(184), 1,
      aux_sym_colon_string_token1,
  [476] = 1,
    ACTIONS(186), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(17)] = 0,
  [SMALL_STATE(18)] = 23,
  [SMALL_STATE(19)] = 40,
  [SMALL_STATE(20)] = 57,
  [SMALL_STATE(21)] = 74,
  [SMALL_STATE(22)] = 91,
  [SMALL_STATE(23)] = 108,
  [SMALL_STATE(24)] = 125,
  [SMALL_STATE(25)] = 142,
  [SMALL_STATE(26)] = 159,
  [SMALL_STATE(27)] = 176,
  [SMALL_STATE(28)] = 197,
  [SMALL_STATE(29)] = 214,
  [SMALL_STATE(30)] = 231,
  [SMALL_STATE(31)] = 248,
  [SMALL_STATE(32)] = 263,
  [SMALL_STATE(33)] = 278,
  [SMALL_STATE(34)] = 293,
  [SMALL_STATE(35)] = 308,
  [SMALL_STATE(36)] = 323,
  [SMALL_STATE(37)] = 338,
  [SMALL_STATE(38)] = 353,
  [SMALL_STATE(39)] = 368,
  [SMALL_STATE(40)] = 383,
  [SMALL_STATE(41)] = 398,
  [SMALL_STATE(42)] = 413,
  [SMALL_STATE(43)] = 424,
  [SMALL_STATE(44)] = 435,
  [SMALL_STATE(45)] = 446,
  [SMALL_STATE(46)] = 457,
  [SMALL_STATE(47)] = 468,
  [SMALL_STATE(48)] = 472,
  [SMALL_STATE(49)] = 476,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2, .production_id = 4), SHIFT_REPEAT(19),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, .production_id = 4), SHIFT_REPEAT(44),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, .production_id = 4), SHIFT_REPEAT(17),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2, .production_id = 4), SHIFT_REPEAT(28),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, .production_id = 4), SHIFT_REPEAT(12),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, .production_id = 4),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, .production_id = 4), SHIFT_REPEAT(11),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2, .production_id = 4), SHIFT_REPEAT(10),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(3),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(42),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(27),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(41),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(5),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(6),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(7),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3, .production_id = 3),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3, .production_id = 3),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 1, .production_id = 2),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 1, .production_id = 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_colon_string, 3),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colon_string, 3),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 3, .production_id = 3),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 3, .production_id = 3),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2, .production_id = 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2, .production_id = 1),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_seq_table, 2, .production_id = 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seq_table, 2, .production_id = 1),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 2, .production_id = 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 2, .production_id = 1),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_seq_table, 3, .production_id = 3),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seq_table, 3, .production_id = 3),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_colon_string, 2),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colon_string, 2),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(43),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [186] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_fennel(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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
