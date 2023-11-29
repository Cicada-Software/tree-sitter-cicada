#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 138
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
  aux_sym_run_on_stmt_token1 = 10,
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
  [aux_sym_run_on_stmt_token1] = "run_on_stmt_token1",
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
  [aux_sym_run_on_stmt_token1] = aux_sym_run_on_stmt_token1,
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
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 18,
  [23] = 18,
  [24] = 24,
  [25] = 20,
  [26] = 18,
  [27] = 21,
  [28] = 21,
  [29] = 29,
  [30] = 21,
  [31] = 18,
  [32] = 32,
  [33] = 18,
  [34] = 16,
  [35] = 13,
  [36] = 7,
  [37] = 37,
  [38] = 12,
  [39] = 11,
  [40] = 40,
  [41] = 6,
  [42] = 5,
  [43] = 2,
  [44] = 4,
  [45] = 45,
  [46] = 45,
  [47] = 47,
  [48] = 48,
  [49] = 45,
  [50] = 45,
  [51] = 47,
  [52] = 45,
  [53] = 47,
  [54] = 45,
  [55] = 47,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 4,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 58,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 62,
  [78] = 60,
  [79] = 4,
  [80] = 5,
  [81] = 40,
  [82] = 82,
  [83] = 40,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 58,
  [89] = 89,
  [90] = 90,
  [91] = 58,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 60,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 4,
  [101] = 101,
  [102] = 102,
  [103] = 62,
  [104] = 62,
  [105] = 98,
  [106] = 106,
  [107] = 101,
  [108] = 4,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 60,
  [113] = 113,
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
  [125] = 122,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 122,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(77);
      if (lookahead == '"') ADVANCE(125);
      if (lookahead == '#') ADVANCE(234);
      if (lookahead == '(') ADVANCE(156);
      if (lookahead == ')') ADVANCE(107);
      if (lookahead == '*') ADVANCE(203);
      if (lookahead == '+') ADVANCE(202);
      if (lookahead == ',') ADVANCE(109);
      if (lookahead == '-') ADVANCE(89);
      if (lookahead == '/') ADVANCE(93);
      if (lookahead == '0') ADVANCE(117);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == '<') ADVANCE(205);
      if (lookahead == '=') ADVANCE(104);
      if (lookahead == '>') ADVANCE(207);
      if (lookahead == '@') ADVANCE(228);
      if (lookahead == '[') ADVANCE(108);
      if (lookahead == ']') ADVANCE(110);
      if (lookahead == '^') ADVANCE(204);
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
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '(') ADVANCE(156);
      if (lookahead == '-') ADVANCE(90);
      if (lookahead == '/') ADVANCE(94);
      if (lookahead == '0') ADVANCE(118);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(120);
      if (lookahead != 0) ADVANCE(155);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '(') ADVANCE(106);
      if (lookahead == '-') ADVANCE(90);
      if (lookahead == '/') ADVANCE(94);
      if (lookahead == '0') ADVANCE(118);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(120);
      if (lookahead != 0) ADVANCE(155);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '(') ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if (lookahead != 0) ADVANCE(155);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '(') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if (lookahead != 0) ADVANCE(155);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '"') ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(127);
      if (lookahead != 0) ADVANCE(126);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(125);
      if (lookahead == '(') ADVANCE(106);
      if (lookahead == '-') ADVANCE(89);
      if (lookahead == '0') ADVANCE(117);
      if (lookahead == 'f') ADVANCE(160);
      if (lookahead == 'n') ADVANCE(186);
      if (lookahead == 't') ADVANCE(189);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 7:
      if (lookahead == '(') ADVANCE(156);
      if (lookahead == 'u') ADVANCE(146);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0) ADVANCE(155);
      END_STATE();
    case 8:
      if (lookahead == '(') ADVANCE(106);
      if (lookahead == 'u') ADVANCE(146);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0) ADVANCE(155);
      END_STATE();
    case 9:
      if (lookahead == '(') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead != 0) ADVANCE(155);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 11:
      if (lookahead == ')') ADVANCE(227);
      END_STATE();
    case 12:
      if (lookahead == '>') ADVANCE(233);
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
      if (lookahead == 'n') ADVANCE(230);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(38);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(209);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(211);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(85);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(224);
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
      if (lookahead == 's') ADVANCE(215);
      END_STATE();
    case 33:
      if (lookahead == 'f') ADVANCE(13);
      END_STATE();
    case 34:
      if (lookahead == 'g') ADVANCE(222);
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
      if (lookahead == 'm') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(44)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(79);
      if (lookahead == 'r') ADVANCE(213);
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
      if (lookahead == 'r') ADVANCE(217);
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
      if (lookahead == 't') ADVANCE(200);
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
          lookahead == '_') ADVANCE(111);
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
          lookahead == '_') ADVANCE(113);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(115);
      END_STATE();
    case 71:
      if (eof) ADVANCE(77);
      if (lookahead == '"') ADVANCE(125);
      if (lookahead == '#') ADVANCE(234);
      if (lookahead == '(') ADVANCE(106);
      if (lookahead == ')') ADVANCE(107);
      if (lookahead == '*') ADVANCE(203);
      if (lookahead == '+') ADVANCE(202);
      if (lookahead == ',') ADVANCE(109);
      if (lookahead == '-') ADVANCE(89);
      if (lookahead == '/') ADVANCE(93);
      if (lookahead == '0') ADVANCE(117);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == '<') ADVANCE(205);
      if (lookahead == '=') ADVANCE(104);
      if (lookahead == '>') ADVANCE(207);
      if (lookahead == '@') ADVANCE(228);
      if (lookahead == '[') ADVANCE(108);
      if (lookahead == ']') ADVANCE(110);
      if (lookahead == '^') ADVANCE(204);
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
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 72:
      if (eof) ADVANCE(77);
      if (lookahead == '#') ADVANCE(234);
      if (lookahead == '(') ADVANCE(106);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == '@') ADVANCE(228);
      if (lookahead == 'c') ADVANCE(159);
      if (lookahead == 'f') ADVANCE(178);
      if (lookahead == 'i') ADVANCE(172);
      if (lookahead == 'l') ADVANCE(164);
      if (lookahead == 'o') ADVANCE(180);
      if (lookahead == 'r') ADVANCE(196);
      if (lookahead == 't') ADVANCE(175);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(72)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 73:
      if (eof) ADVANCE(77);
      if (lookahead == '#') ADVANCE(234);
      if (lookahead == '*') ADVANCE(203);
      if (lookahead == '+') ADVANCE(202);
      if (lookahead == '-') ADVANCE(89);
      if (lookahead == '/') ADVANCE(93);
      if (lookahead == '<') ADVANCE(205);
      if (lookahead == '>') ADVANCE(207);
      if (lookahead == '@') ADVANCE(228);
      if (lookahead == '^') ADVANCE(204);
      if (lookahead == 'a') ADVANCE(183);
      if (lookahead == 'c') ADVANCE(159);
      if (lookahead == 'f') ADVANCE(178);
      if (lookahead == 'i') ADVANCE(171);
      if (lookahead == 'l') ADVANCE(164);
      if (lookahead == 'm') ADVANCE(185);
      if (lookahead == 'o') ADVANCE(179);
      if (lookahead == 'r') ADVANCE(196);
      if (lookahead == 't') ADVANCE(175);
      if (lookahead == 'x') ADVANCE(184);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(73)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 74:
      if (eof) ADVANCE(77);
      if (lookahead == '#') ADVANCE(234);
      if (lookahead == '@') ADVANCE(228);
      if (lookahead == 'c') ADVANCE(159);
      if (lookahead == 'f') ADVANCE(178);
      if (lookahead == 'i') ADVANCE(172);
      if (lookahead == 'l') ADVANCE(164);
      if (lookahead == 'o') ADVANCE(180);
      if (lookahead == 'r') ADVANCE(196);
      if (lookahead == 't') ADVANCE(175);
      if (lookahead == 'w') ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(74)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 75:
      if (eof) ADVANCE(77);
      if (lookahead == '#') ADVANCE(151);
      if (lookahead == '(') ADVANCE(156);
      if (lookahead == '@') ADVANCE(229);
      if (lookahead == 'c') ADVANCE(129);
      if (lookahead == 'f') ADVANCE(140);
      if (lookahead == 'i') ADVANCE(134);
      if (lookahead == 'l') ADVANCE(131);
      if (lookahead == 'o') ADVANCE(141);
      if (lookahead == 'r') ADVANCE(149);
      if (lookahead == 't') ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(76)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      if (lookahead != 0) ADVANCE(155);
      END_STATE();
    case 76:
      if (eof) ADVANCE(77);
      if (lookahead == '#') ADVANCE(151);
      if (lookahead == '(') ADVANCE(106);
      if (lookahead == '@') ADVANCE(229);
      if (lookahead == 'c') ADVANCE(129);
      if (lookahead == 'f') ADVANCE(140);
      if (lookahead == 'i') ADVANCE(134);
      if (lookahead == 'l') ADVANCE(131);
      if (lookahead == 'o') ADVANCE(141);
      if (lookahead == 'r') ADVANCE(149);
      if (lookahead == 't') ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(76)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      if (lookahead != 0) ADVANCE(155);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_on);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(155);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_run_on);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(155);
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
          lookahead != '(') ADVANCE(155);
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
          lookahead != '(') ADVANCE(155);
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
          lookahead != '(') ADVANCE(155);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(155);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(155);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
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
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(155);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(155);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(155);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (lookahead == 'b') ADVANCE(67);
      if (lookahead == 'o') ADVANCE(69);
      if (lookahead == 'x') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (lookahead == 'b') ADVANCE(150);
      if (lookahead == 'o') ADVANCE(152);
      if (lookahead == 'x') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(155);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(155);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"') ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(126);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == '_') ADVANCE(145);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(155);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'a') ADVANCE(130);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(155);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'c') ADVANCE(136);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(155);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'e') ADVANCE(147);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(155);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'e') ADVANCE(221);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(155);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'e') ADVANCE(226);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(155);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'f') ADVANCE(98);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(155);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'g') ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(155);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'h') ADVANCE(132);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(155);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'i') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(155);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'i') ADVANCE(148);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(155);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'l') ADVANCE(133);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(155);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'n') ADVANCE(232);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(155);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'n') ADVANCE(81);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(155);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'n') ADVANCE(128);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(155);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'n') ADVANCE(88);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(155);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'n') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(155);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'o') ADVANCE(143);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(155);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 's') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(155);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 't') ADVANCE(101);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(155);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 't') ADVANCE(139);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(155);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'u') ADVANCE(142);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(155);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(155);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '(') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(151);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(155);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(155);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(155);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(155);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_string_ident_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ')') ADVANCE(157);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_') ADVANCE(187);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(161);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(176);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(173);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(210);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(212);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(192);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(220);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(225);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(122);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(124);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(83);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(190);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(97);
      if (lookahead == 's') ADVANCE(216);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(97);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'h') ADVANCE(165);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'h') ADVANCE(170);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(193);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(191);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(166);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(231);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(80);
      if (lookahead == 'r') ADVANCE(214);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(80);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(158);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(87);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(162);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(188);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(163);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(194);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(182);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(218);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(197);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(169);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(168);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(100);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(177);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(201);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(103);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(181);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(167);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(195);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(206);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(208);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_mod);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_mod);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_is);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_xor);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_xor);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_cache);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_cache);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_cache);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(155);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_using);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(155);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_title);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_title);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_title);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(155);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_LPAREN_RPAREN);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(155);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_fn);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_fn);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(155);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(234);
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
  [37] = {.lex_state = 76},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 76},
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
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 75},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 76},
  [61] = {.lex_state = 76},
  [62] = {.lex_state = 76},
  [63] = {.lex_state = 74},
  [64] = {.lex_state = 72},
  [65] = {.lex_state = 72},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 72},
  [68] = {.lex_state = 72},
  [69] = {.lex_state = 72},
  [70] = {.lex_state = 72},
  [71] = {.lex_state = 72},
  [72] = {.lex_state = 72},
  [73] = {.lex_state = 72},
  [74] = {.lex_state = 72},
  [75] = {.lex_state = 72},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 8},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 8},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 9},
  [87] = {.lex_state = 9},
  [88] = {.lex_state = 7},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 3},
  [92] = {.lex_state = 10},
  [93] = {.lex_state = 10},
  [94] = {.lex_state = 10},
  [95] = {.lex_state = 8},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 10},
  [98] = {.lex_state = 5},
  [99] = {.lex_state = 10},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 5},
  [102] = {.lex_state = 10},
  [103] = {.lex_state = 8},
  [104] = {.lex_state = 4},
  [105] = {.lex_state = 5},
  [106] = {.lex_state = 10},
  [107] = {.lex_state = 5},
  [108] = {.lex_state = 8},
  [109] = {.lex_state = 5},
  [110] = {.lex_state = 10},
  [111] = {.lex_state = 10},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 10},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 72},
  [116] = {.lex_state = 72},
  [117] = {.lex_state = 72},
  [118] = {.lex_state = 44},
  [119] = {.lex_state = 10},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 72},
  [122] = {.lex_state = 157},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 157},
  [125] = {.lex_state = 157},
  [126] = {.lex_state = 10},
  [127] = {.lex_state = 72},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 10},
  [132] = {.lex_state = 68},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 10},
  [135] = {.lex_state = 10},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 157},
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
    [sym_source_file] = STATE(133),
    [sym_stmt] = STATE(15),
    [sym_on_stmt] = STATE(73),
    [sym_run_on_stmt] = STATE(73),
    [sym_if_expr] = STATE(73),
    [sym_let_stmt] = STATE(73),
    [sym_func_call_expr] = STATE(73),
    [sym_cache_stmt] = STATE(73),
    [sym_title_stmt] = STATE(73),
    [sym_func_annotation] = STATE(89),
    [sym_func_def_stmt] = STATE(73),
    [aux_sym_source_file_repeat1] = STATE(15),
    [aux_sym_func_def_stmt_repeat1] = STATE(89),
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
  [64] = 2,
    ACTIONS(35), 10,
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
    ACTIONS(37), 15,
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
  [94] = 2,
    ACTIONS(39), 10,
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
    ACTIONS(41), 15,
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
  [124] = 2,
    ACTIONS(43), 10,
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
    ACTIONS(45), 15,
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
  [154] = 2,
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
  [184] = 4,
    ACTIONS(51), 3,
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
    ACTIONS(53), 8,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      sym_ident,
      anon_sym_cache,
      anon_sym_title,
      anon_sym_fn,
  [218] = 4,
    ACTIONS(55), 3,
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
    ACTIONS(57), 8,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      sym_ident,
      anon_sym_cache,
      anon_sym_title,
      anon_sym_fn,
  [252] = 4,
    ACTIONS(59), 3,
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
    ACTIONS(61), 8,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      sym_ident,
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
      anon_sym_AT,
    ACTIONS(101), 1,
      anon_sym_fn,
    ACTIONS(104), 1,
      sym_comment,
    STATE(14), 2,
      sym_stmt,
      aux_sym_source_file_repeat1,
    STATE(89), 2,
      sym_func_annotation,
      aux_sym_func_def_stmt_repeat1,
    STATE(73), 8,
      sym_on_stmt,
      sym_run_on_stmt,
      sym_if_expr,
      sym_let_stmt,
      sym_func_call_expr,
      sym_cache_stmt,
      sym_title_stmt,
      sym_func_def_stmt,
  [428] = 14,
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
    ACTIONS(107), 1,
      ts_builtin_sym_end,
    STATE(14), 2,
      sym_stmt,
      aux_sym_source_file_repeat1,
    STATE(89), 2,
      sym_func_annotation,
      aux_sym_func_def_stmt_repeat1,
    STATE(73), 8,
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
    STATE(6), 1,
      sym_expr,
    ACTIONS(117), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(113), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(13), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [519] = 10,
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
    STATE(48), 1,
      sym_expr,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(129), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(35), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [558] = 10,
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
    STATE(45), 1,
      sym_expr,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(129), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(35), 6,
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
    STATE(8), 1,
      sym_expr,
    ACTIONS(117), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(113), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(13), 6,
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
    STATE(12), 1,
      sym_expr,
    ACTIONS(117), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(113), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(13), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [675] = 10,
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
    STATE(53), 1,
      sym_expr,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(129), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(35), 6,
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
    STATE(50), 1,
      sym_expr,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(129), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(35), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [753] = 10,
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
    STATE(46), 1,
      sym_expr,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(129), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(35), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [792] = 10,
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
    STATE(10), 1,
      sym_expr,
    ACTIONS(117), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(113), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(13), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [831] = 10,
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
    STATE(38), 1,
      sym_expr,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(129), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(35), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [870] = 10,
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
    STATE(52), 1,
      sym_expr,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(129), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(35), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [909] = 10,
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
    STATE(55), 1,
      sym_expr,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(129), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(35), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [948] = 10,
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
    STATE(51), 1,
      sym_expr,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(129), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(35), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [987] = 10,
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
    STATE(9), 1,
      sym_expr,
    ACTIONS(117), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(113), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(13), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [1026] = 10,
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
    STATE(47), 1,
      sym_expr,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(129), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(35), 6,
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
    STATE(49), 1,
      sym_expr,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(129), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(35), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [1104] = 10,
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
    STATE(3), 1,
      sym_expr,
    ACTIONS(117), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(113), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(13), 6,
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
    STATE(54), 1,
      sym_expr,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(129), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(35), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [1182] = 10,
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
    STATE(41), 1,
      sym_expr,
    ACTIONS(133), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(129), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(35), 6,
      sym_paren_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [1221] = 2,
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
  [1263] = 6,
    ACTIONS(141), 1,
      ts_builtin_sym_end,
    ACTIONS(145), 1,
      anon_sym_LPAREN,
    ACTIONS(147), 1,
      aux_sym_string_ident_token1,
    STATE(60), 1,
      sym_paren_expr,
    STATE(40), 2,
      sym_string_ident,
      aux_sym_func_call_expr_repeat1,
    ACTIONS(143), 10,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      sym_ident,
      anon_sym_cache,
      anon_sym_title,
      anon_sym_AT,
      anon_sym_fn,
      sym_comment,
  [1292] = 2,
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
  [1313] = 2,
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
  [1334] = 6,
    ACTIONS(149), 1,
      ts_builtin_sym_end,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    ACTIONS(156), 1,
      aux_sym_string_ident_token1,
    STATE(60), 1,
      sym_paren_expr,
    STATE(40), 2,
      sym_string_ident,
      aux_sym_func_call_expr_repeat1,
    ACTIONS(151), 10,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      sym_ident,
      anon_sym_cache,
      anon_sym_title,
      anon_sym_AT,
      anon_sym_fn,
      sym_comment,
  [1363] = 2,
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
  [1384] = 2,
    ACTIONS(41), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(39), 14,
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
  [1405] = 2,
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
  [1426] = 2,
    ACTIONS(37), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(35), 14,
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
  [1447] = 3,
    ACTIONS(161), 1,
      anon_sym_RPAREN,
    ACTIONS(163), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(159), 12,
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
  [1469] = 3,
    ACTIONS(165), 1,
      anon_sym_RPAREN,
    ACTIONS(163), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(159), 12,
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
  [1491] = 3,
    ACTIONS(167), 1,
      anon_sym_RPAREN,
    ACTIONS(163), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(159), 12,
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
  [1513] = 3,
    ACTIONS(169), 1,
      anon_sym_COLON,
    ACTIONS(163), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(159), 12,
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
  [1535] = 3,
    ACTIONS(171), 1,
      anon_sym_RPAREN,
    ACTIONS(163), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(159), 12,
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
  [1557] = 3,
    ACTIONS(173), 1,
      anon_sym_RPAREN,
    ACTIONS(163), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(159), 12,
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
  [1579] = 3,
    ACTIONS(175), 1,
      anon_sym_RPAREN,
    ACTIONS(163), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(159), 12,
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
  [1601] = 3,
    ACTIONS(177), 1,
      anon_sym_RPAREN,
    ACTIONS(163), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(159), 12,
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
  [1623] = 3,
    ACTIONS(179), 1,
      anon_sym_RPAREN,
    ACTIONS(163), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(159), 12,
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
  [1645] = 3,
    ACTIONS(181), 1,
      anon_sym_RPAREN,
    ACTIONS(163), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(159), 12,
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
  [1667] = 3,
    ACTIONS(183), 1,
      anon_sym_RPAREN,
    ACTIONS(163), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(159), 12,
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
  [1689] = 7,
    ACTIONS(187), 1,
      aux_sym_run_on_stmt_token1,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      aux_sym_string_ident_token1,
    STATE(78), 1,
      sym_paren_expr,
    ACTIONS(185), 3,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
    STATE(59), 3,
      sym_number,
      sym_string_ident,
      aux_sym_run_on_stmt_repeat1,
    ACTIONS(191), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
  [1718] = 7,
    ACTIONS(198), 1,
      aux_sym_run_on_stmt_token1,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    ACTIONS(206), 1,
      aux_sym_string_ident_token1,
    STATE(78), 1,
      sym_paren_expr,
    ACTIONS(195), 3,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
    STATE(57), 3,
      sym_number,
      sym_string_ident,
      aux_sym_run_on_stmt_repeat1,
    ACTIONS(203), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
  [1747] = 3,
    ACTIONS(209), 1,
      ts_builtin_sym_end,
    ACTIONS(213), 1,
      anon_sym_LPAREN2,
    ACTIONS(211), 12,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      anon_sym_LPAREN,
      aux_sym_string_ident_token1,
      sym_ident,
      anon_sym_cache,
      anon_sym_title,
      anon_sym_AT,
      anon_sym_fn,
      sym_comment,
  [1768] = 7,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      aux_sym_string_ident_token1,
    ACTIONS(217), 1,
      aux_sym_run_on_stmt_token1,
    STATE(78), 1,
      sym_paren_expr,
    ACTIONS(215), 3,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
    STATE(57), 3,
      sym_number,
      sym_string_ident,
      aux_sym_run_on_stmt_repeat1,
    ACTIONS(191), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
  [1797] = 2,
    ACTIONS(209), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(211), 11,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      aux_sym_string_ident_token1,
      sym_ident,
      anon_sym_cache,
      anon_sym_title,
      anon_sym_AT,
      anon_sym_fn,
      sym_comment,
  [1815] = 2,
    ACTIONS(35), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(37), 11,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      aux_sym_string_ident_token1,
      sym_ident,
      anon_sym_cache,
      anon_sym_title,
      anon_sym_AT,
      anon_sym_fn,
      sym_comment,
  [1833] = 2,
    ACTIONS(219), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(221), 11,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      aux_sym_string_ident_token1,
      sym_ident,
      anon_sym_cache,
      anon_sym_title,
      anon_sym_AT,
      anon_sym_fn,
      sym_comment,
  [1851] = 3,
    ACTIONS(227), 1,
      anon_sym_where,
    ACTIONS(223), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_comment,
    ACTIONS(225), 8,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      sym_ident,
      anon_sym_cache,
      anon_sym_title,
      anon_sym_fn,
  [1870] = 2,
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
  [1886] = 2,
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
  [1902] = 3,
    ACTIONS(209), 1,
      aux_sym_run_on_stmt_token1,
    ACTIONS(237), 1,
      anon_sym_LPAREN2,
    ACTIONS(211), 9,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_string_ident_token1,
  [1920] = 2,
    ACTIONS(239), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_comment,
    ACTIONS(241), 8,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      sym_ident,
      anon_sym_cache,
      anon_sym_title,
      anon_sym_fn,
  [1936] = 2,
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
  [1952] = 2,
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
  [1968] = 2,
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
  [1984] = 2,
    ACTIONS(255), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_comment,
    ACTIONS(257), 8,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      sym_ident,
      anon_sym_cache,
      anon_sym_title,
      anon_sym_fn,
  [2000] = 2,
    ACTIONS(259), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_comment,
    ACTIONS(261), 8,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      sym_ident,
      anon_sym_cache,
      anon_sym_title,
      anon_sym_fn,
  [2016] = 2,
    ACTIONS(263), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_comment,
    ACTIONS(265), 8,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      sym_ident,
      anon_sym_cache,
      anon_sym_title,
      anon_sym_fn,
  [2032] = 2,
    ACTIONS(267), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_comment,
    ACTIONS(269), 8,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      sym_ident,
      anon_sym_cache,
      anon_sym_title,
      anon_sym_fn,
  [2048] = 2,
    ACTIONS(271), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_comment,
    ACTIONS(273), 8,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_let,
      sym_ident,
      anon_sym_cache,
      anon_sym_title,
      anon_sym_fn,
  [2064] = 2,
    ACTIONS(277), 1,
      aux_sym_run_on_stmt_token1,
    ACTIONS(275), 9,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_string_ident_token1,
  [2079] = 2,
    ACTIONS(219), 1,
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
  [2094] = 2,
    ACTIONS(209), 1,
      aux_sym_run_on_stmt_token1,
    ACTIONS(211), 9,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_string_ident_token1,
  [2109] = 2,
    ACTIONS(35), 1,
      aux_sym_run_on_stmt_token1,
    ACTIONS(37), 9,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_string_ident_token1,
  [2124] = 2,
    ACTIONS(39), 1,
      aux_sym_run_on_stmt_token1,
    ACTIONS(41), 9,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_string_ident_token1,
  [2139] = 5,
    ACTIONS(151), 1,
      anon_sym_using,
    ACTIONS(279), 1,
      anon_sym_LPAREN,
    ACTIONS(282), 1,
      aux_sym_string_ident_token1,
    STATE(95), 1,
      sym_paren_expr,
    STATE(81), 2,
      sym_string_ident,
      aux_sym_func_call_expr_repeat1,
  [2156] = 5,
    ACTIONS(285), 1,
      aux_sym_func_call_expr_token1,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
    ACTIONS(289), 1,
      aux_sym_string_ident_token1,
    STATE(112), 1,
      sym_paren_expr,
    STATE(83), 2,
      sym_string_ident,
      aux_sym_func_call_expr_repeat1,
  [2173] = 5,
    ACTIONS(149), 1,
      aux_sym_func_call_expr_token1,
    ACTIONS(291), 1,
      anon_sym_LPAREN,
    ACTIONS(294), 1,
      aux_sym_string_ident_token1,
    STATE(112), 1,
      sym_paren_expr,
    STATE(83), 2,
      sym_string_ident,
      aux_sym_func_call_expr_repeat1,
  [2190] = 5,
    ACTIONS(297), 1,
      anon_sym_LPAREN,
    ACTIONS(299), 1,
      aux_sym_string_ident_token1,
    ACTIONS(301), 1,
      anon_sym_using,
    STATE(95), 1,
      sym_paren_expr,
    STATE(81), 2,
      sym_string_ident,
      aux_sym_func_call_expr_repeat1,
  [2207] = 5,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
    ACTIONS(289), 1,
      aux_sym_string_ident_token1,
    ACTIONS(303), 1,
      aux_sym_func_call_expr_token1,
    STATE(112), 1,
      sym_paren_expr,
    STATE(82), 2,
      sym_string_ident,
      aux_sym_func_call_expr_repeat1,
  [2224] = 4,
    ACTIONS(145), 1,
      anon_sym_LPAREN,
    ACTIONS(305), 1,
      aux_sym_string_ident_token1,
    STATE(60), 1,
      sym_paren_expr,
    STATE(37), 2,
      sym_string_ident,
      aux_sym_func_call_expr_repeat1,
  [2238] = 4,
    ACTIONS(297), 1,
      anon_sym_LPAREN,
    ACTIONS(307), 1,
      aux_sym_string_ident_token1,
    STATE(95), 1,
      sym_paren_expr,
    STATE(84), 2,
      sym_string_ident,
      aux_sym_func_call_expr_repeat1,
  [2252] = 2,
    ACTIONS(309), 1,
      anon_sym_LPAREN2,
    ACTIONS(211), 3,
      anon_sym_LPAREN,
      aux_sym_string_ident_token1,
      anon_sym_using,
  [2261] = 3,
    ACTIONS(17), 1,
      anon_sym_AT,
    ACTIONS(311), 1,
      anon_sym_fn,
    STATE(90), 2,
      sym_func_annotation,
      aux_sym_func_def_stmt_repeat1,
  [2272] = 3,
    ACTIONS(313), 1,
      anon_sym_AT,
    ACTIONS(316), 1,
      anon_sym_fn,
    STATE(90), 2,
      sym_func_annotation,
      aux_sym_func_def_stmt_repeat1,
  [2283] = 3,
    ACTIONS(209), 1,
      aux_sym_func_call_expr_token1,
    ACTIONS(318), 1,
      anon_sym_LPAREN2,
    ACTIONS(211), 2,
      anon_sym_LPAREN,
      aux_sym_string_ident_token1,
  [2294] = 3,
    ACTIONS(320), 1,
      anon_sym_RPAREN,
    ACTIONS(322), 1,
      sym_ident,
    STATE(111), 1,
      aux_sym_func_def_stmt_repeat2,
  [2304] = 2,
    STATE(136), 1,
      sym_type,
    ACTIONS(324), 2,
      sym_ident,
      anon_sym_LPAREN_RPAREN,
  [2312] = 1,
    ACTIONS(326), 3,
      anon_sym_COLON,
      anon_sym_RPAREN,
      sym_ident,
  [2318] = 2,
    ACTIONS(209), 1,
      anon_sym_LPAREN,
    ACTIONS(211), 2,
      aux_sym_string_ident_token1,
      anon_sym_using,
  [2326] = 2,
    STATE(56), 1,
      sym_run_on_type,
    ACTIONS(328), 2,
      anon_sym_image,
      anon_sym_self_hosted,
  [2334] = 3,
    ACTIONS(322), 1,
      sym_ident,
    ACTIONS(330), 1,
      anon_sym_RPAREN,
    STATE(113), 1,
      aux_sym_func_def_stmt_repeat2,
  [2344] = 3,
    ACTIONS(332), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      aux_sym_string_token1,
    STATE(109), 1,
      aux_sym_string_repeat1,
  [2354] = 2,
    STATE(120), 1,
      sym_type,
    ACTIONS(324), 2,
      sym_ident,
      anon_sym_LPAREN_RPAREN,
  [2362] = 2,
    ACTIONS(35), 1,
      aux_sym_func_call_expr_token1,
    ACTIONS(37), 2,
      anon_sym_LPAREN,
      aux_sym_string_ident_token1,
  [2370] = 3,
    ACTIONS(336), 1,
      anon_sym_DQUOTE,
    ACTIONS(338), 1,
      aux_sym_string_token1,
    STATE(98), 1,
      aux_sym_string_repeat1,
  [2380] = 2,
    STATE(128), 1,
      sym_type,
    ACTIONS(324), 2,
      sym_ident,
      anon_sym_LPAREN_RPAREN,
  [2388] = 2,
    ACTIONS(219), 1,
      anon_sym_LPAREN,
    ACTIONS(221), 2,
      aux_sym_string_ident_token1,
      anon_sym_using,
  [2396] = 2,
    ACTIONS(219), 1,
      aux_sym_func_call_expr_token1,
    ACTIONS(221), 2,
      anon_sym_LPAREN,
      aux_sym_string_ident_token1,
  [2404] = 3,
    ACTIONS(334), 1,
      aux_sym_string_token1,
    ACTIONS(340), 1,
      anon_sym_DQUOTE,
    STATE(109), 1,
      aux_sym_string_repeat1,
  [2414] = 2,
    STATE(119), 1,
      sym_type,
    ACTIONS(324), 2,
      sym_ident,
      anon_sym_LPAREN_RPAREN,
  [2422] = 3,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    ACTIONS(344), 1,
      aux_sym_string_token1,
    STATE(105), 1,
      aux_sym_string_repeat1,
  [2432] = 2,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 2,
      aux_sym_string_ident_token1,
      anon_sym_using,
  [2440] = 3,
    ACTIONS(346), 1,
      anon_sym_DQUOTE,
    ACTIONS(348), 1,
      aux_sym_string_token1,
    STATE(109), 1,
      aux_sym_string_repeat1,
  [2450] = 3,
    ACTIONS(351), 1,
      anon_sym_RPAREN,
    ACTIONS(353), 1,
      sym_ident,
    STATE(110), 1,
      aux_sym_func_def_stmt_repeat2,
  [2460] = 3,
    ACTIONS(322), 1,
      sym_ident,
    ACTIONS(356), 1,
      anon_sym_RPAREN,
    STATE(110), 1,
      aux_sym_func_def_stmt_repeat2,
  [2470] = 2,
    ACTIONS(209), 1,
      aux_sym_func_call_expr_token1,
    ACTIONS(211), 2,
      anon_sym_LPAREN,
      aux_sym_string_ident_token1,
  [2478] = 3,
    ACTIONS(320), 1,
      anon_sym_RPAREN,
    ACTIONS(322), 1,
      sym_ident,
    STATE(110), 1,
      aux_sym_func_def_stmt_repeat2,
  [2488] = 1,
    ACTIONS(358), 2,
      anon_sym_AT,
      anon_sym_fn,
  [2493] = 2,
    ACTIONS(360), 1,
      anon_sym_COLON,
    ACTIONS(362), 1,
      anon_sym_DASH_GT,
  [2500] = 2,
    ACTIONS(364), 1,
      anon_sym_COLON,
    ACTIONS(366), 1,
      anon_sym_DASH_GT,
  [2507] = 2,
    ACTIONS(368), 1,
      anon_sym_COLON,
    ACTIONS(370), 1,
      anon_sym_DASH_GT,
  [2514] = 2,
    ACTIONS(372), 1,
      anon_sym_mut,
    ACTIONS(374), 1,
      sym_ident,
  [2521] = 1,
    ACTIONS(376), 2,
      anon_sym_RPAREN,
      sym_ident,
  [2526] = 1,
    ACTIONS(378), 1,
      anon_sym_COLON,
  [2530] = 1,
    ACTIONS(380), 1,
      anon_sym_LPAREN,
  [2534] = 1,
    ACTIONS(382), 1,
      aux_sym_string_ident_token2,
  [2538] = 1,
    ACTIONS(384), 1,
      anon_sym_EQ,
  [2542] = 1,
    ACTIONS(386), 1,
      aux_sym_string_ident_token2,
  [2546] = 1,
    ACTIONS(388), 1,
      aux_sym_string_ident_token2,
  [2550] = 1,
    ACTIONS(390), 1,
      sym_ident,
  [2554] = 1,
    ACTIONS(392), 1,
      anon_sym_LPAREN,
  [2558] = 1,
    ACTIONS(368), 1,
      anon_sym_COLON,
  [2562] = 1,
    ACTIONS(394), 1,
      anon_sym_COLON,
  [2566] = 1,
    ACTIONS(396), 1,
      anon_sym_EQ,
  [2570] = 1,
    ACTIONS(398), 1,
      sym_ident,
  [2574] = 1,
    ACTIONS(400), 1,
      sym_event_type,
  [2578] = 1,
    ACTIONS(402), 1,
      ts_builtin_sym_end,
  [2582] = 1,
    ACTIONS(404), 1,
      sym_ident,
  [2586] = 1,
    ACTIONS(406), 1,
      sym_ident,
  [2590] = 1,
    ACTIONS(408), 1,
      anon_sym_COLON,
  [2594] = 1,
    ACTIONS(410), 1,
      aux_sym_string_ident_token2,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 30,
  [SMALL_STATE(4)] = 64,
  [SMALL_STATE(5)] = 94,
  [SMALL_STATE(6)] = 124,
  [SMALL_STATE(7)] = 154,
  [SMALL_STATE(8)] = 184,
  [SMALL_STATE(9)] = 218,
  [SMALL_STATE(10)] = 252,
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
  [SMALL_STATE(38)] = 1292,
  [SMALL_STATE(39)] = 1313,
  [SMALL_STATE(40)] = 1334,
  [SMALL_STATE(41)] = 1363,
  [SMALL_STATE(42)] = 1384,
  [SMALL_STATE(43)] = 1405,
  [SMALL_STATE(44)] = 1426,
  [SMALL_STATE(45)] = 1447,
  [SMALL_STATE(46)] = 1469,
  [SMALL_STATE(47)] = 1491,
  [SMALL_STATE(48)] = 1513,
  [SMALL_STATE(49)] = 1535,
  [SMALL_STATE(50)] = 1557,
  [SMALL_STATE(51)] = 1579,
  [SMALL_STATE(52)] = 1601,
  [SMALL_STATE(53)] = 1623,
  [SMALL_STATE(54)] = 1645,
  [SMALL_STATE(55)] = 1667,
  [SMALL_STATE(56)] = 1689,
  [SMALL_STATE(57)] = 1718,
  [SMALL_STATE(58)] = 1747,
  [SMALL_STATE(59)] = 1768,
  [SMALL_STATE(60)] = 1797,
  [SMALL_STATE(61)] = 1815,
  [SMALL_STATE(62)] = 1833,
  [SMALL_STATE(63)] = 1851,
  [SMALL_STATE(64)] = 1870,
  [SMALL_STATE(65)] = 1886,
  [SMALL_STATE(66)] = 1902,
  [SMALL_STATE(67)] = 1920,
  [SMALL_STATE(68)] = 1936,
  [SMALL_STATE(69)] = 1952,
  [SMALL_STATE(70)] = 1968,
  [SMALL_STATE(71)] = 1984,
  [SMALL_STATE(72)] = 2000,
  [SMALL_STATE(73)] = 2016,
  [SMALL_STATE(74)] = 2032,
  [SMALL_STATE(75)] = 2048,
  [SMALL_STATE(76)] = 2064,
  [SMALL_STATE(77)] = 2079,
  [SMALL_STATE(78)] = 2094,
  [SMALL_STATE(79)] = 2109,
  [SMALL_STATE(80)] = 2124,
  [SMALL_STATE(81)] = 2139,
  [SMALL_STATE(82)] = 2156,
  [SMALL_STATE(83)] = 2173,
  [SMALL_STATE(84)] = 2190,
  [SMALL_STATE(85)] = 2207,
  [SMALL_STATE(86)] = 2224,
  [SMALL_STATE(87)] = 2238,
  [SMALL_STATE(88)] = 2252,
  [SMALL_STATE(89)] = 2261,
  [SMALL_STATE(90)] = 2272,
  [SMALL_STATE(91)] = 2283,
  [SMALL_STATE(92)] = 2294,
  [SMALL_STATE(93)] = 2304,
  [SMALL_STATE(94)] = 2312,
  [SMALL_STATE(95)] = 2318,
  [SMALL_STATE(96)] = 2326,
  [SMALL_STATE(97)] = 2334,
  [SMALL_STATE(98)] = 2344,
  [SMALL_STATE(99)] = 2354,
  [SMALL_STATE(100)] = 2362,
  [SMALL_STATE(101)] = 2370,
  [SMALL_STATE(102)] = 2380,
  [SMALL_STATE(103)] = 2388,
  [SMALL_STATE(104)] = 2396,
  [SMALL_STATE(105)] = 2404,
  [SMALL_STATE(106)] = 2414,
  [SMALL_STATE(107)] = 2422,
  [SMALL_STATE(108)] = 2432,
  [SMALL_STATE(109)] = 2440,
  [SMALL_STATE(110)] = 2450,
  [SMALL_STATE(111)] = 2460,
  [SMALL_STATE(112)] = 2470,
  [SMALL_STATE(113)] = 2478,
  [SMALL_STATE(114)] = 2488,
  [SMALL_STATE(115)] = 2493,
  [SMALL_STATE(116)] = 2500,
  [SMALL_STATE(117)] = 2507,
  [SMALL_STATE(118)] = 2514,
  [SMALL_STATE(119)] = 2521,
  [SMALL_STATE(120)] = 2526,
  [SMALL_STATE(121)] = 2530,
  [SMALL_STATE(122)] = 2534,
  [SMALL_STATE(123)] = 2538,
  [SMALL_STATE(124)] = 2542,
  [SMALL_STATE(125)] = 2546,
  [SMALL_STATE(126)] = 2550,
  [SMALL_STATE(127)] = 2554,
  [SMALL_STATE(128)] = 2558,
  [SMALL_STATE(129)] = 2562,
  [SMALL_STATE(130)] = 2566,
  [SMALL_STATE(131)] = 2570,
  [SMALL_STATE(132)] = 2574,
  [SMALL_STATE(133)] = 2578,
  [SMALL_STATE(134)] = 2582,
  [SMALL_STATE(135)] = 2586,
  [SMALL_STATE(136)] = 2590,
  [SMALL_STATE(137)] = 2594,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_literal, 1),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_literal, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_stmt, 4, .production_id = 1),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_on_stmt, 4, .production_id = 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paren_expr, 3),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paren_expr, 3),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expr, 3),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expr, 3),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_stmt, 4),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_stmt, 4),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cache_stmt, 4),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cache_stmt, 4),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_stmt, 5),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_stmt, 5),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expr, 2),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expr, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(132),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(96),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(118),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(85),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(87),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(86),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(135),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(134),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(73),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_stmt, 2),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_stmt, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_call_expr_repeat1, 2),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_func_call_expr_repeat1, 2),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_call_expr_repeat1, 2), SHIFT_REPEAT(22),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_call_expr_repeat1, 2), SHIFT_REPEAT(58),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_run_on_stmt_repeat1, 2), SHIFT_REPEAT(57),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_on_stmt_repeat1, 2),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_run_on_stmt_repeat1, 2), SHIFT_REPEAT(23),
  [203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_run_on_stmt_repeat1, 2), SHIFT_REPEAT(80),
  [206] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_run_on_stmt_repeat1, 2), SHIFT_REPEAT(66),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_ident, 1),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_ident, 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_ident, 5),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_ident, 5),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_stmt, 2, .production_id = 1),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_on_stmt, 2, .production_id = 1),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expr, 3),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expr, 3),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call_expr, 2),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call_expr, 2),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_on_stmt, 4, .production_id = 2),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_run_on_stmt, 4, .production_id = 2),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_def_stmt, 5),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_def_stmt, 5),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_def_stmt, 6),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_def_stmt, 6),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_def_stmt, 7),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_def_stmt, 7),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_def_stmt, 8),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_def_stmt, 8),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_def_stmt, 9),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_def_stmt, 9),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt, 1),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stmt, 1),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call_expr, 3),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call_expr, 3),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_on_stmt, 3, .production_id = 2),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_run_on_stmt, 3, .production_id = 2),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_run_on_type, 1),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_on_type, 1),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_call_expr_repeat1, 2), SHIFT_REPEAT(26),
  [282] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_call_expr_repeat1, 2), SHIFT_REPEAT(88),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [291] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_call_expr_repeat1, 2), SHIFT_REPEAT(33),
  [294] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_call_expr_repeat1, 2), SHIFT_REPEAT(91),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [313] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_def_stmt_repeat1, 2), SHIFT_REPEAT(135),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_def_stmt_repeat1, 2),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [348] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(109),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_def_stmt_repeat2, 2),
  [353] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_def_stmt_repeat2, 2), SHIFT_REPEAT(129),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_annotation, 2),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_def_stmt_repeat2, 3),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [402] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
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
