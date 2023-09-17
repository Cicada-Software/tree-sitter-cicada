#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 95
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 67
#define ALIAS_COUNT 0
#define TOKEN_COUNT 46
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
  anon_sym_cache = 43,
  anon_sym_using = 44,
  sym_comment = 45,
  sym_source_file = 46,
  sym_stmt = 47,
  sym_on_stmt = 48,
  sym_run_on_type = 49,
  sym_run_on_stmt = 50,
  sym_if_expr = 51,
  sym_let_stmt = 52,
  sym_expr = 53,
  sym_func_call_expr = 54,
  sym_paren_expr = 55,
  sym_number = 56,
  sym_bool_literal = 57,
  sym_string = 58,
  sym_string_ident = 59,
  sym_unary_expr = 60,
  sym_binary_expr = 61,
  sym_cache_stmt = 62,
  aux_sym_source_file_repeat1 = 63,
  aux_sym_run_on_stmt_repeat1 = 64,
  aux_sym_func_call_expr_repeat1 = 65,
  aux_sym_string_repeat1 = 66,
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
  [anon_sym_cache] = "cache",
  [anon_sym_using] = "using",
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
  [sym_cache_stmt] = "cache_stmt",
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
  [anon_sym_cache] = anon_sym_cache,
  [anon_sym_using] = anon_sym_using,
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
  [sym_cache_stmt] = sym_cache_stmt,
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
  [anon_sym_cache] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_using] = {
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
  [sym_cache_stmt] = {
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
  [15] = 14,
  [16] = 16,
  [17] = 14,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 14,
  [23] = 23,
  [24] = 16,
  [25] = 18,
  [26] = 26,
  [27] = 21,
  [28] = 18,
  [29] = 29,
  [30] = 14,
  [31] = 31,
  [32] = 11,
  [33] = 13,
  [34] = 12,
  [35] = 4,
  [36] = 10,
  [37] = 6,
  [38] = 38,
  [39] = 2,
  [40] = 7,
  [41] = 41,
  [42] = 42,
  [43] = 42,
  [44] = 41,
  [45] = 42,
  [46] = 41,
  [47] = 41,
  [48] = 41,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 7,
  [56] = 56,
  [57] = 57,
  [58] = 13,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 67,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 53,
  [73] = 53,
  [74] = 56,
  [75] = 13,
  [76] = 56,
  [77] = 54,
  [78] = 78,
  [79] = 79,
  [80] = 78,
  [81] = 13,
  [82] = 79,
  [83] = 83,
  [84] = 54,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 89,
  [92] = 92,
  [93] = 93,
  [94] = 89,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(70);
      if (lookahead == '"') ADVANCE(111);
      if (lookahead == '#') ADVANCE(184);
      if (lookahead == '(') ADVANCE(122);
      if (lookahead == ')') ADVANCE(96);
      if (lookahead == '*') ADVANCE(164);
      if (lookahead == '+') ADVANCE(163);
      if (lookahead == '-') ADVANCE(80);
      if (lookahead == '/') ADVANCE(84);
      if (lookahead == '0') ADVANCE(103);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == '<') ADVANCE(166);
      if (lookahead == '=') ADVANCE(93);
      if (lookahead == '>') ADVANCE(168);
      if (lookahead == '^') ADVANCE(165);
      if (lookahead == 'a') ADVANCE(39);
      if (lookahead == 'c') ADVANCE(12);
      if (lookahead == 'f') ADVANCE(13);
      if (lookahead == 'i') ADVANCE(28);
      if (lookahead == 'l') ADVANCE(19);
      if (lookahead == 'm') ADVANCE(45);
      if (lookahead == 'n') ADVANCE(47);
      if (lookahead == 'o') ADVANCE(40);
      if (lookahead == 'r') ADVANCE(59);
      if (lookahead == 's') ADVANCE(25);
      if (lookahead == 't') ADVANCE(50);
      if (lookahead == 'u') ADVANCE(52);
      if (lookahead == 'w') ADVANCE(32);
      if (lookahead == 'x') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(66)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(105);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '(') ADVANCE(122);
      if (lookahead == '-') ADVANCE(81);
      if (lookahead == '/') ADVANCE(85);
      if (lookahead == '0') ADVANCE(104);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (lookahead != 0) ADVANCE(121);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '(') ADVANCE(95);
      if (lookahead == '-') ADVANCE(81);
      if (lookahead == '/') ADVANCE(85);
      if (lookahead == '0') ADVANCE(104);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (lookahead != 0) ADVANCE(121);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(94);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '(') ADVANCE(122);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if (lookahead != 0) ADVANCE(121);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(94);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '(') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if (lookahead != 0) ADVANCE(121);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '"') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(113);
      if (lookahead != 0) ADVANCE(112);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(111);
      if (lookahead == '(') ADVANCE(95);
      if (lookahead == '-') ADVANCE(80);
      if (lookahead == '0') ADVANCE(103);
      if (lookahead == 'f') ADVANCE(126);
      if (lookahead == 'n') ADVANCE(147);
      if (lookahead == 't') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 7:
      if (lookahead == '(') ADVANCE(122);
      if (lookahead == 'u') ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0) ADVANCE(121);
      END_STATE();
    case 8:
      if (lookahead == '(') ADVANCE(95);
      if (lookahead == 'u') ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0) ADVANCE(121);
      END_STATE();
    case 9:
      if (lookahead == '(') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead != 0) ADVANCE(121);
      END_STATE();
    case 10:
      if (lookahead == '_') ADVANCE(33);
      END_STATE();
    case 11:
      if (lookahead == '_') ADVANCE(48);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(15);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(34);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(170);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(172);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(77);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 28:
      if (lookahead == 'f') ADVANCE(87);
      if (lookahead == 'm') ADVANCE(14);
      if (lookahead == 's') ADVANCE(176);
      END_STATE();
    case 29:
      if (lookahead == 'f') ADVANCE(10);
      END_STATE();
    case 30:
      if (lookahead == 'g') ADVANCE(182);
      END_STATE();
    case 31:
      if (lookahead == 'g') ADVANCE(23);
      END_STATE();
    case 32:
      if (lookahead == 'h') ADVANCE(26);
      END_STATE();
    case 33:
      if (lookahead == 'h') ADVANCE(46);
      END_STATE();
    case 34:
      if (lookahead == 'h') ADVANCE(21);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 38:
      if (lookahead == 'm') ADVANCE(159);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(72);
      if (lookahead == 'r') ADVANCE(174);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 44:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 45:
      if (lookahead == 'o') ADVANCE(17);
      if (lookahead == 'u') ADVANCE(56);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 49:
      if (lookahead == 'r') ADVANCE(178);
      END_STATE();
    case 50:
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 51:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 52:
      if (lookahead == 's') ADVANCE(35);
      END_STATE();
    case 53:
      if (lookahead == 's') ADVANCE(58);
      END_STATE();
    case 54:
      if (lookahead == 's') ADVANCE(22);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(161);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 59:
      if (lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 60:
      if (lookahead == 'u') ADVANCE(20);
      END_STATE();
    case 61:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(97);
      END_STATE();
    case 62:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(62)
      if (lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 63:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(63)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(99);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(101);
      END_STATE();
    case 66:
      if (eof) ADVANCE(70);
      if (lookahead == '"') ADVANCE(111);
      if (lookahead == '#') ADVANCE(184);
      if (lookahead == '(') ADVANCE(95);
      if (lookahead == ')') ADVANCE(96);
      if (lookahead == '*') ADVANCE(164);
      if (lookahead == '+') ADVANCE(163);
      if (lookahead == '-') ADVANCE(80);
      if (lookahead == '/') ADVANCE(84);
      if (lookahead == '0') ADVANCE(103);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == '<') ADVANCE(166);
      if (lookahead == '=') ADVANCE(93);
      if (lookahead == '>') ADVANCE(168);
      if (lookahead == '^') ADVANCE(165);
      if (lookahead == 'a') ADVANCE(39);
      if (lookahead == 'c') ADVANCE(12);
      if (lookahead == 'f') ADVANCE(13);
      if (lookahead == 'i') ADVANCE(28);
      if (lookahead == 'l') ADVANCE(19);
      if (lookahead == 'm') ADVANCE(45);
      if (lookahead == 'n') ADVANCE(47);
      if (lookahead == 'o') ADVANCE(40);
      if (lookahead == 'r') ADVANCE(59);
      if (lookahead == 's') ADVANCE(25);
      if (lookahead == 't') ADVANCE(50);
      if (lookahead == 'u') ADVANCE(52);
      if (lookahead == 'w') ADVANCE(32);
      if (lookahead == 'x') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(66)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(105);
      END_STATE();
    case 67:
      if (eof) ADVANCE(70);
      if (lookahead == '#') ADVANCE(184);
      if (lookahead == '*') ADVANCE(164);
      if (lookahead == '+') ADVANCE(163);
      if (lookahead == '-') ADVANCE(80);
      if (lookahead == '/') ADVANCE(84);
      if (lookahead == '<') ADVANCE(166);
      if (lookahead == '>') ADVANCE(168);
      if (lookahead == '^') ADVANCE(165);
      if (lookahead == 'a') ADVANCE(145);
      if (lookahead == 'c') ADVANCE(125);
      if (lookahead == 'i') ADVANCE(136);
      if (lookahead == 'l') ADVANCE(130);
      if (lookahead == 'm') ADVANCE(148);
      if (lookahead == 'o') ADVANCE(141);
      if (lookahead == 'r') ADVANCE(157);
      if (lookahead == 'x') ADVANCE(146);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(67)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 68:
      if (eof) ADVANCE(70);
      if (lookahead == '#') ADVANCE(184);
      if (lookahead == 'c') ADVANCE(125);
      if (lookahead == 'i') ADVANCE(137);
      if (lookahead == 'l') ADVANCE(130);
      if (lookahead == 'o') ADVANCE(142);
      if (lookahead == 'r') ADVANCE(157);
      if (lookahead == 'w') ADVANCE(139);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(68)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 69:
      if (eof) ADVANCE(70);
      if (lookahead == '#') ADVANCE(184);
      if (lookahead == 'c') ADVANCE(125);
      if (lookahead == 'i') ADVANCE(137);
      if (lookahead == 'l') ADVANCE(130);
      if (lookahead == 'o') ADVANCE(142);
      if (lookahead == 'r') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(69)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_event_type);
      if (lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_on);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_image);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_self_hosted);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_run_on);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_run_on);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(121);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(121);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(121);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_run_on_stmt_token1);
      if (lookahead == '\n') ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_mut);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_mut);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_func_call_expr_token1);
      if (lookahead == '\n') ADVANCE(94);
      if (lookahead == '\r') ADVANCE(4);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(121);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(121);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(121);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (lookahead == 'b') ADVANCE(61);
      if (lookahead == 'o') ADVANCE(64);
      if (lookahead == 'x') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (lookahead == 'b') ADVANCE(118);
      if (lookahead == 'o') ADVANCE(119);
      if (lookahead == 'x') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(121);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(121);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(112);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'g') ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(121);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'i') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(121);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'n') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(121);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 's') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(121);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(121);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(121);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(121);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_string_ident_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ')') ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(127);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(140);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(138);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(171);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(173);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(154);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(181);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(108);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(110);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(75);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(152);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(88);
      if (lookahead == 's') ADVANCE(177);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(88);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'h') ADVANCE(131);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'h') ADVANCE(135);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(153);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(73);
      if (lookahead == 'r') ADVANCE(175);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(73);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(124);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(79);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(128);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(150);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(155);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(129);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(144);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(179);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(158);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(134);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(133);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(90);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(162);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(92);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(143);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(132);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(156);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(167);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(169);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_mod);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_mod);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_is);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_xor);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_xor);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_cache);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_cache);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_using);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(121);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(184);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 69},
  [2] = {.lex_state = 67},
  [3] = {.lex_state = 67},
  [4] = {.lex_state = 67},
  [5] = {.lex_state = 67},
  [6] = {.lex_state = 67},
  [7] = {.lex_state = 67},
  [8] = {.lex_state = 67},
  [9] = {.lex_state = 67},
  [10] = {.lex_state = 67},
  [11] = {.lex_state = 67},
  [12] = {.lex_state = 67},
  [13] = {.lex_state = 67},
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
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 69},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 69},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 68},
  [60] = {.lex_state = 69},
  [61] = {.lex_state = 69},
  [62] = {.lex_state = 69},
  [63] = {.lex_state = 69},
  [64] = {.lex_state = 69},
  [65] = {.lex_state = 69},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 8},
  [69] = {.lex_state = 8},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 9},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 7},
  [74] = {.lex_state = 8},
  [75] = {.lex_state = 8},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 8},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 5},
  [80] = {.lex_state = 5},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 5},
  [83] = {.lex_state = 5},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 38},
  [87] = {.lex_state = 62},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 123},
  [90] = {.lex_state = 63},
  [91] = {.lex_state = 123},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 123},
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
    [anon_sym_cache] = ACTIONS(1),
    [anon_sym_using] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(92),
    [sym_stmt] = STATE(38),
    [sym_on_stmt] = STATE(62),
    [sym_run_on_stmt] = STATE(62),
    [sym_if_expr] = STATE(62),
    [sym_let_stmt] = STATE(62),
    [sym_func_call_expr] = STATE(62),
    [sym_cache_stmt] = STATE(62),
    [aux_sym_source_file_repeat1] = STATE(38),
    [anon_sym_on] = ACTIONS(3),
    [anon_sym_run_on] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [sym_ident] = ACTIONS(11),
    [anon_sym_cache] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(17), 9,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_comment,
    ACTIONS(19), 13,
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
      anon_sym_cache,
  [27] = 4,
    ACTIONS(21), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(23), 6,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      sym_ident,
      anon_sym_cache,
    ACTIONS(25), 7,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(27), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_mod,
      anon_sym_or,
      anon_sym_is,
      anon_sym_xor,
  [58] = 2,
    ACTIONS(29), 9,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_comment,
    ACTIONS(31), 13,
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
      anon_sym_cache,
  [85] = 4,
    ACTIONS(33), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(35), 6,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      sym_ident,
      anon_sym_cache,
    ACTIONS(25), 7,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(27), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_mod,
      anon_sym_or,
      anon_sym_is,
      anon_sym_xor,
  [116] = 2,
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
    ACTIONS(39), 13,
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
      anon_sym_cache,
  [143] = 2,
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
    ACTIONS(43), 13,
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
      anon_sym_cache,
  [170] = 4,
    ACTIONS(45), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(47), 6,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      sym_ident,
      anon_sym_cache,
    ACTIONS(25), 7,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(27), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_mod,
      anon_sym_or,
      anon_sym_is,
      anon_sym_xor,
  [201] = 4,
    ACTIONS(49), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(51), 6,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      sym_ident,
      anon_sym_cache,
    ACTIONS(25), 7,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(27), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_mod,
      anon_sym_or,
      anon_sym_is,
      anon_sym_xor,
  [232] = 2,
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
    ACTIONS(55), 13,
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
      anon_sym_cache,
  [259] = 2,
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
    ACTIONS(59), 13,
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
      anon_sym_cache,
  [286] = 2,
    ACTIONS(61), 9,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_comment,
    ACTIONS(63), 13,
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
      anon_sym_cache,
  [313] = 2,
    ACTIONS(65), 9,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_comment,
    ACTIONS(67), 13,
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
      anon_sym_cache,
  [340] = 10,
    ACTIONS(69), 1,
      anon_sym_DASH,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      aux_sym_number_token4,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      sym_ident,
    ACTIONS(83), 1,
      anon_sym_not,
    STATE(48), 1,
      sym_expr,
    ACTIONS(77), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(73), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(36), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [379] = 10,
    ACTIONS(69), 1,
      anon_sym_DASH,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      aux_sym_number_token4,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      sym_ident,
    ACTIONS(83), 1,
      anon_sym_not,
    STATE(44), 1,
      sym_expr,
    ACTIONS(77), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(73), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(36), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [418] = 10,
    ACTIONS(69), 1,
      anon_sym_DASH,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      aux_sym_number_token4,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      sym_ident,
    ACTIONS(83), 1,
      anon_sym_not,
    STATE(32), 1,
      sym_expr,
    ACTIONS(77), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(73), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(36), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [457] = 10,
    ACTIONS(69), 1,
      anon_sym_DASH,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      aux_sym_number_token4,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      sym_ident,
    ACTIONS(83), 1,
      anon_sym_not,
    STATE(46), 1,
      sym_expr,
    ACTIONS(77), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(73), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(36), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [496] = 10,
    ACTIONS(69), 1,
      anon_sym_DASH,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      aux_sym_number_token4,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      sym_ident,
    ACTIONS(83), 1,
      anon_sym_not,
    STATE(42), 1,
      sym_expr,
    ACTIONS(77), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(73), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(36), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [535] = 10,
    ACTIONS(85), 1,
      anon_sym_DASH,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      aux_sym_number_token4,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      sym_ident,
    ACTIONS(99), 1,
      anon_sym_not,
    STATE(5), 1,
      sym_expr,
    ACTIONS(93), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(89), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(10), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [574] = 10,
    ACTIONS(85), 1,
      anon_sym_DASH,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      aux_sym_number_token4,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      sym_ident,
    ACTIONS(99), 1,
      anon_sym_not,
    STATE(9), 1,
      sym_expr,
    ACTIONS(93), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(89), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(10), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [613] = 10,
    ACTIONS(69), 1,
      anon_sym_DASH,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      aux_sym_number_token4,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      sym_ident,
    ACTIONS(83), 1,
      anon_sym_not,
    STATE(37), 1,
      sym_expr,
    ACTIONS(77), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(73), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(36), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [652] = 10,
    ACTIONS(69), 1,
      anon_sym_DASH,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      aux_sym_number_token4,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      sym_ident,
    ACTIONS(83), 1,
      anon_sym_not,
    STATE(41), 1,
      sym_expr,
    ACTIONS(77), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(73), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(36), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [691] = 10,
    ACTIONS(85), 1,
      anon_sym_DASH,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      aux_sym_number_token4,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      sym_ident,
    ACTIONS(99), 1,
      anon_sym_not,
    STATE(8), 1,
      sym_expr,
    ACTIONS(93), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(89), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(10), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [730] = 10,
    ACTIONS(85), 1,
      anon_sym_DASH,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      aux_sym_number_token4,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      sym_ident,
    ACTIONS(99), 1,
      anon_sym_not,
    STATE(11), 1,
      sym_expr,
    ACTIONS(93), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(89), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(10), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [769] = 10,
    ACTIONS(69), 1,
      anon_sym_DASH,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      aux_sym_number_token4,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      sym_ident,
    ACTIONS(83), 1,
      anon_sym_not,
    STATE(43), 1,
      sym_expr,
    ACTIONS(77), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(73), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(36), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [808] = 10,
    ACTIONS(69), 1,
      anon_sym_DASH,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      aux_sym_number_token4,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      sym_ident,
    ACTIONS(83), 1,
      anon_sym_not,
    STATE(49), 1,
      sym_expr,
    ACTIONS(77), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(73), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(36), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [847] = 10,
    ACTIONS(85), 1,
      anon_sym_DASH,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      aux_sym_number_token4,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      sym_ident,
    ACTIONS(99), 1,
      anon_sym_not,
    STATE(6), 1,
      sym_expr,
    ACTIONS(93), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(89), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(10), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [886] = 10,
    ACTIONS(69), 1,
      anon_sym_DASH,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      aux_sym_number_token4,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      sym_ident,
    ACTIONS(83), 1,
      anon_sym_not,
    STATE(45), 1,
      sym_expr,
    ACTIONS(77), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(73), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(36), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [925] = 10,
    ACTIONS(85), 1,
      anon_sym_DASH,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      aux_sym_number_token4,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      sym_ident,
    ACTIONS(99), 1,
      anon_sym_not,
    STATE(3), 1,
      sym_expr,
    ACTIONS(93), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(89), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(10), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [964] = 10,
    ACTIONS(69), 1,
      anon_sym_DASH,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      aux_sym_number_token4,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      sym_ident,
    ACTIONS(83), 1,
      anon_sym_not,
    STATE(47), 1,
      sym_expr,
    ACTIONS(77), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(73), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(36), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [1003] = 10,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
    ACTIONS(103), 1,
      anon_sym_on,
    ACTIONS(106), 1,
      anon_sym_run_on,
    ACTIONS(109), 1,
      anon_sym_if,
    ACTIONS(112), 1,
      anon_sym_let,
    ACTIONS(115), 1,
      sym_ident,
    ACTIONS(118), 1,
      anon_sym_cache,
    ACTIONS(121), 1,
      sym_comment,
    STATE(31), 2,
      sym_stmt,
      aux_sym_source_file_repeat1,
    STATE(62), 6,
      sym_on_stmt,
      sym_run_on_stmt,
      sym_if_expr,
      sym_let_stmt,
      sym_func_call_expr,
      sym_cache_stmt,
  [1040] = 2,
    ACTIONS(59), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(57), 14,
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
  [1061] = 2,
    ACTIONS(67), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(65), 14,
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
  [1082] = 2,
    ACTIONS(63), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 14,
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
  [1103] = 2,
    ACTIONS(31), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(29), 14,
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
  [1124] = 2,
    ACTIONS(55), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(53), 14,
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
  [1145] = 2,
    ACTIONS(39), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(37), 14,
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
  [1166] = 10,
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
      anon_sym_cache,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(124), 1,
      ts_builtin_sym_end,
    STATE(31), 2,
      sym_stmt,
      aux_sym_source_file_repeat1,
    STATE(62), 6,
      sym_on_stmt,
      sym_run_on_stmt,
      sym_if_expr,
      sym_let_stmt,
      sym_func_call_expr,
      sym_cache_stmt,
  [1203] = 2,
    ACTIONS(19), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(17), 14,
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
  [1224] = 2,
    ACTIONS(43), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(41), 14,
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
  [1245] = 3,
    ACTIONS(128), 1,
      anon_sym_RPAREN,
    ACTIONS(130), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(126), 12,
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
  [1267] = 3,
    ACTIONS(132), 1,
      anon_sym_RPAREN,
    ACTIONS(130), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(126), 12,
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
  [1289] = 3,
    ACTIONS(134), 1,
      anon_sym_RPAREN,
    ACTIONS(130), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(126), 12,
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
  [1311] = 3,
    ACTIONS(136), 1,
      anon_sym_RPAREN,
    ACTIONS(130), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(126), 12,
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
  [1333] = 3,
    ACTIONS(138), 1,
      anon_sym_RPAREN,
    ACTIONS(130), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(126), 12,
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
  [1355] = 3,
    ACTIONS(140), 1,
      anon_sym_RPAREN,
    ACTIONS(130), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(126), 12,
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
  [1377] = 3,
    ACTIONS(142), 1,
      anon_sym_RPAREN,
    ACTIONS(130), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(126), 12,
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
  [1399] = 3,
    ACTIONS(144), 1,
      anon_sym_RPAREN,
    ACTIONS(130), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(126), 12,
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
  [1421] = 3,
    ACTIONS(146), 1,
      anon_sym_COLON,
    ACTIONS(130), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(126), 12,
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
  [1443] = 7,
    ACTIONS(151), 1,
      aux_sym_run_on_stmt_token1,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    ACTIONS(159), 1,
      aux_sym_string_ident_token1,
    STATE(56), 1,
      sym_paren_expr,
    ACTIONS(148), 3,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
    STATE(50), 3,
      sym_number,
      sym_string_ident,
      aux_sym_run_on_stmt_repeat1,
    ACTIONS(156), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
  [1472] = 7,
    ACTIONS(164), 1,
      aux_sym_run_on_stmt_token1,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(170), 1,
      aux_sym_string_ident_token1,
    STATE(56), 1,
      sym_paren_expr,
    ACTIONS(162), 3,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
    STATE(52), 3,
      sym_number,
      sym_string_ident,
      aux_sym_run_on_stmt_repeat1,
    ACTIONS(168), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
  [1501] = 7,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(170), 1,
      aux_sym_string_ident_token1,
    ACTIONS(174), 1,
      aux_sym_run_on_stmt_token1,
    STATE(56), 1,
      sym_paren_expr,
    ACTIONS(172), 3,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
    STATE(50), 3,
      sym_number,
      sym_string_ident,
      aux_sym_run_on_stmt_repeat1,
    ACTIONS(168), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
  [1530] = 3,
    ACTIONS(178), 1,
      aux_sym_run_on_stmt_token1,
    ACTIONS(180), 1,
      anon_sym_LPAREN2,
    ACTIONS(176), 9,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_string_ident_token1,
  [1548] = 2,
    ACTIONS(184), 1,
      aux_sym_run_on_stmt_token1,
    ACTIONS(182), 9,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_string_ident_token1,
  [1563] = 2,
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
  [1578] = 2,
    ACTIONS(178), 1,
      aux_sym_run_on_stmt_token1,
    ACTIONS(176), 9,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_string_ident_token1,
  [1593] = 2,
    ACTIONS(188), 1,
      aux_sym_run_on_stmt_token1,
    ACTIONS(186), 9,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_string_ident_token1,
  [1608] = 2,
    ACTIONS(65), 1,
      aux_sym_run_on_stmt_token1,
    ACTIONS(67), 9,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_string_ident_token1,
  [1623] = 3,
    ACTIONS(194), 1,
      anon_sym_where,
    ACTIONS(190), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(192), 6,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      sym_ident,
      anon_sym_cache,
  [1639] = 2,
    ACTIONS(196), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(198), 6,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      sym_ident,
      anon_sym_cache,
  [1652] = 2,
    ACTIONS(200), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(202), 6,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      sym_ident,
      anon_sym_cache,
  [1665] = 2,
    ACTIONS(204), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(206), 6,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      sym_ident,
      anon_sym_cache,
  [1678] = 2,
    ACTIONS(208), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(210), 6,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      sym_ident,
      anon_sym_cache,
  [1691] = 2,
    ACTIONS(212), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(214), 6,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      sym_ident,
      anon_sym_cache,
  [1704] = 2,
    ACTIONS(216), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(218), 6,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      sym_ident,
      anon_sym_cache,
  [1717] = 5,
    ACTIONS(220), 1,
      aux_sym_func_call_expr_token1,
    ACTIONS(222), 1,
      anon_sym_LPAREN,
    ACTIONS(224), 1,
      aux_sym_string_ident_token1,
    STATE(76), 1,
      sym_paren_expr,
    STATE(70), 2,
      sym_string_ident,
      aux_sym_func_call_expr_repeat1,
  [1734] = 5,
    ACTIONS(226), 1,
      aux_sym_func_call_expr_token1,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(231), 1,
      aux_sym_string_ident_token1,
    STATE(76), 1,
      sym_paren_expr,
    STATE(67), 2,
      sym_string_ident,
      aux_sym_func_call_expr_repeat1,
  [1751] = 5,
    ACTIONS(234), 1,
      anon_sym_LPAREN,
    ACTIONS(237), 1,
      aux_sym_string_ident_token1,
    ACTIONS(240), 1,
      anon_sym_using,
    STATE(74), 1,
      sym_paren_expr,
    STATE(68), 2,
      sym_string_ident,
      aux_sym_func_call_expr_repeat1,
  [1768] = 5,
    ACTIONS(242), 1,
      anon_sym_LPAREN,
    ACTIONS(244), 1,
      aux_sym_string_ident_token1,
    ACTIONS(246), 1,
      anon_sym_using,
    STATE(74), 1,
      sym_paren_expr,
    STATE(68), 2,
      sym_string_ident,
      aux_sym_func_call_expr_repeat1,
  [1785] = 5,
    ACTIONS(222), 1,
      anon_sym_LPAREN,
    ACTIONS(224), 1,
      aux_sym_string_ident_token1,
    ACTIONS(248), 1,
      aux_sym_func_call_expr_token1,
    STATE(76), 1,
      sym_paren_expr,
    STATE(67), 2,
      sym_string_ident,
      aux_sym_func_call_expr_repeat1,
  [1802] = 4,
    ACTIONS(242), 1,
      anon_sym_LPAREN,
    ACTIONS(250), 1,
      aux_sym_string_ident_token1,
    STATE(74), 1,
      sym_paren_expr,
    STATE(69), 2,
      sym_string_ident,
      aux_sym_func_call_expr_repeat1,
  [1816] = 3,
    ACTIONS(178), 1,
      aux_sym_func_call_expr_token1,
    ACTIONS(252), 1,
      anon_sym_LPAREN2,
    ACTIONS(176), 2,
      anon_sym_LPAREN,
      aux_sym_string_ident_token1,
  [1827] = 2,
    ACTIONS(254), 1,
      anon_sym_LPAREN2,
    ACTIONS(176), 3,
      anon_sym_LPAREN,
      aux_sym_string_ident_token1,
      anon_sym_using,
  [1836] = 2,
    ACTIONS(178), 1,
      anon_sym_LPAREN,
    ACTIONS(176), 2,
      aux_sym_string_ident_token1,
      anon_sym_using,
  [1844] = 2,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 2,
      aux_sym_string_ident_token1,
      anon_sym_using,
  [1852] = 2,
    ACTIONS(178), 1,
      aux_sym_func_call_expr_token1,
    ACTIONS(176), 2,
      anon_sym_LPAREN,
      aux_sym_string_ident_token1,
  [1860] = 2,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(182), 2,
      aux_sym_string_ident_token1,
      anon_sym_using,
  [1868] = 3,
    ACTIONS(256), 1,
      anon_sym_DQUOTE,
    ACTIONS(258), 1,
      aux_sym_string_token1,
    STATE(79), 1,
      aux_sym_string_repeat1,
  [1878] = 3,
    ACTIONS(260), 1,
      anon_sym_DQUOTE,
    ACTIONS(262), 1,
      aux_sym_string_token1,
    STATE(83), 1,
      aux_sym_string_repeat1,
  [1888] = 3,
    ACTIONS(264), 1,
      anon_sym_DQUOTE,
    ACTIONS(266), 1,
      aux_sym_string_token1,
    STATE(82), 1,
      aux_sym_string_repeat1,
  [1898] = 2,
    ACTIONS(65), 1,
      aux_sym_func_call_expr_token1,
    ACTIONS(67), 2,
      anon_sym_LPAREN,
      aux_sym_string_ident_token1,
  [1906] = 3,
    ACTIONS(262), 1,
      aux_sym_string_token1,
    ACTIONS(268), 1,
      anon_sym_DQUOTE,
    STATE(83), 1,
      aux_sym_string_repeat1,
  [1916] = 3,
    ACTIONS(270), 1,
      anon_sym_DQUOTE,
    ACTIONS(272), 1,
      aux_sym_string_token1,
    STATE(83), 1,
      aux_sym_string_repeat1,
  [1926] = 2,
    ACTIONS(184), 1,
      aux_sym_func_call_expr_token1,
    ACTIONS(182), 2,
      anon_sym_LPAREN,
      aux_sym_string_ident_token1,
  [1934] = 2,
    STATE(51), 1,
      sym_run_on_type,
    ACTIONS(275), 2,
      anon_sym_image,
      anon_sym_self_hosted,
  [1942] = 2,
    ACTIONS(277), 1,
      anon_sym_mut,
    ACTIONS(279), 1,
      sym_ident,
  [1949] = 1,
    ACTIONS(281), 1,
      sym_event_type,
  [1953] = 1,
    ACTIONS(283), 1,
      anon_sym_EQ,
  [1957] = 1,
    ACTIONS(285), 1,
      aux_sym_string_ident_token2,
  [1961] = 1,
    ACTIONS(287), 1,
      sym_ident,
  [1965] = 1,
    ACTIONS(289), 1,
      aux_sym_string_ident_token2,
  [1969] = 1,
    ACTIONS(291), 1,
      ts_builtin_sym_end,
  [1973] = 1,
    ACTIONS(293), 1,
      anon_sym_EQ,
  [1977] = 1,
    ACTIONS(295), 1,
      aux_sym_string_ident_token2,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 27,
  [SMALL_STATE(4)] = 58,
  [SMALL_STATE(5)] = 85,
  [SMALL_STATE(6)] = 116,
  [SMALL_STATE(7)] = 143,
  [SMALL_STATE(8)] = 170,
  [SMALL_STATE(9)] = 201,
  [SMALL_STATE(10)] = 232,
  [SMALL_STATE(11)] = 259,
  [SMALL_STATE(12)] = 286,
  [SMALL_STATE(13)] = 313,
  [SMALL_STATE(14)] = 340,
  [SMALL_STATE(15)] = 379,
  [SMALL_STATE(16)] = 418,
  [SMALL_STATE(17)] = 457,
  [SMALL_STATE(18)] = 496,
  [SMALL_STATE(19)] = 535,
  [SMALL_STATE(20)] = 574,
  [SMALL_STATE(21)] = 613,
  [SMALL_STATE(22)] = 652,
  [SMALL_STATE(23)] = 691,
  [SMALL_STATE(24)] = 730,
  [SMALL_STATE(25)] = 769,
  [SMALL_STATE(26)] = 808,
  [SMALL_STATE(27)] = 847,
  [SMALL_STATE(28)] = 886,
  [SMALL_STATE(29)] = 925,
  [SMALL_STATE(30)] = 964,
  [SMALL_STATE(31)] = 1003,
  [SMALL_STATE(32)] = 1040,
  [SMALL_STATE(33)] = 1061,
  [SMALL_STATE(34)] = 1082,
  [SMALL_STATE(35)] = 1103,
  [SMALL_STATE(36)] = 1124,
  [SMALL_STATE(37)] = 1145,
  [SMALL_STATE(38)] = 1166,
  [SMALL_STATE(39)] = 1203,
  [SMALL_STATE(40)] = 1224,
  [SMALL_STATE(41)] = 1245,
  [SMALL_STATE(42)] = 1267,
  [SMALL_STATE(43)] = 1289,
  [SMALL_STATE(44)] = 1311,
  [SMALL_STATE(45)] = 1333,
  [SMALL_STATE(46)] = 1355,
  [SMALL_STATE(47)] = 1377,
  [SMALL_STATE(48)] = 1399,
  [SMALL_STATE(49)] = 1421,
  [SMALL_STATE(50)] = 1443,
  [SMALL_STATE(51)] = 1472,
  [SMALL_STATE(52)] = 1501,
  [SMALL_STATE(53)] = 1530,
  [SMALL_STATE(54)] = 1548,
  [SMALL_STATE(55)] = 1563,
  [SMALL_STATE(56)] = 1578,
  [SMALL_STATE(57)] = 1593,
  [SMALL_STATE(58)] = 1608,
  [SMALL_STATE(59)] = 1623,
  [SMALL_STATE(60)] = 1639,
  [SMALL_STATE(61)] = 1652,
  [SMALL_STATE(62)] = 1665,
  [SMALL_STATE(63)] = 1678,
  [SMALL_STATE(64)] = 1691,
  [SMALL_STATE(65)] = 1704,
  [SMALL_STATE(66)] = 1717,
  [SMALL_STATE(67)] = 1734,
  [SMALL_STATE(68)] = 1751,
  [SMALL_STATE(69)] = 1768,
  [SMALL_STATE(70)] = 1785,
  [SMALL_STATE(71)] = 1802,
  [SMALL_STATE(72)] = 1816,
  [SMALL_STATE(73)] = 1827,
  [SMALL_STATE(74)] = 1836,
  [SMALL_STATE(75)] = 1844,
  [SMALL_STATE(76)] = 1852,
  [SMALL_STATE(77)] = 1860,
  [SMALL_STATE(78)] = 1868,
  [SMALL_STATE(79)] = 1878,
  [SMALL_STATE(80)] = 1888,
  [SMALL_STATE(81)] = 1898,
  [SMALL_STATE(82)] = 1906,
  [SMALL_STATE(83)] = 1916,
  [SMALL_STATE(84)] = 1926,
  [SMALL_STATE(85)] = 1934,
  [SMALL_STATE(86)] = 1942,
  [SMALL_STATE(87)] = 1949,
  [SMALL_STATE(88)] = 1953,
  [SMALL_STATE(89)] = 1957,
  [SMALL_STATE(90)] = 1961,
  [SMALL_STATE(91)] = 1965,
  [SMALL_STATE(92)] = 1969,
  [SMALL_STATE(93)] = 1973,
  [SMALL_STATE(94)] = 1977,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_literal, 1),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_literal, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_stmt, 4, .production_id = 1),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_on_stmt, 4, .production_id = 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_stmt, 4),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_stmt, 4),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expr, 3),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expr, 3),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cache_stmt, 4),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cache_stmt, 4),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_stmt, 5),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_stmt, 5),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expr, 2),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expr, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paren_expr, 3),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paren_expr, 3),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(87),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(85),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(26),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(86),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(66),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(71),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(62),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_run_on_stmt_repeat1, 2), SHIFT_REPEAT(50),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_on_stmt_repeat1, 2),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_run_on_stmt_repeat1, 2), SHIFT_REPEAT(14),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_run_on_stmt_repeat1, 2), SHIFT_REPEAT(55),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_run_on_stmt_repeat1, 2), SHIFT_REPEAT(53),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_ident, 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_ident, 1),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_ident, 5),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_ident, 5),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_run_on_type, 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_on_type, 1),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_stmt, 2, .production_id = 1),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_on_stmt, 2, .production_id = 1),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_on_stmt, 4, .production_id = 2),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_run_on_stmt, 4, .production_id = 2),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call_expr, 3),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call_expr, 3),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt, 1),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stmt, 1),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expr, 3),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expr, 3),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_on_stmt, 3, .production_id = 2),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_run_on_stmt, 3, .production_id = 2),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call_expr, 2),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call_expr, 2),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_call_expr_repeat1, 2),
  [228] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_call_expr_repeat1, 2), SHIFT_REPEAT(22),
  [231] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_call_expr_repeat1, 2), SHIFT_REPEAT(72),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_call_expr_repeat1, 2), SHIFT_REPEAT(15),
  [237] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_call_expr_repeat1, 2), SHIFT_REPEAT(73),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_func_call_expr_repeat1, 2),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [272] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(83),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [291] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
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
