#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 139
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 81
#define ALIAS_COUNT 0
#define TOKEN_COUNT 54
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 9
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
  anon_sym_LF = 10,
  anon_sym_if = 11,
  anon_sym_let = 12,
  anon_sym_mut = 13,
  anon_sym_EQ = 14,
  aux_sym_func_call_expr_token1 = 15,
  anon_sym_LPAREN = 16,
  anon_sym_RPAREN = 17,
  anon_sym_LBRACK = 18,
  anon_sym_COMMA = 19,
  anon_sym_RBRACK = 20,
  aux_sym_number_token1 = 21,
  aux_sym_number_token2 = 22,
  aux_sym_number_token3 = 23,
  aux_sym_number_token4 = 24,
  anon_sym_true = 25,
  anon_sym_false = 26,
  anon_sym_DQUOTE = 27,
  aux_sym_string_token1 = 28,
  aux_sym_string_ident_token1 = 29,
  anon_sym_LPAREN2 = 30,
  aux_sym_string_ident_token2 = 31,
  sym_ident = 32,
  anon_sym_not = 33,
  anon_sym_PLUS = 34,
  anon_sym_STAR = 35,
  anon_sym_CARET = 36,
  anon_sym_LT = 37,
  anon_sym_LT_EQ = 38,
  anon_sym_GT = 39,
  anon_sym_GT_EQ = 40,
  anon_sym_and = 41,
  anon_sym_mod = 42,
  anon_sym_or = 43,
  anon_sym_is = 44,
  anon_sym_xor = 45,
  anon_sym_cache = 46,
  anon_sym_using = 47,
  anon_sym_title = 48,
  anon_sym_LPAREN_RPAREN = 49,
  anon_sym_AT = 50,
  anon_sym_fn = 51,
  anon_sym_DASH_GT = 52,
  sym_comment = 53,
  sym_source_file = 54,
  sym_stmt = 55,
  sym_on_stmt = 56,
  sym_run_on_type = 57,
  sym_run_on_stmt = 58,
  sym_if_expr = 59,
  sym_let_stmt = 60,
  sym_expr = 61,
  sym_func_call_expr = 62,
  sym_paren_expr = 63,
  sym_number = 64,
  sym_bool_literal = 65,
  sym_string = 66,
  sym_string_ident = 67,
  sym_unary_expr = 68,
  sym_binary_expr = 69,
  sym_cache_stmt = 70,
  sym_title_stmt = 71,
  sym_type = 72,
  sym_func_annotation = 73,
  sym_func_def_stmt = 74,
  aux_sym_source_file_repeat1 = 75,
  aux_sym_run_on_stmt_repeat1 = 76,
  aux_sym_func_call_expr_repeat1 = 77,
  aux_sym_string_repeat1 = 78,
  aux_sym_func_def_stmt_repeat1 = 79,
  aux_sym_func_def_stmt_repeat2 = 80,
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
  [anon_sym_LF] = "\n",
  [anon_sym_if] = "if",
  [anon_sym_let] = "let",
  [anon_sym_mut] = "mut",
  [anon_sym_EQ] = "=",
  [aux_sym_func_call_expr_token1] = "func_call_expr_token1",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
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
  [anon_sym_AT] = "@",
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
  [sym_func_annotation] = "func_annotation",
  [sym_func_def_stmt] = "func_def_stmt",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_run_on_stmt_repeat1] = "run_on_stmt_repeat1",
  [aux_sym_func_call_expr_repeat1] = "func_call_expr_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_func_def_stmt_repeat1] = "func_def_stmt_repeat1",
  [aux_sym_func_def_stmt_repeat2] = "func_def_stmt_repeat2",
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
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_mut] = anon_sym_mut,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_func_call_expr_token1] = aux_sym_func_call_expr_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
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
  [anon_sym_AT] = anon_sym_AT,
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
  [sym_func_annotation] = sym_func_annotation,
  [sym_func_def_stmt] = sym_func_def_stmt,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_run_on_stmt_repeat1] = aux_sym_run_on_stmt_repeat1,
  [aux_sym_func_call_expr_repeat1] = aux_sym_func_call_expr_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_func_def_stmt_repeat1] = aux_sym_func_def_stmt_repeat1,
  [aux_sym_func_def_stmt_repeat2] = aux_sym_func_def_stmt_repeat2,
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
  [anon_sym_LF] = {
    .visible = true,
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
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
  [anon_sym_AT] = {
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
  [sym_func_annotation] = {
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
  [aux_sym_func_def_stmt_repeat2] = {
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
  [18] = 18,
  [19] = 18,
  [20] = 20,
  [21] = 18,
  [22] = 22,
  [23] = 18,
  [24] = 16,
  [25] = 17,
  [26] = 17,
  [27] = 18,
  [28] = 18,
  [29] = 29,
  [30] = 17,
  [31] = 31,
  [32] = 20,
  [33] = 33,
  [34] = 34,
  [35] = 2,
  [36] = 7,
  [37] = 12,
  [38] = 11,
  [39] = 10,
  [40] = 13,
  [41] = 9,
  [42] = 8,
  [43] = 43,
  [44] = 44,
  [45] = 44,
  [46] = 46,
  [47] = 46,
  [48] = 46,
  [49] = 44,
  [50] = 44,
  [51] = 46,
  [52] = 44,
  [53] = 44,
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
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 8,
  [74] = 74,
  [75] = 11,
  [76] = 76,
  [77] = 77,
  [78] = 77,
  [79] = 77,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 67,
  [87] = 87,
  [88] = 67,
  [89] = 67,
  [90] = 90,
  [91] = 72,
  [92] = 72,
  [93] = 93,
  [94] = 8,
  [95] = 95,
  [96] = 96,
  [97] = 71,
  [98] = 98,
  [99] = 99,
  [100] = 72,
  [101] = 71,
  [102] = 8,
  [103] = 71,
  [104] = 104,
  [105] = 105,
  [106] = 8,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 95,
  [112] = 112,
  [113] = 112,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 122,
  [125] = 125,
  [126] = 122,
  [127] = 127,
  [128] = 122,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(77);
      if (lookahead == '"') ADVANCE(121);
      if (lookahead == '#') ADVANCE(206);
      if (lookahead == '(') ADVANCE(132);
      if (lookahead == ')') ADVANCE(103);
      if (lookahead == '*') ADVANCE(179);
      if (lookahead == '+') ADVANCE(178);
      if (lookahead == ',') ADVANCE(105);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '/') ADVANCE(91);
      if (lookahead == '0') ADVANCE(113);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == '<') ADVANCE(181);
      if (lookahead == '=') ADVANCE(100);
      if (lookahead == '>') ADVANCE(183);
      if (lookahead == '@') ADVANCE(202);
      if (lookahead == '[') ADVANCE(104);
      if (lookahead == ']') ADVANCE(106);
      if (lookahead == '^') ADVANCE(180);
      if (lookahead == 'a') ADVANCE(47);
      if (lookahead == 'c') ADVANCE(17);
      if (lookahead == 'f') ADVANCE(18);
      if (lookahead == 'i') ADVANCE(34);
      if (lookahead == 'l') ADVANCE(24);
      if (lookahead == 'm') ADVANCE(53);
      if (lookahead == 'n') ADVANCE(55);
      if (lookahead == 'o') ADVANCE(48);
      if (lookahead == 'r') ADVANCE(67);
      if (lookahead == 's') ADVANCE(31);
      if (lookahead == 't') ADVANCE(42);
      if (lookahead == 'u') ADVANCE(59);
      if (lookahead == 'w') ADVANCE(38);
      if (lookahead == 'x') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(73)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(115);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(93);
      if (lookahead == '(') ADVANCE(132);
      if (lookahead == '-') ADVANCE(88);
      if (lookahead == '/') ADVANCE(92);
      if (lookahead == '0') ADVANCE(114);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (lookahead != 0) ADVANCE(131);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(93);
      if (lookahead == '(') ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead != 0) ADVANCE(131);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(93);
      if (lookahead == '(') ADVANCE(102);
      if (lookahead == '-') ADVANCE(88);
      if (lookahead == '/') ADVANCE(92);
      if (lookahead == '0') ADVANCE(114);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (lookahead != 0) ADVANCE(131);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(93);
      if (lookahead == '(') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead != 0) ADVANCE(131);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(101);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead == '(') ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6)
      if (lookahead != 0) ADVANCE(131);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(101);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead == '(') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6)
      if (lookahead != 0) ADVANCE(131);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '"') ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(123);
      if (lookahead != 0) ADVANCE(122);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(121);
      if (lookahead == '(') ADVANCE(102);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '0') ADVANCE(113);
      if (lookahead == 'f') ADVANCE(136);
      if (lookahead == 'n') ADVANCE(162);
      if (lookahead == 't') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 9:
      if (lookahead == '(') ADVANCE(132);
      if (lookahead == 'u') ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead != 0) ADVANCE(131);
      END_STATE();
    case 10:
      if (lookahead == '(') ADVANCE(102);
      if (lookahead == 'u') ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead != 0) ADVANCE(131);
      END_STATE();
    case 11:
      if (lookahead == '(') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (lookahead != 0) ADVANCE(131);
      END_STATE();
    case 12:
      if (lookahead == '(') ADVANCE(13);
      if (lookahead == ')') ADVANCE(103);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 13:
      if (lookahead == ')') ADVANCE(201);
      END_STATE();
    case 14:
      if (lookahead == '>') ADVANCE(205);
      END_STATE();
    case 15:
      if (lookahead == '_') ADVANCE(39);
      END_STATE();
    case 16:
      if (lookahead == '_') ADVANCE(56);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(20);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(44);
      if (lookahead == 'n') ADVANCE(203);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(40);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(185);
      END_STATE();
    case 22:
      if (lookahead == 'd') ADVANCE(187);
      END_STATE();
    case 23:
      if (lookahead == 'd') ADVANCE(84);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 34:
      if (lookahead == 'f') ADVANCE(94);
      if (lookahead == 'm') ADVANCE(19);
      if (lookahead == 's') ADVANCE(191);
      END_STATE();
    case 35:
      if (lookahead == 'f') ADVANCE(15);
      END_STATE();
    case 36:
      if (lookahead == 'g') ADVANCE(197);
      END_STATE();
    case 37:
      if (lookahead == 'g') ADVANCE(28);
      END_STATE();
    case 38:
      if (lookahead == 'h') ADVANCE(32);
      END_STATE();
    case 39:
      if (lookahead == 'h') ADVANCE(54);
      END_STATE();
    case 40:
      if (lookahead == 'h') ADVANCE(26);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(65);
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 46:
      if (lookahead == 'm') ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(79);
      if (lookahead == 'r') ADVANCE(189);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 50:
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 51:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 52:
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 53:
      if (lookahead == 'o') ADVANCE(22);
      if (lookahead == 'u') ADVANCE(63);
      END_STATE();
    case 54:
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 55:
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 56:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(193);
      END_STATE();
    case 58:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 59:
      if (lookahead == 's') ADVANCE(41);
      END_STATE();
    case 60:
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 61:
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 62:
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(176);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 67:
      if (lookahead == 'u') ADVANCE(49);
      END_STATE();
    case 68:
      if (lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 69:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(107);
      END_STATE();
    case 70:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(70)
      if (lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(109);
      END_STATE();
    case 72:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(111);
      END_STATE();
    case 73:
      if (eof) ADVANCE(77);
      if (lookahead == '"') ADVANCE(121);
      if (lookahead == '#') ADVANCE(206);
      if (lookahead == '(') ADVANCE(102);
      if (lookahead == ')') ADVANCE(103);
      if (lookahead == '*') ADVANCE(179);
      if (lookahead == '+') ADVANCE(178);
      if (lookahead == ',') ADVANCE(105);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '/') ADVANCE(91);
      if (lookahead == '0') ADVANCE(113);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == '<') ADVANCE(181);
      if (lookahead == '=') ADVANCE(100);
      if (lookahead == '>') ADVANCE(183);
      if (lookahead == '@') ADVANCE(202);
      if (lookahead == '[') ADVANCE(104);
      if (lookahead == ']') ADVANCE(106);
      if (lookahead == '^') ADVANCE(180);
      if (lookahead == 'a') ADVANCE(47);
      if (lookahead == 'c') ADVANCE(17);
      if (lookahead == 'f') ADVANCE(18);
      if (lookahead == 'i') ADVANCE(34);
      if (lookahead == 'l') ADVANCE(24);
      if (lookahead == 'm') ADVANCE(53);
      if (lookahead == 'n') ADVANCE(55);
      if (lookahead == 'o') ADVANCE(48);
      if (lookahead == 'r') ADVANCE(67);
      if (lookahead == 's') ADVANCE(31);
      if (lookahead == 't') ADVANCE(42);
      if (lookahead == 'u') ADVANCE(59);
      if (lookahead == 'w') ADVANCE(38);
      if (lookahead == 'x') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(73)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(115);
      END_STATE();
    case 74:
      if (eof) ADVANCE(77);
      if (lookahead == '#') ADVANCE(206);
      if (lookahead == '(') ADVANCE(102);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == '@') ADVANCE(202);
      if (lookahead == 'c') ADVANCE(135);
      if (lookahead == 'f') ADVANCE(154);
      if (lookahead == 'i') ADVANCE(148);
      if (lookahead == 'l') ADVANCE(140);
      if (lookahead == 'o') ADVANCE(156);
      if (lookahead == 'r') ADVANCE(172);
      if (lookahead == 't') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(74)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 75:
      if (eof) ADVANCE(77);
      if (lookahead == '#') ADVANCE(206);
      if (lookahead == '*') ADVANCE(179);
      if (lookahead == '+') ADVANCE(178);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '/') ADVANCE(91);
      if (lookahead == '<') ADVANCE(181);
      if (lookahead == '>') ADVANCE(183);
      if (lookahead == '@') ADVANCE(202);
      if (lookahead == '^') ADVANCE(180);
      if (lookahead == 'a') ADVANCE(159);
      if (lookahead == 'c') ADVANCE(135);
      if (lookahead == 'f') ADVANCE(154);
      if (lookahead == 'i') ADVANCE(147);
      if (lookahead == 'l') ADVANCE(140);
      if (lookahead == 'm') ADVANCE(161);
      if (lookahead == 'o') ADVANCE(155);
      if (lookahead == 'r') ADVANCE(172);
      if (lookahead == 't') ADVANCE(151);
      if (lookahead == 'x') ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(75)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 76:
      if (eof) ADVANCE(77);
      if (lookahead == '#') ADVANCE(206);
      if (lookahead == '@') ADVANCE(202);
      if (lookahead == 'c') ADVANCE(135);
      if (lookahead == 'f') ADVANCE(154);
      if (lookahead == 'i') ADVANCE(148);
      if (lookahead == 'l') ADVANCE(140);
      if (lookahead == 'o') ADVANCE(156);
      if (lookahead == 'r') ADVANCE(172);
      if (lookahead == 't') ADVANCE(151);
      if (lookahead == 'w') ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(76)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_image);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_self_hosted);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_run_on);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_run_on);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
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
          lookahead != '(') ADVANCE(131);
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
          lookahead != '(') ADVANCE(131);
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
          lookahead != '(') ADVANCE(131);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_LF);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_mut);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_mut);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_func_call_expr_token1);
      if (lookahead == '\n') ADVANCE(101);
      if (lookahead == '\r') ADVANCE(6);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(131);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(131);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(131);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (lookahead == 'b') ADVANCE(69);
      if (lookahead == 'o') ADVANCE(71);
      if (lookahead == 'x') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (lookahead == 'b') ADVANCE(128);
      if (lookahead == 'o') ADVANCE(129);
      if (lookahead == 'x') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(131);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(131);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"') ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(122);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'g') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(131);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'i') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(131);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'n') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(131);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 's') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(131);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(131);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(131);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(131);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_string_ident_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ')') ADVANCE(133);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_') ADVANCE(163);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(137);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(152);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(149);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(186);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(188);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(168);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(196);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(200);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(118);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(120);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(82);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(166);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(95);
      if (lookahead == 's') ADVANCE(192);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(95);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'h') ADVANCE(141);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'h') ADVANCE(146);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(169);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(167);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(142);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(204);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(80);
      if (lookahead == 'r') ADVANCE(190);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(80);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(134);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(86);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(138);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(164);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(139);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(170);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(158);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(194);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(173);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(145);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(144);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(97);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(153);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(177);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(99);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(157);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(143);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(171);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(182);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(184);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_mod);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_mod);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_is);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_xor);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_xor);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_cache);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_cache);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_using);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(131);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_title);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_title);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_LPAREN_RPAREN);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_fn);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 74},
  [2] = {.lex_state = 75},
  [3] = {.lex_state = 75},
  [4] = {.lex_state = 75},
  [5] = {.lex_state = 75},
  [6] = {.lex_state = 75},
  [7] = {.lex_state = 75},
  [8] = {.lex_state = 75},
  [9] = {.lex_state = 75},
  [10] = {.lex_state = 75},
  [11] = {.lex_state = 75},
  [12] = {.lex_state = 75},
  [13] = {.lex_state = 75},
  [14] = {.lex_state = 74},
  [15] = {.lex_state = 74},
  [16] = {.lex_state = 8},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 8},
  [21] = {.lex_state = 8},
  [22] = {.lex_state = 8},
  [23] = {.lex_state = 8},
  [24] = {.lex_state = 8},
  [25] = {.lex_state = 8},
  [26] = {.lex_state = 8},
  [27] = {.lex_state = 8},
  [28] = {.lex_state = 8},
  [29] = {.lex_state = 8},
  [30] = {.lex_state = 8},
  [31] = {.lex_state = 8},
  [32] = {.lex_state = 8},
  [33] = {.lex_state = 8},
  [34] = {.lex_state = 8},
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
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 76},
  [58] = {.lex_state = 74},
  [59] = {.lex_state = 74},
  [60] = {.lex_state = 74},
  [61] = {.lex_state = 74},
  [62] = {.lex_state = 74},
  [63] = {.lex_state = 74},
  [64] = {.lex_state = 74},
  [65] = {.lex_state = 74},
  [66] = {.lex_state = 74},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 74},
  [69] = {.lex_state = 74},
  [70] = {.lex_state = 74},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 6},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 6},
  [79] = {.lex_state = 10},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 10},
  [82] = {.lex_state = 6},
  [83] = {.lex_state = 11},
  [84] = {.lex_state = 11},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 9},
  [89] = {.lex_state = 5},
  [90] = {.lex_state = 12},
  [91] = {.lex_state = 10},
  [92] = {.lex_state = 6},
  [93] = {.lex_state = 7},
  [94] = {.lex_state = 6},
  [95] = {.lex_state = 7},
  [96] = {.lex_state = 12},
  [97] = {.lex_state = 10},
  [98] = {.lex_state = 12},
  [99] = {.lex_state = 12},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 6},
  [102] = {.lex_state = 10},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 12},
  [105] = {.lex_state = 12},
  [106] = {.lex_state = 4},
  [107] = {.lex_state = 12},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 12},
  [110] = {.lex_state = 12},
  [111] = {.lex_state = 7},
  [112] = {.lex_state = 7},
  [113] = {.lex_state = 7},
  [114] = {.lex_state = 12},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 12},
  [117] = {.lex_state = 46},
  [118] = {.lex_state = 74},
  [119] = {.lex_state = 74},
  [120] = {.lex_state = 74},
  [121] = {.lex_state = 70},
  [122] = {.lex_state = 133},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 133},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 133},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 133},
  [129] = {.lex_state = 74},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 12},
  [132] = {.lex_state = 74},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 12},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 12},
  [137] = {.lex_state = 12},
  [138] = {.lex_state = 0},
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
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
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
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_fn] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(135),
    [sym_stmt] = STATE(14),
    [sym_on_stmt] = STATE(69),
    [sym_run_on_stmt] = STATE(69),
    [sym_if_expr] = STATE(69),
    [sym_let_stmt] = STATE(69),
    [sym_func_call_expr] = STATE(69),
    [sym_cache_stmt] = STATE(69),
    [sym_title_stmt] = STATE(69),
    [sym_func_annotation] = STATE(87),
    [sym_func_def_stmt] = STATE(69),
    [aux_sym_source_file_repeat1] = STATE(14),
    [aux_sym_func_def_stmt_repeat1] = STATE(87),
    [anon_sym_on] = ACTIONS(3),
    [anon_sym_run_on] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(9),
    [sym_ident] = ACTIONS(11),
    [anon_sym_cache] = ACTIONS(13),
    [anon_sym_title] = ACTIONS(15),
    [anon_sym_AT] = ACTIONS(17),
    [anon_sym_fn] = ACTIONS(19),
    [sym_comment] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(23), 10,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AT,
      sym_comment,
    ACTIONS(25), 15,
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
  [30] = 4,
    ACTIONS(27), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_comment,
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
    ACTIONS(29), 8,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      sym_ident,
      anon_sym_cache,
      anon_sym_title,
      anon_sym_fn,
  [64] = 4,
    ACTIONS(35), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_comment,
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
    ACTIONS(37), 8,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      sym_ident,
      anon_sym_cache,
      anon_sym_title,
      anon_sym_fn,
  [98] = 4,
    ACTIONS(39), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_comment,
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
    ACTIONS(41), 8,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      sym_ident,
      anon_sym_cache,
      anon_sym_title,
      anon_sym_fn,
  [132] = 4,
    ACTIONS(43), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_comment,
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
    ACTIONS(45), 8,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      sym_ident,
      anon_sym_cache,
      anon_sym_title,
      anon_sym_fn,
  [166] = 2,
    ACTIONS(47), 10,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AT,
      sym_comment,
    ACTIONS(49), 15,
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
  [196] = 2,
    ACTIONS(51), 10,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AT,
      sym_comment,
    ACTIONS(53), 15,
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
  [226] = 2,
    ACTIONS(55), 10,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AT,
      sym_comment,
    ACTIONS(57), 15,
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
  [256] = 2,
    ACTIONS(59), 10,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AT,
      sym_comment,
    ACTIONS(61), 15,
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
  [286] = 2,
    ACTIONS(63), 10,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AT,
      sym_comment,
    ACTIONS(65), 15,
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
  [316] = 2,
    ACTIONS(67), 10,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AT,
      sym_comment,
    ACTIONS(69), 15,
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
  [346] = 2,
    ACTIONS(71), 10,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AT,
      sym_comment,
    ACTIONS(73), 15,
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
  [376] = 14,
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
      anon_sym_AT,
    ACTIONS(19), 1,
      anon_sym_fn,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    STATE(15), 2,
      sym_stmt,
      aux_sym_source_file_repeat1,
    STATE(87), 2,
      sym_func_annotation,
      aux_sym_func_def_stmt_repeat1,
    STATE(69), 8,
      sym_on_stmt,
      sym_run_on_stmt,
      sym_if_expr,
      sym_let_stmt,
      sym_func_call_expr,
      sym_cache_stmt,
      sym_title_stmt,
      sym_func_def_stmt,
  [428] = 14,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    ACTIONS(79), 1,
      anon_sym_on,
    ACTIONS(82), 1,
      anon_sym_run_on,
    ACTIONS(85), 1,
      anon_sym_if,
    ACTIONS(88), 1,
      anon_sym_let,
    ACTIONS(91), 1,
      sym_ident,
    ACTIONS(94), 1,
      anon_sym_cache,
    ACTIONS(97), 1,
      anon_sym_title,
    ACTIONS(100), 1,
      anon_sym_AT,
    ACTIONS(103), 1,
      anon_sym_fn,
    ACTIONS(106), 1,
      sym_comment,
    STATE(15), 2,
      sym_stmt,
      aux_sym_source_file_repeat1,
    STATE(87), 2,
      sym_func_annotation,
      aux_sym_func_def_stmt_repeat1,
    STATE(69), 8,
      sym_on_stmt,
      sym_run_on_stmt,
      sym_if_expr,
      sym_let_stmt,
      sym_func_call_expr,
      sym_cache_stmt,
      sym_title_stmt,
      sym_func_def_stmt,
  [480] = 10,
    ACTIONS(109), 1,
      anon_sym_DASH,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 1,
      aux_sym_number_token4,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    ACTIONS(121), 1,
      sym_ident,
    ACTIONS(123), 1,
      anon_sym_not,
    STATE(35), 1,
      sym_expr,
    ACTIONS(117), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(113), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(41), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [519] = 10,
    ACTIONS(109), 1,
      anon_sym_DASH,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 1,
      aux_sym_number_token4,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    ACTIONS(121), 1,
      sym_ident,
    ACTIONS(123), 1,
      anon_sym_not,
    STATE(51), 1,
      sym_expr,
    ACTIONS(117), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(113), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(41), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [558] = 10,
    ACTIONS(109), 1,
      anon_sym_DASH,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 1,
      aux_sym_number_token4,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    ACTIONS(121), 1,
      sym_ident,
    ACTIONS(123), 1,
      anon_sym_not,
    STATE(44), 1,
      sym_expr,
    ACTIONS(117), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(113), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(41), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [597] = 10,
    ACTIONS(109), 1,
      anon_sym_DASH,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 1,
      aux_sym_number_token4,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    ACTIONS(121), 1,
      sym_ident,
    ACTIONS(123), 1,
      anon_sym_not,
    STATE(49), 1,
      sym_expr,
    ACTIONS(117), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(113), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(41), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [636] = 10,
    ACTIONS(109), 1,
      anon_sym_DASH,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 1,
      aux_sym_number_token4,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    ACTIONS(121), 1,
      sym_ident,
    ACTIONS(123), 1,
      anon_sym_not,
    STATE(39), 1,
      sym_expr,
    ACTIONS(117), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(113), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(41), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [675] = 10,
    ACTIONS(109), 1,
      anon_sym_DASH,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 1,
      aux_sym_number_token4,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    ACTIONS(121), 1,
      sym_ident,
    ACTIONS(123), 1,
      anon_sym_not,
    STATE(45), 1,
      sym_expr,
    ACTIONS(117), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(113), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(41), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [714] = 10,
    ACTIONS(125), 1,
      anon_sym_DASH,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      aux_sym_number_token4,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      sym_ident,
    ACTIONS(139), 1,
      anon_sym_not,
    STATE(3), 1,
      sym_expr,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(129), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(9), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [753] = 10,
    ACTIONS(109), 1,
      anon_sym_DASH,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 1,
      aux_sym_number_token4,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    ACTIONS(121), 1,
      sym_ident,
    ACTIONS(123), 1,
      anon_sym_not,
    STATE(53), 1,
      sym_expr,
    ACTIONS(117), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(113), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(41), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [792] = 10,
    ACTIONS(125), 1,
      anon_sym_DASH,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      aux_sym_number_token4,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      sym_ident,
    ACTIONS(139), 1,
      anon_sym_not,
    STATE(2), 1,
      sym_expr,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(129), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(9), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [831] = 10,
    ACTIONS(109), 1,
      anon_sym_DASH,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 1,
      aux_sym_number_token4,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    ACTIONS(121), 1,
      sym_ident,
    ACTIONS(123), 1,
      anon_sym_not,
    STATE(48), 1,
      sym_expr,
    ACTIONS(117), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(113), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(41), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [870] = 10,
    ACTIONS(109), 1,
      anon_sym_DASH,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 1,
      aux_sym_number_token4,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    ACTIONS(121), 1,
      sym_ident,
    ACTIONS(123), 1,
      anon_sym_not,
    STATE(46), 1,
      sym_expr,
    ACTIONS(117), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(113), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(41), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [909] = 10,
    ACTIONS(109), 1,
      anon_sym_DASH,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 1,
      aux_sym_number_token4,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    ACTIONS(121), 1,
      sym_ident,
    ACTIONS(123), 1,
      anon_sym_not,
    STATE(52), 1,
      sym_expr,
    ACTIONS(117), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(113), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(41), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [948] = 10,
    ACTIONS(109), 1,
      anon_sym_DASH,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 1,
      aux_sym_number_token4,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    ACTIONS(121), 1,
      sym_ident,
    ACTIONS(123), 1,
      anon_sym_not,
    STATE(50), 1,
      sym_expr,
    ACTIONS(117), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(113), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(41), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [987] = 10,
    ACTIONS(125), 1,
      anon_sym_DASH,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      aux_sym_number_token4,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      sym_ident,
    ACTIONS(139), 1,
      anon_sym_not,
    STATE(4), 1,
      sym_expr,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(129), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(9), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [1026] = 10,
    ACTIONS(109), 1,
      anon_sym_DASH,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 1,
      aux_sym_number_token4,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    ACTIONS(121), 1,
      sym_ident,
    ACTIONS(123), 1,
      anon_sym_not,
    STATE(47), 1,
      sym_expr,
    ACTIONS(117), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(113), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(41), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [1065] = 10,
    ACTIONS(125), 1,
      anon_sym_DASH,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      aux_sym_number_token4,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      sym_ident,
    ACTIONS(139), 1,
      anon_sym_not,
    STATE(5), 1,
      sym_expr,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(129), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(9), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [1104] = 10,
    ACTIONS(125), 1,
      anon_sym_DASH,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      aux_sym_number_token4,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      sym_ident,
    ACTIONS(139), 1,
      anon_sym_not,
    STATE(10), 1,
      sym_expr,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(129), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(9), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [1143] = 10,
    ACTIONS(125), 1,
      anon_sym_DASH,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      aux_sym_number_token4,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      sym_ident,
    ACTIONS(139), 1,
      anon_sym_not,
    STATE(6), 1,
      sym_expr,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(129), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(9), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [1182] = 10,
    ACTIONS(109), 1,
      anon_sym_DASH,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 1,
      aux_sym_number_token4,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    ACTIONS(121), 1,
      sym_ident,
    ACTIONS(123), 1,
      anon_sym_not,
    STATE(43), 1,
      sym_expr,
    ACTIONS(117), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(113), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(41), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [1221] = 2,
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
  [1242] = 2,
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
  [1263] = 2,
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
  [1284] = 2,
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
  [1305] = 2,
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
  [1326] = 2,
    ACTIONS(73), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(71), 14,
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
  [1347] = 2,
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
  [1368] = 2,
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
  [1389] = 3,
    ACTIONS(143), 1,
      anon_sym_COLON,
    ACTIONS(145), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(141), 12,
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
  [1411] = 3,
    ACTIONS(147), 1,
      anon_sym_RPAREN,
    ACTIONS(145), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(141), 12,
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
  [1433] = 3,
    ACTIONS(149), 1,
      anon_sym_RPAREN,
    ACTIONS(145), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(141), 12,
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
  [1455] = 3,
    ACTIONS(151), 1,
      anon_sym_RPAREN,
    ACTIONS(145), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(141), 12,
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
  [1477] = 3,
    ACTIONS(153), 1,
      anon_sym_RPAREN,
    ACTIONS(145), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(141), 12,
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
  [1499] = 3,
    ACTIONS(155), 1,
      anon_sym_RPAREN,
    ACTIONS(145), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(141), 12,
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
  [1521] = 3,
    ACTIONS(157), 1,
      anon_sym_RPAREN,
    ACTIONS(145), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(141), 12,
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
  [1543] = 3,
    ACTIONS(159), 1,
      anon_sym_RPAREN,
    ACTIONS(145), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(141), 12,
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
  [1565] = 3,
    ACTIONS(161), 1,
      anon_sym_RPAREN,
    ACTIONS(145), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(141), 12,
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
  [1587] = 3,
    ACTIONS(163), 1,
      anon_sym_RPAREN,
    ACTIONS(145), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(141), 12,
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
  [1609] = 3,
    ACTIONS(165), 1,
      anon_sym_RPAREN,
    ACTIONS(145), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(141), 12,
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
  [1631] = 7,
    ACTIONS(169), 1,
      anon_sym_LF,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      aux_sym_string_ident_token1,
    STATE(72), 1,
      sym_paren_expr,
    ACTIONS(167), 3,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
    STATE(55), 3,
      sym_number,
      sym_string_ident,
      aux_sym_run_on_stmt_repeat1,
    ACTIONS(173), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
  [1660] = 7,
    ACTIONS(180), 1,
      anon_sym_LF,
    ACTIONS(182), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      aux_sym_string_ident_token1,
    STATE(72), 1,
      sym_paren_expr,
    ACTIONS(177), 3,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
    STATE(55), 3,
      sym_number,
      sym_string_ident,
      aux_sym_run_on_stmt_repeat1,
    ACTIONS(185), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
  [1689] = 7,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      aux_sym_string_ident_token1,
    ACTIONS(193), 1,
      anon_sym_LF,
    STATE(72), 1,
      sym_paren_expr,
    ACTIONS(191), 3,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
    STATE(54), 3,
      sym_number,
      sym_string_ident,
      aux_sym_run_on_stmt_repeat1,
    ACTIONS(173), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
  [1718] = 3,
    ACTIONS(199), 1,
      anon_sym_where,
    ACTIONS(195), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_comment,
    ACTIONS(197), 8,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      sym_ident,
      anon_sym_cache,
      anon_sym_title,
      anon_sym_fn,
  [1737] = 2,
    ACTIONS(201), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_comment,
    ACTIONS(203), 8,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      sym_ident,
      anon_sym_cache,
      anon_sym_title,
      anon_sym_fn,
  [1753] = 2,
    ACTIONS(205), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_comment,
    ACTIONS(207), 8,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      sym_ident,
      anon_sym_cache,
      anon_sym_title,
      anon_sym_fn,
  [1769] = 2,
    ACTIONS(209), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_comment,
    ACTIONS(211), 8,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      sym_ident,
      anon_sym_cache,
      anon_sym_title,
      anon_sym_fn,
  [1785] = 2,
    ACTIONS(213), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_comment,
    ACTIONS(215), 8,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      sym_ident,
      anon_sym_cache,
      anon_sym_title,
      anon_sym_fn,
  [1801] = 2,
    ACTIONS(217), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_comment,
    ACTIONS(219), 8,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      sym_ident,
      anon_sym_cache,
      anon_sym_title,
      anon_sym_fn,
  [1817] = 2,
    ACTIONS(221), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_comment,
    ACTIONS(223), 8,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      sym_ident,
      anon_sym_cache,
      anon_sym_title,
      anon_sym_fn,
  [1833] = 2,
    ACTIONS(225), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_comment,
    ACTIONS(227), 8,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      sym_ident,
      anon_sym_cache,
      anon_sym_title,
      anon_sym_fn,
  [1849] = 2,
    ACTIONS(229), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_comment,
    ACTIONS(231), 8,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      sym_ident,
      anon_sym_cache,
      anon_sym_title,
      anon_sym_fn,
  [1865] = 2,
    ACTIONS(233), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_comment,
    ACTIONS(235), 8,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      sym_ident,
      anon_sym_cache,
      anon_sym_title,
      anon_sym_fn,
  [1881] = 3,
    ACTIONS(239), 1,
      anon_sym_LF,
    ACTIONS(241), 1,
      anon_sym_LPAREN2,
    ACTIONS(237), 9,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_string_ident_token1,
  [1899] = 2,
    ACTIONS(243), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_comment,
    ACTIONS(245), 8,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      sym_ident,
      anon_sym_cache,
      anon_sym_title,
      anon_sym_fn,
  [1915] = 2,
    ACTIONS(247), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_comment,
    ACTIONS(249), 8,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      sym_ident,
      anon_sym_cache,
      anon_sym_title,
      anon_sym_fn,
  [1931] = 2,
    ACTIONS(251), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_comment,
    ACTIONS(253), 8,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      sym_ident,
      anon_sym_cache,
      anon_sym_title,
      anon_sym_fn,
  [1947] = 2,
    ACTIONS(257), 1,
      anon_sym_LF,
    ACTIONS(255), 9,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_string_ident_token1,
  [1962] = 2,
    ACTIONS(239), 1,
      anon_sym_LF,
    ACTIONS(237), 9,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_string_ident_token1,
  [1977] = 2,
    ACTIONS(51), 1,
      anon_sym_LF,
    ACTIONS(53), 9,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_string_ident_token1,
  [1992] = 2,
    ACTIONS(261), 1,
      anon_sym_LF,
    ACTIONS(259), 9,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_string_ident_token1,
  [2007] = 2,
    ACTIONS(63), 1,
      anon_sym_LF,
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
  [2022] = 5,
    ACTIONS(263), 1,
      aux_sym_func_call_expr_token1,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      aux_sym_string_ident_token1,
    STATE(92), 1,
      sym_paren_expr,
    STATE(82), 2,
      sym_string_ident,
      aux_sym_func_call_expr_repeat1,
  [2039] = 5,
    ACTIONS(269), 1,
      anon_sym_LF,
    ACTIONS(271), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      aux_sym_string_ident_token1,
    STATE(100), 1,
      sym_paren_expr,
    STATE(77), 2,
      sym_string_ident,
      aux_sym_func_call_expr_repeat1,
  [2056] = 5,
    ACTIONS(269), 1,
      aux_sym_func_call_expr_token1,
    ACTIONS(277), 1,
      anon_sym_LPAREN,
    ACTIONS(280), 1,
      aux_sym_string_ident_token1,
    STATE(92), 1,
      sym_paren_expr,
    STATE(78), 2,
      sym_string_ident,
      aux_sym_func_call_expr_repeat1,
  [2073] = 5,
    ACTIONS(283), 1,
      anon_sym_LPAREN,
    ACTIONS(286), 1,
      aux_sym_string_ident_token1,
    ACTIONS(289), 1,
      anon_sym_using,
    STATE(91), 1,
      sym_paren_expr,
    STATE(79), 2,
      sym_string_ident,
      aux_sym_func_call_expr_repeat1,
  [2090] = 5,
    ACTIONS(291), 1,
      anon_sym_LF,
    ACTIONS(293), 1,
      anon_sym_LPAREN,
    ACTIONS(295), 1,
      aux_sym_string_ident_token1,
    STATE(100), 1,
      sym_paren_expr,
    STATE(77), 2,
      sym_string_ident,
      aux_sym_func_call_expr_repeat1,
  [2107] = 5,
    ACTIONS(297), 1,
      anon_sym_LPAREN,
    ACTIONS(299), 1,
      aux_sym_string_ident_token1,
    ACTIONS(301), 1,
      anon_sym_using,
    STATE(91), 1,
      sym_paren_expr,
    STATE(79), 2,
      sym_string_ident,
      aux_sym_func_call_expr_repeat1,
  [2124] = 5,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(267), 1,
      aux_sym_string_ident_token1,
    ACTIONS(303), 1,
      aux_sym_func_call_expr_token1,
    STATE(92), 1,
      sym_paren_expr,
    STATE(78), 2,
      sym_string_ident,
      aux_sym_func_call_expr_repeat1,
  [2141] = 4,
    ACTIONS(305), 1,
      anon_sym_LPAREN,
    ACTIONS(307), 1,
      aux_sym_string_ident_token1,
    STATE(100), 1,
      sym_paren_expr,
    STATE(80), 2,
      sym_string_ident,
      aux_sym_func_call_expr_repeat1,
  [2155] = 4,
    ACTIONS(297), 1,
      anon_sym_LPAREN,
    ACTIONS(309), 1,
      aux_sym_string_ident_token1,
    STATE(91), 1,
      sym_paren_expr,
    STATE(81), 2,
      sym_string_ident,
      aux_sym_func_call_expr_repeat1,
  [2169] = 3,
    ACTIONS(311), 1,
      anon_sym_AT,
    ACTIONS(314), 1,
      anon_sym_fn,
    STATE(85), 2,
      sym_func_annotation,
      aux_sym_func_def_stmt_repeat1,
  [2180] = 3,
    ACTIONS(239), 1,
      anon_sym_LF,
    ACTIONS(316), 1,
      anon_sym_LPAREN2,
    ACTIONS(237), 2,
      anon_sym_LPAREN,
      aux_sym_string_ident_token1,
  [2191] = 3,
    ACTIONS(17), 1,
      anon_sym_AT,
    ACTIONS(318), 1,
      anon_sym_fn,
    STATE(85), 2,
      sym_func_annotation,
      aux_sym_func_def_stmt_repeat1,
  [2202] = 2,
    ACTIONS(320), 1,
      anon_sym_LPAREN2,
    ACTIONS(237), 3,
      anon_sym_LPAREN,
      aux_sym_string_ident_token1,
      anon_sym_using,
  [2211] = 3,
    ACTIONS(239), 1,
      aux_sym_func_call_expr_token1,
    ACTIONS(322), 1,
      anon_sym_LPAREN2,
    ACTIONS(237), 2,
      anon_sym_LPAREN,
      aux_sym_string_ident_token1,
  [2222] = 2,
    STATE(123), 1,
      sym_type,
    ACTIONS(324), 2,
      sym_ident,
      anon_sym_LPAREN_RPAREN,
  [2230] = 2,
    ACTIONS(239), 1,
      anon_sym_LPAREN,
    ACTIONS(237), 2,
      aux_sym_string_ident_token1,
      anon_sym_using,
  [2238] = 2,
    ACTIONS(239), 1,
      aux_sym_func_call_expr_token1,
    ACTIONS(237), 2,
      anon_sym_LPAREN,
      aux_sym_string_ident_token1,
  [2246] = 3,
    ACTIONS(326), 1,
      anon_sym_DQUOTE,
    ACTIONS(328), 1,
      aux_sym_string_token1,
    STATE(93), 1,
      aux_sym_string_repeat1,
  [2256] = 2,
    ACTIONS(51), 1,
      aux_sym_func_call_expr_token1,
    ACTIONS(53), 2,
      anon_sym_LPAREN,
      aux_sym_string_ident_token1,
  [2264] = 3,
    ACTIONS(331), 1,
      anon_sym_DQUOTE,
    ACTIONS(333), 1,
      aux_sym_string_token1,
    STATE(112), 1,
      aux_sym_string_repeat1,
  [2274] = 2,
    STATE(138), 1,
      sym_type,
    ACTIONS(324), 2,
      sym_ident,
      anon_sym_LPAREN_RPAREN,
  [2282] = 2,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(255), 2,
      aux_sym_string_ident_token1,
      anon_sym_using,
  [2290] = 2,
    STATE(125), 1,
      sym_type,
    ACTIONS(324), 2,
      sym_ident,
      anon_sym_LPAREN_RPAREN,
  [2298] = 1,
    ACTIONS(335), 3,
      anon_sym_COLON,
      anon_sym_RPAREN,
      sym_ident,
  [2304] = 2,
    ACTIONS(239), 1,
      anon_sym_LF,
    ACTIONS(237), 2,
      anon_sym_LPAREN,
      aux_sym_string_ident_token1,
  [2312] = 2,
    ACTIONS(257), 1,
      aux_sym_func_call_expr_token1,
    ACTIONS(255), 2,
      anon_sym_LPAREN,
      aux_sym_string_ident_token1,
  [2320] = 2,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 2,
      aux_sym_string_ident_token1,
      anon_sym_using,
  [2328] = 2,
    ACTIONS(257), 1,
      anon_sym_LF,
    ACTIONS(255), 2,
      anon_sym_LPAREN,
      aux_sym_string_ident_token1,
  [2336] = 3,
    ACTIONS(337), 1,
      anon_sym_RPAREN,
    ACTIONS(339), 1,
      sym_ident,
    STATE(105), 1,
      aux_sym_func_def_stmt_repeat2,
  [2346] = 3,
    ACTIONS(341), 1,
      anon_sym_RPAREN,
    ACTIONS(343), 1,
      sym_ident,
    STATE(105), 1,
      aux_sym_func_def_stmt_repeat2,
  [2356] = 2,
    ACTIONS(51), 1,
      anon_sym_LF,
    ACTIONS(53), 2,
      anon_sym_LPAREN,
      aux_sym_string_ident_token1,
  [2364] = 2,
    STATE(116), 1,
      sym_type,
    ACTIONS(324), 2,
      sym_ident,
      anon_sym_LPAREN_RPAREN,
  [2372] = 2,
    STATE(56), 1,
      sym_run_on_type,
    ACTIONS(346), 2,
      anon_sym_image,
      anon_sym_self_hosted,
  [2380] = 3,
    ACTIONS(339), 1,
      sym_ident,
    ACTIONS(348), 1,
      anon_sym_RPAREN,
    STATE(104), 1,
      aux_sym_func_def_stmt_repeat2,
  [2390] = 3,
    ACTIONS(339), 1,
      sym_ident,
    ACTIONS(348), 1,
      anon_sym_RPAREN,
    STATE(105), 1,
      aux_sym_func_def_stmt_repeat2,
  [2400] = 3,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      aux_sym_string_token1,
    STATE(113), 1,
      aux_sym_string_repeat1,
  [2410] = 3,
    ACTIONS(354), 1,
      anon_sym_DQUOTE,
    ACTIONS(356), 1,
      aux_sym_string_token1,
    STATE(93), 1,
      aux_sym_string_repeat1,
  [2420] = 3,
    ACTIONS(356), 1,
      aux_sym_string_token1,
    ACTIONS(358), 1,
      anon_sym_DQUOTE,
    STATE(93), 1,
      aux_sym_string_repeat1,
  [2430] = 3,
    ACTIONS(339), 1,
      sym_ident,
    ACTIONS(360), 1,
      anon_sym_RPAREN,
    STATE(110), 1,
      aux_sym_func_def_stmt_repeat2,
  [2440] = 1,
    ACTIONS(362), 2,
      anon_sym_AT,
      anon_sym_fn,
  [2445] = 1,
    ACTIONS(364), 2,
      anon_sym_RPAREN,
      sym_ident,
  [2450] = 2,
    ACTIONS(366), 1,
      anon_sym_mut,
    ACTIONS(368), 1,
      sym_ident,
  [2457] = 2,
    ACTIONS(370), 1,
      anon_sym_COLON,
    ACTIONS(372), 1,
      anon_sym_DASH_GT,
  [2464] = 2,
    ACTIONS(374), 1,
      anon_sym_COLON,
    ACTIONS(376), 1,
      anon_sym_DASH_GT,
  [2471] = 2,
    ACTIONS(378), 1,
      anon_sym_COLON,
    ACTIONS(380), 1,
      anon_sym_DASH_GT,
  [2478] = 1,
    ACTIONS(382), 1,
      sym_event_type,
  [2482] = 1,
    ACTIONS(384), 1,
      aux_sym_string_ident_token2,
  [2486] = 1,
    ACTIONS(378), 1,
      anon_sym_COLON,
  [2490] = 1,
    ACTIONS(386), 1,
      aux_sym_string_ident_token2,
  [2494] = 1,
    ACTIONS(388), 1,
      anon_sym_COLON,
  [2498] = 1,
    ACTIONS(390), 1,
      aux_sym_string_ident_token2,
  [2502] = 1,
    ACTIONS(392), 1,
      anon_sym_COLON,
  [2506] = 1,
    ACTIONS(394), 1,
      aux_sym_string_ident_token2,
  [2510] = 1,
    ACTIONS(396), 1,
      anon_sym_LPAREN,
  [2514] = 1,
    ACTIONS(398), 1,
      anon_sym_EQ,
  [2518] = 1,
    ACTIONS(400), 1,
      sym_ident,
  [2522] = 1,
    ACTIONS(402), 1,
      anon_sym_LPAREN,
  [2526] = 1,
    ACTIONS(404), 1,
      anon_sym_EQ,
  [2530] = 1,
    ACTIONS(406), 1,
      sym_ident,
  [2534] = 1,
    ACTIONS(408), 1,
      ts_builtin_sym_end,
  [2538] = 1,
    ACTIONS(410), 1,
      sym_ident,
  [2542] = 1,
    ACTIONS(412), 1,
      sym_ident,
  [2546] = 1,
    ACTIONS(414), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 30,
  [SMALL_STATE(4)] = 64,
  [SMALL_STATE(5)] = 98,
  [SMALL_STATE(6)] = 132,
  [SMALL_STATE(7)] = 166,
  [SMALL_STATE(8)] = 196,
  [SMALL_STATE(9)] = 226,
  [SMALL_STATE(10)] = 256,
  [SMALL_STATE(11)] = 286,
  [SMALL_STATE(12)] = 316,
  [SMALL_STATE(13)] = 346,
  [SMALL_STATE(14)] = 376,
  [SMALL_STATE(15)] = 428,
  [SMALL_STATE(16)] = 480,
  [SMALL_STATE(17)] = 519,
  [SMALL_STATE(18)] = 558,
  [SMALL_STATE(19)] = 597,
  [SMALL_STATE(20)] = 636,
  [SMALL_STATE(21)] = 675,
  [SMALL_STATE(22)] = 714,
  [SMALL_STATE(23)] = 753,
  [SMALL_STATE(24)] = 792,
  [SMALL_STATE(25)] = 831,
  [SMALL_STATE(26)] = 870,
  [SMALL_STATE(27)] = 909,
  [SMALL_STATE(28)] = 948,
  [SMALL_STATE(29)] = 987,
  [SMALL_STATE(30)] = 1026,
  [SMALL_STATE(31)] = 1065,
  [SMALL_STATE(32)] = 1104,
  [SMALL_STATE(33)] = 1143,
  [SMALL_STATE(34)] = 1182,
  [SMALL_STATE(35)] = 1221,
  [SMALL_STATE(36)] = 1242,
  [SMALL_STATE(37)] = 1263,
  [SMALL_STATE(38)] = 1284,
  [SMALL_STATE(39)] = 1305,
  [SMALL_STATE(40)] = 1326,
  [SMALL_STATE(41)] = 1347,
  [SMALL_STATE(42)] = 1368,
  [SMALL_STATE(43)] = 1389,
  [SMALL_STATE(44)] = 1411,
  [SMALL_STATE(45)] = 1433,
  [SMALL_STATE(46)] = 1455,
  [SMALL_STATE(47)] = 1477,
  [SMALL_STATE(48)] = 1499,
  [SMALL_STATE(49)] = 1521,
  [SMALL_STATE(50)] = 1543,
  [SMALL_STATE(51)] = 1565,
  [SMALL_STATE(52)] = 1587,
  [SMALL_STATE(53)] = 1609,
  [SMALL_STATE(54)] = 1631,
  [SMALL_STATE(55)] = 1660,
  [SMALL_STATE(56)] = 1689,
  [SMALL_STATE(57)] = 1718,
  [SMALL_STATE(58)] = 1737,
  [SMALL_STATE(59)] = 1753,
  [SMALL_STATE(60)] = 1769,
  [SMALL_STATE(61)] = 1785,
  [SMALL_STATE(62)] = 1801,
  [SMALL_STATE(63)] = 1817,
  [SMALL_STATE(64)] = 1833,
  [SMALL_STATE(65)] = 1849,
  [SMALL_STATE(66)] = 1865,
  [SMALL_STATE(67)] = 1881,
  [SMALL_STATE(68)] = 1899,
  [SMALL_STATE(69)] = 1915,
  [SMALL_STATE(70)] = 1931,
  [SMALL_STATE(71)] = 1947,
  [SMALL_STATE(72)] = 1962,
  [SMALL_STATE(73)] = 1977,
  [SMALL_STATE(74)] = 1992,
  [SMALL_STATE(75)] = 2007,
  [SMALL_STATE(76)] = 2022,
  [SMALL_STATE(77)] = 2039,
  [SMALL_STATE(78)] = 2056,
  [SMALL_STATE(79)] = 2073,
  [SMALL_STATE(80)] = 2090,
  [SMALL_STATE(81)] = 2107,
  [SMALL_STATE(82)] = 2124,
  [SMALL_STATE(83)] = 2141,
  [SMALL_STATE(84)] = 2155,
  [SMALL_STATE(85)] = 2169,
  [SMALL_STATE(86)] = 2180,
  [SMALL_STATE(87)] = 2191,
  [SMALL_STATE(88)] = 2202,
  [SMALL_STATE(89)] = 2211,
  [SMALL_STATE(90)] = 2222,
  [SMALL_STATE(91)] = 2230,
  [SMALL_STATE(92)] = 2238,
  [SMALL_STATE(93)] = 2246,
  [SMALL_STATE(94)] = 2256,
  [SMALL_STATE(95)] = 2264,
  [SMALL_STATE(96)] = 2274,
  [SMALL_STATE(97)] = 2282,
  [SMALL_STATE(98)] = 2290,
  [SMALL_STATE(99)] = 2298,
  [SMALL_STATE(100)] = 2304,
  [SMALL_STATE(101)] = 2312,
  [SMALL_STATE(102)] = 2320,
  [SMALL_STATE(103)] = 2328,
  [SMALL_STATE(104)] = 2336,
  [SMALL_STATE(105)] = 2346,
  [SMALL_STATE(106)] = 2356,
  [SMALL_STATE(107)] = 2364,
  [SMALL_STATE(108)] = 2372,
  [SMALL_STATE(109)] = 2380,
  [SMALL_STATE(110)] = 2390,
  [SMALL_STATE(111)] = 2400,
  [SMALL_STATE(112)] = 2410,
  [SMALL_STATE(113)] = 2420,
  [SMALL_STATE(114)] = 2430,
  [SMALL_STATE(115)] = 2440,
  [SMALL_STATE(116)] = 2445,
  [SMALL_STATE(117)] = 2450,
  [SMALL_STATE(118)] = 2457,
  [SMALL_STATE(119)] = 2464,
  [SMALL_STATE(120)] = 2471,
  [SMALL_STATE(121)] = 2478,
  [SMALL_STATE(122)] = 2482,
  [SMALL_STATE(123)] = 2486,
  [SMALL_STATE(124)] = 2490,
  [SMALL_STATE(125)] = 2494,
  [SMALL_STATE(126)] = 2498,
  [SMALL_STATE(127)] = 2502,
  [SMALL_STATE(128)] = 2506,
  [SMALL_STATE(129)] = 2510,
  [SMALL_STATE(130)] = 2514,
  [SMALL_STATE(131)] = 2518,
  [SMALL_STATE(132)] = 2522,
  [SMALL_STATE(133)] = 2526,
  [SMALL_STATE(134)] = 2530,
  [SMALL_STATE(135)] = 2534,
  [SMALL_STATE(136)] = 2538,
  [SMALL_STATE(137)] = 2542,
  [SMALL_STATE(138)] = 2546,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expr, 3),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expr, 3),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_stmt, 4, .production_id = 1),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_on_stmt, 4, .production_id = 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_stmt, 4),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_stmt, 4),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cache_stmt, 4),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cache_stmt, 4),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_stmt, 5),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_stmt, 5),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_literal, 1),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_literal, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paren_expr, 3),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paren_expr, 3),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expr, 2),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expr, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(121),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(108),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(34),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(117),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(76),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(84),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(83),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(137),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(136),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(69),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_run_on_stmt_repeat1, 2), SHIFT_REPEAT(55),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_on_stmt_repeat1, 2),
  [182] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_run_on_stmt_repeat1, 2), SHIFT_REPEAT(27),
  [185] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_run_on_stmt_repeat1, 2), SHIFT_REPEAT(75),
  [188] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_run_on_stmt_repeat1, 2), SHIFT_REPEAT(67),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_stmt, 2, .production_id = 1),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_on_stmt, 2, .production_id = 1),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_def_stmt, 9),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_def_stmt, 9),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_def_stmt, 5),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_def_stmt, 5),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_on_stmt, 4, .production_id = 2),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_run_on_stmt, 4, .production_id = 2),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_def_stmt, 8),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_def_stmt, 8),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_def_stmt, 7),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_def_stmt, 7),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_stmt, 3),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_stmt, 3),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_def_stmt, 6),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_def_stmt, 6),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call_expr, 3),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call_expr, 3),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expr, 3),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expr, 3),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_ident, 1),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_ident, 1),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_on_stmt, 3, .production_id = 2),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_run_on_stmt, 3, .production_id = 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt, 1),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stmt, 1),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call_expr, 2),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call_expr, 2),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_ident, 5),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_ident, 5),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_run_on_type, 1),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_on_type, 1),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_call_expr_repeat1, 2),
  [271] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_call_expr_repeat1, 2), SHIFT_REPEAT(28),
  [274] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_call_expr_repeat1, 2), SHIFT_REPEAT(86),
  [277] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_call_expr_repeat1, 2), SHIFT_REPEAT(19),
  [280] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_call_expr_repeat1, 2), SHIFT_REPEAT(89),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_call_expr_repeat1, 2), SHIFT_REPEAT(23),
  [286] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_call_expr_repeat1, 2), SHIFT_REPEAT(88),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_func_call_expr_repeat1, 2),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [311] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_def_stmt_repeat1, 2), SHIFT_REPEAT(137),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_def_stmt_repeat1, 2),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [328] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(93),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_def_stmt_repeat2, 2),
  [343] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_def_stmt_repeat2, 2), SHIFT_REPEAT(127),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_annotation, 2),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_def_stmt_repeat2, 3),
  [366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [408] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
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
