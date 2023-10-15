#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 126
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 75
#define ALIAS_COUNT 0
#define TOKEN_COUNT 50
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 8
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
  anon_sym_LPAREN_RPAREN = 46,
  anon_sym_fn = 47,
  anon_sym_DASH_GT = 48,
  sym_comment = 49,
  sym_source_file = 50,
  sym_stmt = 51,
  sym_on_stmt = 52,
  sym_run_on_type = 53,
  sym_run_on_stmt = 54,
  sym_if_expr = 55,
  sym_let_stmt = 56,
  sym_expr = 57,
  sym_func_call_expr = 58,
  sym_paren_expr = 59,
  sym_number = 60,
  sym_bool_literal = 61,
  sym_string = 62,
  sym_string_ident = 63,
  sym_unary_expr = 64,
  sym_binary_expr = 65,
  sym_cache_stmt = 66,
  sym_title_stmt = 67,
  sym_type = 68,
  sym_func_def_stmt = 69,
  aux_sym_source_file_repeat1 = 70,
  aux_sym_run_on_stmt_repeat1 = 71,
  aux_sym_func_call_expr_repeat1 = 72,
  aux_sym_string_repeat1 = 73,
  aux_sym_func_def_stmt_repeat1 = 74,
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
  [anon_sym_LPAREN_RPAREN] = "()",
  [anon_sym_fn] = "fn",
  [anon_sym_DASH_GT] = "->",
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
  [sym_type] = "type",
  [sym_func_def_stmt] = "func_def_stmt",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_run_on_stmt_repeat1] = "run_on_stmt_repeat1",
  [aux_sym_func_call_expr_repeat1] = "func_call_expr_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_func_def_stmt_repeat1] = "func_def_stmt_repeat1",
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
  [anon_sym_LPAREN_RPAREN] = anon_sym_LPAREN_RPAREN,
  [anon_sym_fn] = anon_sym_fn,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
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
  [sym_type] = sym_type,
  [sym_func_def_stmt] = sym_func_def_stmt,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_run_on_stmt_repeat1] = aux_sym_run_on_stmt_repeat1,
  [aux_sym_func_call_expr_repeat1] = aux_sym_func_call_expr_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_func_def_stmt_repeat1] = aux_sym_func_def_stmt_repeat1,
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
  [anon_sym_LPAREN_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
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
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_func_def_stmt] = {
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
  [aux_sym_func_def_stmt_repeat1] = {
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
  [18] = 17,
  [19] = 19,
  [20] = 20,
  [21] = 19,
  [22] = 17,
  [23] = 23,
  [24] = 16,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 27,
  [29] = 17,
  [30] = 19,
  [31] = 19,
  [32] = 17,
  [33] = 33,
  [34] = 17,
  [35] = 2,
  [36] = 8,
  [37] = 11,
  [38] = 9,
  [39] = 12,
  [40] = 7,
  [41] = 5,
  [42] = 13,
  [43] = 43,
  [44] = 44,
  [45] = 44,
  [46] = 44,
  [47] = 43,
  [48] = 43,
  [49] = 49,
  [50] = 50,
  [51] = 43,
  [52] = 43,
  [53] = 43,
  [54] = 54,
  [55] = 44,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 2,
  [63] = 63,
  [64] = 59,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 2,
  [73] = 61,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 60,
  [78] = 78,
  [79] = 13,
  [80] = 80,
  [81] = 81,
  [82] = 50,
  [83] = 83,
  [84] = 50,
  [85] = 85,
  [86] = 86,
  [87] = 59,
  [88] = 59,
  [89] = 61,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 2,
  [95] = 95,
  [96] = 2,
  [97] = 97,
  [98] = 60,
  [99] = 99,
  [100] = 61,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 93,
  [106] = 60,
  [107] = 92,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 115,
  [117] = 117,
  [118] = 118,
  [119] = 115,
  [120] = 120,
  [121] = 115,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(77);
      if (lookahead == '"') ADVANCE(122);
      if (lookahead == '#') ADVANCE(229);
      if (lookahead == '(') ADVANCE(153);
      if (lookahead == ')') ADVANCE(107);
      if (lookahead == '*') ADVANCE(200);
      if (lookahead == '+') ADVANCE(199);
      if (lookahead == '-') ADVANCE(89);
      if (lookahead == '/') ADVANCE(93);
      if (lookahead == '0') ADVANCE(114);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == '<') ADVANCE(202);
      if (lookahead == '=') ADVANCE(104);
      if (lookahead == '>') ADVANCE(204);
      if (lookahead == '^') ADVANCE(201);
      if (lookahead == 'a') ADVANCE(45);
      if (lookahead == 'c') ADVANCE(15);
      if (lookahead == 'f') ADVANCE(16);
      if (lookahead == 'i') ADVANCE(32);
      if (lookahead == 'l') ADVANCE(22);
      if (lookahead == 'm') ADVANCE(51);
      if (lookahead == 'n') ADVANCE(53);
      if (lookahead == 'o') ADVANCE(46);
      if (lookahead == 'r') ADVANCE(65);
      if (lookahead == 's') ADVANCE(29);
      if (lookahead == 't') ADVANCE(40);
      if (lookahead == 'u') ADVANCE(57);
      if (lookahead == 'w') ADVANCE(36);
      if (lookahead == 'x') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(71)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(116);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '(') ADVANCE(153);
      if (lookahead == '-') ADVANCE(90);
      if (lookahead == '/') ADVANCE(94);
      if (lookahead == '0') ADVANCE(115);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '(') ADVANCE(106);
      if (lookahead == '-') ADVANCE(90);
      if (lookahead == '/') ADVANCE(94);
      if (lookahead == '0') ADVANCE(115);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '(') ADVANCE(153);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '(') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '"') ADVANCE(122);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(124);
      if (lookahead != 0) ADVANCE(123);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(122);
      if (lookahead == '(') ADVANCE(106);
      if (lookahead == '-') ADVANCE(89);
      if (lookahead == '0') ADVANCE(114);
      if (lookahead == 'f') ADVANCE(157);
      if (lookahead == 'n') ADVANCE(183);
      if (lookahead == 't') ADVANCE(186);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 7:
      if (lookahead == '(') ADVANCE(153);
      if (lookahead == 'u') ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 8:
      if (lookahead == '(') ADVANCE(106);
      if (lookahead == 'u') ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 9:
      if (lookahead == '(') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 10:
      if (lookahead == '(') ADVANCE(11);
      if (lookahead == ')') ADVANCE(107);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 11:
      if (lookahead == ')') ADVANCE(224);
      END_STATE();
    case 12:
      if (lookahead == '>') ADVANCE(228);
      END_STATE();
    case 13:
      if (lookahead == '_') ADVANCE(37);
      END_STATE();
    case 14:
      if (lookahead == '_') ADVANCE(54);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(18);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(42);
      if (lookahead == 'n') ADVANCE(225);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(38);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(206);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(208);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(85);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 32:
      if (lookahead == 'f') ADVANCE(96);
      if (lookahead == 'm') ADVANCE(17);
      if (lookahead == 's') ADVANCE(212);
      END_STATE();
    case 33:
      if (lookahead == 'f') ADVANCE(13);
      END_STATE();
    case 34:
      if (lookahead == 'g') ADVANCE(219);
      END_STATE();
    case 35:
      if (lookahead == 'g') ADVANCE(26);
      END_STATE();
    case 36:
      if (lookahead == 'h') ADVANCE(30);
      END_STATE();
    case 37:
      if (lookahead == 'h') ADVANCE(52);
      END_STATE();
    case 38:
      if (lookahead == 'h') ADVANCE(24);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(63);
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(59);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 44:
      if (lookahead == 'm') ADVANCE(195);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(44)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(79);
      if (lookahead == 'r') ADVANCE(210);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(20);
      if (lookahead == 'u') ADVANCE(61);
      END_STATE();
    case 52:
      if (lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 53:
      if (lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 54:
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 55:
      if (lookahead == 'r') ADVANCE(214);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 57:
      if (lookahead == 's') ADVANCE(39);
      END_STATE();
    case 58:
      if (lookahead == 's') ADVANCE(64);
      END_STATE();
    case 59:
      if (lookahead == 's') ADVANCE(25);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(99);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 62:
      if (lookahead == 't') ADVANCE(197);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 65:
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 66:
      if (lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 67:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(108);
      END_STATE();
    case 68:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(68)
      if (lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(110);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(112);
      END_STATE();
    case 71:
      if (eof) ADVANCE(77);
      if (lookahead == '"') ADVANCE(122);
      if (lookahead == '#') ADVANCE(229);
      if (lookahead == '(') ADVANCE(106);
      if (lookahead == ')') ADVANCE(107);
      if (lookahead == '*') ADVANCE(200);
      if (lookahead == '+') ADVANCE(199);
      if (lookahead == '-') ADVANCE(89);
      if (lookahead == '/') ADVANCE(93);
      if (lookahead == '0') ADVANCE(114);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == '<') ADVANCE(202);
      if (lookahead == '=') ADVANCE(104);
      if (lookahead == '>') ADVANCE(204);
      if (lookahead == '^') ADVANCE(201);
      if (lookahead == 'a') ADVANCE(45);
      if (lookahead == 'c') ADVANCE(15);
      if (lookahead == 'f') ADVANCE(16);
      if (lookahead == 'i') ADVANCE(32);
      if (lookahead == 'l') ADVANCE(22);
      if (lookahead == 'm') ADVANCE(51);
      if (lookahead == 'n') ADVANCE(53);
      if (lookahead == 'o') ADVANCE(46);
      if (lookahead == 'r') ADVANCE(65);
      if (lookahead == 's') ADVANCE(29);
      if (lookahead == 't') ADVANCE(40);
      if (lookahead == 'u') ADVANCE(57);
      if (lookahead == 'w') ADVANCE(36);
      if (lookahead == 'x') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(71)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(116);
      END_STATE();
    case 72:
      if (eof) ADVANCE(77);
      if (lookahead == '#') ADVANCE(229);
      if (lookahead == '(') ADVANCE(106);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == 'c') ADVANCE(156);
      if (lookahead == 'f') ADVANCE(175);
      if (lookahead == 'i') ADVANCE(169);
      if (lookahead == 'l') ADVANCE(161);
      if (lookahead == 'o') ADVANCE(177);
      if (lookahead == 'r') ADVANCE(193);
      if (lookahead == 't') ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(72)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 73:
      if (eof) ADVANCE(77);
      if (lookahead == '#') ADVANCE(229);
      if (lookahead == '*') ADVANCE(200);
      if (lookahead == '+') ADVANCE(199);
      if (lookahead == '-') ADVANCE(89);
      if (lookahead == '/') ADVANCE(93);
      if (lookahead == '<') ADVANCE(202);
      if (lookahead == '>') ADVANCE(204);
      if (lookahead == '^') ADVANCE(201);
      if (lookahead == 'a') ADVANCE(180);
      if (lookahead == 'c') ADVANCE(156);
      if (lookahead == 'f') ADVANCE(175);
      if (lookahead == 'i') ADVANCE(168);
      if (lookahead == 'l') ADVANCE(161);
      if (lookahead == 'm') ADVANCE(182);
      if (lookahead == 'o') ADVANCE(176);
      if (lookahead == 'r') ADVANCE(193);
      if (lookahead == 't') ADVANCE(172);
      if (lookahead == 'x') ADVANCE(181);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(73)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 74:
      if (eof) ADVANCE(77);
      if (lookahead == '#') ADVANCE(229);
      if (lookahead == 'c') ADVANCE(156);
      if (lookahead == 'f') ADVANCE(175);
      if (lookahead == 'i') ADVANCE(169);
      if (lookahead == 'l') ADVANCE(161);
      if (lookahead == 'o') ADVANCE(177);
      if (lookahead == 'r') ADVANCE(193);
      if (lookahead == 't') ADVANCE(172);
      if (lookahead == 'w') ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(74)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 75:
      if (eof) ADVANCE(77);
      if (lookahead == '#') ADVANCE(148);
      if (lookahead == '(') ADVANCE(153);
      if (lookahead == 'c') ADVANCE(126);
      if (lookahead == 'f') ADVANCE(137);
      if (lookahead == 'i') ADVANCE(131);
      if (lookahead == 'l') ADVANCE(128);
      if (lookahead == 'o') ADVANCE(138);
      if (lookahead == 'r') ADVANCE(146);
      if (lookahead == 't') ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(76)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 76:
      if (eof) ADVANCE(77);
      if (lookahead == '#') ADVANCE(148);
      if (lookahead == '(') ADVANCE(106);
      if (lookahead == 'c') ADVANCE(126);
      if (lookahead == 'f') ADVANCE(137);
      if (lookahead == 'i') ADVANCE(131);
      if (lookahead == 'l') ADVANCE(128);
      if (lookahead == 'o') ADVANCE(138);
      if (lookahead == 'r') ADVANCE(146);
      if (lookahead == 't') ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(76)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_event_type);
      if (lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_on);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_on);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(152);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_image);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_self_hosted);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_run_on);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_run_on);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_run_on);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(152);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(152);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(152);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(152);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_run_on_stmt_token1);
      if (lookahead == '\n') ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(152);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(152);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_mut);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_mut);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_func_call_expr_token1);
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead == '\r') ADVANCE(4);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(152);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(152);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(152);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (lookahead == 'b') ADVANCE(67);
      if (lookahead == 'o') ADVANCE(69);
      if (lookahead == 'x') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (lookahead == 'b') ADVANCE(147);
      if (lookahead == 'o') ADVANCE(149);
      if (lookahead == 'x') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(152);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(152);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"') ADVANCE(122);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(123);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == '_') ADVANCE(142);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(152);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'a') ADVANCE(127);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(152);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'c') ADVANCE(133);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(152);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'e') ADVANCE(144);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(152);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'e') ADVANCE(218);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(152);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'e') ADVANCE(223);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(152);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'f') ADVANCE(98);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(152);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'g') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(152);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'h') ADVANCE(129);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(152);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'i') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(152);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'i') ADVANCE(145);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(152);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'l') ADVANCE(130);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(152);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'n') ADVANCE(227);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(152);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'n') ADVANCE(81);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(152);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'n') ADVANCE(125);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(152);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'n') ADVANCE(88);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(152);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'n') ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(152);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'o') ADVANCE(140);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(152);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 's') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(152);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 't') ADVANCE(101);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(152);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 't') ADVANCE(136);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(152);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'u') ADVANCE(139);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(152);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(152);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '(') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(152);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(152);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(152);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(152);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_string_ident_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ')') ADVANCE(154);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_') ADVANCE(184);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(158);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(173);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(170);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(207);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(209);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(189);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(217);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(222);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(119);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(121);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(83);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(187);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(97);
      if (lookahead == 's') ADVANCE(213);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(97);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'h') ADVANCE(162);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'h') ADVANCE(167);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(190);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(188);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(163);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(226);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(80);
      if (lookahead == 'r') ADVANCE(211);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(80);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(155);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(87);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(159);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(185);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(160);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(191);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(179);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(215);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(194);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(166);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(165);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(100);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(174);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(198);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(103);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(178);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(164);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(192);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(203);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(205);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_mod);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_mod);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_is);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_xor);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_xor);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_cache);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_cache);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_cache);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(152);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_using);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(152);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_title);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_title);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_title);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(152);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_LPAREN_RPAREN);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_fn);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_fn);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(152);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(229);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 72},
  [2] = {.lex_state = 73},
  [3] = {.lex_state = 73},
  [4] = {.lex_state = 73},
  [5] = {.lex_state = 73},
  [6] = {.lex_state = 73},
  [7] = {.lex_state = 73},
  [8] = {.lex_state = 73},
  [9] = {.lex_state = 73},
  [10] = {.lex_state = 73},
  [11] = {.lex_state = 73},
  [12] = {.lex_state = 73},
  [13] = {.lex_state = 73},
  [14] = {.lex_state = 72},
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
  [30] = {.lex_state = 6},
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
  [49] = {.lex_state = 76},
  [50] = {.lex_state = 76},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 75},
  [60] = {.lex_state = 76},
  [61] = {.lex_state = 76},
  [62] = {.lex_state = 76},
  [63] = {.lex_state = 74},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 72},
  [66] = {.lex_state = 72},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 72},
  [69] = {.lex_state = 72},
  [70] = {.lex_state = 72},
  [71] = {.lex_state = 72},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 72},
  [75] = {.lex_state = 72},
  [76] = {.lex_state = 72},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 72},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 8},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 8},
  [85] = {.lex_state = 9},
  [86] = {.lex_state = 9},
  [87] = {.lex_state = 7},
  [88] = {.lex_state = 3},
  [89] = {.lex_state = 8},
  [90] = {.lex_state = 10},
  [91] = {.lex_state = 5},
  [92] = {.lex_state = 5},
  [93] = {.lex_state = 5},
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 8},
  [97] = {.lex_state = 10},
  [98] = {.lex_state = 8},
  [99] = {.lex_state = 10},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 10},
  [102] = {.lex_state = 10},
  [103] = {.lex_state = 10},
  [104] = {.lex_state = 10},
  [105] = {.lex_state = 5},
  [106] = {.lex_state = 4},
  [107] = {.lex_state = 5},
  [108] = {.lex_state = 10},
  [109] = {.lex_state = 72},
  [110] = {.lex_state = 44},
  [111] = {.lex_state = 72},
  [112] = {.lex_state = 68},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 10},
  [115] = {.lex_state = 154},
  [116] = {.lex_state = 154},
  [117] = {.lex_state = 72},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 154},
  [120] = {.lex_state = 10},
  [121] = {.lex_state = 154},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
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
    [anon_sym_fn] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(118),
    [sym_stmt] = STATE(14),
    [sym_on_stmt] = STATE(75),
    [sym_run_on_stmt] = STATE(75),
    [sym_if_expr] = STATE(75),
    [sym_let_stmt] = STATE(75),
    [sym_func_call_expr] = STATE(75),
    [sym_cache_stmt] = STATE(75),
    [sym_title_stmt] = STATE(75),
    [sym_func_def_stmt] = STATE(75),
    [aux_sym_source_file_repeat1] = STATE(14),
    [anon_sym_on] = ACTIONS(3),
    [anon_sym_run_on] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [sym_ident] = ACTIONS(11),
    [anon_sym_cache] = ACTIONS(13),
    [anon_sym_title] = ACTIONS(15),
    [anon_sym_fn] = ACTIONS(17),
    [sym_comment] = ACTIONS(19),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(21), 9,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_comment,
    ACTIONS(23), 15,
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
      anon_sym_fn,
  [29] = 4,
    ACTIONS(25), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(29), 7,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(31), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_mod,
      anon_sym_or,
      anon_sym_is,
      anon_sym_xor,
    ACTIONS(27), 8,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      sym_ident,
      anon_sym_cache,
      anon_sym_title,
      anon_sym_fn,
  [62] = 4,
    ACTIONS(33), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(29), 7,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(31), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_mod,
      anon_sym_or,
      anon_sym_is,
      anon_sym_xor,
    ACTIONS(35), 8,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      sym_ident,
      anon_sym_cache,
      anon_sym_title,
      anon_sym_fn,
  [95] = 2,
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
    ACTIONS(39), 15,
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
      anon_sym_fn,
  [124] = 4,
    ACTIONS(41), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(29), 7,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(31), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_mod,
      anon_sym_or,
      anon_sym_is,
      anon_sym_xor,
    ACTIONS(43), 8,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      sym_ident,
      anon_sym_cache,
      anon_sym_title,
      anon_sym_fn,
  [157] = 2,
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
    ACTIONS(47), 15,
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
      anon_sym_fn,
  [186] = 2,
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
    ACTIONS(51), 15,
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
      anon_sym_fn,
  [215] = 2,
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
    ACTIONS(55), 15,
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
      anon_sym_fn,
  [244] = 4,
    ACTIONS(57), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(29), 7,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(31), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_mod,
      anon_sym_or,
      anon_sym_is,
      anon_sym_xor,
    ACTIONS(59), 8,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      sym_ident,
      anon_sym_cache,
      anon_sym_title,
      anon_sym_fn,
  [277] = 2,
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
    ACTIONS(63), 15,
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
      anon_sym_fn,
  [306] = 2,
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
    ACTIONS(67), 15,
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
      anon_sym_fn,
  [335] = 2,
    ACTIONS(69), 9,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_comment,
    ACTIONS(71), 15,
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
      anon_sym_fn,
  [364] = 12,
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
      anon_sym_fn,
    ACTIONS(19), 1,
      sym_comment,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    STATE(15), 2,
      sym_stmt,
      aux_sym_source_file_repeat1,
    STATE(75), 8,
      sym_on_stmt,
      sym_run_on_stmt,
      sym_if_expr,
      sym_let_stmt,
      sym_func_call_expr,
      sym_cache_stmt,
      sym_title_stmt,
      sym_func_def_stmt,
  [409] = 12,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      anon_sym_on,
    ACTIONS(80), 1,
      anon_sym_run_on,
    ACTIONS(83), 1,
      anon_sym_if,
    ACTIONS(86), 1,
      anon_sym_let,
    ACTIONS(89), 1,
      sym_ident,
    ACTIONS(92), 1,
      anon_sym_cache,
    ACTIONS(95), 1,
      anon_sym_title,
    ACTIONS(98), 1,
      anon_sym_fn,
    ACTIONS(101), 1,
      sym_comment,
    STATE(15), 2,
      sym_stmt,
      aux_sym_source_file_repeat1,
    STATE(75), 8,
      sym_on_stmt,
      sym_run_on_stmt,
      sym_if_expr,
      sym_let_stmt,
      sym_func_call_expr,
      sym_cache_stmt,
      sym_title_stmt,
      sym_func_def_stmt,
  [454] = 10,
    ACTIONS(104), 1,
      anon_sym_DASH,
    ACTIONS(106), 1,
      anon_sym_LPAREN,
    ACTIONS(110), 1,
      aux_sym_number_token4,
    ACTIONS(114), 1,
      anon_sym_DQUOTE,
    ACTIONS(116), 1,
      sym_ident,
    ACTIONS(118), 1,
      anon_sym_not,
    STATE(12), 1,
      sym_expr,
    ACTIONS(112), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(108), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(7), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [493] = 10,
    ACTIONS(120), 1,
      anon_sym_DASH,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(126), 1,
      aux_sym_number_token4,
    ACTIONS(130), 1,
      anon_sym_DQUOTE,
    ACTIONS(132), 1,
      sym_ident,
    ACTIONS(134), 1,
      anon_sym_not,
    STATE(53), 1,
      sym_expr,
    ACTIONS(128), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(124), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(40), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [532] = 10,
    ACTIONS(120), 1,
      anon_sym_DASH,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(126), 1,
      aux_sym_number_token4,
    ACTIONS(130), 1,
      anon_sym_DQUOTE,
    ACTIONS(132), 1,
      sym_ident,
    ACTIONS(134), 1,
      anon_sym_not,
    STATE(48), 1,
      sym_expr,
    ACTIONS(128), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(124), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(40), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [571] = 10,
    ACTIONS(120), 1,
      anon_sym_DASH,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(126), 1,
      aux_sym_number_token4,
    ACTIONS(130), 1,
      anon_sym_DQUOTE,
    ACTIONS(132), 1,
      sym_ident,
    ACTIONS(134), 1,
      anon_sym_not,
    STATE(55), 1,
      sym_expr,
    ACTIONS(128), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(124), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(40), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [610] = 10,
    ACTIONS(104), 1,
      anon_sym_DASH,
    ACTIONS(106), 1,
      anon_sym_LPAREN,
    ACTIONS(110), 1,
      aux_sym_number_token4,
    ACTIONS(114), 1,
      anon_sym_DQUOTE,
    ACTIONS(116), 1,
      sym_ident,
    ACTIONS(118), 1,
      anon_sym_not,
    STATE(3), 1,
      sym_expr,
    ACTIONS(112), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(108), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(7), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [649] = 10,
    ACTIONS(120), 1,
      anon_sym_DASH,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(126), 1,
      aux_sym_number_token4,
    ACTIONS(130), 1,
      anon_sym_DQUOTE,
    ACTIONS(132), 1,
      sym_ident,
    ACTIONS(134), 1,
      anon_sym_not,
    STATE(44), 1,
      sym_expr,
    ACTIONS(128), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(124), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(40), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [688] = 10,
    ACTIONS(120), 1,
      anon_sym_DASH,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(126), 1,
      aux_sym_number_token4,
    ACTIONS(130), 1,
      anon_sym_DQUOTE,
    ACTIONS(132), 1,
      sym_ident,
    ACTIONS(134), 1,
      anon_sym_not,
    STATE(51), 1,
      sym_expr,
    ACTIONS(128), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(124), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(40), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [727] = 10,
    ACTIONS(104), 1,
      anon_sym_DASH,
    ACTIONS(106), 1,
      anon_sym_LPAREN,
    ACTIONS(110), 1,
      aux_sym_number_token4,
    ACTIONS(114), 1,
      anon_sym_DQUOTE,
    ACTIONS(116), 1,
      sym_ident,
    ACTIONS(118), 1,
      anon_sym_not,
    STATE(4), 1,
      sym_expr,
    ACTIONS(112), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(108), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(7), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [766] = 10,
    ACTIONS(120), 1,
      anon_sym_DASH,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(126), 1,
      aux_sym_number_token4,
    ACTIONS(130), 1,
      anon_sym_DQUOTE,
    ACTIONS(132), 1,
      sym_ident,
    ACTIONS(134), 1,
      anon_sym_not,
    STATE(39), 1,
      sym_expr,
    ACTIONS(128), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(124), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(40), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [805] = 10,
    ACTIONS(120), 1,
      anon_sym_DASH,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(126), 1,
      aux_sym_number_token4,
    ACTIONS(130), 1,
      anon_sym_DQUOTE,
    ACTIONS(132), 1,
      sym_ident,
    ACTIONS(134), 1,
      anon_sym_not,
    STATE(54), 1,
      sym_expr,
    ACTIONS(128), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(124), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(40), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [844] = 10,
    ACTIONS(104), 1,
      anon_sym_DASH,
    ACTIONS(106), 1,
      anon_sym_LPAREN,
    ACTIONS(110), 1,
      aux_sym_number_token4,
    ACTIONS(114), 1,
      anon_sym_DQUOTE,
    ACTIONS(116), 1,
      sym_ident,
    ACTIONS(118), 1,
      anon_sym_not,
    STATE(10), 1,
      sym_expr,
    ACTIONS(112), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(108), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(7), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [883] = 10,
    ACTIONS(120), 1,
      anon_sym_DASH,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(126), 1,
      aux_sym_number_token4,
    ACTIONS(130), 1,
      anon_sym_DQUOTE,
    ACTIONS(132), 1,
      sym_ident,
    ACTIONS(134), 1,
      anon_sym_not,
    STATE(36), 1,
      sym_expr,
    ACTIONS(128), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(124), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(40), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [922] = 10,
    ACTIONS(104), 1,
      anon_sym_DASH,
    ACTIONS(106), 1,
      anon_sym_LPAREN,
    ACTIONS(110), 1,
      aux_sym_number_token4,
    ACTIONS(114), 1,
      anon_sym_DQUOTE,
    ACTIONS(116), 1,
      sym_ident,
    ACTIONS(118), 1,
      anon_sym_not,
    STATE(8), 1,
      sym_expr,
    ACTIONS(112), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(108), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(7), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [961] = 10,
    ACTIONS(120), 1,
      anon_sym_DASH,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(126), 1,
      aux_sym_number_token4,
    ACTIONS(130), 1,
      anon_sym_DQUOTE,
    ACTIONS(132), 1,
      sym_ident,
    ACTIONS(134), 1,
      anon_sym_not,
    STATE(52), 1,
      sym_expr,
    ACTIONS(128), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(124), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(40), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [1000] = 10,
    ACTIONS(120), 1,
      anon_sym_DASH,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(126), 1,
      aux_sym_number_token4,
    ACTIONS(130), 1,
      anon_sym_DQUOTE,
    ACTIONS(132), 1,
      sym_ident,
    ACTIONS(134), 1,
      anon_sym_not,
    STATE(45), 1,
      sym_expr,
    ACTIONS(128), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(124), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(40), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [1039] = 10,
    ACTIONS(120), 1,
      anon_sym_DASH,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(126), 1,
      aux_sym_number_token4,
    ACTIONS(130), 1,
      anon_sym_DQUOTE,
    ACTIONS(132), 1,
      sym_ident,
    ACTIONS(134), 1,
      anon_sym_not,
    STATE(46), 1,
      sym_expr,
    ACTIONS(128), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(124), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(40), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [1078] = 10,
    ACTIONS(120), 1,
      anon_sym_DASH,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(126), 1,
      aux_sym_number_token4,
    ACTIONS(130), 1,
      anon_sym_DQUOTE,
    ACTIONS(132), 1,
      sym_ident,
    ACTIONS(134), 1,
      anon_sym_not,
    STATE(47), 1,
      sym_expr,
    ACTIONS(128), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(124), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(40), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [1117] = 10,
    ACTIONS(104), 1,
      anon_sym_DASH,
    ACTIONS(106), 1,
      anon_sym_LPAREN,
    ACTIONS(110), 1,
      aux_sym_number_token4,
    ACTIONS(114), 1,
      anon_sym_DQUOTE,
    ACTIONS(116), 1,
      sym_ident,
    ACTIONS(118), 1,
      anon_sym_not,
    STATE(6), 1,
      sym_expr,
    ACTIONS(112), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(108), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(7), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [1156] = 10,
    ACTIONS(120), 1,
      anon_sym_DASH,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(126), 1,
      aux_sym_number_token4,
    ACTIONS(130), 1,
      anon_sym_DQUOTE,
    ACTIONS(132), 1,
      sym_ident,
    ACTIONS(134), 1,
      anon_sym_not,
    STATE(43), 1,
      sym_expr,
    ACTIONS(128), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(124), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(40), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [1195] = 2,
    ACTIONS(23), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(21), 14,
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
  [1216] = 2,
    ACTIONS(51), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(49), 14,
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
  [1237] = 2,
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
  [1258] = 2,
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
  [1279] = 2,
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
  [1300] = 2,
    ACTIONS(47), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(45), 14,
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
  [1321] = 2,
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
  [1342] = 2,
    ACTIONS(71), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(69), 14,
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
  [1363] = 3,
    ACTIONS(138), 1,
      anon_sym_RPAREN,
    ACTIONS(140), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(136), 12,
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
  [1385] = 3,
    ACTIONS(142), 1,
      anon_sym_RPAREN,
    ACTIONS(140), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(136), 12,
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
  [1407] = 3,
    ACTIONS(144), 1,
      anon_sym_RPAREN,
    ACTIONS(140), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(136), 12,
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
  [1429] = 3,
    ACTIONS(146), 1,
      anon_sym_RPAREN,
    ACTIONS(140), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(136), 12,
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
  [1451] = 3,
    ACTIONS(148), 1,
      anon_sym_RPAREN,
    ACTIONS(140), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(136), 12,
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
  [1473] = 3,
    ACTIONS(150), 1,
      anon_sym_RPAREN,
    ACTIONS(140), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(136), 12,
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
  [1495] = 6,
    ACTIONS(152), 1,
      ts_builtin_sym_end,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(158), 1,
      aux_sym_string_ident_token1,
    STATE(60), 1,
      sym_paren_expr,
    STATE(50), 2,
      sym_string_ident,
      aux_sym_func_call_expr_repeat1,
    ACTIONS(154), 9,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      sym_ident,
      anon_sym_cache,
      anon_sym_title,
      anon_sym_fn,
      sym_comment,
  [1523] = 6,
    ACTIONS(160), 1,
      ts_builtin_sym_end,
    ACTIONS(164), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      aux_sym_string_ident_token1,
    STATE(60), 1,
      sym_paren_expr,
    STATE(50), 2,
      sym_string_ident,
      aux_sym_func_call_expr_repeat1,
    ACTIONS(162), 9,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      sym_ident,
      anon_sym_cache,
      anon_sym_title,
      anon_sym_fn,
      sym_comment,
  [1551] = 3,
    ACTIONS(170), 1,
      anon_sym_RPAREN,
    ACTIONS(140), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(136), 12,
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
  [1573] = 3,
    ACTIONS(172), 1,
      anon_sym_RPAREN,
    ACTIONS(140), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(136), 12,
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
  [1595] = 3,
    ACTIONS(174), 1,
      anon_sym_RPAREN,
    ACTIONS(140), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(136), 12,
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
  [1617] = 3,
    ACTIONS(176), 1,
      anon_sym_COLON,
    ACTIONS(140), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(136), 12,
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
  [1639] = 3,
    ACTIONS(178), 1,
      anon_sym_RPAREN,
    ACTIONS(140), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(136), 12,
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
  [1661] = 7,
    ACTIONS(182), 1,
      aux_sym_run_on_stmt_token1,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      aux_sym_string_ident_token1,
    STATE(77), 1,
      sym_paren_expr,
    ACTIONS(180), 3,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
    STATE(58), 3,
      sym_number,
      sym_string_ident,
      aux_sym_run_on_stmt_repeat1,
    ACTIONS(186), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
  [1690] = 7,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      aux_sym_string_ident_token1,
    ACTIONS(192), 1,
      aux_sym_run_on_stmt_token1,
    STATE(77), 1,
      sym_paren_expr,
    ACTIONS(190), 3,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
    STATE(56), 3,
      sym_number,
      sym_string_ident,
      aux_sym_run_on_stmt_repeat1,
    ACTIONS(186), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
  [1719] = 7,
    ACTIONS(197), 1,
      aux_sym_run_on_stmt_token1,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(205), 1,
      aux_sym_string_ident_token1,
    STATE(77), 1,
      sym_paren_expr,
    ACTIONS(194), 3,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
    STATE(58), 3,
      sym_number,
      sym_string_ident,
      aux_sym_run_on_stmt_repeat1,
    ACTIONS(202), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
  [1748] = 3,
    ACTIONS(208), 1,
      ts_builtin_sym_end,
    ACTIONS(212), 1,
      anon_sym_LPAREN2,
    ACTIONS(210), 11,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      anon_sym_LPAREN,
      aux_sym_string_ident_token1,
      sym_ident,
      anon_sym_cache,
      anon_sym_title,
      anon_sym_fn,
      sym_comment,
  [1768] = 2,
    ACTIONS(208), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(210), 10,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      aux_sym_string_ident_token1,
      sym_ident,
      anon_sym_cache,
      anon_sym_title,
      anon_sym_fn,
      sym_comment,
  [1785] = 2,
    ACTIONS(214), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(216), 10,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      aux_sym_string_ident_token1,
      sym_ident,
      anon_sym_cache,
      anon_sym_title,
      anon_sym_fn,
      sym_comment,
  [1802] = 2,
    ACTIONS(21), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(23), 10,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      aux_sym_string_ident_token1,
      sym_ident,
      anon_sym_cache,
      anon_sym_title,
      anon_sym_fn,
      sym_comment,
  [1819] = 3,
    ACTIONS(222), 1,
      anon_sym_where,
    ACTIONS(218), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(220), 8,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      sym_ident,
      anon_sym_cache,
      anon_sym_title,
      anon_sym_fn,
  [1837] = 3,
    ACTIONS(208), 1,
      aux_sym_run_on_stmt_token1,
    ACTIONS(224), 1,
      anon_sym_LPAREN2,
    ACTIONS(210), 9,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_string_ident_token1,
  [1855] = 2,
    ACTIONS(226), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(228), 8,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      sym_ident,
      anon_sym_cache,
      anon_sym_title,
      anon_sym_fn,
  [1870] = 2,
    ACTIONS(230), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(232), 8,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      sym_ident,
      anon_sym_cache,
      anon_sym_title,
      anon_sym_fn,
  [1885] = 2,
    ACTIONS(236), 1,
      aux_sym_run_on_stmt_token1,
    ACTIONS(234), 9,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_string_ident_token1,
  [1900] = 2,
    ACTIONS(238), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(240), 8,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      sym_ident,
      anon_sym_cache,
      anon_sym_title,
      anon_sym_fn,
  [1915] = 2,
    ACTIONS(242), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(244), 8,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      sym_ident,
      anon_sym_cache,
      anon_sym_title,
      anon_sym_fn,
  [1930] = 2,
    ACTIONS(246), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(248), 8,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      sym_ident,
      anon_sym_cache,
      anon_sym_title,
      anon_sym_fn,
  [1945] = 2,
    ACTIONS(250), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(252), 8,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      sym_ident,
      anon_sym_cache,
      anon_sym_title,
      anon_sym_fn,
  [1960] = 2,
    ACTIONS(21), 1,
      aux_sym_run_on_stmt_token1,
    ACTIONS(23), 9,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_string_ident_token1,
  [1975] = 2,
    ACTIONS(214), 1,
      aux_sym_run_on_stmt_token1,
    ACTIONS(216), 9,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_string_ident_token1,
  [1990] = 2,
    ACTIONS(254), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(256), 8,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      sym_ident,
      anon_sym_cache,
      anon_sym_title,
      anon_sym_fn,
  [2005] = 2,
    ACTIONS(258), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(260), 8,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      sym_ident,
      anon_sym_cache,
      anon_sym_title,
      anon_sym_fn,
  [2020] = 2,
    ACTIONS(262), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(264), 8,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      sym_ident,
      anon_sym_cache,
      anon_sym_title,
      anon_sym_fn,
  [2035] = 2,
    ACTIONS(208), 1,
      aux_sym_run_on_stmt_token1,
    ACTIONS(210), 9,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_string_ident_token1,
  [2050] = 2,
    ACTIONS(266), 2,
      ts_builtin_sym_end,
      sym_comment,
    ACTIONS(268), 8,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      sym_ident,
      anon_sym_cache,
      anon_sym_title,
      anon_sym_fn,
  [2065] = 2,
    ACTIONS(69), 1,
      aux_sym_run_on_stmt_token1,
    ACTIONS(71), 9,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_string_ident_token1,
  [2080] = 5,
    ACTIONS(270), 1,
      aux_sym_func_call_expr_token1,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      aux_sym_string_ident_token1,
    STATE(106), 1,
      sym_paren_expr,
    STATE(83), 2,
      sym_string_ident,
      aux_sym_func_call_expr_repeat1,
  [2097] = 5,
    ACTIONS(276), 1,
      anon_sym_LPAREN,
    ACTIONS(278), 1,
      aux_sym_string_ident_token1,
    ACTIONS(280), 1,
      anon_sym_using,
    STATE(98), 1,
      sym_paren_expr,
    STATE(84), 2,
      sym_string_ident,
      aux_sym_func_call_expr_repeat1,
  [2114] = 5,
    ACTIONS(160), 1,
      aux_sym_func_call_expr_token1,
    ACTIONS(282), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      aux_sym_string_ident_token1,
    STATE(106), 1,
      sym_paren_expr,
    STATE(82), 2,
      sym_string_ident,
      aux_sym_func_call_expr_repeat1,
  [2131] = 5,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      aux_sym_string_ident_token1,
    ACTIONS(288), 1,
      aux_sym_func_call_expr_token1,
    STATE(106), 1,
      sym_paren_expr,
    STATE(82), 2,
      sym_string_ident,
      aux_sym_func_call_expr_repeat1,
  [2148] = 5,
    ACTIONS(162), 1,
      anon_sym_using,
    ACTIONS(290), 1,
      anon_sym_LPAREN,
    ACTIONS(293), 1,
      aux_sym_string_ident_token1,
    STATE(98), 1,
      sym_paren_expr,
    STATE(84), 2,
      sym_string_ident,
      aux_sym_func_call_expr_repeat1,
  [2165] = 4,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(296), 1,
      aux_sym_string_ident_token1,
    STATE(60), 1,
      sym_paren_expr,
    STATE(49), 2,
      sym_string_ident,
      aux_sym_func_call_expr_repeat1,
  [2179] = 4,
    ACTIONS(276), 1,
      anon_sym_LPAREN,
    ACTIONS(298), 1,
      aux_sym_string_ident_token1,
    STATE(98), 1,
      sym_paren_expr,
    STATE(81), 2,
      sym_string_ident,
      aux_sym_func_call_expr_repeat1,
  [2193] = 2,
    ACTIONS(300), 1,
      anon_sym_LPAREN2,
    ACTIONS(210), 3,
      anon_sym_LPAREN,
      aux_sym_string_ident_token1,
      anon_sym_using,
  [2202] = 3,
    ACTIONS(208), 1,
      aux_sym_func_call_expr_token1,
    ACTIONS(302), 1,
      anon_sym_LPAREN2,
    ACTIONS(210), 2,
      anon_sym_LPAREN,
      aux_sym_string_ident_token1,
  [2213] = 2,
    ACTIONS(214), 1,
      anon_sym_LPAREN,
    ACTIONS(216), 2,
      aux_sym_string_ident_token1,
      anon_sym_using,
  [2221] = 3,
    ACTIONS(304), 1,
      anon_sym_RPAREN,
    ACTIONS(306), 1,
      sym_ident,
    STATE(99), 1,
      aux_sym_func_def_stmt_repeat1,
  [2231] = 3,
    ACTIONS(308), 1,
      anon_sym_DQUOTE,
    ACTIONS(310), 1,
      aux_sym_string_token1,
    STATE(91), 1,
      aux_sym_string_repeat1,
  [2241] = 3,
    ACTIONS(313), 1,
      anon_sym_DQUOTE,
    ACTIONS(315), 1,
      aux_sym_string_token1,
    STATE(91), 1,
      aux_sym_string_repeat1,
  [2251] = 3,
    ACTIONS(317), 1,
      anon_sym_DQUOTE,
    ACTIONS(319), 1,
      aux_sym_string_token1,
    STATE(92), 1,
      aux_sym_string_repeat1,
  [2261] = 2,
    ACTIONS(21), 1,
      aux_sym_func_call_expr_token1,
    ACTIONS(23), 2,
      anon_sym_LPAREN,
      aux_sym_string_ident_token1,
  [2269] = 2,
    STATE(57), 1,
      sym_run_on_type,
    ACTIONS(321), 2,
      anon_sym_image,
      anon_sym_self_hosted,
  [2277] = 2,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 2,
      aux_sym_string_ident_token1,
      anon_sym_using,
  [2285] = 3,
    ACTIONS(306), 1,
      sym_ident,
    ACTIONS(323), 1,
      anon_sym_RPAREN,
    STATE(90), 1,
      aux_sym_func_def_stmt_repeat1,
  [2295] = 2,
    ACTIONS(208), 1,
      anon_sym_LPAREN,
    ACTIONS(210), 2,
      aux_sym_string_ident_token1,
      anon_sym_using,
  [2303] = 3,
    ACTIONS(325), 1,
      anon_sym_RPAREN,
    ACTIONS(327), 1,
      sym_ident,
    STATE(99), 1,
      aux_sym_func_def_stmt_repeat1,
  [2313] = 2,
    ACTIONS(214), 1,
      aux_sym_func_call_expr_token1,
    ACTIONS(216), 2,
      anon_sym_LPAREN,
      aux_sym_string_ident_token1,
  [2321] = 2,
    STATE(124), 1,
      sym_type,
    ACTIONS(330), 2,
      sym_ident,
      anon_sym_LPAREN_RPAREN,
  [2329] = 2,
    STATE(108), 1,
      sym_type,
    ACTIONS(330), 2,
      sym_ident,
      anon_sym_LPAREN_RPAREN,
  [2337] = 2,
    STATE(122), 1,
      sym_type,
    ACTIONS(330), 2,
      sym_ident,
      anon_sym_LPAREN_RPAREN,
  [2345] = 1,
    ACTIONS(332), 3,
      anon_sym_COLON,
      anon_sym_RPAREN,
      sym_ident,
  [2351] = 3,
    ACTIONS(334), 1,
      anon_sym_DQUOTE,
    ACTIONS(336), 1,
      aux_sym_string_token1,
    STATE(107), 1,
      aux_sym_string_repeat1,
  [2361] = 2,
    ACTIONS(208), 1,
      aux_sym_func_call_expr_token1,
    ACTIONS(210), 2,
      anon_sym_LPAREN,
      aux_sym_string_ident_token1,
  [2369] = 3,
    ACTIONS(315), 1,
      aux_sym_string_token1,
    ACTIONS(338), 1,
      anon_sym_DQUOTE,
    STATE(91), 1,
      aux_sym_string_repeat1,
  [2379] = 1,
    ACTIONS(340), 2,
      anon_sym_RPAREN,
      sym_ident,
  [2384] = 2,
    ACTIONS(342), 1,
      anon_sym_COLON,
    ACTIONS(344), 1,
      anon_sym_DASH_GT,
  [2391] = 2,
    ACTIONS(346), 1,
      anon_sym_mut,
    ACTIONS(348), 1,
      sym_ident,
  [2398] = 2,
    ACTIONS(350), 1,
      anon_sym_COLON,
    ACTIONS(352), 1,
      anon_sym_DASH_GT,
  [2405] = 1,
    ACTIONS(354), 1,
      sym_event_type,
  [2409] = 1,
    ACTIONS(356), 1,
      anon_sym_EQ,
  [2413] = 1,
    ACTIONS(358), 1,
      sym_ident,
  [2417] = 1,
    ACTIONS(360), 1,
      aux_sym_string_ident_token2,
  [2421] = 1,
    ACTIONS(362), 1,
      aux_sym_string_ident_token2,
  [2425] = 1,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
  [2429] = 1,
    ACTIONS(366), 1,
      ts_builtin_sym_end,
  [2433] = 1,
    ACTIONS(368), 1,
      aux_sym_string_ident_token2,
  [2437] = 1,
    ACTIONS(370), 1,
      sym_ident,
  [2441] = 1,
    ACTIONS(372), 1,
      aux_sym_string_ident_token2,
  [2445] = 1,
    ACTIONS(374), 1,
      anon_sym_COLON,
  [2449] = 1,
    ACTIONS(376), 1,
      anon_sym_COLON,
  [2453] = 1,
    ACTIONS(378), 1,
      anon_sym_COLON,
  [2457] = 1,
    ACTIONS(380), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 29,
  [SMALL_STATE(4)] = 62,
  [SMALL_STATE(5)] = 95,
  [SMALL_STATE(6)] = 124,
  [SMALL_STATE(7)] = 157,
  [SMALL_STATE(8)] = 186,
  [SMALL_STATE(9)] = 215,
  [SMALL_STATE(10)] = 244,
  [SMALL_STATE(11)] = 277,
  [SMALL_STATE(12)] = 306,
  [SMALL_STATE(13)] = 335,
  [SMALL_STATE(14)] = 364,
  [SMALL_STATE(15)] = 409,
  [SMALL_STATE(16)] = 454,
  [SMALL_STATE(17)] = 493,
  [SMALL_STATE(18)] = 532,
  [SMALL_STATE(19)] = 571,
  [SMALL_STATE(20)] = 610,
  [SMALL_STATE(21)] = 649,
  [SMALL_STATE(22)] = 688,
  [SMALL_STATE(23)] = 727,
  [SMALL_STATE(24)] = 766,
  [SMALL_STATE(25)] = 805,
  [SMALL_STATE(26)] = 844,
  [SMALL_STATE(27)] = 883,
  [SMALL_STATE(28)] = 922,
  [SMALL_STATE(29)] = 961,
  [SMALL_STATE(30)] = 1000,
  [SMALL_STATE(31)] = 1039,
  [SMALL_STATE(32)] = 1078,
  [SMALL_STATE(33)] = 1117,
  [SMALL_STATE(34)] = 1156,
  [SMALL_STATE(35)] = 1195,
  [SMALL_STATE(36)] = 1216,
  [SMALL_STATE(37)] = 1237,
  [SMALL_STATE(38)] = 1258,
  [SMALL_STATE(39)] = 1279,
  [SMALL_STATE(40)] = 1300,
  [SMALL_STATE(41)] = 1321,
  [SMALL_STATE(42)] = 1342,
  [SMALL_STATE(43)] = 1363,
  [SMALL_STATE(44)] = 1385,
  [SMALL_STATE(45)] = 1407,
  [SMALL_STATE(46)] = 1429,
  [SMALL_STATE(47)] = 1451,
  [SMALL_STATE(48)] = 1473,
  [SMALL_STATE(49)] = 1495,
  [SMALL_STATE(50)] = 1523,
  [SMALL_STATE(51)] = 1551,
  [SMALL_STATE(52)] = 1573,
  [SMALL_STATE(53)] = 1595,
  [SMALL_STATE(54)] = 1617,
  [SMALL_STATE(55)] = 1639,
  [SMALL_STATE(56)] = 1661,
  [SMALL_STATE(57)] = 1690,
  [SMALL_STATE(58)] = 1719,
  [SMALL_STATE(59)] = 1748,
  [SMALL_STATE(60)] = 1768,
  [SMALL_STATE(61)] = 1785,
  [SMALL_STATE(62)] = 1802,
  [SMALL_STATE(63)] = 1819,
  [SMALL_STATE(64)] = 1837,
  [SMALL_STATE(65)] = 1855,
  [SMALL_STATE(66)] = 1870,
  [SMALL_STATE(67)] = 1885,
  [SMALL_STATE(68)] = 1900,
  [SMALL_STATE(69)] = 1915,
  [SMALL_STATE(70)] = 1930,
  [SMALL_STATE(71)] = 1945,
  [SMALL_STATE(72)] = 1960,
  [SMALL_STATE(73)] = 1975,
  [SMALL_STATE(74)] = 1990,
  [SMALL_STATE(75)] = 2005,
  [SMALL_STATE(76)] = 2020,
  [SMALL_STATE(77)] = 2035,
  [SMALL_STATE(78)] = 2050,
  [SMALL_STATE(79)] = 2065,
  [SMALL_STATE(80)] = 2080,
  [SMALL_STATE(81)] = 2097,
  [SMALL_STATE(82)] = 2114,
  [SMALL_STATE(83)] = 2131,
  [SMALL_STATE(84)] = 2148,
  [SMALL_STATE(85)] = 2165,
  [SMALL_STATE(86)] = 2179,
  [SMALL_STATE(87)] = 2193,
  [SMALL_STATE(88)] = 2202,
  [SMALL_STATE(89)] = 2213,
  [SMALL_STATE(90)] = 2221,
  [SMALL_STATE(91)] = 2231,
  [SMALL_STATE(92)] = 2241,
  [SMALL_STATE(93)] = 2251,
  [SMALL_STATE(94)] = 2261,
  [SMALL_STATE(95)] = 2269,
  [SMALL_STATE(96)] = 2277,
  [SMALL_STATE(97)] = 2285,
  [SMALL_STATE(98)] = 2295,
  [SMALL_STATE(99)] = 2303,
  [SMALL_STATE(100)] = 2313,
  [SMALL_STATE(101)] = 2321,
  [SMALL_STATE(102)] = 2329,
  [SMALL_STATE(103)] = 2337,
  [SMALL_STATE(104)] = 2345,
  [SMALL_STATE(105)] = 2351,
  [SMALL_STATE(106)] = 2361,
  [SMALL_STATE(107)] = 2369,
  [SMALL_STATE(108)] = 2379,
  [SMALL_STATE(109)] = 2384,
  [SMALL_STATE(110)] = 2391,
  [SMALL_STATE(111)] = 2398,
  [SMALL_STATE(112)] = 2405,
  [SMALL_STATE(113)] = 2409,
  [SMALL_STATE(114)] = 2413,
  [SMALL_STATE(115)] = 2417,
  [SMALL_STATE(116)] = 2421,
  [SMALL_STATE(117)] = 2425,
  [SMALL_STATE(118)] = 2429,
  [SMALL_STATE(119)] = 2433,
  [SMALL_STATE(120)] = 2437,
  [SMALL_STATE(121)] = 2441,
  [SMALL_STATE(122)] = 2445,
  [SMALL_STATE(123)] = 2449,
  [SMALL_STATE(124)] = 2453,
  [SMALL_STATE(125)] = 2457,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paren_expr, 3),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paren_expr, 3),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_stmt, 4),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_stmt, 4),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_stmt, 5),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_stmt, 5),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_literal, 1),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_literal, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_stmt, 4, .production_id = 1),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_on_stmt, 4, .production_id = 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expr, 2),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expr, 2),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cache_stmt, 4),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cache_stmt, 4),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expr, 3),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expr, 3),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(112),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(95),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(25),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(110),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(80),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(86),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(85),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(120),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(75),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_stmt, 2),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_stmt, 2),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_call_expr_repeat1, 2),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_func_call_expr_repeat1, 2),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_call_expr_repeat1, 2), SHIFT_REPEAT(29),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_call_expr_repeat1, 2), SHIFT_REPEAT(59),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_run_on_stmt_repeat1, 2), SHIFT_REPEAT(58),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_on_stmt_repeat1, 2),
  [199] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_run_on_stmt_repeat1, 2), SHIFT_REPEAT(17),
  [202] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_run_on_stmt_repeat1, 2), SHIFT_REPEAT(79),
  [205] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_run_on_stmt_repeat1, 2), SHIFT_REPEAT(64),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_ident, 1),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_ident, 1),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_ident, 5),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_ident, 5),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_stmt, 2, .production_id = 1),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_on_stmt, 2, .production_id = 1),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_def_stmt, 6),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_def_stmt, 6),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_on_stmt, 4, .production_id = 2),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_run_on_stmt, 4, .production_id = 2),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_run_on_type, 1),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_on_type, 1),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call_expr, 2),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call_expr, 2),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_on_stmt, 3, .production_id = 2),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_run_on_stmt, 3, .production_id = 2),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call_expr, 3),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call_expr, 3),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_def_stmt, 5),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_def_stmt, 5),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expr, 3),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expr, 3),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt, 1),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stmt, 1),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_def_stmt, 7),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_def_stmt, 7),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_def_stmt, 8),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_def_stmt, 8),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [282] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_call_expr_repeat1, 2), SHIFT_REPEAT(34),
  [285] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_call_expr_repeat1, 2), SHIFT_REPEAT(88),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_call_expr_repeat1, 2), SHIFT_REPEAT(22),
  [293] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_call_expr_repeat1, 2), SHIFT_REPEAT(87),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [310] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(91),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_def_stmt_repeat1, 2),
  [327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_def_stmt_repeat1, 2), SHIFT_REPEAT(123),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_def_stmt_repeat1, 3),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [366] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
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
