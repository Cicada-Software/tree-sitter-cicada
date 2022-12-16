#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 18
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 19
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_on = 1,
  aux_sym_on_stmt_token1 = 2,
  anon_sym_let = 3,
  anon_sym_EQ = 4,
  aux_sym_func_call_expr_token1 = 5,
  sym_number = 6,
  sym_string = 7,
  sym_string_ident = 8,
  sym_ident = 9,
  sym_comment = 10,
  sym_source_file = 11,
  sym_stmt = 12,
  sym_on_stmt = 13,
  sym_let_stmt = 14,
  sym_expr = 15,
  sym_func_call_expr = 16,
  aux_sym_source_file_repeat1 = 17,
  aux_sym_func_call_expr_repeat1 = 18,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_on] = "on",
  [aux_sym_on_stmt_token1] = "on_stmt_token1",
  [anon_sym_let] = "let",
  [anon_sym_EQ] = "=",
  [aux_sym_func_call_expr_token1] = "func_call_expr_token1",
  [sym_number] = "number",
  [sym_string] = "string",
  [sym_string_ident] = "string_ident",
  [sym_ident] = "ident",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_stmt] = "stmt",
  [sym_on_stmt] = "on_stmt",
  [sym_let_stmt] = "let_stmt",
  [sym_expr] = "expr",
  [sym_func_call_expr] = "func_call_expr",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_func_call_expr_repeat1] = "func_call_expr_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_on] = anon_sym_on,
  [aux_sym_on_stmt_token1] = aux_sym_on_stmt_token1,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_func_call_expr_token1] = aux_sym_func_call_expr_token1,
  [sym_number] = sym_number,
  [sym_string] = sym_string,
  [sym_string_ident] = sym_string_ident,
  [sym_ident] = sym_ident,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_stmt] = sym_stmt,
  [sym_on_stmt] = sym_on_stmt,
  [sym_let_stmt] = sym_let_stmt,
  [sym_expr] = sym_expr,
  [sym_func_call_expr] = sym_func_call_expr,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_func_call_expr_repeat1] = aux_sym_func_call_expr_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_on] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_on_stmt_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_func_call_expr_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_string_ident] = {
    .visible = true,
    .named = true,
  },
  [sym_ident] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_on_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_let_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_func_call_expr] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_func_call_expr_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(5);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == '=') ADVANCE(9);
      if (lookahead == 'l') ADVANCE(14);
      if (lookahead == 'o') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(10);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 4:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_on);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(aux_sym_on_stmt_token1);
      if (lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_func_call_expr_token1);
      if (lookahead == '\n') ADVANCE(10);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_string_ident);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(16);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(6);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(8);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(18);
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
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_on] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_ident] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(16),
    [sym_stmt] = STATE(2),
    [sym_on_stmt] = STATE(4),
    [sym_let_stmt] = STATE(4),
    [sym_func_call_expr] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(2),
    [anon_sym_on] = ACTIONS(3),
    [anon_sym_let] = ACTIONS(5),
    [sym_ident] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
  [2] = {
    [sym_stmt] = STATE(3),
    [sym_on_stmt] = STATE(4),
    [sym_let_stmt] = STATE(4),
    [sym_func_call_expr] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_on] = ACTIONS(3),
    [anon_sym_let] = ACTIONS(5),
    [sym_ident] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
  [3] = {
    [sym_stmt] = STATE(3),
    [sym_on_stmt] = STATE(4),
    [sym_let_stmt] = STATE(4),
    [sym_func_call_expr] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_on] = ACTIONS(15),
    [anon_sym_let] = ACTIONS(18),
    [sym_ident] = ACTIONS(21),
    [sym_comment] = ACTIONS(24),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(27), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(29), 3,
      anon_sym_on,
      anon_sym_let,
      sym_ident,
  [10] = 2,
    ACTIONS(31), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(33), 3,
      anon_sym_on,
      anon_sym_let,
      sym_ident,
  [20] = 2,
    ACTIONS(35), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(37), 3,
      anon_sym_on,
      anon_sym_let,
      sym_ident,
  [30] = 2,
    ACTIONS(39), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(41), 3,
      anon_sym_on,
      anon_sym_let,
      sym_ident,
  [40] = 2,
    ACTIONS(43), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(45), 3,
      anon_sym_on,
      anon_sym_let,
      sym_ident,
  [50] = 2,
    ACTIONS(47), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(49), 3,
      anon_sym_on,
      anon_sym_let,
      sym_ident,
  [60] = 3,
    ACTIONS(51), 1,
      aux_sym_func_call_expr_token1,
    ACTIONS(53), 1,
      sym_string_ident,
    STATE(11), 1,
      aux_sym_func_call_expr_repeat1,
  [70] = 3,
    ACTIONS(55), 1,
      aux_sym_func_call_expr_token1,
    ACTIONS(57), 1,
      sym_string_ident,
    STATE(13), 1,
      aux_sym_func_call_expr_repeat1,
  [80] = 2,
    STATE(9), 1,
      sym_expr,
    ACTIONS(59), 2,
      sym_number,
      sym_ident,
  [88] = 3,
    ACTIONS(61), 1,
      aux_sym_func_call_expr_token1,
    ACTIONS(63), 1,
      sym_string_ident,
    STATE(13), 1,
      aux_sym_func_call_expr_repeat1,
  [98] = 1,
    ACTIONS(66), 1,
      aux_sym_on_stmt_token1,
  [102] = 1,
    ACTIONS(68), 1,
      sym_ident,
  [106] = 1,
    ACTIONS(70), 1,
      ts_builtin_sym_end,
  [110] = 1,
    ACTIONS(72), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 10,
  [SMALL_STATE(6)] = 20,
  [SMALL_STATE(7)] = 30,
  [SMALL_STATE(8)] = 40,
  [SMALL_STATE(9)] = 50,
  [SMALL_STATE(10)] = 60,
  [SMALL_STATE(11)] = 70,
  [SMALL_STATE(12)] = 80,
  [SMALL_STATE(13)] = 88,
  [SMALL_STATE(14)] = 98,
  [SMALL_STATE(15)] = 102,
  [SMALL_STATE(16)] = 106,
  [SMALL_STATE(17)] = 110,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [18] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt, 1),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stmt, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_stmt, 2),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_on_stmt, 2),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call_expr, 2),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call_expr, 2),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call_expr, 3),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call_expr, 3),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_stmt, 4),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_stmt, 4),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_call_expr_repeat1, 2),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_call_expr_repeat1, 2), SHIFT_REPEAT(13),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [70] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_cicada(void) {
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
