#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 107
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 69
#define ALIAS_COUNT 0
#define TOKEN_COUNT 47
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
  anon_sym_title = 45,
  sym_comment = 46,
  sym_source_file = 47,
  sym_stmt = 48,
  sym_on_stmt = 49,
  sym_run_on_type = 50,
  sym_run_on_stmt = 51,
  sym_if_expr = 52,
  sym_let_stmt = 53,
  sym_expr = 54,
  sym_func_call_expr = 55,
  sym_paren_expr = 56,
  sym_number = 57,
  sym_bool_literal = 58,
  sym_string = 59,
  sym_string_ident = 60,
  sym_unary_expr = 61,
  sym_binary_expr = 62,
  sym_cache_stmt = 63,
  sym_title_stmt = 64,
  aux_sym_source_file_repeat1 = 65,
  aux_sym_run_on_stmt_repeat1 = 66,
  aux_sym_func_call_expr_repeat1 = 67,
  aux_sym_string_repeat1 = 68,
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
  [anon_sym_title] = "title",
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
  [sym_title_stmt] = "title_stmt",
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
  [anon_sym_title] = anon_sym_title,
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
  [sym_title_stmt] = sym_title_stmt,
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
  [anon_sym_title] = {
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
  [sym_title_stmt] = {
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
  [17] = 17,
  [18] = 14,
  [19] = 19,
  [20] = 14,
  [21] = 21,
  [22] = 14,
  [23] = 23,
  [24] = 14,
  [25] = 16,
  [26] = 26,
  [27] = 14,
  [28] = 17,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 16,
  [33] = 16,
  [34] = 21,
  [35] = 8,
  [36] = 2,
  [37] = 3,
  [38] = 13,
  [39] = 10,
  [40] = 11,
  [41] = 4,
  [42] = 12,
  [43] = 43,
  [44] = 44,
  [45] = 43,
  [46] = 43,
  [47] = 43,
  [48] = 43,
  [49] = 44,
  [50] = 43,
  [51] = 51,
  [52] = 44,
  [53] = 44,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 59,
  [61] = 61,
  [62] = 13,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 13,
  [67] = 12,
  [68] = 61,
  [69] = 63,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 54,
  [79] = 54,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 59,
  [84] = 59,
  [85] = 63,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 63,
  [91] = 13,
  [92] = 61,
  [93] = 13,
  [94] = 88,
  [95] = 61,
  [96] = 87,
  [97] = 97,
  [98] = 98,
  [99] = 98,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 98,
  [105] = 98,
  [106] = 106,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(75);
      if (lookahead == '"') ADVANCE(120);
      if (lookahead == '#') ADVANCE(220);
      if (lookahead == '(') ADVANCE(150);
      if (lookahead == ')') ADVANCE(105);
      if (lookahead == '*') ADVANCE(196);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '/') ADVANCE(91);
      if (lookahead == '0') ADVANCE(112);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == '<') ADVANCE(198);
      if (lookahead == '=') ADVANCE(102);
      if (lookahead == '>') ADVANCE(200);
      if (lookahead == '^') ADVANCE(197);
      if (lookahead == 'a') ADVANCE(42);
      if (lookahead == 'c') ADVANCE(12);
      if (lookahead == 'f') ADVANCE(13);
      if (lookahead == 'i') ADVANCE(29);
      if (lookahead == 'l') ADVANCE(19);
      if (lookahead == 'm') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(43);
      if (lookahead == 'r') ADVANCE(62);
      if (lookahead == 's') ADVANCE(26);
      if (lookahead == 't') ADVANCE(37);
      if (lookahead == 'u') ADVANCE(54);
      if (lookahead == 'w') ADVANCE(33);
      if (lookahead == 'x') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(69)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(93);
      if (lookahead == '(') ADVANCE(150);
      if (lookahead == '-') ADVANCE(88);
      if (lookahead == '/') ADVANCE(92);
      if (lookahead == '0') ADVANCE(113);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(93);
      if (lookahead == '(') ADVANCE(104);
      if (lookahead == '-') ADVANCE(88);
      if (lookahead == '/') ADVANCE(92);
      if (lookahead == '0') ADVANCE(113);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(103);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '(') ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(103);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '(') ADVANCE(104);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '"') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(122);
      if (lookahead != 0) ADVANCE(121);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(120);
      if (lookahead == '(') ADVANCE(104);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '0') ADVANCE(112);
      if (lookahead == 'f') ADVANCE(154);
      if (lookahead == 'n') ADVANCE(180);
      if (lookahead == 't') ADVANCE(182);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 7:
      if (lookahead == '(') ADVANCE(150);
      if (lookahead == 'u') ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 8:
      if (lookahead == '(') ADVANCE(104);
      if (lookahead == 'u') ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 9:
      if (lookahead == '(') ADVANCE(104);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 10:
      if (lookahead == '_') ADVANCE(34);
      END_STATE();
    case 11:
      if (lookahead == '_') ADVANCE(51);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(15);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(39);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(35);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(202);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(204);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(83);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 29:
      if (lookahead == 'f') ADVANCE(94);
      if (lookahead == 'm') ADVANCE(14);
      if (lookahead == 's') ADVANCE(208);
      END_STATE();
    case 30:
      if (lookahead == 'f') ADVANCE(10);
      END_STATE();
    case 31:
      if (lookahead == 'g') ADVANCE(215);
      END_STATE();
    case 32:
      if (lookahead == 'g') ADVANCE(23);
      END_STATE();
    case 33:
      if (lookahead == 'h') ADVANCE(27);
      END_STATE();
    case 34:
      if (lookahead == 'h') ADVANCE(49);
      END_STATE();
    case 35:
      if (lookahead == 'h') ADVANCE(21);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(60);
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(56);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 41:
      if (lookahead == 'm') ADVANCE(191);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(77);
      if (lookahead == 'r') ADVANCE(206);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(17);
      if (lookahead == 'u') ADVANCE(58);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 52:
      if (lookahead == 'r') ADVANCE(210);
      END_STATE();
    case 53:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 54:
      if (lookahead == 's') ADVANCE(36);
      END_STATE();
    case 55:
      if (lookahead == 's') ADVANCE(61);
      END_STATE();
    case 56:
      if (lookahead == 's') ADVANCE(22);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(193);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 62:
      if (lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 63:
      if (lookahead == 'u') ADVANCE(20);
      END_STATE();
    case 64:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(106);
      END_STATE();
    case 65:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(65)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 66:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(66)
      if (lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(108);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(110);
      END_STATE();
    case 69:
      if (eof) ADVANCE(75);
      if (lookahead == '"') ADVANCE(120);
      if (lookahead == '#') ADVANCE(220);
      if (lookahead == '(') ADVANCE(104);
      if (lookahead == ')') ADVANCE(105);
      if (lookahead == '*') ADVANCE(196);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '/') ADVANCE(91);
      if (lookahead == '0') ADVANCE(112);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == '<') ADVANCE(198);
      if (lookahead == '=') ADVANCE(102);
      if (lookahead == '>') ADVANCE(200);
      if (lookahead == '^') ADVANCE(197);
      if (lookahead == 'a') ADVANCE(42);
      if (lookahead == 'c') ADVANCE(12);
      if (lookahead == 'f') ADVANCE(13);
      if (lookahead == 'i') ADVANCE(29);
      if (lookahead == 'l') ADVANCE(19);
      if (lookahead == 'm') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(43);
      if (lookahead == 'r') ADVANCE(62);
      if (lookahead == 's') ADVANCE(26);
      if (lookahead == 't') ADVANCE(37);
      if (lookahead == 'u') ADVANCE(54);
      if (lookahead == 'w') ADVANCE(33);
      if (lookahead == 'x') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(69)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 70:
      if (eof) ADVANCE(75);
      if (lookahead == '#') ADVANCE(220);
      if (lookahead == '*') ADVANCE(196);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '/') ADVANCE(91);
      if (lookahead == '<') ADVANCE(198);
      if (lookahead == '>') ADVANCE(200);
      if (lookahead == '^') ADVANCE(197);
      if (lookahead == 'a') ADVANCE(176);
      if (lookahead == 'c') ADVANCE(153);
      if (lookahead == 'i') ADVANCE(165);
      if (lookahead == 'l') ADVANCE(158);
      if (lookahead == 'm') ADVANCE(178);
      if (lookahead == 'o') ADVANCE(172);
      if (lookahead == 'r') ADVANCE(189);
      if (lookahead == 't') ADVANCE(169);
      if (lookahead == 'x') ADVANCE(177);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(70)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 71:
      if (eof) ADVANCE(75);
      if (lookahead == '#') ADVANCE(220);
      if (lookahead == 'c') ADVANCE(153);
      if (lookahead == 'i') ADVANCE(166);
      if (lookahead == 'l') ADVANCE(158);
      if (lookahead == 'o') ADVANCE(173);
      if (lookahead == 'r') ADVANCE(189);
      if (lookahead == 't') ADVANCE(169);
      if (lookahead == 'w') ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(71)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 72:
      if (eof) ADVANCE(75);
      if (lookahead == '#') ADVANCE(220);
      if (lookahead == 'c') ADVANCE(153);
      if (lookahead == 'i') ADVANCE(166);
      if (lookahead == 'l') ADVANCE(158);
      if (lookahead == 'o') ADVANCE(173);
      if (lookahead == 'r') ADVANCE(189);
      if (lookahead == 't') ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(72)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 73:
      if (eof) ADVANCE(75);
      if (lookahead == '#') ADVANCE(145);
      if (lookahead == '(') ADVANCE(150);
      if (lookahead == 'c') ADVANCE(124);
      if (lookahead == 'i') ADVANCE(129);
      if (lookahead == 'l') ADVANCE(126);
      if (lookahead == 'o') ADVANCE(135);
      if (lookahead == 'r') ADVANCE(143);
      if (lookahead == 't') ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(74)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 74:
      if (eof) ADVANCE(75);
      if (lookahead == '#') ADVANCE(145);
      if (lookahead == '(') ADVANCE(104);
      if (lookahead == 'c') ADVANCE(124);
      if (lookahead == 'i') ADVANCE(129);
      if (lookahead == 'l') ADVANCE(126);
      if (lookahead == 'o') ADVANCE(135);
      if (lookahead == 'r') ADVANCE(143);
      if (lookahead == 't') ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(74)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_event_type);
      if (lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_on);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_on);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(149);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_image);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_self_hosted);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_run_on);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_run_on);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_run_on);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(149);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(149);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(149);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(149);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_run_on_stmt_token1);
      if (lookahead == '\n') ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(149);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(149);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_mut);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_mut);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_func_call_expr_token1);
      if (lookahead == '\n') ADVANCE(103);
      if (lookahead == '\r') ADVANCE(4);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(149);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(149);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(149);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (lookahead == 'b') ADVANCE(64);
      if (lookahead == 'o') ADVANCE(67);
      if (lookahead == 'x') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (lookahead == 'b') ADVANCE(144);
      if (lookahead == 'o') ADVANCE(146);
      if (lookahead == 'x') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(149);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(149);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(121);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == '_') ADVANCE(139);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(149);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'a') ADVANCE(125);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(149);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'c') ADVANCE(131);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(149);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'e') ADVANCE(141);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(149);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'e') ADVANCE(214);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(149);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'e') ADVANCE(219);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(149);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'f') ADVANCE(96);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(149);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'g') ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(149);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'h') ADVANCE(127);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(149);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'i') ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(149);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'i') ADVANCE(142);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(149);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'l') ADVANCE(128);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(149);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'n') ADVANCE(79);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(149);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'n') ADVANCE(123);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(149);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'n') ADVANCE(86);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(149);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'n') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(149);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'o') ADVANCE(137);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(149);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 's') ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(149);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 't') ADVANCE(99);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(149);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 't') ADVANCE(134);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(149);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'u') ADVANCE(136);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(149);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(149);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '(') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(149);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(149);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(149);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_string_ident_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ')') ADVANCE(151);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_') ADVANCE(179);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(155);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(170);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(167);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(203);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(205);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(185);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(213);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(218);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(117);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(119);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(81);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(183);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(95);
      if (lookahead == 's') ADVANCE(209);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(95);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'h') ADVANCE(159);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'h') ADVANCE(164);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(186);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(184);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(160);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(78);
      if (lookahead == 'r') ADVANCE(207);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(78);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(152);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(85);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(156);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(181);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(157);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(175);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(187);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(211);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(190);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(163);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(162);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(98);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(171);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(194);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(101);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(174);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(161);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(188);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(199);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(201);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_mod);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_mod);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_is);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_xor);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_xor);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_cache);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_cache);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_cache);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(149);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_using);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(149);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_title);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_title);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_title);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(149);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(220);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 72},
  [2] = {.lex_state = 70},
  [3] = {.lex_state = 70},
  [4] = {.lex_state = 70},
  [5] = {.lex_state = 70},
  [6] = {.lex_state = 70},
  [7] = {.lex_state = 70},
  [8] = {.lex_state = 70},
  [9] = {.lex_state = 70},
  [10] = {.lex_state = 70},
  [11] = {.lex_state = 70},
  [12] = {.lex_state = 70},
  [13] = {.lex_state = 70},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 72},
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
  [30] = {.lex_state = 72},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
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
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 74},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 74},
  [59] = {.lex_state = 73},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 74},
  [62] = {.lex_state = 74},
  [63] = {.lex_state = 74},
  [64] = {.lex_state = 71},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 72},
  [71] = {.lex_state = 72},
  [72] = {.lex_state = 72},
  [73] = {.lex_state = 72},
  [74] = {.lex_state = 72},
  [75] = {.lex_state = 72},
  [76] = {.lex_state = 8},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 8},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 9},
  [82] = {.lex_state = 9},
  [83] = {.lex_state = 7},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 8},
  [86] = {.lex_state = 5},
  [87] = {.lex_state = 5},
  [88] = {.lex_state = 5},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 8},
  [93] = {.lex_state = 8},
  [94] = {.lex_state = 5},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 5},
  [97] = {.lex_state = 41},
  [98] = {.lex_state = 151},
  [99] = {.lex_state = 151},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 65},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 151},
  [105] = {.lex_state = 151},
  [106] = {.lex_state = 66},
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
    [anon_sym_title] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(100),
    [sym_stmt] = STATE(15),
    [sym_on_stmt] = STATE(74),
    [sym_run_on_stmt] = STATE(74),
    [sym_if_expr] = STATE(74),
    [sym_let_stmt] = STATE(74),
    [sym_func_call_expr] = STATE(74),
    [sym_cache_stmt] = STATE(74),
    [sym_title_stmt] = STATE(74),
    [aux_sym_source_file_repeat1] = STATE(15),
    [anon_sym_on] = ACTIONS(3),
    [anon_sym_run_on] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [sym_ident] = ACTIONS(11),
    [anon_sym_cache] = ACTIONS(13),
    [anon_sym_title] = ACTIONS(15),
    [sym_comment] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
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
    ACTIONS(21), 14,
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
      anon_sym_title,
  [28] = 2,
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
    ACTIONS(25), 14,
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
      anon_sym_title,
  [56] = 2,
    ACTIONS(27), 9,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_comment,
    ACTIONS(29), 14,
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
      anon_sym_title,
  [84] = 4,
    ACTIONS(31), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(33), 7,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      sym_ident,
      anon_sym_cache,
      anon_sym_title,
    ACTIONS(35), 7,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(37), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_mod,
      anon_sym_or,
      anon_sym_is,
      anon_sym_xor,
  [116] = 4,
    ACTIONS(39), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(35), 7,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(37), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_mod,
      anon_sym_or,
      anon_sym_is,
      anon_sym_xor,
    ACTIONS(41), 7,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      sym_ident,
      anon_sym_cache,
      anon_sym_title,
  [148] = 4,
    ACTIONS(43), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(35), 7,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(37), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_mod,
      anon_sym_or,
      anon_sym_is,
      anon_sym_xor,
    ACTIONS(45), 7,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      sym_ident,
      anon_sym_cache,
      anon_sym_title,
  [180] = 2,
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
    ACTIONS(49), 14,
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
      anon_sym_title,
  [208] = 4,
    ACTIONS(51), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(35), 7,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(37), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_mod,
      anon_sym_or,
      anon_sym_is,
      anon_sym_xor,
    ACTIONS(53), 7,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      sym_ident,
      anon_sym_cache,
      anon_sym_title,
  [240] = 2,
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
    ACTIONS(57), 14,
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
      anon_sym_title,
  [268] = 2,
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
    ACTIONS(61), 14,
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
      anon_sym_title,
  [296] = 2,
    ACTIONS(63), 9,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_comment,
    ACTIONS(65), 14,
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
      anon_sym_title,
  [324] = 2,
    ACTIONS(67), 9,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_comment,
    ACTIONS(69), 14,
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
      anon_sym_title,
  [352] = 10,
    ACTIONS(71), 1,
      anon_sym_DASH,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      aux_sym_number_token4,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      sym_ident,
    ACTIONS(85), 1,
      anon_sym_not,
    STATE(43), 1,
      sym_expr,
    ACTIONS(79), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(75), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(37), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [391] = 11,
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
      anon_sym_title,
    ACTIONS(17), 1,
      sym_comment,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    STATE(30), 2,
      sym_stmt,
      aux_sym_source_file_repeat1,
    STATE(74), 7,
      sym_on_stmt,
      sym_run_on_stmt,
      sym_if_expr,
      sym_let_stmt,
      sym_func_call_expr,
      sym_cache_stmt,
      sym_title_stmt,
  [432] = 10,
    ACTIONS(71), 1,
      anon_sym_DASH,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      aux_sym_number_token4,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      sym_ident,
    ACTIONS(85), 1,
      anon_sym_not,
    STATE(49), 1,
      sym_expr,
    ACTIONS(79), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(75), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(37), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [471] = 10,
    ACTIONS(71), 1,
      anon_sym_DASH,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      aux_sym_number_token4,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      sym_ident,
    ACTIONS(85), 1,
      anon_sym_not,
    STATE(36), 1,
      sym_expr,
    ACTIONS(79), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(75), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(37), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [510] = 10,
    ACTIONS(71), 1,
      anon_sym_DASH,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      aux_sym_number_token4,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      sym_ident,
    ACTIONS(85), 1,
      anon_sym_not,
    STATE(48), 1,
      sym_expr,
    ACTIONS(79), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(75), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(37), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [549] = 10,
    ACTIONS(89), 1,
      anon_sym_DASH,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    ACTIONS(95), 1,
      aux_sym_number_token4,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      sym_ident,
    ACTIONS(103), 1,
      anon_sym_not,
    STATE(5), 1,
      sym_expr,
    ACTIONS(97), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(93), 3,
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
  [588] = 10,
    ACTIONS(71), 1,
      anon_sym_DASH,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      aux_sym_number_token4,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      sym_ident,
    ACTIONS(85), 1,
      anon_sym_not,
    STATE(45), 1,
      sym_expr,
    ACTIONS(79), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(75), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(37), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [627] = 10,
    ACTIONS(89), 1,
      anon_sym_DASH,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    ACTIONS(95), 1,
      aux_sym_number_token4,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      sym_ident,
    ACTIONS(103), 1,
      anon_sym_not,
    STATE(11), 1,
      sym_expr,
    ACTIONS(97), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(93), 3,
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
  [666] = 10,
    ACTIONS(71), 1,
      anon_sym_DASH,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      aux_sym_number_token4,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      sym_ident,
    ACTIONS(85), 1,
      anon_sym_not,
    STATE(47), 1,
      sym_expr,
    ACTIONS(79), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(75), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(37), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [705] = 10,
    ACTIONS(89), 1,
      anon_sym_DASH,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    ACTIONS(95), 1,
      aux_sym_number_token4,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      sym_ident,
    ACTIONS(103), 1,
      anon_sym_not,
    STATE(6), 1,
      sym_expr,
    ACTIONS(97), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(93), 3,
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
  [744] = 10,
    ACTIONS(71), 1,
      anon_sym_DASH,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      aux_sym_number_token4,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      sym_ident,
    ACTIONS(85), 1,
      anon_sym_not,
    STATE(50), 1,
      sym_expr,
    ACTIONS(79), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(75), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(37), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [783] = 10,
    ACTIONS(71), 1,
      anon_sym_DASH,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      aux_sym_number_token4,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      sym_ident,
    ACTIONS(85), 1,
      anon_sym_not,
    STATE(53), 1,
      sym_expr,
    ACTIONS(79), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(75), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(37), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [822] = 10,
    ACTIONS(89), 1,
      anon_sym_DASH,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    ACTIONS(95), 1,
      aux_sym_number_token4,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      sym_ident,
    ACTIONS(103), 1,
      anon_sym_not,
    STATE(7), 1,
      sym_expr,
    ACTIONS(97), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(93), 3,
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
  [861] = 10,
    ACTIONS(71), 1,
      anon_sym_DASH,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      aux_sym_number_token4,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      sym_ident,
    ACTIONS(85), 1,
      anon_sym_not,
    STATE(46), 1,
      sym_expr,
    ACTIONS(79), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(75), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(37), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [900] = 10,
    ACTIONS(89), 1,
      anon_sym_DASH,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    ACTIONS(95), 1,
      aux_sym_number_token4,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      sym_ident,
    ACTIONS(103), 1,
      anon_sym_not,
    STATE(2), 1,
      sym_expr,
    ACTIONS(97), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(93), 3,
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
  [939] = 10,
    ACTIONS(71), 1,
      anon_sym_DASH,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      aux_sym_number_token4,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      sym_ident,
    ACTIONS(85), 1,
      anon_sym_not,
    STATE(51), 1,
      sym_expr,
    ACTIONS(79), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(75), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(37), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [978] = 11,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
    ACTIONS(107), 1,
      anon_sym_on,
    ACTIONS(110), 1,
      anon_sym_run_on,
    ACTIONS(113), 1,
      anon_sym_if,
    ACTIONS(116), 1,
      anon_sym_let,
    ACTIONS(119), 1,
      sym_ident,
    ACTIONS(122), 1,
      anon_sym_cache,
    ACTIONS(125), 1,
      anon_sym_title,
    ACTIONS(128), 1,
      sym_comment,
    STATE(30), 2,
      sym_stmt,
      aux_sym_source_file_repeat1,
    STATE(74), 7,
      sym_on_stmt,
      sym_run_on_stmt,
      sym_if_expr,
      sym_let_stmt,
      sym_func_call_expr,
      sym_cache_stmt,
      sym_title_stmt,
  [1019] = 10,
    ACTIONS(89), 1,
      anon_sym_DASH,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    ACTIONS(95), 1,
      aux_sym_number_token4,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      sym_ident,
    ACTIONS(103), 1,
      anon_sym_not,
    STATE(9), 1,
      sym_expr,
    ACTIONS(97), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(93), 3,
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
  [1058] = 10,
    ACTIONS(71), 1,
      anon_sym_DASH,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      aux_sym_number_token4,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      sym_ident,
    ACTIONS(85), 1,
      anon_sym_not,
    STATE(52), 1,
      sym_expr,
    ACTIONS(79), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(75), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(37), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [1097] = 10,
    ACTIONS(71), 1,
      anon_sym_DASH,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      aux_sym_number_token4,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      sym_ident,
    ACTIONS(85), 1,
      anon_sym_not,
    STATE(44), 1,
      sym_expr,
    ACTIONS(79), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(75), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(37), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [1136] = 10,
    ACTIONS(71), 1,
      anon_sym_DASH,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      aux_sym_number_token4,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      sym_ident,
    ACTIONS(85), 1,
      anon_sym_not,
    STATE(40), 1,
      sym_expr,
    ACTIONS(79), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(75), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(37), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [1175] = 2,
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
  [1196] = 2,
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
  [1217] = 2,
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
  [1238] = 2,
    ACTIONS(69), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(67), 14,
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
  [1259] = 2,
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
  [1280] = 2,
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
  [1301] = 2,
    ACTIONS(29), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(27), 14,
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
  [1322] = 2,
    ACTIONS(65), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(63), 14,
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
  [1343] = 3,
    ACTIONS(133), 1,
      anon_sym_RPAREN,
    ACTIONS(135), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(131), 12,
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
  [1365] = 3,
    ACTIONS(137), 1,
      anon_sym_RPAREN,
    ACTIONS(135), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(131), 12,
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
  [1387] = 3,
    ACTIONS(139), 1,
      anon_sym_RPAREN,
    ACTIONS(135), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(131), 12,
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
  [1409] = 3,
    ACTIONS(141), 1,
      anon_sym_RPAREN,
    ACTIONS(135), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(131), 12,
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
  [1431] = 3,
    ACTIONS(143), 1,
      anon_sym_RPAREN,
    ACTIONS(135), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(131), 12,
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
  [1453] = 3,
    ACTIONS(145), 1,
      anon_sym_RPAREN,
    ACTIONS(135), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(131), 12,
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
  [1475] = 3,
    ACTIONS(147), 1,
      anon_sym_RPAREN,
    ACTIONS(135), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(131), 12,
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
  [1497] = 3,
    ACTIONS(149), 1,
      anon_sym_RPAREN,
    ACTIONS(135), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(131), 12,
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
  [1519] = 3,
    ACTIONS(151), 1,
      anon_sym_COLON,
    ACTIONS(135), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(131), 12,
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
  [1541] = 3,
    ACTIONS(153), 1,
      anon_sym_RPAREN,
    ACTIONS(135), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(131), 12,
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
  [1563] = 3,
    ACTIONS(155), 1,
      anon_sym_RPAREN,
    ACTIONS(135), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(131), 12,
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
  [1585] = 6,
    ACTIONS(157), 1,
      ts_builtin_sym_end,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    ACTIONS(164), 1,
      aux_sym_string_ident_token1,
    STATE(63), 1,
      sym_paren_expr,
    STATE(54), 2,
      sym_string_ident,
      aux_sym_func_call_expr_repeat1,
    ACTIONS(159), 8,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      sym_ident,
      anon_sym_cache,
      anon_sym_title,
      sym_comment,
  [1612] = 7,
    ACTIONS(170), 1,
      aux_sym_run_on_stmt_token1,
    ACTIONS(172), 1,
      anon_sym_LPAREN,
    ACTIONS(178), 1,
      aux_sym_string_ident_token1,
    STATE(69), 1,
      sym_paren_expr,
    ACTIONS(167), 3,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
    STATE(55), 3,
      sym_number,
      sym_string_ident,
      aux_sym_run_on_stmt_repeat1,
    ACTIONS(175), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
  [1641] = 7,
    ACTIONS(183), 1,
      aux_sym_run_on_stmt_token1,
    ACTIONS(185), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      aux_sym_string_ident_token1,
    STATE(69), 1,
      sym_paren_expr,
    ACTIONS(181), 3,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
    STATE(57), 3,
      sym_number,
      sym_string_ident,
      aux_sym_run_on_stmt_repeat1,
    ACTIONS(187), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
  [1670] = 7,
    ACTIONS(185), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      aux_sym_string_ident_token1,
    ACTIONS(193), 1,
      aux_sym_run_on_stmt_token1,
    STATE(69), 1,
      sym_paren_expr,
    ACTIONS(191), 3,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
    STATE(55), 3,
      sym_number,
      sym_string_ident,
      aux_sym_run_on_stmt_repeat1,
    ACTIONS(187), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
  [1699] = 6,
    ACTIONS(195), 1,
      ts_builtin_sym_end,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      aux_sym_string_ident_token1,
    STATE(63), 1,
      sym_paren_expr,
    STATE(54), 2,
      sym_string_ident,
      aux_sym_func_call_expr_repeat1,
    ACTIONS(197), 8,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      sym_ident,
      anon_sym_cache,
      anon_sym_title,
      sym_comment,
  [1726] = 3,
    ACTIONS(203), 1,
      ts_builtin_sym_end,
    ACTIONS(207), 1,
      anon_sym_LPAREN2,
    ACTIONS(205), 10,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      anon_sym_LPAREN,
      aux_sym_string_ident_token1,
      sym_ident,
      anon_sym_cache,
      anon_sym_title,
      sym_comment,
  [1745] = 3,
    ACTIONS(203), 1,
      aux_sym_run_on_stmt_token1,
    ACTIONS(209), 1,
      anon_sym_LPAREN2,
    ACTIONS(205), 9,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_string_ident_token1,
  [1763] = 2,
    ACTIONS(211), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(213), 9,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      aux_sym_string_ident_token1,
      sym_ident,
      anon_sym_cache,
      anon_sym_title,
      sym_comment,
  [1779] = 2,
    ACTIONS(67), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(69), 9,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      aux_sym_string_ident_token1,
      sym_ident,
      anon_sym_cache,
      anon_sym_title,
      sym_comment,
  [1795] = 2,
    ACTIONS(203), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(205), 9,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      aux_sym_string_ident_token1,
      sym_ident,
      anon_sym_cache,
      anon_sym_title,
      sym_comment,
  [1811] = 3,
    ACTIONS(219), 1,
      anon_sym_where,
    ACTIONS(215), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(217), 7,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      sym_ident,
      anon_sym_cache,
      anon_sym_title,
  [1828] = 2,
    ACTIONS(223), 1,
      aux_sym_run_on_stmt_token1,
    ACTIONS(221), 9,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_string_ident_token1,
  [1843] = 2,
    ACTIONS(67), 1,
      aux_sym_run_on_stmt_token1,
    ACTIONS(69), 9,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_string_ident_token1,
  [1858] = 2,
    ACTIONS(63), 1,
      aux_sym_run_on_stmt_token1,
    ACTIONS(65), 9,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_string_ident_token1,
  [1873] = 2,
    ACTIONS(211), 1,
      aux_sym_run_on_stmt_token1,
    ACTIONS(213), 9,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_string_ident_token1,
  [1888] = 2,
    ACTIONS(203), 1,
      aux_sym_run_on_stmt_token1,
    ACTIONS(205), 9,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_string_ident_token1,
  [1903] = 2,
    ACTIONS(225), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(227), 7,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      sym_ident,
      anon_sym_cache,
      anon_sym_title,
  [1917] = 2,
    ACTIONS(229), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(231), 7,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      sym_ident,
      anon_sym_cache,
      anon_sym_title,
  [1931] = 2,
    ACTIONS(233), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(235), 7,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      sym_ident,
      anon_sym_cache,
      anon_sym_title,
  [1945] = 2,
    ACTIONS(237), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(239), 7,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      sym_ident,
      anon_sym_cache,
      anon_sym_title,
  [1959] = 2,
    ACTIONS(241), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(243), 7,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      sym_ident,
      anon_sym_cache,
      anon_sym_title,
  [1973] = 2,
    ACTIONS(245), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(247), 7,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      sym_ident,
      anon_sym_cache,
      anon_sym_title,
  [1987] = 5,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
    ACTIONS(251), 1,
      aux_sym_string_ident_token1,
    ACTIONS(253), 1,
      anon_sym_using,
    STATE(85), 1,
      sym_paren_expr,
    STATE(79), 2,
      sym_string_ident,
      aux_sym_func_call_expr_repeat1,
  [2004] = 5,
    ACTIONS(255), 1,
      aux_sym_func_call_expr_token1,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(259), 1,
      aux_sym_string_ident_token1,
    STATE(90), 1,
      sym_paren_expr,
    STATE(80), 2,
      sym_string_ident,
      aux_sym_func_call_expr_repeat1,
  [2021] = 5,
    ACTIONS(157), 1,
      aux_sym_func_call_expr_token1,
    ACTIONS(261), 1,
      anon_sym_LPAREN,
    ACTIONS(264), 1,
      aux_sym_string_ident_token1,
    STATE(90), 1,
      sym_paren_expr,
    STATE(78), 2,
      sym_string_ident,
      aux_sym_func_call_expr_repeat1,
  [2038] = 5,
    ACTIONS(159), 1,
      anon_sym_using,
    ACTIONS(267), 1,
      anon_sym_LPAREN,
    ACTIONS(270), 1,
      aux_sym_string_ident_token1,
    STATE(85), 1,
      sym_paren_expr,
    STATE(79), 2,
      sym_string_ident,
      aux_sym_func_call_expr_repeat1,
  [2055] = 5,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(259), 1,
      aux_sym_string_ident_token1,
    ACTIONS(273), 1,
      aux_sym_func_call_expr_token1,
    STATE(90), 1,
      sym_paren_expr,
    STATE(78), 2,
      sym_string_ident,
      aux_sym_func_call_expr_repeat1,
  [2072] = 4,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
    ACTIONS(275), 1,
      aux_sym_string_ident_token1,
    STATE(85), 1,
      sym_paren_expr,
    STATE(76), 2,
      sym_string_ident,
      aux_sym_func_call_expr_repeat1,
  [2086] = 4,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(277), 1,
      aux_sym_string_ident_token1,
    STATE(63), 1,
      sym_paren_expr,
    STATE(58), 2,
      sym_string_ident,
      aux_sym_func_call_expr_repeat1,
  [2100] = 2,
    ACTIONS(279), 1,
      anon_sym_LPAREN2,
    ACTIONS(205), 3,
      anon_sym_LPAREN,
      aux_sym_string_ident_token1,
      anon_sym_using,
  [2109] = 3,
    ACTIONS(203), 1,
      aux_sym_func_call_expr_token1,
    ACTIONS(281), 1,
      anon_sym_LPAREN2,
    ACTIONS(205), 2,
      anon_sym_LPAREN,
      aux_sym_string_ident_token1,
  [2120] = 2,
    ACTIONS(203), 1,
      anon_sym_LPAREN,
    ACTIONS(205), 2,
      aux_sym_string_ident_token1,
      anon_sym_using,
  [2128] = 3,
    ACTIONS(283), 1,
      anon_sym_DQUOTE,
    ACTIONS(285), 1,
      aux_sym_string_token1,
    STATE(86), 1,
      aux_sym_string_repeat1,
  [2138] = 3,
    ACTIONS(288), 1,
      anon_sym_DQUOTE,
    ACTIONS(290), 1,
      aux_sym_string_token1,
    STATE(88), 1,
      aux_sym_string_repeat1,
  [2148] = 3,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      aux_sym_string_token1,
    STATE(86), 1,
      aux_sym_string_repeat1,
  [2158] = 2,
    STATE(56), 1,
      sym_run_on_type,
    ACTIONS(296), 2,
      anon_sym_image,
      anon_sym_self_hosted,
  [2166] = 2,
    ACTIONS(203), 1,
      aux_sym_func_call_expr_token1,
    ACTIONS(205), 2,
      anon_sym_LPAREN,
      aux_sym_string_ident_token1,
  [2174] = 2,
    ACTIONS(67), 1,
      aux_sym_func_call_expr_token1,
    ACTIONS(69), 2,
      anon_sym_LPAREN,
      aux_sym_string_ident_token1,
  [2182] = 2,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    ACTIONS(213), 2,
      aux_sym_string_ident_token1,
      anon_sym_using,
  [2190] = 2,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 2,
      aux_sym_string_ident_token1,
      anon_sym_using,
  [2198] = 3,
    ACTIONS(294), 1,
      aux_sym_string_token1,
    ACTIONS(298), 1,
      anon_sym_DQUOTE,
    STATE(86), 1,
      aux_sym_string_repeat1,
  [2208] = 2,
    ACTIONS(211), 1,
      aux_sym_func_call_expr_token1,
    ACTIONS(213), 2,
      anon_sym_LPAREN,
      aux_sym_string_ident_token1,
  [2216] = 3,
    ACTIONS(300), 1,
      anon_sym_DQUOTE,
    ACTIONS(302), 1,
      aux_sym_string_token1,
    STATE(94), 1,
      aux_sym_string_repeat1,
  [2226] = 2,
    ACTIONS(304), 1,
      anon_sym_mut,
    ACTIONS(306), 1,
      sym_ident,
  [2233] = 1,
    ACTIONS(308), 1,
      aux_sym_string_ident_token2,
  [2237] = 1,
    ACTIONS(310), 1,
      aux_sym_string_ident_token2,
  [2241] = 1,
    ACTIONS(312), 1,
      ts_builtin_sym_end,
  [2245] = 1,
    ACTIONS(314), 1,
      sym_ident,
  [2249] = 1,
    ACTIONS(316), 1,
      anon_sym_EQ,
  [2253] = 1,
    ACTIONS(318), 1,
      anon_sym_EQ,
  [2257] = 1,
    ACTIONS(320), 1,
      aux_sym_string_ident_token2,
  [2261] = 1,
    ACTIONS(322), 1,
      aux_sym_string_ident_token2,
  [2265] = 1,
    ACTIONS(324), 1,
      sym_event_type,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 28,
  [SMALL_STATE(4)] = 56,
  [SMALL_STATE(5)] = 84,
  [SMALL_STATE(6)] = 116,
  [SMALL_STATE(7)] = 148,
  [SMALL_STATE(8)] = 180,
  [SMALL_STATE(9)] = 208,
  [SMALL_STATE(10)] = 240,
  [SMALL_STATE(11)] = 268,
  [SMALL_STATE(12)] = 296,
  [SMALL_STATE(13)] = 324,
  [SMALL_STATE(14)] = 352,
  [SMALL_STATE(15)] = 391,
  [SMALL_STATE(16)] = 432,
  [SMALL_STATE(17)] = 471,
  [SMALL_STATE(18)] = 510,
  [SMALL_STATE(19)] = 549,
  [SMALL_STATE(20)] = 588,
  [SMALL_STATE(21)] = 627,
  [SMALL_STATE(22)] = 666,
  [SMALL_STATE(23)] = 705,
  [SMALL_STATE(24)] = 744,
  [SMALL_STATE(25)] = 783,
  [SMALL_STATE(26)] = 822,
  [SMALL_STATE(27)] = 861,
  [SMALL_STATE(28)] = 900,
  [SMALL_STATE(29)] = 939,
  [SMALL_STATE(30)] = 978,
  [SMALL_STATE(31)] = 1019,
  [SMALL_STATE(32)] = 1058,
  [SMALL_STATE(33)] = 1097,
  [SMALL_STATE(34)] = 1136,
  [SMALL_STATE(35)] = 1175,
  [SMALL_STATE(36)] = 1196,
  [SMALL_STATE(37)] = 1217,
  [SMALL_STATE(38)] = 1238,
  [SMALL_STATE(39)] = 1259,
  [SMALL_STATE(40)] = 1280,
  [SMALL_STATE(41)] = 1301,
  [SMALL_STATE(42)] = 1322,
  [SMALL_STATE(43)] = 1343,
  [SMALL_STATE(44)] = 1365,
  [SMALL_STATE(45)] = 1387,
  [SMALL_STATE(46)] = 1409,
  [SMALL_STATE(47)] = 1431,
  [SMALL_STATE(48)] = 1453,
  [SMALL_STATE(49)] = 1475,
  [SMALL_STATE(50)] = 1497,
  [SMALL_STATE(51)] = 1519,
  [SMALL_STATE(52)] = 1541,
  [SMALL_STATE(53)] = 1563,
  [SMALL_STATE(54)] = 1585,
  [SMALL_STATE(55)] = 1612,
  [SMALL_STATE(56)] = 1641,
  [SMALL_STATE(57)] = 1670,
  [SMALL_STATE(58)] = 1699,
  [SMALL_STATE(59)] = 1726,
  [SMALL_STATE(60)] = 1745,
  [SMALL_STATE(61)] = 1763,
  [SMALL_STATE(62)] = 1779,
  [SMALL_STATE(63)] = 1795,
  [SMALL_STATE(64)] = 1811,
  [SMALL_STATE(65)] = 1828,
  [SMALL_STATE(66)] = 1843,
  [SMALL_STATE(67)] = 1858,
  [SMALL_STATE(68)] = 1873,
  [SMALL_STATE(69)] = 1888,
  [SMALL_STATE(70)] = 1903,
  [SMALL_STATE(71)] = 1917,
  [SMALL_STATE(72)] = 1931,
  [SMALL_STATE(73)] = 1945,
  [SMALL_STATE(74)] = 1959,
  [SMALL_STATE(75)] = 1973,
  [SMALL_STATE(76)] = 1987,
  [SMALL_STATE(77)] = 2004,
  [SMALL_STATE(78)] = 2021,
  [SMALL_STATE(79)] = 2038,
  [SMALL_STATE(80)] = 2055,
  [SMALL_STATE(81)] = 2072,
  [SMALL_STATE(82)] = 2086,
  [SMALL_STATE(83)] = 2100,
  [SMALL_STATE(84)] = 2109,
  [SMALL_STATE(85)] = 2120,
  [SMALL_STATE(86)] = 2128,
  [SMALL_STATE(87)] = 2138,
  [SMALL_STATE(88)] = 2148,
  [SMALL_STATE(89)] = 2158,
  [SMALL_STATE(90)] = 2166,
  [SMALL_STATE(91)] = 2174,
  [SMALL_STATE(92)] = 2182,
  [SMALL_STATE(93)] = 2190,
  [SMALL_STATE(94)] = 2198,
  [SMALL_STATE(95)] = 2208,
  [SMALL_STATE(96)] = 2216,
  [SMALL_STATE(97)] = 2226,
  [SMALL_STATE(98)] = 2233,
  [SMALL_STATE(99)] = 2237,
  [SMALL_STATE(100)] = 2241,
  [SMALL_STATE(101)] = 2245,
  [SMALL_STATE(102)] = 2249,
  [SMALL_STATE(103)] = 2253,
  [SMALL_STATE(104)] = 2257,
  [SMALL_STATE(105)] = 2261,
  [SMALL_STATE(106)] = 2265,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expr, 2),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expr, 2),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_literal, 1),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_literal, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_stmt, 5),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_stmt, 5),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cache_stmt, 4),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cache_stmt, 4),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_stmt, 4),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_stmt, 4),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_stmt, 4, .production_id = 1),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_on_stmt, 4, .production_id = 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expr, 3),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expr, 3),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paren_expr, 3),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paren_expr, 3),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(106),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(89),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(29),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(97),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(77),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(81),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(82),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(74),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_call_expr_repeat1, 2),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_func_call_expr_repeat1, 2),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_call_expr_repeat1, 2), SHIFT_REPEAT(22),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_call_expr_repeat1, 2), SHIFT_REPEAT(59),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_run_on_stmt_repeat1, 2), SHIFT_REPEAT(55),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_on_stmt_repeat1, 2),
  [172] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_run_on_stmt_repeat1, 2), SHIFT_REPEAT(18),
  [175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_run_on_stmt_repeat1, 2), SHIFT_REPEAT(67),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_run_on_stmt_repeat1, 2), SHIFT_REPEAT(60),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_stmt, 2),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_stmt, 2),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_ident, 1),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_ident, 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_ident, 5),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_ident, 5),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_stmt, 2, .production_id = 1),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_on_stmt, 2, .production_id = 1),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_run_on_type, 1),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_on_type, 1),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call_expr, 2),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call_expr, 2),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_on_stmt, 4, .production_id = 2),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_run_on_stmt, 4, .production_id = 2),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call_expr, 3),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call_expr, 3),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expr, 3),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expr, 3),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt, 1),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stmt, 1),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_on_stmt, 3, .production_id = 2),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_run_on_stmt, 3, .production_id = 2),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [261] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_call_expr_repeat1, 2), SHIFT_REPEAT(20),
  [264] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_call_expr_repeat1, 2), SHIFT_REPEAT(84),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_call_expr_repeat1, 2), SHIFT_REPEAT(27),
  [270] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_call_expr_repeat1, 2), SHIFT_REPEAT(83),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [285] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(86),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [312] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
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
