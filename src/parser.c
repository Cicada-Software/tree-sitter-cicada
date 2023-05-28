#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 77
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 61
#define ALIAS_COUNT 0
#define TOKEN_COUNT 42
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 3

enum {
  sym_event_type = 1,
  anon_sym_on = 2,
  anon_sym_where = 3,
  anon_sym_image = 4,
  anon_sym_run_on = 5,
  anon_sym_DASH = 6,
  anon_sym_COLON = 7,
  anon_sym_SLASH = 8,
  aux_sym_run_on_stmt_token1 = 9,
  anon_sym_let = 10,
  anon_sym_mut = 11,
  anon_sym_EQ = 12,
  aux_sym_func_call_expr_token1 = 13,
  anon_sym_LPAREN = 14,
  anon_sym_RPAREN = 15,
  aux_sym_number_token1 = 16,
  aux_sym_number_token2 = 17,
  aux_sym_number_token3 = 18,
  aux_sym_number_token4 = 19,
  anon_sym_true = 20,
  anon_sym_false = 21,
  anon_sym_DQUOTE = 22,
  aux_sym_string_token1 = 23,
  aux_sym_string_ident_token1 = 24,
  anon_sym_LPAREN2 = 25,
  aux_sym_string_ident_token2 = 26,
  sym_ident = 27,
  anon_sym_not = 28,
  anon_sym_PLUS = 29,
  anon_sym_STAR = 30,
  anon_sym_CARET = 31,
  anon_sym_LT = 32,
  anon_sym_LT_EQ = 33,
  anon_sym_GT = 34,
  anon_sym_GT_EQ = 35,
  anon_sym_and = 36,
  anon_sym_mod = 37,
  anon_sym_or = 38,
  anon_sym_is = 39,
  anon_sym_xor = 40,
  sym_comment = 41,
  sym_source_file = 42,
  sym_stmt = 43,
  sym_on_stmt = 44,
  sym_run_on_type = 45,
  sym_run_on_stmt = 46,
  sym_let_stmt = 47,
  sym_expr = 48,
  sym_func_call_expr = 49,
  sym_paren_expr = 50,
  sym_number = 51,
  sym_bool_literal = 52,
  sym_string = 53,
  sym_string_ident = 54,
  sym_unary_expr = 55,
  sym_binary_expr = 56,
  aux_sym_source_file_repeat1 = 57,
  aux_sym_run_on_stmt_repeat1 = 58,
  aux_sym_func_call_expr_repeat1 = 59,
  aux_sym_string_repeat1 = 60,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_event_type] = "event_type",
  [anon_sym_on] = "on",
  [anon_sym_where] = "where",
  [anon_sym_image] = "image",
  [anon_sym_run_on] = "run_on",
  [anon_sym_DASH] = "-",
  [anon_sym_COLON] = ":",
  [anon_sym_SLASH] = "/",
  [aux_sym_run_on_stmt_token1] = "run_on_stmt_token1",
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
  [anon_sym_run_on] = anon_sym_run_on,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [aux_sym_run_on_stmt_token1] = aux_sym_run_on_stmt_token1,
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
  [16] = 16,
  [17] = 15,
  [18] = 16,
  [19] = 19,
  [20] = 20,
  [21] = 15,
  [22] = 15,
  [23] = 14,
  [24] = 24,
  [25] = 13,
  [26] = 2,
  [27] = 27,
  [28] = 27,
  [29] = 29,
  [30] = 6,
  [31] = 29,
  [32] = 11,
  [33] = 29,
  [34] = 29,
  [35] = 7,
  [36] = 12,
  [37] = 8,
  [38] = 9,
  [39] = 10,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 7,
  [48] = 48,
  [49] = 8,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 45,
  [60] = 60,
  [61] = 46,
  [62] = 48,
  [63] = 7,
  [64] = 64,
  [65] = 65,
  [66] = 60,
  [67] = 64,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 71,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(50);
      if (lookahead == '"') ADVANCE(88);
      if (lookahead == '#') ADVANCE(148);
      if (lookahead == '(') ADVANCE(95);
      if (lookahead == ')') ADVANCE(73);
      if (lookahead == '*') ADVANCE(132);
      if (lookahead == '+') ADVANCE(131);
      if (lookahead == '-') ADVANCE(59);
      if (lookahead == '/') ADVANCE(63);
      if (lookahead == '0') ADVANCE(80);
      if (lookahead == ':') ADVANCE(61);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == '=') ADVANCE(70);
      if (lookahead == '>') ADVANCE(136);
      if (lookahead == '^') ADVANCE(133);
      if (lookahead == 'a') ADVANCE(24);
      if (lookahead == 'f') ADVANCE(9);
      if (lookahead == 'i') ADVANCE(22);
      if (lookahead == 'l') ADVANCE(13);
      if (lookahead == 'm') ADVANCE(29);
      if (lookahead == 'n') ADVANCE(31);
      if (lookahead == 'o') ADVANCE(25);
      if (lookahead == 'r') ADVANCE(39);
      if (lookahead == 't') ADVANCE(33);
      if (lookahead == 'w') ADVANCE(20);
      if (lookahead == 'x') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead == '(') ADVANCE(95);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == '/') ADVANCE(64);
      if (lookahead == '0') ADVANCE(81);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(83);
      if (lookahead != 0) ADVANCE(94);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead == '(') ADVANCE(72);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == '/') ADVANCE(64);
      if (lookahead == '0') ADVANCE(81);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(83);
      if (lookahead != 0) ADVANCE(94);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(71);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '(') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if (lookahead != 0) ADVANCE(94);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(71);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '(') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if (lookahead != 0) ADVANCE(94);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '"') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(90);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(88);
      if (lookahead == '(') ADVANCE(72);
      if (lookahead == '-') ADVANCE(59);
      if (lookahead == '0') ADVANCE(80);
      if (lookahead == 'f') ADVANCE(98);
      if (lookahead == 'n') ADVANCE(114);
      if (lookahead == 't') ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 7:
      if (lookahead == '(') ADVANCE(72);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == '/') ADVANCE(64);
      if (lookahead == '0') ADVANCE(81);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(83);
      if (lookahead != 0) ADVANCE(94);
      END_STATE();
    case 8:
      if (lookahead == '_') ADVANCE(30);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(21);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(19);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(138);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(140);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 19:
      if (lookahead == 'g') ADVANCE(16);
      END_STATE();
    case 20:
      if (lookahead == 'h') ADVANCE(18);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 22:
      if (lookahead == 'm') ADVANCE(10);
      if (lookahead == 's') ADVANCE(144);
      END_STATE();
    case 23:
      if (lookahead == 'm') ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 24:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 25:
      if (lookahead == 'n') ADVANCE(52);
      if (lookahead == 'r') ADVANCE(142);
      END_STATE();
    case 26:
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 28:
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 29:
      if (lookahead == 'o') ADVANCE(12);
      if (lookahead == 'u') ADVANCE(37);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 31:
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(146);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 34:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 35:
      if (lookahead == 's') ADVANCE(15);
      END_STATE();
    case 36:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 37:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(129);
      END_STATE();
    case 39:
      if (lookahead == 'u') ADVANCE(26);
      END_STATE();
    case 40:
      if (lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 41:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(74);
      END_STATE();
    case 42:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(42)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 43:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(43)
      if (lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(76);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      END_STATE();
    case 46:
      if (eof) ADVANCE(50);
      if (lookahead == '"') ADVANCE(88);
      if (lookahead == '#') ADVANCE(148);
      if (lookahead == '(') ADVANCE(72);
      if (lookahead == ')') ADVANCE(73);
      if (lookahead == '*') ADVANCE(132);
      if (lookahead == '+') ADVANCE(131);
      if (lookahead == '-') ADVANCE(59);
      if (lookahead == '/') ADVANCE(63);
      if (lookahead == '0') ADVANCE(80);
      if (lookahead == ':') ADVANCE(61);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == '=') ADVANCE(70);
      if (lookahead == '>') ADVANCE(136);
      if (lookahead == '^') ADVANCE(133);
      if (lookahead == 'a') ADVANCE(24);
      if (lookahead == 'f') ADVANCE(9);
      if (lookahead == 'i') ADVANCE(22);
      if (lookahead == 'l') ADVANCE(13);
      if (lookahead == 'm') ADVANCE(29);
      if (lookahead == 'n') ADVANCE(31);
      if (lookahead == 'o') ADVANCE(25);
      if (lookahead == 'r') ADVANCE(39);
      if (lookahead == 't') ADVANCE(33);
      if (lookahead == 'w') ADVANCE(20);
      if (lookahead == 'x') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 47:
      if (eof) ADVANCE(50);
      if (lookahead == '#') ADVANCE(148);
      if (lookahead == '*') ADVANCE(132);
      if (lookahead == '+') ADVANCE(131);
      if (lookahead == '-') ADVANCE(59);
      if (lookahead == '/') ADVANCE(63);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == '>') ADVANCE(136);
      if (lookahead == '^') ADVANCE(133);
      if (lookahead == 'a') ADVANCE(112);
      if (lookahead == 'i') ADVANCE(120);
      if (lookahead == 'l') ADVANCE(101);
      if (lookahead == 'm') ADVANCE(115);
      if (lookahead == 'o') ADVANCE(108);
      if (lookahead == 'r') ADVANCE(126);
      if (lookahead == 'x') ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(47)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 48:
      if (eof) ADVANCE(50);
      if (lookahead == '#') ADVANCE(148);
      if (lookahead == 'l') ADVANCE(101);
      if (lookahead == 'o') ADVANCE(109);
      if (lookahead == 'r') ADVANCE(126);
      if (lookahead == 'w') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 49:
      if (eof) ADVANCE(50);
      if (lookahead == '#') ADVANCE(148);
      if (lookahead == 'l') ADVANCE(101);
      if (lookahead == 'o') ADVANCE(109);
      if (lookahead == 'r') ADVANCE(126);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(49)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_event_type);
      if (lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_on);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_image);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_run_on);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_run_on);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(94);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(94);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(94);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_run_on_stmt_token1);
      if (lookahead == '\n') ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_mut);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_mut);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_func_call_expr_token1);
      if (lookahead == '\n') ADVANCE(71);
      if (lookahead == '\r') ADVANCE(4);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(94);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(94);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(94);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (lookahead == 'b') ADVANCE(41);
      if (lookahead == 'o') ADVANCE(44);
      if (lookahead == 'x') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (lookahead == 'b') ADVANCE(91);
      if (lookahead == 'o') ADVANCE(92);
      if (lookahead == 'x') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(94);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(94);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(89);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(94);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(94);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(94);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_string_ident_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ')') ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_') ADVANCE(116);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(107);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(139);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(141);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(122);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(85);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(87);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(55);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(119);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'h') ADVANCE(105);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(121);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(53);
      if (lookahead == 'r') ADVANCE(143);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(53);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(97);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(58);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(99);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(117);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(123);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(100);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(111);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(147);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(125);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(104);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(145);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(103);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(67);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(130);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(69);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(102);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(110);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(124);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(135);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(137);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_mod);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_mod);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_is);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_xor);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_xor);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(148);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 49},
  [2] = {.lex_state = 47},
  [3] = {.lex_state = 47},
  [4] = {.lex_state = 47},
  [5] = {.lex_state = 47},
  [6] = {.lex_state = 47},
  [7] = {.lex_state = 47},
  [8] = {.lex_state = 47},
  [9] = {.lex_state = 47},
  [10] = {.lex_state = 47},
  [11] = {.lex_state = 47},
  [12] = {.lex_state = 47},
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
  [26] = {.lex_state = 0},
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
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 7},
  [43] = {.lex_state = 49},
  [44] = {.lex_state = 49},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 7},
  [51] = {.lex_state = 48},
  [52] = {.lex_state = 49},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 49},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 49},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 49},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 23},
  [70] = {.lex_state = 42},
  [71] = {.lex_state = 96},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 43},
  [76] = {.lex_state = 96},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_on] = ACTIONS(1),
    [anon_sym_where] = ACTIONS(1),
    [anon_sym_image] = ACTIONS(1),
    [anon_sym_run_on] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
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
    [sym_source_file] = STATE(74),
    [sym_stmt] = STATE(43),
    [sym_on_stmt] = STATE(56),
    [sym_run_on_stmt] = STATE(56),
    [sym_let_stmt] = STATE(56),
    [sym_func_call_expr] = STATE(56),
    [aux_sym_source_file_repeat1] = STATE(43),
    [anon_sym_on] = ACTIONS(3),
    [anon_sym_run_on] = ACTIONS(5),
    [anon_sym_let] = ACTIONS(7),
    [sym_ident] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(13), 9,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_comment,
    ACTIONS(15), 11,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_let,
      sym_ident,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_mod,
      anon_sym_or,
      anon_sym_is,
      anon_sym_xor,
  [25] = 4,
    ACTIONS(17), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(19), 4,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_let,
      sym_ident,
    ACTIONS(21), 7,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(23), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_mod,
      anon_sym_or,
      anon_sym_is,
      anon_sym_xor,
  [54] = 4,
    ACTIONS(25), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(27), 4,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_let,
      sym_ident,
    ACTIONS(21), 7,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(23), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_mod,
      anon_sym_or,
      anon_sym_is,
      anon_sym_xor,
  [83] = 4,
    ACTIONS(29), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(31), 4,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_let,
      sym_ident,
    ACTIONS(21), 7,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(23), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_mod,
      anon_sym_or,
      anon_sym_is,
      anon_sym_xor,
  [112] = 2,
    ACTIONS(33), 9,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_comment,
    ACTIONS(35), 11,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_let,
      sym_ident,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_mod,
      anon_sym_or,
      anon_sym_is,
      anon_sym_xor,
  [137] = 2,
    ACTIONS(37), 9,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_comment,
    ACTIONS(39), 11,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_let,
      sym_ident,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_mod,
      anon_sym_or,
      anon_sym_is,
      anon_sym_xor,
  [162] = 2,
    ACTIONS(41), 9,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_comment,
    ACTIONS(43), 11,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_let,
      sym_ident,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_mod,
      anon_sym_or,
      anon_sym_is,
      anon_sym_xor,
  [187] = 2,
    ACTIONS(45), 9,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_comment,
    ACTIONS(47), 11,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_let,
      sym_ident,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_mod,
      anon_sym_or,
      anon_sym_is,
      anon_sym_xor,
  [212] = 2,
    ACTIONS(49), 9,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_comment,
    ACTIONS(51), 11,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_let,
      sym_ident,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_mod,
      anon_sym_or,
      anon_sym_is,
      anon_sym_xor,
  [237] = 2,
    ACTIONS(53), 9,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_comment,
    ACTIONS(55), 11,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_let,
      sym_ident,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_mod,
      anon_sym_or,
      anon_sym_is,
      anon_sym_xor,
  [262] = 2,
    ACTIONS(57), 9,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_comment,
    ACTIONS(59), 11,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_let,
      sym_ident,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_mod,
      anon_sym_or,
      anon_sym_is,
      anon_sym_xor,
  [287] = 10,
    ACTIONS(61), 1,
      anon_sym_DASH,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      aux_sym_number_token4,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      sym_ident,
    ACTIONS(75), 1,
      anon_sym_not,
    STATE(2), 1,
      sym_expr,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(65), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(11), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [326] = 10,
    ACTIONS(77), 1,
      anon_sym_DASH,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      aux_sym_number_token4,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      sym_ident,
    ACTIONS(91), 1,
      anon_sym_not,
    STATE(28), 1,
      sym_expr,
    ACTIONS(85), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(81), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(32), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [365] = 10,
    ACTIONS(77), 1,
      anon_sym_DASH,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      aux_sym_number_token4,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      sym_ident,
    ACTIONS(91), 1,
      anon_sym_not,
    STATE(33), 1,
      sym_expr,
    ACTIONS(85), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(81), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(32), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [404] = 10,
    ACTIONS(61), 1,
      anon_sym_DASH,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      aux_sym_number_token4,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      sym_ident,
    ACTIONS(75), 1,
      anon_sym_not,
    STATE(9), 1,
      sym_expr,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(65), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(11), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [443] = 10,
    ACTIONS(77), 1,
      anon_sym_DASH,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      aux_sym_number_token4,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      sym_ident,
    ACTIONS(91), 1,
      anon_sym_not,
    STATE(34), 1,
      sym_expr,
    ACTIONS(85), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(81), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(32), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [482] = 10,
    ACTIONS(77), 1,
      anon_sym_DASH,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      aux_sym_number_token4,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      sym_ident,
    ACTIONS(91), 1,
      anon_sym_not,
    STATE(38), 1,
      sym_expr,
    ACTIONS(85), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(81), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(32), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [521] = 10,
    ACTIONS(61), 1,
      anon_sym_DASH,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      aux_sym_number_token4,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      sym_ident,
    ACTIONS(75), 1,
      anon_sym_not,
    STATE(5), 1,
      sym_expr,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(65), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(11), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [560] = 10,
    ACTIONS(61), 1,
      anon_sym_DASH,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      aux_sym_number_token4,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      sym_ident,
    ACTIONS(75), 1,
      anon_sym_not,
    STATE(4), 1,
      sym_expr,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(65), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(11), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [599] = 10,
    ACTIONS(77), 1,
      anon_sym_DASH,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      aux_sym_number_token4,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      sym_ident,
    ACTIONS(91), 1,
      anon_sym_not,
    STATE(31), 1,
      sym_expr,
    ACTIONS(85), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(81), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(32), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [638] = 10,
    ACTIONS(77), 1,
      anon_sym_DASH,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      aux_sym_number_token4,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      sym_ident,
    ACTIONS(91), 1,
      anon_sym_not,
    STATE(29), 1,
      sym_expr,
    ACTIONS(85), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(81), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(32), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [677] = 10,
    ACTIONS(77), 1,
      anon_sym_DASH,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      aux_sym_number_token4,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      sym_ident,
    ACTIONS(91), 1,
      anon_sym_not,
    STATE(27), 1,
      sym_expr,
    ACTIONS(85), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(81), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(32), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [716] = 10,
    ACTIONS(61), 1,
      anon_sym_DASH,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      aux_sym_number_token4,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      sym_ident,
    ACTIONS(75), 1,
      anon_sym_not,
    STATE(3), 1,
      sym_expr,
    ACTIONS(69), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(65), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(11), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [755] = 10,
    ACTIONS(77), 1,
      anon_sym_DASH,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      aux_sym_number_token4,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      sym_ident,
    ACTIONS(91), 1,
      anon_sym_not,
    STATE(26), 1,
      sym_expr,
    ACTIONS(85), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(81), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(32), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [794] = 2,
    ACTIONS(15), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(13), 13,
      anon_sym_DASH,
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
  [814] = 3,
    ACTIONS(95), 1,
      anon_sym_RPAREN,
    ACTIONS(97), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(93), 12,
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
  [836] = 3,
    ACTIONS(99), 1,
      anon_sym_RPAREN,
    ACTIONS(97), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(93), 12,
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
  [858] = 3,
    ACTIONS(101), 1,
      anon_sym_RPAREN,
    ACTIONS(97), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(93), 12,
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
  [880] = 2,
    ACTIONS(35), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 13,
      anon_sym_DASH,
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
  [900] = 3,
    ACTIONS(103), 1,
      anon_sym_RPAREN,
    ACTIONS(97), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(93), 12,
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
  [922] = 2,
    ACTIONS(55), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(53), 13,
      anon_sym_DASH,
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
  [942] = 3,
    ACTIONS(105), 1,
      anon_sym_RPAREN,
    ACTIONS(97), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(93), 12,
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
  [964] = 3,
    ACTIONS(107), 1,
      anon_sym_RPAREN,
    ACTIONS(97), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(93), 12,
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
  [986] = 2,
    ACTIONS(39), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(37), 13,
      anon_sym_DASH,
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
  [1006] = 2,
    ACTIONS(59), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(57), 13,
      anon_sym_DASH,
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
  [1026] = 2,
    ACTIONS(43), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(41), 13,
      anon_sym_DASH,
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
  [1046] = 2,
    ACTIONS(47), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(45), 13,
      anon_sym_DASH,
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
  [1066] = 2,
    ACTIONS(51), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(49), 13,
      anon_sym_DASH,
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
  [1086] = 7,
    ACTIONS(111), 1,
      aux_sym_run_on_stmt_token1,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      aux_sym_string_ident_token1,
    STATE(48), 1,
      sym_paren_expr,
    ACTIONS(109), 3,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
    STATE(41), 3,
      sym_number,
      sym_string_ident,
      aux_sym_run_on_stmt_repeat1,
    ACTIONS(115), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
  [1115] = 7,
    ACTIONS(122), 1,
      aux_sym_run_on_stmt_token1,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(130), 1,
      aux_sym_string_ident_token1,
    STATE(48), 1,
      sym_paren_expr,
    ACTIONS(119), 3,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
    STATE(41), 3,
      sym_number,
      sym_string_ident,
      aux_sym_run_on_stmt_repeat1,
    ACTIONS(127), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
  [1144] = 6,
    ACTIONS(117), 1,
      aux_sym_string_ident_token1,
    ACTIONS(135), 1,
      anon_sym_LPAREN,
    STATE(48), 1,
      sym_paren_expr,
    ACTIONS(133), 3,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
    STATE(40), 3,
      sym_number,
      sym_string_ident,
      aux_sym_run_on_stmt_repeat1,
    ACTIONS(115), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
  [1170] = 8,
    ACTIONS(3), 1,
      anon_sym_on,
    ACTIONS(5), 1,
      anon_sym_run_on,
    ACTIONS(7), 1,
      anon_sym_let,
    ACTIONS(9), 1,
      sym_ident,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(137), 1,
      ts_builtin_sym_end,
    STATE(44), 2,
      sym_stmt,
      aux_sym_source_file_repeat1,
    STATE(56), 4,
      sym_on_stmt,
      sym_run_on_stmt,
      sym_let_stmt,
      sym_func_call_expr,
  [1199] = 8,
    ACTIONS(139), 1,
      ts_builtin_sym_end,
    ACTIONS(141), 1,
      anon_sym_on,
    ACTIONS(144), 1,
      anon_sym_run_on,
    ACTIONS(147), 1,
      anon_sym_let,
    ACTIONS(150), 1,
      sym_ident,
    ACTIONS(153), 1,
      sym_comment,
    STATE(44), 2,
      sym_stmt,
      aux_sym_source_file_repeat1,
    STATE(56), 4,
      sym_on_stmt,
      sym_run_on_stmt,
      sym_let_stmt,
      sym_func_call_expr,
  [1228] = 3,
    ACTIONS(158), 1,
      aux_sym_run_on_stmt_token1,
    ACTIONS(160), 1,
      anon_sym_LPAREN2,
    ACTIONS(156), 9,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_string_ident_token1,
  [1246] = 2,
    ACTIONS(164), 1,
      aux_sym_run_on_stmt_token1,
    ACTIONS(162), 9,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_string_ident_token1,
  [1261] = 2,
    ACTIONS(37), 1,
      aux_sym_run_on_stmt_token1,
    ACTIONS(39), 9,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_string_ident_token1,
  [1276] = 2,
    ACTIONS(158), 1,
      aux_sym_run_on_stmt_token1,
    ACTIONS(156), 9,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_string_ident_token1,
  [1291] = 2,
    ACTIONS(41), 1,
      aux_sym_run_on_stmt_token1,
    ACTIONS(43), 9,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_string_ident_token1,
  [1306] = 2,
    ACTIONS(168), 1,
      anon_sym_LPAREN,
    ACTIONS(166), 8,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_string_ident_token1,
  [1320] = 3,
    ACTIONS(174), 1,
      anon_sym_where,
    ACTIONS(170), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(172), 4,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_let,
      sym_ident,
  [1334] = 2,
    ACTIONS(176), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(178), 4,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_let,
      sym_ident,
  [1345] = 5,
    ACTIONS(180), 1,
      aux_sym_func_call_expr_token1,
    ACTIONS(182), 1,
      anon_sym_LPAREN,
    ACTIONS(184), 1,
      aux_sym_string_ident_token1,
    STATE(62), 1,
      sym_paren_expr,
    STATE(55), 2,
      sym_string_ident,
      aux_sym_func_call_expr_repeat1,
  [1362] = 2,
    ACTIONS(186), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(188), 4,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_let,
      sym_ident,
  [1373] = 5,
    ACTIONS(182), 1,
      anon_sym_LPAREN,
    ACTIONS(184), 1,
      aux_sym_string_ident_token1,
    ACTIONS(190), 1,
      aux_sym_func_call_expr_token1,
    STATE(62), 1,
      sym_paren_expr,
    STATE(57), 2,
      sym_string_ident,
      aux_sym_func_call_expr_repeat1,
  [1390] = 2,
    ACTIONS(192), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(194), 4,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_let,
      sym_ident,
  [1401] = 5,
    ACTIONS(196), 1,
      aux_sym_func_call_expr_token1,
    ACTIONS(198), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      aux_sym_string_ident_token1,
    STATE(62), 1,
      sym_paren_expr,
    STATE(57), 2,
      sym_string_ident,
      aux_sym_func_call_expr_repeat1,
  [1418] = 2,
    ACTIONS(204), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(206), 4,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_let,
      sym_ident,
  [1429] = 3,
    ACTIONS(158), 1,
      aux_sym_func_call_expr_token1,
    ACTIONS(208), 1,
      anon_sym_LPAREN2,
    ACTIONS(156), 2,
      anon_sym_LPAREN,
      aux_sym_string_ident_token1,
  [1440] = 3,
    ACTIONS(210), 1,
      anon_sym_DQUOTE,
    ACTIONS(212), 1,
      aux_sym_string_token1,
    STATE(64), 1,
      aux_sym_string_repeat1,
  [1450] = 2,
    ACTIONS(164), 1,
      aux_sym_func_call_expr_token1,
    ACTIONS(162), 2,
      anon_sym_LPAREN,
      aux_sym_string_ident_token1,
  [1458] = 2,
    ACTIONS(158), 1,
      aux_sym_func_call_expr_token1,
    ACTIONS(156), 2,
      anon_sym_LPAREN,
      aux_sym_string_ident_token1,
  [1466] = 2,
    ACTIONS(37), 1,
      aux_sym_func_call_expr_token1,
    ACTIONS(39), 2,
      anon_sym_LPAREN,
      aux_sym_string_ident_token1,
  [1474] = 3,
    ACTIONS(214), 1,
      anon_sym_DQUOTE,
    ACTIONS(216), 1,
      aux_sym_string_token1,
    STATE(65), 1,
      aux_sym_string_repeat1,
  [1484] = 3,
    ACTIONS(218), 1,
      anon_sym_DQUOTE,
    ACTIONS(220), 1,
      aux_sym_string_token1,
    STATE(65), 1,
      aux_sym_string_repeat1,
  [1494] = 3,
    ACTIONS(223), 1,
      anon_sym_DQUOTE,
    ACTIONS(225), 1,
      aux_sym_string_token1,
    STATE(67), 1,
      aux_sym_string_repeat1,
  [1504] = 3,
    ACTIONS(216), 1,
      aux_sym_string_token1,
    ACTIONS(227), 1,
      anon_sym_DQUOTE,
    STATE(65), 1,
      aux_sym_string_repeat1,
  [1514] = 2,
    ACTIONS(229), 1,
      anon_sym_image,
    STATE(42), 1,
      sym_run_on_type,
  [1521] = 2,
    ACTIONS(231), 1,
      anon_sym_mut,
    ACTIONS(233), 1,
      sym_ident,
  [1528] = 1,
    ACTIONS(235), 1,
      sym_ident,
  [1532] = 1,
    ACTIONS(237), 1,
      aux_sym_string_ident_token2,
  [1536] = 1,
    ACTIONS(239), 1,
      anon_sym_EQ,
  [1540] = 1,
    ACTIONS(241), 1,
      anon_sym_EQ,
  [1544] = 1,
    ACTIONS(243), 1,
      ts_builtin_sym_end,
  [1548] = 1,
    ACTIONS(245), 1,
      sym_event_type,
  [1552] = 1,
    ACTIONS(247), 1,
      aux_sym_string_ident_token2,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 25,
  [SMALL_STATE(4)] = 54,
  [SMALL_STATE(5)] = 83,
  [SMALL_STATE(6)] = 112,
  [SMALL_STATE(7)] = 137,
  [SMALL_STATE(8)] = 162,
  [SMALL_STATE(9)] = 187,
  [SMALL_STATE(10)] = 212,
  [SMALL_STATE(11)] = 237,
  [SMALL_STATE(12)] = 262,
  [SMALL_STATE(13)] = 287,
  [SMALL_STATE(14)] = 326,
  [SMALL_STATE(15)] = 365,
  [SMALL_STATE(16)] = 404,
  [SMALL_STATE(17)] = 443,
  [SMALL_STATE(18)] = 482,
  [SMALL_STATE(19)] = 521,
  [SMALL_STATE(20)] = 560,
  [SMALL_STATE(21)] = 599,
  [SMALL_STATE(22)] = 638,
  [SMALL_STATE(23)] = 677,
  [SMALL_STATE(24)] = 716,
  [SMALL_STATE(25)] = 755,
  [SMALL_STATE(26)] = 794,
  [SMALL_STATE(27)] = 814,
  [SMALL_STATE(28)] = 836,
  [SMALL_STATE(29)] = 858,
  [SMALL_STATE(30)] = 880,
  [SMALL_STATE(31)] = 900,
  [SMALL_STATE(32)] = 922,
  [SMALL_STATE(33)] = 942,
  [SMALL_STATE(34)] = 964,
  [SMALL_STATE(35)] = 986,
  [SMALL_STATE(36)] = 1006,
  [SMALL_STATE(37)] = 1026,
  [SMALL_STATE(38)] = 1046,
  [SMALL_STATE(39)] = 1066,
  [SMALL_STATE(40)] = 1086,
  [SMALL_STATE(41)] = 1115,
  [SMALL_STATE(42)] = 1144,
  [SMALL_STATE(43)] = 1170,
  [SMALL_STATE(44)] = 1199,
  [SMALL_STATE(45)] = 1228,
  [SMALL_STATE(46)] = 1246,
  [SMALL_STATE(47)] = 1261,
  [SMALL_STATE(48)] = 1276,
  [SMALL_STATE(49)] = 1291,
  [SMALL_STATE(50)] = 1306,
  [SMALL_STATE(51)] = 1320,
  [SMALL_STATE(52)] = 1334,
  [SMALL_STATE(53)] = 1345,
  [SMALL_STATE(54)] = 1362,
  [SMALL_STATE(55)] = 1373,
  [SMALL_STATE(56)] = 1390,
  [SMALL_STATE(57)] = 1401,
  [SMALL_STATE(58)] = 1418,
  [SMALL_STATE(59)] = 1429,
  [SMALL_STATE(60)] = 1440,
  [SMALL_STATE(61)] = 1450,
  [SMALL_STATE(62)] = 1458,
  [SMALL_STATE(63)] = 1466,
  [SMALL_STATE(64)] = 1474,
  [SMALL_STATE(65)] = 1484,
  [SMALL_STATE(66)] = 1494,
  [SMALL_STATE(67)] = 1504,
  [SMALL_STATE(68)] = 1514,
  [SMALL_STATE(69)] = 1521,
  [SMALL_STATE(70)] = 1528,
  [SMALL_STATE(71)] = 1532,
  [SMALL_STATE(72)] = 1536,
  [SMALL_STATE(73)] = 1540,
  [SMALL_STATE(74)] = 1544,
  [SMALL_STATE(75)] = 1548,
  [SMALL_STATE(76)] = 1552,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expr, 2),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expr, 2),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_stmt, 4),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_stmt, 4),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_stmt, 4, .production_id = 1),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_on_stmt, 4, .production_id = 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_stmt, 5),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_stmt, 5),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_literal, 1),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_literal, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paren_expr, 3),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paren_expr, 3),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expr, 3),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expr, 3),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_run_on_stmt_repeat1, 2), SHIFT_REPEAT(41),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_on_stmt_repeat1, 2),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_run_on_stmt_repeat1, 2), SHIFT_REPEAT(17),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_run_on_stmt_repeat1, 2), SHIFT_REPEAT(49),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_run_on_stmt_repeat1, 2), SHIFT_REPEAT(45),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(75),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(68),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(69),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(53),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(56),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_ident, 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_ident, 1),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_ident, 5),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_ident, 5),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_run_on_type, 1),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_on_type, 1),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_stmt, 2, .production_id = 1),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_on_stmt, 2, .production_id = 1),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call_expr, 2),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call_expr, 2),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_on_stmt, 4, .production_id = 2),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_run_on_stmt, 4, .production_id = 2),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt, 1),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stmt, 1),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_call_expr_repeat1, 2),
  [198] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_call_expr_repeat1, 2), SHIFT_REPEAT(15),
  [201] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_call_expr_repeat1, 2), SHIFT_REPEAT(59),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call_expr, 3),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call_expr, 3),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [220] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(65),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [243] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
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
