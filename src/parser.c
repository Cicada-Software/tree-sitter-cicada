#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 81
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 64
#define ALIAS_COUNT 0
#define TOKEN_COUNT 44
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 3

enum {
  sym_event_type = 1,
  anon_sym_on = 2,
  anon_sym_where = 3,
  anon_sym_image = 4,
  anon_sym_self_hosted = 5,
  anon_sym_run_on = 6,
  anon_sym_DASH = 7,
  anon_sym_COLON = 8,
  anon_sym_SLASH = 9,
  aux_sym_run_on_stmt_token1 = 10,
  anon_sym_if = 11,
  anon_sym_let = 12,
  anon_sym_mut = 13,
  anon_sym_EQ = 14,
  aux_sym_func_call_expr_token1 = 15,
  anon_sym_LPAREN = 16,
  anon_sym_RPAREN = 17,
  aux_sym_number_token1 = 18,
  aux_sym_number_token2 = 19,
  aux_sym_number_token3 = 20,
  aux_sym_number_token4 = 21,
  anon_sym_true = 22,
  anon_sym_false = 23,
  anon_sym_DQUOTE = 24,
  aux_sym_string_token1 = 25,
  aux_sym_string_ident_token1 = 26,
  anon_sym_LPAREN2 = 27,
  aux_sym_string_ident_token2 = 28,
  sym_ident = 29,
  anon_sym_not = 30,
  anon_sym_PLUS = 31,
  anon_sym_STAR = 32,
  anon_sym_CARET = 33,
  anon_sym_LT = 34,
  anon_sym_LT_EQ = 35,
  anon_sym_GT = 36,
  anon_sym_GT_EQ = 37,
  anon_sym_and = 38,
  anon_sym_mod = 39,
  anon_sym_or = 40,
  anon_sym_is = 41,
  anon_sym_xor = 42,
  sym_comment = 43,
  sym_source_file = 44,
  sym_stmt = 45,
  sym_on_stmt = 46,
  sym_run_on_type = 47,
  sym_run_on_stmt = 48,
  sym_if_expr = 49,
  sym_let_stmt = 50,
  sym_expr = 51,
  sym_func_call_expr = 52,
  sym_paren_expr = 53,
  sym_number = 54,
  sym_bool_literal = 55,
  sym_string = 56,
  sym_string_ident = 57,
  sym_unary_expr = 58,
  sym_binary_expr = 59,
  aux_sym_source_file_repeat1 = 60,
  aux_sym_run_on_stmt_repeat1 = 61,
  aux_sym_func_call_expr_repeat1 = 62,
  aux_sym_string_repeat1 = 63,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_event_type] = "event_type",
  [anon_sym_on] = "on",
  [anon_sym_where] = "where",
  [anon_sym_image] = "image",
  [anon_sym_self_hosted] = "self_hosted",
  [anon_sym_run_on] = "run_on",
  [anon_sym_DASH] = "-",
  [anon_sym_COLON] = ":",
  [anon_sym_SLASH] = "/",
  [aux_sym_run_on_stmt_token1] = "run_on_stmt_token1",
  [anon_sym_if] = "if",
  [anon_sym_let] = "let",
  [anon_sym_mut] = "mut",
  [anon_sym_EQ] = "=",
  [aux_sym_func_call_expr_token1] = "func_call_expr_token1",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [aux_sym_number_token1] = "number_token1",
  [aux_sym_number_token2] = "number_token2",
  [aux_sym_number_token3] = "number_token3",
  [aux_sym_number_token4] = "number_token4",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [aux_sym_string_ident_token1] = "string_ident_token1",
  [anon_sym_LPAREN2] = "(",
  [aux_sym_string_ident_token2] = "string_ident_token2",
  [sym_ident] = "ident",
  [anon_sym_not] = "not",
  [anon_sym_PLUS] = "+",
  [anon_sym_STAR] = "*",
  [anon_sym_CARET] = "^",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_and] = "and",
  [anon_sym_mod] = "mod",
  [anon_sym_or] = "or",
  [anon_sym_is] = "is",
  [anon_sym_xor] = "xor",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_stmt] = "stmt",
  [sym_on_stmt] = "on_stmt",
  [sym_run_on_type] = "run_on_type",
  [sym_run_on_stmt] = "run_on_stmt",
  [sym_if_expr] = "if_expr",
  [sym_let_stmt] = "let_stmt",
  [sym_expr] = "expr",
  [sym_func_call_expr] = "func_call_expr",
  [sym_paren_expr] = "paren_expr",
  [sym_number] = "number",
  [sym_bool_literal] = "bool_literal",
  [sym_string] = "string",
  [sym_string_ident] = "string_ident",
  [sym_unary_expr] = "unary_expr",
  [sym_binary_expr] = "binary_expr",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_run_on_stmt_repeat1] = "run_on_stmt_repeat1",
  [aux_sym_func_call_expr_repeat1] = "func_call_expr_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_event_type] = sym_event_type,
  [anon_sym_on] = anon_sym_on,
  [anon_sym_where] = anon_sym_where,
  [anon_sym_image] = anon_sym_image,
  [anon_sym_self_hosted] = anon_sym_self_hosted,
  [anon_sym_run_on] = anon_sym_run_on,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [aux_sym_run_on_stmt_token1] = aux_sym_run_on_stmt_token1,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_mut] = anon_sym_mut,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_func_call_expr_token1] = aux_sym_func_call_expr_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym_number_token1] = aux_sym_number_token1,
  [aux_sym_number_token2] = aux_sym_number_token2,
  [aux_sym_number_token3] = aux_sym_number_token3,
  [aux_sym_number_token4] = aux_sym_number_token4,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [aux_sym_string_ident_token1] = aux_sym_string_ident_token1,
  [anon_sym_LPAREN2] = anon_sym_LPAREN,
  [aux_sym_string_ident_token2] = aux_sym_string_ident_token2,
  [sym_ident] = sym_ident,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_mod] = anon_sym_mod,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_is] = anon_sym_is,
  [anon_sym_xor] = anon_sym_xor,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_stmt] = sym_stmt,
  [sym_on_stmt] = sym_on_stmt,
  [sym_run_on_type] = sym_run_on_type,
  [sym_run_on_stmt] = sym_run_on_stmt,
  [sym_if_expr] = sym_if_expr,
  [sym_let_stmt] = sym_let_stmt,
  [sym_expr] = sym_expr,
  [sym_func_call_expr] = sym_func_call_expr,
  [sym_paren_expr] = sym_paren_expr,
  [sym_number] = sym_number,
  [sym_bool_literal] = sym_bool_literal,
  [sym_string] = sym_string,
  [sym_string_ident] = sym_string_ident,
  [sym_unary_expr] = sym_unary_expr,
  [sym_binary_expr] = sym_binary_expr,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_run_on_stmt_repeat1] = aux_sym_run_on_stmt_repeat1,
  [aux_sym_func_call_expr_repeat1] = aux_sym_func_call_expr_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_event_type] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_on] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_where] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_image] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_self_hosted] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_run_on] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_run_on_stmt_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mut] = {
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_number_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_token4] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_ident_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LPAREN2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_ident_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_ident] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mod] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xor] = {
    .visible = true,
    .named = false,
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
  [sym_run_on_type] = {
    .visible = true,
    .named = true,
  },
  [sym_run_on_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_if_expr] = {
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
  [sym_paren_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_bool_literal] = {
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
  [sym_unary_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expr] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_run_on_stmt_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_func_call_expr_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_event = 1,
  field_type = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_event] = "event",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_event, 1},
  [1] =
    {field_type, 1},
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
  [16] = 13,
  [17] = 17,
  [18] = 13,
  [19] = 19,
  [20] = 13,
  [21] = 21,
  [22] = 22,
  [23] = 15,
  [24] = 24,
  [25] = 24,
  [26] = 21,
  [27] = 10,
  [28] = 12,
  [29] = 2,
  [30] = 8,
  [31] = 4,
  [32] = 9,
  [33] = 3,
  [34] = 11,
  [35] = 35,
  [36] = 35,
  [37] = 37,
  [38] = 38,
  [39] = 38,
  [40] = 35,
  [41] = 35,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 12,
  [49] = 49,
  [50] = 50,
  [51] = 2,
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
  [63] = 47,
  [64] = 64,
  [65] = 49,
  [66] = 66,
  [67] = 12,
  [68] = 68,
  [69] = 50,
  [70] = 70,
  [71] = 68,
  [72] = 70,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 77,
  [80] = 80,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(59);
      if (lookahead == '"') ADVANCE(100);
      if (lookahead == '#') ADVANCE(161);
      if (lookahead == '(') ADVANCE(107);
      if (lookahead == ')') ADVANCE(85);
      if (lookahead == '*') ADVANCE(145);
      if (lookahead == '+') ADVANCE(144);
      if (lookahead == '-') ADVANCE(69);
      if (lookahead == '/') ADVANCE(73);
      if (lookahead == '0') ADVANCE(92);
      if (lookahead == ':') ADVANCE(71);
      if (lookahead == '<') ADVANCE(147);
      if (lookahead == '=') ADVANCE(82);
      if (lookahead == '>') ADVANCE(149);
      if (lookahead == '^') ADVANCE(146);
      if (lookahead == 'a') ADVANCE(30);
      if (lookahead == 'f') ADVANCE(9);
      if (lookahead == 'i') ADVANCE(22);
      if (lookahead == 'l') ADVANCE(14);
      if (lookahead == 'm') ADVANCE(35);
      if (lookahead == 'n') ADVANCE(38);
      if (lookahead == 'o') ADVANCE(31);
      if (lookahead == 'r') ADVANCE(48);
      if (lookahead == 's') ADVANCE(19);
      if (lookahead == 't') ADVANCE(40);
      if (lookahead == 'w') ADVANCE(25);
      if (lookahead == 'x') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(55)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '(') ADVANCE(107);
      if (lookahead == '-') ADVANCE(70);
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == '0') ADVANCE(93);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(95);
      if (lookahead != 0) ADVANCE(106);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '(') ADVANCE(84);
      if (lookahead == '-') ADVANCE(70);
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == '0') ADVANCE(93);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(95);
      if (lookahead != 0) ADVANCE(106);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(83);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '(') ADVANCE(107);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if (lookahead != 0) ADVANCE(106);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(83);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '(') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if (lookahead != 0) ADVANCE(106);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '"') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(102);
      if (lookahead != 0) ADVANCE(101);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(100);
      if (lookahead == '(') ADVANCE(84);
      if (lookahead == '-') ADVANCE(69);
      if (lookahead == '0') ADVANCE(92);
      if (lookahead == 'f') ADVANCE(110);
      if (lookahead == 'n') ADVANCE(128);
      if (lookahead == 't') ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 7:
      if (lookahead == '_') ADVANCE(26);
      END_STATE();
    case 8:
      if (lookahead == '_') ADVANCE(37);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(151);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(153);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(66);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 22:
      if (lookahead == 'f') ADVANCE(76);
      if (lookahead == 'm') ADVANCE(10);
      if (lookahead == 's') ADVANCE(157);
      END_STATE();
    case 23:
      if (lookahead == 'f') ADVANCE(7);
      END_STATE();
    case 24:
      if (lookahead == 'g') ADVANCE(17);
      END_STATE();
    case 25:
      if (lookahead == 'h') ADVANCE(20);
      END_STATE();
    case 26:
      if (lookahead == 'h') ADVANCE(36);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 28:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 29:
      if (lookahead == 'm') ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 30:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 31:
      if (lookahead == 'n') ADVANCE(61);
      if (lookahead == 'r') ADVANCE(155);
      END_STATE();
    case 32:
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 33:
      if (lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 34:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 35:
      if (lookahead == 'o') ADVANCE(12);
      if (lookahead == 'u') ADVANCE(45);
      END_STATE();
    case 36:
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 37:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 38:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 39:
      if (lookahead == 'r') ADVANCE(159);
      END_STATE();
    case 40:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 41:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 42:
      if (lookahead == 's') ADVANCE(47);
      END_STATE();
    case 43:
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(142);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 48:
      if (lookahead == 'u') ADVANCE(32);
      END_STATE();
    case 49:
      if (lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 50:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(86);
      END_STATE();
    case 51:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(51)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 52:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(52)
      if (lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(88);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      END_STATE();
    case 55:
      if (eof) ADVANCE(59);
      if (lookahead == '"') ADVANCE(100);
      if (lookahead == '#') ADVANCE(161);
      if (lookahead == '(') ADVANCE(84);
      if (lookahead == ')') ADVANCE(85);
      if (lookahead == '*') ADVANCE(145);
      if (lookahead == '+') ADVANCE(144);
      if (lookahead == '-') ADVANCE(69);
      if (lookahead == '/') ADVANCE(73);
      if (lookahead == '0') ADVANCE(92);
      if (lookahead == ':') ADVANCE(71);
      if (lookahead == '<') ADVANCE(147);
      if (lookahead == '=') ADVANCE(82);
      if (lookahead == '>') ADVANCE(149);
      if (lookahead == '^') ADVANCE(146);
      if (lookahead == 'a') ADVANCE(30);
      if (lookahead == 'f') ADVANCE(9);
      if (lookahead == 'i') ADVANCE(22);
      if (lookahead == 'l') ADVANCE(14);
      if (lookahead == 'm') ADVANCE(35);
      if (lookahead == 'n') ADVANCE(38);
      if (lookahead == 'o') ADVANCE(31);
      if (lookahead == 'r') ADVANCE(48);
      if (lookahead == 's') ADVANCE(19);
      if (lookahead == 't') ADVANCE(40);
      if (lookahead == 'w') ADVANCE(25);
      if (lookahead == 'x') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(55)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 56:
      if (eof) ADVANCE(59);
      if (lookahead == '#') ADVANCE(161);
      if (lookahead == '*') ADVANCE(145);
      if (lookahead == '+') ADVANCE(144);
      if (lookahead == '-') ADVANCE(69);
      if (lookahead == '/') ADVANCE(73);
      if (lookahead == '<') ADVANCE(147);
      if (lookahead == '>') ADVANCE(149);
      if (lookahead == '^') ADVANCE(146);
      if (lookahead == 'a') ADVANCE(126);
      if (lookahead == 'i') ADVANCE(118);
      if (lookahead == 'l') ADVANCE(113);
      if (lookahead == 'm') ADVANCE(129);
      if (lookahead == 'o') ADVANCE(122);
      if (lookahead == 'r') ADVANCE(139);
      if (lookahead == 'x') ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(56)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 57:
      if (eof) ADVANCE(59);
      if (lookahead == '#') ADVANCE(161);
      if (lookahead == 'i') ADVANCE(119);
      if (lookahead == 'l') ADVANCE(113);
      if (lookahead == 'o') ADVANCE(123);
      if (lookahead == 'r') ADVANCE(139);
      if (lookahead == 'w') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(57)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 58:
      if (eof) ADVANCE(59);
      if (lookahead == '#') ADVANCE(161);
      if (lookahead == 'i') ADVANCE(119);
      if (lookahead == 'l') ADVANCE(113);
      if (lookahead == 'o') ADVANCE(123);
      if (lookahead == 'r') ADVANCE(139);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(58)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_event_type);
      if (lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_on);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_image);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_self_hosted);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_run_on);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_run_on);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(106);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(106);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(106);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_run_on_stmt_token1);
      if (lookahead == '\n') ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_mut);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_mut);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_func_call_expr_token1);
      if (lookahead == '\n') ADVANCE(83);
      if (lookahead == '\r') ADVANCE(4);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(106);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(106);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(106);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (lookahead == 'b') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(53);
      if (lookahead == 'x') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (lookahead == 'b') ADVANCE(103);
      if (lookahead == 'o') ADVANCE(104);
      if (lookahead == 'x') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(106);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(106);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(106);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(106);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(106);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_string_ident_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ')') ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_') ADVANCE(130);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(121);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(152);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(154);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(135);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(97);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(99);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(64);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(133);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(77);
      if (lookahead == 's') ADVANCE(158);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(77);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'h') ADVANCE(117);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(134);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(62);
      if (lookahead == 'r') ADVANCE(156);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(62);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(109);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(68);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(111);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(131);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(136);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(112);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(125);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(160);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(138);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(116);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(115);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(79);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(143);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(81);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(114);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(124);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(137);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(148);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(150);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_mod);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_mod);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_is);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_xor);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_xor);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(161);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 58},
  [2] = {.lex_state = 56},
  [3] = {.lex_state = 56},
  [4] = {.lex_state = 56},
  [5] = {.lex_state = 56},
  [6] = {.lex_state = 56},
  [7] = {.lex_state = 56},
  [8] = {.lex_state = 56},
  [9] = {.lex_state = 56},
  [10] = {.lex_state = 56},
  [11] = {.lex_state = 56},
  [12] = {.lex_state = 56},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 58},
  [43] = {.lex_state = 58},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 57},
  [54] = {.lex_state = 58},
  [55] = {.lex_state = 58},
  [56] = {.lex_state = 58},
  [57] = {.lex_state = 58},
  [58] = {.lex_state = 58},
  [59] = {.lex_state = 58},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 5},
  [73] = {.lex_state = 29},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 108},
  [78] = {.lex_state = 51},
  [79] = {.lex_state = 108},
  [80] = {.lex_state = 52},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_on] = ACTIONS(1),
    [anon_sym_where] = ACTIONS(1),
    [anon_sym_image] = ACTIONS(1),
    [anon_sym_self_hosted] = ACTIONS(1),
    [anon_sym_run_on] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_mut] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [aux_sym_number_token1] = ACTIONS(1),
    [aux_sym_number_token2] = ACTIONS(1),
    [aux_sym_number_token3] = ACTIONS(1),
    [aux_sym_number_token4] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_LPAREN2] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_mod] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_is] = ACTIONS(1),
    [anon_sym_xor] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(76),
    [sym_stmt] = STATE(42),
    [sym_on_stmt] = STATE(59),
    [sym_run_on_stmt] = STATE(59),
    [sym_if_expr] = STATE(59),
    [sym_let_stmt] = STATE(59),
    [sym_func_call_expr] = STATE(59),
    [aux_sym_source_file_repeat1] = STATE(42),
    [anon_sym_on] = ACTIONS(3),
    [anon_sym_run_on] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [sym_ident] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(15), 9,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_comment,
    ACTIONS(17), 12,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      sym_ident,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_mod,
      anon_sym_or,
      anon_sym_is,
      anon_sym_xor,
  [26] = 2,
    ACTIONS(19), 9,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_comment,
    ACTIONS(21), 12,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      sym_ident,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_mod,
      anon_sym_or,
      anon_sym_is,
      anon_sym_xor,
  [52] = 2,
    ACTIONS(23), 9,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_comment,
    ACTIONS(25), 12,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      sym_ident,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_mod,
      anon_sym_or,
      anon_sym_is,
      anon_sym_xor,
  [78] = 4,
    ACTIONS(27), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(29), 5,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      sym_ident,
    ACTIONS(31), 7,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(33), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_mod,
      anon_sym_or,
      anon_sym_is,
      anon_sym_xor,
  [108] = 4,
    ACTIONS(35), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(37), 5,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      sym_ident,
    ACTIONS(31), 7,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(33), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_mod,
      anon_sym_or,
      anon_sym_is,
      anon_sym_xor,
  [138] = 4,
    ACTIONS(39), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(41), 5,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      sym_ident,
    ACTIONS(31), 7,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(33), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_mod,
      anon_sym_or,
      anon_sym_is,
      anon_sym_xor,
  [168] = 2,
    ACTIONS(43), 9,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_comment,
    ACTIONS(45), 12,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      sym_ident,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_mod,
      anon_sym_or,
      anon_sym_is,
      anon_sym_xor,
  [194] = 2,
    ACTIONS(47), 9,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_comment,
    ACTIONS(49), 12,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      sym_ident,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_mod,
      anon_sym_or,
      anon_sym_is,
      anon_sym_xor,
  [220] = 2,
    ACTIONS(51), 9,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_comment,
    ACTIONS(53), 12,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      sym_ident,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_mod,
      anon_sym_or,
      anon_sym_is,
      anon_sym_xor,
  [246] = 2,
    ACTIONS(55), 9,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_comment,
    ACTIONS(57), 12,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      sym_ident,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_mod,
      anon_sym_or,
      anon_sym_is,
      anon_sym_xor,
  [272] = 2,
    ACTIONS(59), 9,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_comment,
    ACTIONS(61), 12,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      sym_ident,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_mod,
      anon_sym_or,
      anon_sym_is,
      anon_sym_xor,
  [298] = 10,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      aux_sym_number_token4,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      sym_ident,
    ACTIONS(77), 1,
      anon_sym_not,
    STATE(41), 1,
      sym_expr,
    ACTIONS(71), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(67), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(33), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [337] = 10,
    ACTIONS(79), 1,
      anon_sym_DASH,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 1,
      aux_sym_number_token4,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      sym_ident,
    ACTIONS(93), 1,
      anon_sym_not,
    STATE(7), 1,
      sym_expr,
    ACTIONS(87), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(83), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(3), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [376] = 10,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      aux_sym_number_token4,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      sym_ident,
    ACTIONS(77), 1,
      anon_sym_not,
    STATE(30), 1,
      sym_expr,
    ACTIONS(71), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(67), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(33), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [415] = 10,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      aux_sym_number_token4,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      sym_ident,
    ACTIONS(77), 1,
      anon_sym_not,
    STATE(35), 1,
      sym_expr,
    ACTIONS(71), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(67), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(33), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [454] = 10,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      aux_sym_number_token4,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      sym_ident,
    ACTIONS(77), 1,
      anon_sym_not,
    STATE(37), 1,
      sym_expr,
    ACTIONS(71), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(67), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(33), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [493] = 10,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      aux_sym_number_token4,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      sym_ident,
    ACTIONS(77), 1,
      anon_sym_not,
    STATE(40), 1,
      sym_expr,
    ACTIONS(71), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(67), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(33), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [532] = 10,
    ACTIONS(79), 1,
      anon_sym_DASH,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 1,
      aux_sym_number_token4,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      sym_ident,
    ACTIONS(93), 1,
      anon_sym_not,
    STATE(5), 1,
      sym_expr,
    ACTIONS(87), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(83), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(3), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [571] = 10,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      aux_sym_number_token4,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      sym_ident,
    ACTIONS(77), 1,
      anon_sym_not,
    STATE(36), 1,
      sym_expr,
    ACTIONS(71), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(67), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(33), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [610] = 10,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      aux_sym_number_token4,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      sym_ident,
    ACTIONS(77), 1,
      anon_sym_not,
    STATE(39), 1,
      sym_expr,
    ACTIONS(71), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(67), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(33), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [649] = 10,
    ACTIONS(79), 1,
      anon_sym_DASH,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 1,
      aux_sym_number_token4,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      sym_ident,
    ACTIONS(93), 1,
      anon_sym_not,
    STATE(6), 1,
      sym_expr,
    ACTIONS(87), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(83), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(3), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [688] = 10,
    ACTIONS(79), 1,
      anon_sym_DASH,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 1,
      aux_sym_number_token4,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      sym_ident,
    ACTIONS(93), 1,
      anon_sym_not,
    STATE(8), 1,
      sym_expr,
    ACTIONS(87), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(83), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(3), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [727] = 10,
    ACTIONS(79), 1,
      anon_sym_DASH,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 1,
      aux_sym_number_token4,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      sym_ident,
    ACTIONS(93), 1,
      anon_sym_not,
    STATE(11), 1,
      sym_expr,
    ACTIONS(87), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(83), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(3), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [766] = 10,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      aux_sym_number_token4,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      sym_ident,
    ACTIONS(77), 1,
      anon_sym_not,
    STATE(34), 1,
      sym_expr,
    ACTIONS(71), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(67), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(33), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [805] = 10,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      aux_sym_number_token4,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      sym_ident,
    ACTIONS(77), 1,
      anon_sym_not,
    STATE(38), 1,
      sym_expr,
    ACTIONS(71), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(67), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(33), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [844] = 2,
    ACTIONS(53), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(51), 14,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_mod,
      anon_sym_or,
      anon_sym_is,
      anon_sym_xor,
  [865] = 2,
    ACTIONS(61), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 14,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_mod,
      anon_sym_or,
      anon_sym_is,
      anon_sym_xor,
  [886] = 2,
    ACTIONS(17), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(15), 14,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_mod,
      anon_sym_or,
      anon_sym_is,
      anon_sym_xor,
  [907] = 2,
    ACTIONS(45), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(43), 14,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_mod,
      anon_sym_or,
      anon_sym_is,
      anon_sym_xor,
  [928] = 2,
    ACTIONS(25), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(23), 14,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_mod,
      anon_sym_or,
      anon_sym_is,
      anon_sym_xor,
  [949] = 2,
    ACTIONS(49), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(47), 14,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_mod,
      anon_sym_or,
      anon_sym_is,
      anon_sym_xor,
  [970] = 2,
    ACTIONS(21), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(19), 14,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_mod,
      anon_sym_or,
      anon_sym_is,
      anon_sym_xor,
  [991] = 2,
    ACTIONS(57), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(55), 14,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_mod,
      anon_sym_or,
      anon_sym_is,
      anon_sym_xor,
  [1012] = 3,
    ACTIONS(97), 1,
      anon_sym_RPAREN,
    ACTIONS(99), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(95), 12,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_mod,
      anon_sym_or,
      anon_sym_is,
      anon_sym_xor,
  [1034] = 3,
    ACTIONS(101), 1,
      anon_sym_RPAREN,
    ACTIONS(99), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(95), 12,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_mod,
      anon_sym_or,
      anon_sym_is,
      anon_sym_xor,
  [1056] = 3,
    ACTIONS(103), 1,
      anon_sym_COLON,
    ACTIONS(99), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(95), 12,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_mod,
      anon_sym_or,
      anon_sym_is,
      anon_sym_xor,
  [1078] = 3,
    ACTIONS(105), 1,
      anon_sym_RPAREN,
    ACTIONS(99), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(95), 12,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_mod,
      anon_sym_or,
      anon_sym_is,
      anon_sym_xor,
  [1100] = 3,
    ACTIONS(107), 1,
      anon_sym_RPAREN,
    ACTIONS(99), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(95), 12,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_mod,
      anon_sym_or,
      anon_sym_is,
      anon_sym_xor,
  [1122] = 3,
    ACTIONS(109), 1,
      anon_sym_RPAREN,
    ACTIONS(99), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(95), 12,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_mod,
      anon_sym_or,
      anon_sym_is,
      anon_sym_xor,
  [1144] = 3,
    ACTIONS(111), 1,
      anon_sym_RPAREN,
    ACTIONS(99), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(95), 12,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_mod,
      anon_sym_or,
      anon_sym_is,
      anon_sym_xor,
  [1166] = 9,
    ACTIONS(3), 1,
      anon_sym_on,
    ACTIONS(5), 1,
      anon_sym_run_on,
    ACTIONS(7), 1,
      anon_sym_if,
    ACTIONS(9), 1,
      anon_sym_let,
    ACTIONS(11), 1,
      sym_ident,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(113), 1,
      ts_builtin_sym_end,
    STATE(43), 2,
      sym_stmt,
      aux_sym_source_file_repeat1,
    STATE(59), 5,
      sym_on_stmt,
      sym_run_on_stmt,
      sym_if_expr,
      sym_let_stmt,
      sym_func_call_expr,
  [1199] = 9,
    ACTIONS(115), 1,
      ts_builtin_sym_end,
    ACTIONS(117), 1,
      anon_sym_on,
    ACTIONS(120), 1,
      anon_sym_run_on,
    ACTIONS(123), 1,
      anon_sym_if,
    ACTIONS(126), 1,
      anon_sym_let,
    ACTIONS(129), 1,
      sym_ident,
    ACTIONS(132), 1,
      sym_comment,
    STATE(43), 2,
      sym_stmt,
      aux_sym_source_file_repeat1,
    STATE(59), 5,
      sym_on_stmt,
      sym_run_on_stmt,
      sym_if_expr,
      sym_let_stmt,
      sym_func_call_expr,
  [1232] = 7,
    ACTIONS(138), 1,
      aux_sym_run_on_stmt_token1,
    ACTIONS(140), 1,
      anon_sym_LPAREN,
    ACTIONS(146), 1,
      aux_sym_string_ident_token1,
    STATE(50), 1,
      sym_paren_expr,
    ACTIONS(135), 3,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
    STATE(44), 3,
      sym_number,
      sym_string_ident,
      aux_sym_run_on_stmt_repeat1,
    ACTIONS(143), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
  [1261] = 7,
    ACTIONS(151), 1,
      aux_sym_run_on_stmt_token1,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    ACTIONS(157), 1,
      aux_sym_string_ident_token1,
    STATE(50), 1,
      sym_paren_expr,
    ACTIONS(149), 3,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
    STATE(44), 3,
      sym_number,
      sym_string_ident,
      aux_sym_run_on_stmt_repeat1,
    ACTIONS(155), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
  [1290] = 7,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    ACTIONS(157), 1,
      aux_sym_string_ident_token1,
    ACTIONS(161), 1,
      aux_sym_run_on_stmt_token1,
    STATE(50), 1,
      sym_paren_expr,
    ACTIONS(159), 3,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
    STATE(45), 3,
      sym_number,
      sym_string_ident,
      aux_sym_run_on_stmt_repeat1,
    ACTIONS(155), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
  [1319] = 3,
    ACTIONS(165), 1,
      aux_sym_run_on_stmt_token1,
    ACTIONS(167), 1,
      anon_sym_LPAREN2,
    ACTIONS(163), 9,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_string_ident_token1,
  [1337] = 2,
    ACTIONS(59), 1,
      aux_sym_run_on_stmt_token1,
    ACTIONS(61), 9,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_string_ident_token1,
  [1352] = 2,
    ACTIONS(171), 1,
      aux_sym_run_on_stmt_token1,
    ACTIONS(169), 9,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_string_ident_token1,
  [1367] = 2,
    ACTIONS(165), 1,
      aux_sym_run_on_stmt_token1,
    ACTIONS(163), 9,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_string_ident_token1,
  [1382] = 2,
    ACTIONS(15), 1,
      aux_sym_run_on_stmt_token1,
    ACTIONS(17), 9,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_string_ident_token1,
  [1397] = 2,
    ACTIONS(175), 1,
      aux_sym_run_on_stmt_token1,
    ACTIONS(173), 9,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_string_ident_token1,
  [1412] = 3,
    ACTIONS(181), 1,
      anon_sym_where,
    ACTIONS(177), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(179), 5,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      sym_ident,
  [1427] = 2,
    ACTIONS(183), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(185), 5,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      sym_ident,
  [1439] = 2,
    ACTIONS(187), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(189), 5,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      sym_ident,
  [1451] = 2,
    ACTIONS(191), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(193), 5,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      sym_ident,
  [1463] = 2,
    ACTIONS(195), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(197), 5,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      sym_ident,
  [1475] = 2,
    ACTIONS(199), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(201), 5,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      sym_ident,
  [1487] = 2,
    ACTIONS(203), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(205), 5,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      sym_ident,
  [1499] = 5,
    ACTIONS(207), 1,
      aux_sym_func_call_expr_token1,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    ACTIONS(211), 1,
      aux_sym_string_ident_token1,
    STATE(69), 1,
      sym_paren_expr,
    STATE(62), 2,
      sym_string_ident,
      aux_sym_func_call_expr_repeat1,
  [1516] = 5,
    ACTIONS(213), 1,
      aux_sym_func_call_expr_token1,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    ACTIONS(218), 1,
      aux_sym_string_ident_token1,
    STATE(69), 1,
      sym_paren_expr,
    STATE(61), 2,
      sym_string_ident,
      aux_sym_func_call_expr_repeat1,
  [1533] = 5,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    ACTIONS(211), 1,
      aux_sym_string_ident_token1,
    ACTIONS(221), 1,
      aux_sym_func_call_expr_token1,
    STATE(69), 1,
      sym_paren_expr,
    STATE(61), 2,
      sym_string_ident,
      aux_sym_func_call_expr_repeat1,
  [1550] = 3,
    ACTIONS(165), 1,
      aux_sym_func_call_expr_token1,
    ACTIONS(223), 1,
      anon_sym_LPAREN2,
    ACTIONS(163), 2,
      anon_sym_LPAREN,
      aux_sym_string_ident_token1,
  [1561] = 2,
    STATE(46), 1,
      sym_run_on_type,
    ACTIONS(225), 2,
      anon_sym_image,
      anon_sym_self_hosted,
  [1569] = 2,
    ACTIONS(171), 1,
      aux_sym_func_call_expr_token1,
    ACTIONS(169), 2,
      anon_sym_LPAREN,
      aux_sym_string_ident_token1,
  [1577] = 3,
    ACTIONS(227), 1,
      anon_sym_DQUOTE,
    ACTIONS(229), 1,
      aux_sym_string_token1,
    STATE(66), 1,
      aux_sym_string_repeat1,
  [1587] = 2,
    ACTIONS(59), 1,
      aux_sym_func_call_expr_token1,
    ACTIONS(61), 2,
      anon_sym_LPAREN,
      aux_sym_string_ident_token1,
  [1595] = 3,
    ACTIONS(232), 1,
      anon_sym_DQUOTE,
    ACTIONS(234), 1,
      aux_sym_string_token1,
    STATE(66), 1,
      aux_sym_string_repeat1,
  [1605] = 2,
    ACTIONS(165), 1,
      aux_sym_func_call_expr_token1,
    ACTIONS(163), 2,
      anon_sym_LPAREN,
      aux_sym_string_ident_token1,
  [1613] = 3,
    ACTIONS(236), 1,
      anon_sym_DQUOTE,
    ACTIONS(238), 1,
      aux_sym_string_token1,
    STATE(71), 1,
      aux_sym_string_repeat1,
  [1623] = 3,
    ACTIONS(234), 1,
      aux_sym_string_token1,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    STATE(66), 1,
      aux_sym_string_repeat1,
  [1633] = 3,
    ACTIONS(242), 1,
      anon_sym_DQUOTE,
    ACTIONS(244), 1,
      aux_sym_string_token1,
    STATE(68), 1,
      aux_sym_string_repeat1,
  [1643] = 2,
    ACTIONS(246), 1,
      anon_sym_mut,
    ACTIONS(248), 1,
      sym_ident,
  [1650] = 1,
    ACTIONS(250), 1,
      anon_sym_EQ,
  [1654] = 1,
    ACTIONS(252), 1,
      anon_sym_EQ,
  [1658] = 1,
    ACTIONS(254), 1,
      ts_builtin_sym_end,
  [1662] = 1,
    ACTIONS(256), 1,
      aux_sym_string_ident_token2,
  [1666] = 1,
    ACTIONS(258), 1,
      sym_ident,
  [1670] = 1,
    ACTIONS(260), 1,
      aux_sym_string_ident_token2,
  [1674] = 1,
    ACTIONS(262), 1,
      sym_event_type,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 26,
  [SMALL_STATE(4)] = 52,
  [SMALL_STATE(5)] = 78,
  [SMALL_STATE(6)] = 108,
  [SMALL_STATE(7)] = 138,
  [SMALL_STATE(8)] = 168,
  [SMALL_STATE(9)] = 194,
  [SMALL_STATE(10)] = 220,
  [SMALL_STATE(11)] = 246,
  [SMALL_STATE(12)] = 272,
  [SMALL_STATE(13)] = 298,
  [SMALL_STATE(14)] = 337,
  [SMALL_STATE(15)] = 376,
  [SMALL_STATE(16)] = 415,
  [SMALL_STATE(17)] = 454,
  [SMALL_STATE(18)] = 493,
  [SMALL_STATE(19)] = 532,
  [SMALL_STATE(20)] = 571,
  [SMALL_STATE(21)] = 610,
  [SMALL_STATE(22)] = 649,
  [SMALL_STATE(23)] = 688,
  [SMALL_STATE(24)] = 727,
  [SMALL_STATE(25)] = 766,
  [SMALL_STATE(26)] = 805,
  [SMALL_STATE(27)] = 844,
  [SMALL_STATE(28)] = 865,
  [SMALL_STATE(29)] = 886,
  [SMALL_STATE(30)] = 907,
  [SMALL_STATE(31)] = 928,
  [SMALL_STATE(32)] = 949,
  [SMALL_STATE(33)] = 970,
  [SMALL_STATE(34)] = 991,
  [SMALL_STATE(35)] = 1012,
  [SMALL_STATE(36)] = 1034,
  [SMALL_STATE(37)] = 1056,
  [SMALL_STATE(38)] = 1078,
  [SMALL_STATE(39)] = 1100,
  [SMALL_STATE(40)] = 1122,
  [SMALL_STATE(41)] = 1144,
  [SMALL_STATE(42)] = 1166,
  [SMALL_STATE(43)] = 1199,
  [SMALL_STATE(44)] = 1232,
  [SMALL_STATE(45)] = 1261,
  [SMALL_STATE(46)] = 1290,
  [SMALL_STATE(47)] = 1319,
  [SMALL_STATE(48)] = 1337,
  [SMALL_STATE(49)] = 1352,
  [SMALL_STATE(50)] = 1367,
  [SMALL_STATE(51)] = 1382,
  [SMALL_STATE(52)] = 1397,
  [SMALL_STATE(53)] = 1412,
  [SMALL_STATE(54)] = 1427,
  [SMALL_STATE(55)] = 1439,
  [SMALL_STATE(56)] = 1451,
  [SMALL_STATE(57)] = 1463,
  [SMALL_STATE(58)] = 1475,
  [SMALL_STATE(59)] = 1487,
  [SMALL_STATE(60)] = 1499,
  [SMALL_STATE(61)] = 1516,
  [SMALL_STATE(62)] = 1533,
  [SMALL_STATE(63)] = 1550,
  [SMALL_STATE(64)] = 1561,
  [SMALL_STATE(65)] = 1569,
  [SMALL_STATE(66)] = 1577,
  [SMALL_STATE(67)] = 1587,
  [SMALL_STATE(68)] = 1595,
  [SMALL_STATE(69)] = 1605,
  [SMALL_STATE(70)] = 1613,
  [SMALL_STATE(71)] = 1623,
  [SMALL_STATE(72)] = 1633,
  [SMALL_STATE(73)] = 1643,
  [SMALL_STATE(74)] = 1650,
  [SMALL_STATE(75)] = 1654,
  [SMALL_STATE(76)] = 1658,
  [SMALL_STATE(77)] = 1662,
  [SMALL_STATE(78)] = 1666,
  [SMALL_STATE(79)] = 1670,
  [SMALL_STATE(80)] = 1674,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_literal, 1),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_literal, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_stmt, 5),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_stmt, 5),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_stmt, 4),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_stmt, 4),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_stmt, 4, .production_id = 1),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_on_stmt, 4, .production_id = 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expr, 2),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expr, 2),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expr, 3),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expr, 3),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paren_expr, 3),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paren_expr, 3),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(80),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(64),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(73),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(60),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(59),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_run_on_stmt_repeat1, 2), SHIFT_REPEAT(44),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_on_stmt_repeat1, 2),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_run_on_stmt_repeat1, 2), SHIFT_REPEAT(18),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_run_on_stmt_repeat1, 2), SHIFT_REPEAT(51),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_run_on_stmt_repeat1, 2), SHIFT_REPEAT(47),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_ident, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_ident, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_ident, 5),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_ident, 5),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_run_on_type, 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_on_type, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_stmt, 2, .production_id = 1),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_on_stmt, 2, .production_id = 1),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call_expr, 3),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call_expr, 3),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_on_stmt, 4, .production_id = 2),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_run_on_stmt, 4, .production_id = 2),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expr, 3),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expr, 3),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_on_stmt, 3, .production_id = 2),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_run_on_stmt, 3, .production_id = 2),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call_expr, 2),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call_expr, 2),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt, 1),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stmt, 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_call_expr_repeat1, 2),
  [215] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_call_expr_repeat1, 2), SHIFT_REPEAT(20),
  [218] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_call_expr_repeat1, 2), SHIFT_REPEAT(63),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [229] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(66),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [254] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
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
