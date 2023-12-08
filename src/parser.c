#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 153
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 88
#define ALIAS_COUNT 0
#define TOKEN_COUNT 58
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
  anon_sym_for = 12,
  anon_sym_in = 13,
  sym_break_stmt = 14,
  sym_continue_stmt = 15,
  anon_sym_let = 16,
  anon_sym_mut = 17,
  anon_sym_EQ = 18,
  aux_sym_func_call_expr_token1 = 19,
  anon_sym_LPAREN = 20,
  anon_sym_RPAREN = 21,
  anon_sym_LBRACK = 22,
  anon_sym_COMMA = 23,
  anon_sym_RBRACK = 24,
  aux_sym_number_token1 = 25,
  aux_sym_number_token2 = 26,
  aux_sym_number_token3 = 27,
  aux_sym_number_token4 = 28,
  anon_sym_true = 29,
  anon_sym_false = 30,
  anon_sym_DQUOTE = 31,
  aux_sym_string_token1 = 32,
  aux_sym_string_ident_token1 = 33,
  anon_sym_LPAREN2 = 34,
  aux_sym_string_ident_token2 = 35,
  sym_ident = 36,
  anon_sym_not = 37,
  anon_sym_PLUS = 38,
  anon_sym_STAR = 39,
  anon_sym_CARET = 40,
  anon_sym_LT = 41,
  anon_sym_LT_EQ = 42,
  anon_sym_GT = 43,
  anon_sym_GT_EQ = 44,
  anon_sym_and = 45,
  anon_sym_mod = 46,
  anon_sym_or = 47,
  anon_sym_is = 48,
  anon_sym_xor = 49,
  anon_sym_cache = 50,
  anon_sym_using = 51,
  anon_sym_title = 52,
  anon_sym_LPAREN_RPAREN = 53,
  anon_sym_AT = 54,
  anon_sym_fn = 55,
  anon_sym_DASH_GT = 56,
  sym_comment = 57,
  sym_source_file = 58,
  sym_stmt = 59,
  sym_on_stmt = 60,
  sym_run_on_type = 61,
  sym_run_on_stmt = 62,
  sym_if_expr = 63,
  sym_for_stmt = 64,
  sym_let_stmt = 65,
  sym_expr = 66,
  sym_func_call_expr = 67,
  sym_paren_expr = 68,
  sym_list_expr = 69,
  sym_number = 70,
  sym_bool_literal = 71,
  sym_string = 72,
  sym_string_ident = 73,
  sym_unary_expr = 74,
  sym_binary_expr = 75,
  sym_cache_stmt = 76,
  sym_title_stmt = 77,
  sym_type = 78,
  sym_func_annotation = 79,
  sym_func_def_stmt = 80,
  aux_sym_source_file_repeat1 = 81,
  aux_sym_run_on_stmt_repeat1 = 82,
  aux_sym_func_call_expr_repeat1 = 83,
  aux_sym_list_expr_repeat1 = 84,
  aux_sym_string_repeat1 = 85,
  aux_sym_func_def_stmt_repeat1 = 86,
  aux_sym_func_def_stmt_repeat2 = 87,
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
  [anon_sym_for] = "for",
  [anon_sym_in] = "in",
  [sym_break_stmt] = "break_stmt",
  [sym_continue_stmt] = "continue_stmt",
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
  [sym_for_stmt] = "for_stmt",
  [sym_let_stmt] = "let_stmt",
  [sym_expr] = "expr",
  [sym_func_call_expr] = "func_call_expr",
  [sym_paren_expr] = "paren_expr",
  [sym_list_expr] = "list_expr",
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
  [aux_sym_list_expr_repeat1] = "list_expr_repeat1",
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
  [anon_sym_for] = anon_sym_for,
  [anon_sym_in] = anon_sym_in,
  [sym_break_stmt] = sym_break_stmt,
  [sym_continue_stmt] = sym_continue_stmt,
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
  [sym_for_stmt] = sym_for_stmt,
  [sym_let_stmt] = sym_let_stmt,
  [sym_expr] = sym_expr,
  [sym_func_call_expr] = sym_func_call_expr,
  [sym_paren_expr] = sym_paren_expr,
  [sym_list_expr] = sym_list_expr,
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
  [aux_sym_list_expr_repeat1] = aux_sym_list_expr_repeat1,
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
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [sym_break_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_continue_stmt] = {
    .visible = true,
    .named = true,
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
  [sym_for_stmt] = {
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
  [sym_list_expr] = {
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
  [aux_sym_list_expr_repeat1] = {
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
  [19] = 17,
  [20] = 20,
  [21] = 20,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 24,
  [27] = 22,
  [28] = 23,
  [29] = 29,
  [30] = 29,
  [31] = 23,
  [32] = 32,
  [33] = 23,
  [34] = 34,
  [35] = 22,
  [36] = 36,
  [37] = 22,
  [38] = 23,
  [39] = 39,
  [40] = 23,
  [41] = 41,
  [42] = 12,
  [43] = 11,
  [44] = 13,
  [45] = 10,
  [46] = 9,
  [47] = 2,
  [48] = 14,
  [49] = 8,
  [50] = 7,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 51,
  [55] = 51,
  [56] = 51,
  [57] = 52,
  [58] = 52,
  [59] = 52,
  [60] = 60,
  [61] = 61,
  [62] = 52,
  [63] = 63,
  [64] = 52,
  [65] = 65,
  [66] = 66,
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
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 2,
  [85] = 85,
  [86] = 10,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 92,
  [94] = 92,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 82,
  [100] = 82,
  [101] = 82,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 85,
  [110] = 110,
  [111] = 110,
  [112] = 112,
  [113] = 2,
  [114] = 114,
  [115] = 114,
  [116] = 116,
  [117] = 83,
  [118] = 118,
  [119] = 85,
  [120] = 83,
  [121] = 2,
  [122] = 83,
  [123] = 123,
  [124] = 124,
  [125] = 2,
  [126] = 85,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 134,
  [137] = 137,
  [138] = 134,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 134,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(88);
      if (lookahead == '"') ADVANCE(139);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '(') ADVANCE(150);
      if (lookahead == ')') ADVANCE(121);
      if (lookahead == '*') ADVANCE(208);
      if (lookahead == '+') ADVANCE(207);
      if (lookahead == ',') ADVANCE(123);
      if (lookahead == '-') ADVANCE(98);
      if (lookahead == '/') ADVANCE(102);
      if (lookahead == '0') ADVANCE(131);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '<') ADVANCE(210);
      if (lookahead == '=') ADVANCE(118);
      if (lookahead == '>') ADVANCE(212);
      if (lookahead == '@') ADVANCE(231);
      if (lookahead == '[') ADVANCE(122);
      if (lookahead == ']') ADVANCE(124);
      if (lookahead == '^') ADVANCE(209);
      if (lookahead == 'a') ADVANCE(52);
      if (lookahead == 'b') ADVANCE(66);
      if (lookahead == 'c') ADVANCE(17);
      if (lookahead == 'f') ADVANCE(18);
      if (lookahead == 'i') ADVANCE(37);
      if (lookahead == 'l') ADVANCE(25);
      if (lookahead == 'm') ADVANCE(59);
      if (lookahead == 'n') ADVANCE(62);
      if (lookahead == 'o') ADVANCE(53);
      if (lookahead == 'r') ADVANCE(77);
      if (lookahead == 's') ADVANCE(33);
      if (lookahead == 't') ADVANCE(45);
      if (lookahead == 'u') ADVANCE(68);
      if (lookahead == 'w') ADVANCE(41);
      if (lookahead == 'x') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(84)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(133);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(104);
      if (lookahead == '(') ADVANCE(150);
      if (lookahead == '-') ADVANCE(99);
      if (lookahead == '/') ADVANCE(103);
      if (lookahead == '0') ADVANCE(132);
      if (lookahead == ':') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(104);
      if (lookahead == '(') ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(104);
      if (lookahead == '(') ADVANCE(120);
      if (lookahead == '-') ADVANCE(99);
      if (lookahead == '/') ADVANCE(103);
      if (lookahead == '0') ADVANCE(132);
      if (lookahead == ':') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(104);
      if (lookahead == '(') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(119);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead == '(') ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6)
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(119);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead == '(') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6)
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '"') ADVANCE(139);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(141);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(139);
      if (lookahead == '(') ADVANCE(120);
      if (lookahead == '-') ADVANCE(98);
      if (lookahead == '0') ADVANCE(131);
      if (lookahead == '[') ADVANCE(122);
      if (lookahead == ']') ADVANCE(124);
      if (lookahead == 'f') ADVANCE(155);
      if (lookahead == 'n') ADVANCE(187);
      if (lookahead == 't') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 9:
      if (lookahead == '(') ADVANCE(150);
      if (lookahead == 'u') ADVANCE(145);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 10:
      if (lookahead == '(') ADVANCE(120);
      if (lookahead == 'u') ADVANCE(145);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 11:
      if (lookahead == '(') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 12:
      if (lookahead == '(') ADVANCE(13);
      if (lookahead == ')') ADVANCE(121);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 13:
      if (lookahead == ')') ADVANCE(230);
      END_STATE();
    case 14:
      if (lookahead == '>') ADVANCE(234);
      END_STATE();
    case 15:
      if (lookahead == '_') ADVANCE(42);
      END_STATE();
    case 16:
      if (lookahead == '_') ADVANCE(63);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(21);
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(49);
      if (lookahead == 'n') ADVANCE(232);
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(43);
      END_STATE();
    case 22:
      if (lookahead == 'd') ADVANCE(214);
      END_STATE();
    case 23:
      if (lookahead == 'd') ADVANCE(216);
      END_STATE();
    case 24:
      if (lookahead == 'd') ADVANCE(95);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(224);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(228);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 37:
      if (lookahead == 'f') ADVANCE(105);
      if (lookahead == 'm') ADVANCE(19);
      if (lookahead == 'n') ADVANCE(109);
      if (lookahead == 's') ADVANCE(220);
      END_STATE();
    case 38:
      if (lookahead == 'f') ADVANCE(15);
      END_STATE();
    case 39:
      if (lookahead == 'g') ADVANCE(226);
      END_STATE();
    case 40:
      if (lookahead == 'g') ADVANCE(29);
      END_STATE();
    case 41:
      if (lookahead == 'h') ADVANCE(36);
      END_STATE();
    case 42:
      if (lookahead == 'h') ADVANCE(61);
      END_STATE();
    case 43:
      if (lookahead == 'h') ADVANCE(27);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 45:
      if (lookahead == 'i') ADVANCE(74);
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 47:
      if (lookahead == 'k') ADVANCE(110);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(70);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 51:
      if (lookahead == 'm') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(51)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 52:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(90);
      if (lookahead == 'r') ADVANCE(218);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 56:
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 57:
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 58:
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 59:
      if (lookahead == 'o') ADVANCE(23);
      if (lookahead == 'u') ADVANCE(72);
      END_STATE();
    case 60:
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 61:
      if (lookahead == 'o') ADVANCE(69);
      END_STATE();
    case 62:
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 63:
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 64:
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 65:
      if (lookahead == 'r') ADVANCE(222);
      END_STATE();
    case 66:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 67:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 68:
      if (lookahead == 's') ADVANCE(44);
      END_STATE();
    case 69:
      if (lookahead == 's') ADVANCE(75);
      END_STATE();
    case 70:
      if (lookahead == 's') ADVANCE(28);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 73:
      if (lookahead == 't') ADVANCE(205);
      END_STATE();
    case 74:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 75:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 76:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 77:
      if (lookahead == 'u') ADVANCE(54);
      END_STATE();
    case 78:
      if (lookahead == 'u') ADVANCE(26);
      END_STATE();
    case 79:
      if (lookahead == 'u') ADVANCE(32);
      END_STATE();
    case 80:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(125);
      END_STATE();
    case 81:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(81)
      if (lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 82:
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(127);
      END_STATE();
    case 83:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(129);
      END_STATE();
    case 84:
      if (eof) ADVANCE(88);
      if (lookahead == '"') ADVANCE(139);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '(') ADVANCE(120);
      if (lookahead == ')') ADVANCE(121);
      if (lookahead == '*') ADVANCE(208);
      if (lookahead == '+') ADVANCE(207);
      if (lookahead == ',') ADVANCE(123);
      if (lookahead == '-') ADVANCE(98);
      if (lookahead == '/') ADVANCE(102);
      if (lookahead == '0') ADVANCE(131);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '<') ADVANCE(210);
      if (lookahead == '=') ADVANCE(118);
      if (lookahead == '>') ADVANCE(212);
      if (lookahead == '@') ADVANCE(231);
      if (lookahead == '[') ADVANCE(122);
      if (lookahead == ']') ADVANCE(124);
      if (lookahead == '^') ADVANCE(209);
      if (lookahead == 'a') ADVANCE(52);
      if (lookahead == 'b') ADVANCE(66);
      if (lookahead == 'c') ADVANCE(17);
      if (lookahead == 'f') ADVANCE(18);
      if (lookahead == 'i') ADVANCE(37);
      if (lookahead == 'l') ADVANCE(25);
      if (lookahead == 'm') ADVANCE(59);
      if (lookahead == 'n') ADVANCE(62);
      if (lookahead == 'o') ADVANCE(53);
      if (lookahead == 'r') ADVANCE(77);
      if (lookahead == 's') ADVANCE(33);
      if (lookahead == 't') ADVANCE(45);
      if (lookahead == 'u') ADVANCE(68);
      if (lookahead == 'w') ADVANCE(41);
      if (lookahead == 'x') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(84)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(133);
      END_STATE();
    case 85:
      if (eof) ADVANCE(88);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '(') ADVANCE(120);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == ':') ADVANCE(100);
      if (lookahead == '@') ADVANCE(231);
      if (lookahead == 'b') ADVANCE(191);
      if (lookahead == 'c') ADVANCE(153);
      if (lookahead == 'f') ADVANCE(177);
      if (lookahead == 'i') ADVANCE(169);
      if (lookahead == 'l') ADVANCE(159);
      if (lookahead == 'o') ADVANCE(179);
      if (lookahead == 'r') ADVANCE(200);
      if (lookahead == 't') ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(85)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 86:
      if (eof) ADVANCE(88);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '*') ADVANCE(208);
      if (lookahead == '+') ADVANCE(207);
      if (lookahead == '-') ADVANCE(98);
      if (lookahead == '/') ADVANCE(102);
      if (lookahead == '<') ADVANCE(210);
      if (lookahead == '>') ADVANCE(212);
      if (lookahead == '@') ADVANCE(231);
      if (lookahead == '^') ADVANCE(209);
      if (lookahead == 'a') ADVANCE(182);
      if (lookahead == 'b') ADVANCE(191);
      if (lookahead == 'c') ADVANCE(153);
      if (lookahead == 'f') ADVANCE(177);
      if (lookahead == 'i') ADVANCE(168);
      if (lookahead == 'l') ADVANCE(159);
      if (lookahead == 'm') ADVANCE(185);
      if (lookahead == 'o') ADVANCE(178);
      if (lookahead == 'r') ADVANCE(200);
      if (lookahead == 't') ADVANCE(172);
      if (lookahead == 'x') ADVANCE(186);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(86)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 87:
      if (eof) ADVANCE(88);
      if (lookahead == '#') ADVANCE(235);
      if (lookahead == '@') ADVANCE(231);
      if (lookahead == 'b') ADVANCE(191);
      if (lookahead == 'c') ADVANCE(153);
      if (lookahead == 'f') ADVANCE(177);
      if (lookahead == 'i') ADVANCE(169);
      if (lookahead == 'l') ADVANCE(159);
      if (lookahead == 'o') ADVANCE(179);
      if (lookahead == 'r') ADVANCE(200);
      if (lookahead == 't') ADVANCE(172);
      if (lookahead == 'w') ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(87)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_event_type);
      if (lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_on);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_image);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_self_hosted);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_run_on);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_run_on);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(149);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(149);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(149);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_break_stmt);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_break_stmt);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_continue_stmt);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_continue_stmt);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_mut);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_mut);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_func_call_expr_token1);
      if (lookahead == '\n') ADVANCE(119);
      if (lookahead == '\r') ADVANCE(6);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(149);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(149);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(149);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (lookahead == 'b') ADVANCE(80);
      if (lookahead == 'o') ADVANCE(82);
      if (lookahead == 'x') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (lookahead == 'b') ADVANCE(146);
      if (lookahead == 'o') ADVANCE(147);
      if (lookahead == 'x') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(149);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(149);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"') ADVANCE(139);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(140);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'g') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(149);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'i') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(149);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'n') ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(149);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 's') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(149);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(149);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(149);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(130);
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
      if (lookahead == '_') ADVANCE(188);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(156);
      if (lookahead == 'o') ADVANCE(184);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(174);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(175);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(170);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(215);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(217);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(195);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(154);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(225);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(229);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(113);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(136);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(138);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(93);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(192);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(106);
      if (lookahead == 's') ADVANCE(221);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(106);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'h') ADVANCE(161);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'h') ADVANCE(167);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(196);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(183);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'k') ADVANCE(111);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(194);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(162);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(233);
      if (lookahead == 'o') ADVANCE(189);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(91);
      if (lookahead == 'r') ADVANCE(219);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(91);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(152);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(97);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(157);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(201);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(199);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(158);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(190);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(197);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(181);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(108);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(223);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(160);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(166);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(203);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(165);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(115);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(176);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(206);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(117);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(173);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(180);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(163);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(198);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(164);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(211);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(213);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_mod);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_mod);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_is);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_xor);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_xor);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_cache);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_cache);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_using);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(149);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_title);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_title);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_LPAREN_RPAREN);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_fn);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(235);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 85},
  [2] = {.lex_state = 86},
  [3] = {.lex_state = 86},
  [4] = {.lex_state = 86},
  [5] = {.lex_state = 86},
  [6] = {.lex_state = 86},
  [7] = {.lex_state = 86},
  [8] = {.lex_state = 86},
  [9] = {.lex_state = 86},
  [10] = {.lex_state = 86},
  [11] = {.lex_state = 86},
  [12] = {.lex_state = 86},
  [13] = {.lex_state = 86},
  [14] = {.lex_state = 86},
  [15] = {.lex_state = 85},
  [16] = {.lex_state = 85},
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
  [35] = {.lex_state = 8},
  [36] = {.lex_state = 8},
  [37] = {.lex_state = 8},
  [38] = {.lex_state = 8},
  [39] = {.lex_state = 8},
  [40] = {.lex_state = 8},
  [41] = {.lex_state = 8},
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
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 87},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 85},
  [66] = {.lex_state = 85},
  [67] = {.lex_state = 85},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 85},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 85},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 85},
  [74] = {.lex_state = 85},
  [75] = {.lex_state = 85},
  [76] = {.lex_state = 85},
  [77] = {.lex_state = 85},
  [78] = {.lex_state = 85},
  [79] = {.lex_state = 85},
  [80] = {.lex_state = 85},
  [81] = {.lex_state = 8},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 3},
  [88] = {.lex_state = 6},
  [89] = {.lex_state = 10},
  [90] = {.lex_state = 6},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 6},
  [93] = {.lex_state = 4},
  [94] = {.lex_state = 10},
  [95] = {.lex_state = 11},
  [96] = {.lex_state = 11},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 2},
  [100] = {.lex_state = 5},
  [101] = {.lex_state = 9},
  [102] = {.lex_state = 12},
  [103] = {.lex_state = 12},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 12},
  [106] = {.lex_state = 12},
  [107] = {.lex_state = 12},
  [108] = {.lex_state = 12},
  [109] = {.lex_state = 10},
  [110] = {.lex_state = 7},
  [111] = {.lex_state = 7},
  [112] = {.lex_state = 12},
  [113] = {.lex_state = 6},
  [114] = {.lex_state = 7},
  [115] = {.lex_state = 7},
  [116] = {.lex_state = 7},
  [117] = {.lex_state = 10},
  [118] = {.lex_state = 12},
  [119] = {.lex_state = 4},
  [120] = {.lex_state = 6},
  [121] = {.lex_state = 10},
  [122] = {.lex_state = 4},
  [123] = {.lex_state = 12},
  [124] = {.lex_state = 12},
  [125] = {.lex_state = 4},
  [126] = {.lex_state = 6},
  [127] = {.lex_state = 85},
  [128] = {.lex_state = 85},
  [129] = {.lex_state = 12},
  [130] = {.lex_state = 85},
  [131] = {.lex_state = 51},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 12},
  [134] = {.lex_state = 151},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 151},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 151},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 12},
  [141] = {.lex_state = 12},
  [142] = {.lex_state = 12},
  [143] = {.lex_state = 85},
  [144] = {.lex_state = 85},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 151},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 81},
  [151] = {.lex_state = 12},
  [152] = {.lex_state = 0},
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
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [sym_break_stmt] = ACTIONS(1),
    [sym_continue_stmt] = ACTIONS(1),
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
    [sym_source_file] = STATE(149),
    [sym_stmt] = STATE(16),
    [sym_on_stmt] = STATE(74),
    [sym_run_on_stmt] = STATE(74),
    [sym_if_expr] = STATE(74),
    [sym_for_stmt] = STATE(74),
    [sym_let_stmt] = STATE(74),
    [sym_func_call_expr] = STATE(74),
    [sym_cache_stmt] = STATE(74),
    [sym_title_stmt] = STATE(74),
    [sym_func_annotation] = STATE(98),
    [sym_func_def_stmt] = STATE(74),
    [aux_sym_source_file_repeat1] = STATE(16),
    [aux_sym_func_def_stmt_repeat1] = STATE(98),
    [anon_sym_on] = ACTIONS(3),
    [anon_sym_run_on] = ACTIONS(5),
    [anon_sym_if] = ACTIONS(7),
    [anon_sym_for] = ACTIONS(9),
    [sym_break_stmt] = ACTIONS(11),
    [sym_continue_stmt] = ACTIONS(11),
    [anon_sym_let] = ACTIONS(13),
    [sym_ident] = ACTIONS(15),
    [anon_sym_cache] = ACTIONS(17),
    [anon_sym_title] = ACTIONS(19),
    [anon_sym_AT] = ACTIONS(21),
    [anon_sym_fn] = ACTIONS(23),
    [sym_comment] = ACTIONS(25),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(27), 10,
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
    ACTIONS(29), 18,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_for,
      sym_break_stmt,
      sym_continue_stmt,
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
  [33] = 4,
    ACTIONS(31), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
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
    ACTIONS(33), 11,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_for,
      sym_break_stmt,
      sym_continue_stmt,
      anon_sym_let,
      sym_ident,
      anon_sym_cache,
      anon_sym_title,
      anon_sym_fn,
  [70] = 4,
    ACTIONS(39), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
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
    ACTIONS(41), 11,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_for,
      sym_break_stmt,
      sym_continue_stmt,
      anon_sym_let,
      sym_ident,
      anon_sym_cache,
      anon_sym_title,
      anon_sym_fn,
  [107] = 4,
    ACTIONS(43), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
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
    ACTIONS(45), 11,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_for,
      sym_break_stmt,
      sym_continue_stmt,
      anon_sym_let,
      sym_ident,
      anon_sym_cache,
      anon_sym_title,
      anon_sym_fn,
  [144] = 4,
    ACTIONS(47), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
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
    ACTIONS(49), 11,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_for,
      sym_break_stmt,
      sym_continue_stmt,
      anon_sym_let,
      sym_ident,
      anon_sym_cache,
      anon_sym_title,
      anon_sym_fn,
  [181] = 2,
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
    ACTIONS(53), 18,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_for,
      sym_break_stmt,
      sym_continue_stmt,
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
  [214] = 2,
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
    ACTIONS(57), 18,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_for,
      sym_break_stmt,
      sym_continue_stmt,
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
  [247] = 2,
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
    ACTIONS(61), 18,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_for,
      sym_break_stmt,
      sym_continue_stmt,
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
  [280] = 2,
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
    ACTIONS(65), 18,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_for,
      sym_break_stmt,
      sym_continue_stmt,
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
  [313] = 2,
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
    ACTIONS(69), 18,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_for,
      sym_break_stmt,
      sym_continue_stmt,
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
    ACTIONS(73), 18,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_for,
      sym_break_stmt,
      sym_continue_stmt,
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
  [379] = 2,
    ACTIONS(75), 10,
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
    ACTIONS(77), 18,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_for,
      sym_break_stmt,
      sym_continue_stmt,
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
  [412] = 2,
    ACTIONS(79), 10,
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
    ACTIONS(81), 18,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_for,
      sym_break_stmt,
      sym_continue_stmt,
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
  [445] = 16,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
    ACTIONS(85), 1,
      anon_sym_on,
    ACTIONS(88), 1,
      anon_sym_run_on,
    ACTIONS(91), 1,
      anon_sym_if,
    ACTIONS(94), 1,
      anon_sym_for,
    ACTIONS(100), 1,
      anon_sym_let,
    ACTIONS(103), 1,
      sym_ident,
    ACTIONS(106), 1,
      anon_sym_cache,
    ACTIONS(109), 1,
      anon_sym_title,
    ACTIONS(112), 1,
      anon_sym_AT,
    ACTIONS(115), 1,
      anon_sym_fn,
    ACTIONS(118), 1,
      sym_comment,
    ACTIONS(97), 2,
      sym_break_stmt,
      sym_continue_stmt,
    STATE(15), 2,
      sym_stmt,
      aux_sym_source_file_repeat1,
    STATE(98), 2,
      sym_func_annotation,
      aux_sym_func_def_stmt_repeat1,
    STATE(74), 9,
      sym_on_stmt,
      sym_run_on_stmt,
      sym_if_expr,
      sym_for_stmt,
      sym_let_stmt,
      sym_func_call_expr,
      sym_cache_stmt,
      sym_title_stmt,
      sym_func_def_stmt,
  [505] = 16,
    ACTIONS(3), 1,
      anon_sym_on,
    ACTIONS(5), 1,
      anon_sym_run_on,
    ACTIONS(7), 1,
      anon_sym_if,
    ACTIONS(9), 1,
      anon_sym_for,
    ACTIONS(13), 1,
      anon_sym_let,
    ACTIONS(15), 1,
      sym_ident,
    ACTIONS(17), 1,
      anon_sym_cache,
    ACTIONS(19), 1,
      anon_sym_title,
    ACTIONS(21), 1,
      anon_sym_AT,
    ACTIONS(23), 1,
      anon_sym_fn,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 2,
      sym_break_stmt,
      sym_continue_stmt,
    STATE(15), 2,
      sym_stmt,
      aux_sym_source_file_repeat1,
    STATE(98), 2,
      sym_func_annotation,
      aux_sym_func_def_stmt_repeat1,
    STATE(74), 9,
      sym_on_stmt,
      sym_run_on_stmt,
      sym_if_expr,
      sym_for_stmt,
      sym_let_stmt,
      sym_func_call_expr,
      sym_cache_stmt,
      sym_title_stmt,
      sym_func_def_stmt,
  [565] = 13,
    ACTIONS(123), 1,
      anon_sym_DASH,
    ACTIONS(125), 1,
      anon_sym_LPAREN,
    ACTIONS(127), 1,
      anon_sym_LBRACK,
    ACTIONS(129), 1,
      anon_sym_RBRACK,
    ACTIONS(133), 1,
      aux_sym_number_token4,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(139), 1,
      sym_ident,
    ACTIONS(141), 1,
      anon_sym_not,
    STATE(18), 1,
      aux_sym_list_expr_repeat1,
    STATE(63), 1,
      sym_expr,
    ACTIONS(135), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(131), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(49), 7,
      sym_paren_expr,
      sym_list_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [614] = 13,
    ACTIONS(143), 1,
      anon_sym_DASH,
    ACTIONS(146), 1,
      anon_sym_LPAREN,
    ACTIONS(149), 1,
      anon_sym_LBRACK,
    ACTIONS(152), 1,
      anon_sym_RBRACK,
    ACTIONS(157), 1,
      aux_sym_number_token4,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    ACTIONS(166), 1,
      sym_ident,
    ACTIONS(169), 1,
      anon_sym_not,
    STATE(18), 1,
      aux_sym_list_expr_repeat1,
    STATE(63), 1,
      sym_expr,
    ACTIONS(160), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(154), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(49), 7,
      sym_paren_expr,
      sym_list_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [663] = 13,
    ACTIONS(123), 1,
      anon_sym_DASH,
    ACTIONS(125), 1,
      anon_sym_LPAREN,
    ACTIONS(127), 1,
      anon_sym_LBRACK,
    ACTIONS(133), 1,
      aux_sym_number_token4,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(139), 1,
      sym_ident,
    ACTIONS(141), 1,
      anon_sym_not,
    ACTIONS(172), 1,
      anon_sym_RBRACK,
    STATE(18), 1,
      aux_sym_list_expr_repeat1,
    STATE(63), 1,
      sym_expr,
    ACTIONS(135), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(131), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(49), 7,
      sym_paren_expr,
      sym_list_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [712] = 12,
    ACTIONS(123), 1,
      anon_sym_DASH,
    ACTIONS(125), 1,
      anon_sym_LPAREN,
    ACTIONS(127), 1,
      anon_sym_LBRACK,
    ACTIONS(133), 1,
      aux_sym_number_token4,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(139), 1,
      sym_ident,
    ACTIONS(141), 1,
      anon_sym_not,
    STATE(19), 1,
      aux_sym_list_expr_repeat1,
    STATE(63), 1,
      sym_expr,
    ACTIONS(135), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(131), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(49), 7,
      sym_paren_expr,
      sym_list_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [758] = 12,
    ACTIONS(123), 1,
      anon_sym_DASH,
    ACTIONS(125), 1,
      anon_sym_LPAREN,
    ACTIONS(127), 1,
      anon_sym_LBRACK,
    ACTIONS(133), 1,
      aux_sym_number_token4,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(139), 1,
      sym_ident,
    ACTIONS(141), 1,
      anon_sym_not,
    STATE(17), 1,
      aux_sym_list_expr_repeat1,
    STATE(63), 1,
      sym_expr,
    ACTIONS(135), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(131), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(49), 7,
      sym_paren_expr,
      sym_list_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [804] = 11,
    ACTIONS(123), 1,
      anon_sym_DASH,
    ACTIONS(125), 1,
      anon_sym_LPAREN,
    ACTIONS(127), 1,
      anon_sym_LBRACK,
    ACTIONS(133), 1,
      aux_sym_number_token4,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(139), 1,
      sym_ident,
    ACTIONS(141), 1,
      anon_sym_not,
    STATE(51), 1,
      sym_expr,
    ACTIONS(135), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(131), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(49), 7,
      sym_paren_expr,
      sym_list_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [847] = 11,
    ACTIONS(123), 1,
      anon_sym_DASH,
    ACTIONS(125), 1,
      anon_sym_LPAREN,
    ACTIONS(127), 1,
      anon_sym_LBRACK,
    ACTIONS(133), 1,
      aux_sym_number_token4,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(139), 1,
      sym_ident,
    ACTIONS(141), 1,
      anon_sym_not,
    STATE(59), 1,
      sym_expr,
    ACTIONS(135), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(131), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(49), 7,
      sym_paren_expr,
      sym_list_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [890] = 11,
    ACTIONS(123), 1,
      anon_sym_DASH,
    ACTIONS(125), 1,
      anon_sym_LPAREN,
    ACTIONS(127), 1,
      anon_sym_LBRACK,
    ACTIONS(133), 1,
      aux_sym_number_token4,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(139), 1,
      sym_ident,
    ACTIONS(141), 1,
      anon_sym_not,
    STATE(43), 1,
      sym_expr,
    ACTIONS(135), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(131), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(49), 7,
      sym_paren_expr,
      sym_list_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [933] = 11,
    ACTIONS(174), 1,
      anon_sym_DASH,
    ACTIONS(176), 1,
      anon_sym_LPAREN,
    ACTIONS(178), 1,
      anon_sym_LBRACK,
    ACTIONS(182), 1,
      aux_sym_number_token4,
    ACTIONS(186), 1,
      anon_sym_DQUOTE,
    ACTIONS(188), 1,
      sym_ident,
    ACTIONS(190), 1,
      anon_sym_not,
    STATE(6), 1,
      sym_expr,
    ACTIONS(184), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(180), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(8), 7,
      sym_paren_expr,
      sym_list_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [976] = 11,
    ACTIONS(174), 1,
      anon_sym_DASH,
    ACTIONS(176), 1,
      anon_sym_LPAREN,
    ACTIONS(178), 1,
      anon_sym_LBRACK,
    ACTIONS(182), 1,
      aux_sym_number_token4,
    ACTIONS(186), 1,
      anon_sym_DQUOTE,
    ACTIONS(188), 1,
      sym_ident,
    ACTIONS(190), 1,
      anon_sym_not,
    STATE(11), 1,
      sym_expr,
    ACTIONS(184), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(180), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(8), 7,
      sym_paren_expr,
      sym_list_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [1019] = 11,
    ACTIONS(123), 1,
      anon_sym_DASH,
    ACTIONS(125), 1,
      anon_sym_LPAREN,
    ACTIONS(127), 1,
      anon_sym_LBRACK,
    ACTIONS(133), 1,
      aux_sym_number_token4,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(139), 1,
      sym_ident,
    ACTIONS(141), 1,
      anon_sym_not,
    STATE(54), 1,
      sym_expr,
    ACTIONS(135), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(131), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(49), 7,
      sym_paren_expr,
      sym_list_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [1062] = 11,
    ACTIONS(123), 1,
      anon_sym_DASH,
    ACTIONS(125), 1,
      anon_sym_LPAREN,
    ACTIONS(127), 1,
      anon_sym_LBRACK,
    ACTIONS(133), 1,
      aux_sym_number_token4,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(139), 1,
      sym_ident,
    ACTIONS(141), 1,
      anon_sym_not,
    STATE(62), 1,
      sym_expr,
    ACTIONS(135), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(131), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(49), 7,
      sym_paren_expr,
      sym_list_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [1105] = 11,
    ACTIONS(123), 1,
      anon_sym_DASH,
    ACTIONS(125), 1,
      anon_sym_LPAREN,
    ACTIONS(127), 1,
      anon_sym_LBRACK,
    ACTIONS(133), 1,
      aux_sym_number_token4,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(139), 1,
      sym_ident,
    ACTIONS(141), 1,
      anon_sym_not,
    STATE(44), 1,
      sym_expr,
    ACTIONS(135), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(131), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(49), 7,
      sym_paren_expr,
      sym_list_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [1148] = 11,
    ACTIONS(174), 1,
      anon_sym_DASH,
    ACTIONS(176), 1,
      anon_sym_LPAREN,
    ACTIONS(178), 1,
      anon_sym_LBRACK,
    ACTIONS(182), 1,
      aux_sym_number_token4,
    ACTIONS(186), 1,
      anon_sym_DQUOTE,
    ACTIONS(188), 1,
      sym_ident,
    ACTIONS(190), 1,
      anon_sym_not,
    STATE(13), 1,
      sym_expr,
    ACTIONS(184), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(180), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(8), 7,
      sym_paren_expr,
      sym_list_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [1191] = 11,
    ACTIONS(123), 1,
      anon_sym_DASH,
    ACTIONS(125), 1,
      anon_sym_LPAREN,
    ACTIONS(127), 1,
      anon_sym_LBRACK,
    ACTIONS(133), 1,
      aux_sym_number_token4,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(139), 1,
      sym_ident,
    ACTIONS(141), 1,
      anon_sym_not,
    STATE(52), 1,
      sym_expr,
    ACTIONS(135), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(131), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(49), 7,
      sym_paren_expr,
      sym_list_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [1234] = 11,
    ACTIONS(123), 1,
      anon_sym_DASH,
    ACTIONS(125), 1,
      anon_sym_LPAREN,
    ACTIONS(127), 1,
      anon_sym_LBRACK,
    ACTIONS(133), 1,
      aux_sym_number_token4,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(139), 1,
      sym_ident,
    ACTIONS(141), 1,
      anon_sym_not,
    STATE(53), 1,
      sym_expr,
    ACTIONS(135), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(131), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(49), 7,
      sym_paren_expr,
      sym_list_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [1277] = 11,
    ACTIONS(123), 1,
      anon_sym_DASH,
    ACTIONS(125), 1,
      anon_sym_LPAREN,
    ACTIONS(127), 1,
      anon_sym_LBRACK,
    ACTIONS(133), 1,
      aux_sym_number_token4,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(139), 1,
      sym_ident,
    ACTIONS(141), 1,
      anon_sym_not,
    STATE(64), 1,
      sym_expr,
    ACTIONS(135), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(131), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(49), 7,
      sym_paren_expr,
      sym_list_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [1320] = 11,
    ACTIONS(174), 1,
      anon_sym_DASH,
    ACTIONS(176), 1,
      anon_sym_LPAREN,
    ACTIONS(178), 1,
      anon_sym_LBRACK,
    ACTIONS(182), 1,
      aux_sym_number_token4,
    ACTIONS(186), 1,
      anon_sym_DQUOTE,
    ACTIONS(188), 1,
      sym_ident,
    ACTIONS(190), 1,
      anon_sym_not,
    STATE(5), 1,
      sym_expr,
    ACTIONS(184), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(180), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(8), 7,
      sym_paren_expr,
      sym_list_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [1363] = 11,
    ACTIONS(123), 1,
      anon_sym_DASH,
    ACTIONS(125), 1,
      anon_sym_LPAREN,
    ACTIONS(127), 1,
      anon_sym_LBRACK,
    ACTIONS(133), 1,
      aux_sym_number_token4,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(139), 1,
      sym_ident,
    ACTIONS(141), 1,
      anon_sym_not,
    STATE(55), 1,
      sym_expr,
    ACTIONS(135), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(131), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(49), 7,
      sym_paren_expr,
      sym_list_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [1406] = 11,
    ACTIONS(123), 1,
      anon_sym_DASH,
    ACTIONS(125), 1,
      anon_sym_LPAREN,
    ACTIONS(127), 1,
      anon_sym_LBRACK,
    ACTIONS(133), 1,
      aux_sym_number_token4,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(139), 1,
      sym_ident,
    ACTIONS(141), 1,
      anon_sym_not,
    STATE(60), 1,
      sym_expr,
    ACTIONS(135), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(131), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(49), 7,
      sym_paren_expr,
      sym_list_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [1449] = 11,
    ACTIONS(123), 1,
      anon_sym_DASH,
    ACTIONS(125), 1,
      anon_sym_LPAREN,
    ACTIONS(127), 1,
      anon_sym_LBRACK,
    ACTIONS(133), 1,
      aux_sym_number_token4,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(139), 1,
      sym_ident,
    ACTIONS(141), 1,
      anon_sym_not,
    STATE(56), 1,
      sym_expr,
    ACTIONS(135), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(131), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(49), 7,
      sym_paren_expr,
      sym_list_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [1492] = 11,
    ACTIONS(123), 1,
      anon_sym_DASH,
    ACTIONS(125), 1,
      anon_sym_LPAREN,
    ACTIONS(127), 1,
      anon_sym_LBRACK,
    ACTIONS(133), 1,
      aux_sym_number_token4,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(139), 1,
      sym_ident,
    ACTIONS(141), 1,
      anon_sym_not,
    STATE(58), 1,
      sym_expr,
    ACTIONS(135), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(131), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(49), 7,
      sym_paren_expr,
      sym_list_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [1535] = 11,
    ACTIONS(174), 1,
      anon_sym_DASH,
    ACTIONS(176), 1,
      anon_sym_LPAREN,
    ACTIONS(178), 1,
      anon_sym_LBRACK,
    ACTIONS(182), 1,
      aux_sym_number_token4,
    ACTIONS(186), 1,
      anon_sym_DQUOTE,
    ACTIONS(188), 1,
      sym_ident,
    ACTIONS(190), 1,
      anon_sym_not,
    STATE(3), 1,
      sym_expr,
    ACTIONS(184), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(180), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(8), 7,
      sym_paren_expr,
      sym_list_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [1578] = 11,
    ACTIONS(123), 1,
      anon_sym_DASH,
    ACTIONS(125), 1,
      anon_sym_LPAREN,
    ACTIONS(127), 1,
      anon_sym_LBRACK,
    ACTIONS(133), 1,
      aux_sym_number_token4,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(139), 1,
      sym_ident,
    ACTIONS(141), 1,
      anon_sym_not,
    STATE(57), 1,
      sym_expr,
    ACTIONS(135), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(131), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(49), 7,
      sym_paren_expr,
      sym_list_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [1621] = 11,
    ACTIONS(174), 1,
      anon_sym_DASH,
    ACTIONS(176), 1,
      anon_sym_LPAREN,
    ACTIONS(178), 1,
      anon_sym_LBRACK,
    ACTIONS(182), 1,
      aux_sym_number_token4,
    ACTIONS(186), 1,
      anon_sym_DQUOTE,
    ACTIONS(188), 1,
      sym_ident,
    ACTIONS(190), 1,
      anon_sym_not,
    STATE(4), 1,
      sym_expr,
    ACTIONS(184), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(180), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(8), 7,
      sym_paren_expr,
      sym_list_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [1664] = 2,
    ACTIONS(73), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(71), 15,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [1686] = 2,
    ACTIONS(69), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(67), 15,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [1708] = 2,
    ACTIONS(77), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(75), 15,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [1730] = 2,
    ACTIONS(65), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(63), 15,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [1752] = 2,
    ACTIONS(61), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 15,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [1774] = 2,
    ACTIONS(29), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(27), 15,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [1796] = 2,
    ACTIONS(81), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 15,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [1818] = 2,
    ACTIONS(57), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(55), 15,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [1840] = 2,
    ACTIONS(53), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(51), 15,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [1862] = 3,
    ACTIONS(194), 1,
      anon_sym_RPAREN,
    ACTIONS(196), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(192), 12,
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
  [1884] = 3,
    ACTIONS(198), 1,
      anon_sym_RPAREN,
    ACTIONS(196), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(192), 12,
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
  [1906] = 3,
    ACTIONS(200), 1,
      anon_sym_COLON,
    ACTIONS(196), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(192), 12,
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
  [1928] = 3,
    ACTIONS(202), 1,
      anon_sym_RPAREN,
    ACTIONS(196), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(192), 12,
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
  [1950] = 3,
    ACTIONS(204), 1,
      anon_sym_RPAREN,
    ACTIONS(196), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(192), 12,
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
  [1972] = 3,
    ACTIONS(206), 1,
      anon_sym_RPAREN,
    ACTIONS(196), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(192), 12,
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
  [1994] = 3,
    ACTIONS(208), 1,
      anon_sym_RPAREN,
    ACTIONS(196), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(192), 12,
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
  [2016] = 3,
    ACTIONS(210), 1,
      anon_sym_RPAREN,
    ACTIONS(196), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(192), 12,
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
  [2038] = 3,
    ACTIONS(212), 1,
      anon_sym_RPAREN,
    ACTIONS(196), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(192), 12,
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
  [2060] = 3,
    ACTIONS(214), 1,
      anon_sym_COLON,
    ACTIONS(196), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(192), 12,
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
  [2082] = 3,
    ACTIONS(220), 1,
      anon_sym_where,
    ACTIONS(216), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_comment,
    ACTIONS(218), 11,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_for,
      sym_break_stmt,
      sym_continue_stmt,
      anon_sym_let,
      sym_ident,
      anon_sym_cache,
      anon_sym_title,
      anon_sym_fn,
  [2104] = 3,
    ACTIONS(222), 1,
      anon_sym_RPAREN,
    ACTIONS(196), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(192), 12,
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
  [2126] = 3,
    ACTIONS(224), 1,
      anon_sym_COMMA,
    ACTIONS(196), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(192), 12,
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
  [2148] = 3,
    ACTIONS(226), 1,
      anon_sym_RPAREN,
    ACTIONS(196), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(192), 12,
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
  [2170] = 2,
    ACTIONS(228), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_comment,
    ACTIONS(230), 11,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_for,
      sym_break_stmt,
      sym_continue_stmt,
      anon_sym_let,
      sym_ident,
      anon_sym_cache,
      anon_sym_title,
      anon_sym_fn,
  [2189] = 2,
    ACTIONS(232), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_comment,
    ACTIONS(234), 11,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_for,
      sym_break_stmt,
      sym_continue_stmt,
      anon_sym_let,
      sym_ident,
      anon_sym_cache,
      anon_sym_title,
      anon_sym_fn,
  [2208] = 2,
    ACTIONS(236), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_comment,
    ACTIONS(238), 11,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_for,
      sym_break_stmt,
      sym_continue_stmt,
      anon_sym_let,
      sym_ident,
      anon_sym_cache,
      anon_sym_title,
      anon_sym_fn,
  [2227] = 7,
    ACTIONS(242), 1,
      anon_sym_LF,
    ACTIONS(244), 1,
      anon_sym_LPAREN,
    ACTIONS(248), 1,
      aux_sym_string_ident_token1,
    STATE(85), 1,
      sym_paren_expr,
    ACTIONS(240), 3,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
    STATE(72), 3,
      sym_number,
      sym_string_ident,
      aux_sym_run_on_stmt_repeat1,
    ACTIONS(246), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
  [2256] = 2,
    ACTIONS(250), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_comment,
    ACTIONS(252), 11,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_for,
      sym_break_stmt,
      sym_continue_stmt,
      anon_sym_let,
      sym_ident,
      anon_sym_cache,
      anon_sym_title,
      anon_sym_fn,
  [2275] = 7,
    ACTIONS(244), 1,
      anon_sym_LPAREN,
    ACTIONS(248), 1,
      aux_sym_string_ident_token1,
    ACTIONS(256), 1,
      anon_sym_LF,
    STATE(85), 1,
      sym_paren_expr,
    ACTIONS(254), 3,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
    STATE(68), 3,
      sym_number,
      sym_string_ident,
      aux_sym_run_on_stmt_repeat1,
    ACTIONS(246), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
  [2304] = 2,
    ACTIONS(258), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_comment,
    ACTIONS(260), 11,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_for,
      sym_break_stmt,
      sym_continue_stmt,
      anon_sym_let,
      sym_ident,
      anon_sym_cache,
      anon_sym_title,
      anon_sym_fn,
  [2323] = 7,
    ACTIONS(265), 1,
      anon_sym_LF,
    ACTIONS(267), 1,
      anon_sym_LPAREN,
    ACTIONS(273), 1,
      aux_sym_string_ident_token1,
    STATE(85), 1,
      sym_paren_expr,
    ACTIONS(262), 3,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
    STATE(72), 3,
      sym_number,
      sym_string_ident,
      aux_sym_run_on_stmt_repeat1,
    ACTIONS(270), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
  [2352] = 2,
    ACTIONS(276), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_comment,
    ACTIONS(278), 11,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_for,
      sym_break_stmt,
      sym_continue_stmt,
      anon_sym_let,
      sym_ident,
      anon_sym_cache,
      anon_sym_title,
      anon_sym_fn,
  [2371] = 2,
    ACTIONS(280), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_comment,
    ACTIONS(282), 11,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_for,
      sym_break_stmt,
      sym_continue_stmt,
      anon_sym_let,
      sym_ident,
      anon_sym_cache,
      anon_sym_title,
      anon_sym_fn,
  [2390] = 2,
    ACTIONS(284), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_comment,
    ACTIONS(286), 11,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_for,
      sym_break_stmt,
      sym_continue_stmt,
      anon_sym_let,
      sym_ident,
      anon_sym_cache,
      anon_sym_title,
      anon_sym_fn,
  [2409] = 2,
    ACTIONS(288), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_comment,
    ACTIONS(290), 11,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_for,
      sym_break_stmt,
      sym_continue_stmt,
      anon_sym_let,
      sym_ident,
      anon_sym_cache,
      anon_sym_title,
      anon_sym_fn,
  [2428] = 2,
    ACTIONS(292), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_comment,
    ACTIONS(294), 11,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_for,
      sym_break_stmt,
      sym_continue_stmt,
      anon_sym_let,
      sym_ident,
      anon_sym_cache,
      anon_sym_title,
      anon_sym_fn,
  [2447] = 2,
    ACTIONS(296), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_comment,
    ACTIONS(298), 11,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_for,
      sym_break_stmt,
      sym_continue_stmt,
      anon_sym_let,
      sym_ident,
      anon_sym_cache,
      anon_sym_title,
      anon_sym_fn,
  [2466] = 2,
    ACTIONS(300), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_comment,
    ACTIONS(302), 11,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_for,
      sym_break_stmt,
      sym_continue_stmt,
      anon_sym_let,
      sym_ident,
      anon_sym_cache,
      anon_sym_title,
      anon_sym_fn,
  [2485] = 2,
    ACTIONS(304), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_comment,
    ACTIONS(306), 11,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_for,
      sym_break_stmt,
      sym_continue_stmt,
      anon_sym_let,
      sym_ident,
      anon_sym_cache,
      anon_sym_title,
      anon_sym_fn,
  [2504] = 2,
    ACTIONS(308), 5,
      aux_sym_number_token4,
      anon_sym_true,
      anon_sym_false,
      sym_ident,
      anon_sym_not,
    ACTIONS(152), 8,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      anon_sym_DQUOTE,
  [2522] = 3,
    ACTIONS(312), 1,
      anon_sym_LF,
    ACTIONS(314), 1,
      anon_sym_LPAREN2,
    ACTIONS(310), 9,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_string_ident_token1,
  [2540] = 2,
    ACTIONS(318), 1,
      anon_sym_LF,
    ACTIONS(316), 9,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_string_ident_token1,
  [2555] = 2,
    ACTIONS(27), 1,
      anon_sym_LF,
    ACTIONS(29), 9,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_string_ident_token1,
  [2570] = 2,
    ACTIONS(312), 1,
      anon_sym_LF,
    ACTIONS(310), 9,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_string_ident_token1,
  [2585] = 2,
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
  [2600] = 2,
    ACTIONS(322), 1,
      anon_sym_LF,
    ACTIONS(320), 9,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_string_ident_token1,
  [2615] = 5,
    ACTIONS(324), 1,
      aux_sym_func_call_expr_token1,
    ACTIONS(326), 1,
      anon_sym_LPAREN,
    ACTIONS(328), 1,
      aux_sym_string_ident_token1,
    STATE(126), 1,
      sym_paren_expr,
    STATE(92), 2,
      sym_string_ident,
      aux_sym_func_call_expr_repeat1,
  [2632] = 5,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    ACTIONS(332), 1,
      aux_sym_string_ident_token1,
    ACTIONS(334), 1,
      anon_sym_using,
    STATE(109), 1,
      sym_paren_expr,
    STATE(94), 2,
      sym_string_ident,
      aux_sym_func_call_expr_repeat1,
  [2649] = 5,
    ACTIONS(326), 1,
      anon_sym_LPAREN,
    ACTIONS(328), 1,
      aux_sym_string_ident_token1,
    ACTIONS(336), 1,
      aux_sym_func_call_expr_token1,
    STATE(126), 1,
      sym_paren_expr,
    STATE(88), 2,
      sym_string_ident,
      aux_sym_func_call_expr_repeat1,
  [2666] = 5,
    ACTIONS(338), 1,
      anon_sym_LF,
    ACTIONS(340), 1,
      anon_sym_LPAREN,
    ACTIONS(342), 1,
      aux_sym_string_ident_token1,
    STATE(119), 1,
      sym_paren_expr,
    STATE(93), 2,
      sym_string_ident,
      aux_sym_func_call_expr_repeat1,
  [2683] = 5,
    ACTIONS(344), 1,
      aux_sym_func_call_expr_token1,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(349), 1,
      aux_sym_string_ident_token1,
    STATE(126), 1,
      sym_paren_expr,
    STATE(92), 2,
      sym_string_ident,
      aux_sym_func_call_expr_repeat1,
  [2700] = 5,
    ACTIONS(344), 1,
      anon_sym_LF,
    ACTIONS(352), 1,
      anon_sym_LPAREN,
    ACTIONS(355), 1,
      aux_sym_string_ident_token1,
    STATE(119), 1,
      sym_paren_expr,
    STATE(93), 2,
      sym_string_ident,
      aux_sym_func_call_expr_repeat1,
  [2717] = 5,
    ACTIONS(358), 1,
      anon_sym_LPAREN,
    ACTIONS(361), 1,
      aux_sym_string_ident_token1,
    ACTIONS(364), 1,
      anon_sym_using,
    STATE(109), 1,
      sym_paren_expr,
    STATE(94), 2,
      sym_string_ident,
      aux_sym_func_call_expr_repeat1,
  [2734] = 4,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    ACTIONS(366), 1,
      aux_sym_string_ident_token1,
    STATE(109), 1,
      sym_paren_expr,
    STATE(89), 2,
      sym_string_ident,
      aux_sym_func_call_expr_repeat1,
  [2748] = 4,
    ACTIONS(368), 1,
      anon_sym_LPAREN,
    ACTIONS(370), 1,
      aux_sym_string_ident_token1,
    STATE(119), 1,
      sym_paren_expr,
    STATE(91), 2,
      sym_string_ident,
      aux_sym_func_call_expr_repeat1,
  [2762] = 3,
    ACTIONS(372), 1,
      anon_sym_AT,
    ACTIONS(375), 1,
      anon_sym_fn,
    STATE(97), 2,
      sym_func_annotation,
      aux_sym_func_def_stmt_repeat1,
  [2773] = 3,
    ACTIONS(21), 1,
      anon_sym_AT,
    ACTIONS(377), 1,
      anon_sym_fn,
    STATE(97), 2,
      sym_func_annotation,
      aux_sym_func_def_stmt_repeat1,
  [2784] = 3,
    ACTIONS(312), 1,
      anon_sym_LF,
    ACTIONS(379), 1,
      anon_sym_LPAREN2,
    ACTIONS(310), 2,
      anon_sym_LPAREN,
      aux_sym_string_ident_token1,
  [2795] = 3,
    ACTIONS(312), 1,
      aux_sym_func_call_expr_token1,
    ACTIONS(381), 1,
      anon_sym_LPAREN2,
    ACTIONS(310), 2,
      anon_sym_LPAREN,
      aux_sym_string_ident_token1,
  [2806] = 2,
    ACTIONS(383), 1,
      anon_sym_LPAREN2,
    ACTIONS(310), 3,
      anon_sym_LPAREN,
      aux_sym_string_ident_token1,
      anon_sym_using,
  [2815] = 2,
    STATE(146), 1,
      sym_type,
    ACTIONS(385), 2,
      sym_ident,
      anon_sym_LPAREN_RPAREN,
  [2823] = 1,
    ACTIONS(387), 3,
      anon_sym_COLON,
      anon_sym_RPAREN,
      sym_ident,
  [2829] = 2,
    STATE(70), 1,
      sym_run_on_type,
    ACTIONS(389), 2,
      anon_sym_image,
      anon_sym_self_hosted,
  [2837] = 2,
    STATE(145), 1,
      sym_type,
    ACTIONS(385), 2,
      sym_ident,
      anon_sym_LPAREN_RPAREN,
  [2845] = 3,
    ACTIONS(391), 1,
      anon_sym_RPAREN,
    ACTIONS(393), 1,
      sym_ident,
    STATE(108), 1,
      aux_sym_func_def_stmt_repeat2,
  [2855] = 2,
    STATE(129), 1,
      sym_type,
    ACTIONS(385), 2,
      sym_ident,
      anon_sym_LPAREN_RPAREN,
  [2863] = 3,
    ACTIONS(395), 1,
      anon_sym_RPAREN,
    ACTIONS(397), 1,
      sym_ident,
    STATE(108), 1,
      aux_sym_func_def_stmt_repeat2,
  [2873] = 2,
    ACTIONS(312), 1,
      anon_sym_LPAREN,
    ACTIONS(310), 2,
      aux_sym_string_ident_token1,
      anon_sym_using,
  [2881] = 3,
    ACTIONS(400), 1,
      anon_sym_DQUOTE,
    ACTIONS(402), 1,
      aux_sym_string_token1,
    STATE(116), 1,
      aux_sym_string_repeat1,
  [2891] = 3,
    ACTIONS(402), 1,
      aux_sym_string_token1,
    ACTIONS(404), 1,
      anon_sym_DQUOTE,
    STATE(116), 1,
      aux_sym_string_repeat1,
  [2901] = 3,
    ACTIONS(393), 1,
      sym_ident,
    ACTIONS(406), 1,
      anon_sym_RPAREN,
    STATE(108), 1,
      aux_sym_func_def_stmt_repeat2,
  [2911] = 2,
    ACTIONS(27), 1,
      aux_sym_func_call_expr_token1,
    ACTIONS(29), 2,
      anon_sym_LPAREN,
      aux_sym_string_ident_token1,
  [2919] = 3,
    ACTIONS(408), 1,
      anon_sym_DQUOTE,
    ACTIONS(410), 1,
      aux_sym_string_token1,
    STATE(111), 1,
      aux_sym_string_repeat1,
  [2929] = 3,
    ACTIONS(412), 1,
      anon_sym_DQUOTE,
    ACTIONS(414), 1,
      aux_sym_string_token1,
    STATE(110), 1,
      aux_sym_string_repeat1,
  [2939] = 3,
    ACTIONS(416), 1,
      anon_sym_DQUOTE,
    ACTIONS(418), 1,
      aux_sym_string_token1,
    STATE(116), 1,
      aux_sym_string_repeat1,
  [2949] = 2,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(316), 2,
      aux_sym_string_ident_token1,
      anon_sym_using,
  [2957] = 3,
    ACTIONS(391), 1,
      anon_sym_RPAREN,
    ACTIONS(393), 1,
      sym_ident,
    STATE(112), 1,
      aux_sym_func_def_stmt_repeat2,
  [2967] = 2,
    ACTIONS(312), 1,
      anon_sym_LF,
    ACTIONS(310), 2,
      anon_sym_LPAREN,
      aux_sym_string_ident_token1,
  [2975] = 2,
    ACTIONS(318), 1,
      aux_sym_func_call_expr_token1,
    ACTIONS(316), 2,
      anon_sym_LPAREN,
      aux_sym_string_ident_token1,
  [2983] = 2,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 2,
      aux_sym_string_ident_token1,
      anon_sym_using,
  [2991] = 2,
    ACTIONS(318), 1,
      anon_sym_LF,
    ACTIONS(316), 2,
      anon_sym_LPAREN,
      aux_sym_string_ident_token1,
  [2999] = 3,
    ACTIONS(393), 1,
      sym_ident,
    ACTIONS(421), 1,
      anon_sym_RPAREN,
    STATE(106), 1,
      aux_sym_func_def_stmt_repeat2,
  [3009] = 2,
    STATE(147), 1,
      sym_type,
    ACTIONS(385), 2,
      sym_ident,
      anon_sym_LPAREN_RPAREN,
  [3017] = 2,
    ACTIONS(27), 1,
      anon_sym_LF,
    ACTIONS(29), 2,
      anon_sym_LPAREN,
      aux_sym_string_ident_token1,
  [3025] = 2,
    ACTIONS(312), 1,
      aux_sym_func_call_expr_token1,
    ACTIONS(310), 2,
      anon_sym_LPAREN,
      aux_sym_string_ident_token1,
  [3033] = 2,
    ACTIONS(423), 1,
      anon_sym_COLON,
    ACTIONS(425), 1,
      anon_sym_DASH_GT,
  [3040] = 2,
    ACTIONS(427), 1,
      anon_sym_COLON,
    ACTIONS(429), 1,
      anon_sym_DASH_GT,
  [3047] = 1,
    ACTIONS(431), 2,
      anon_sym_RPAREN,
      sym_ident,
  [3052] = 2,
    ACTIONS(433), 1,
      anon_sym_COLON,
    ACTIONS(435), 1,
      anon_sym_DASH_GT,
  [3059] = 2,
    ACTIONS(437), 1,
      anon_sym_mut,
    ACTIONS(439), 1,
      sym_ident,
  [3066] = 1,
    ACTIONS(441), 2,
      anon_sym_AT,
      anon_sym_fn,
  [3071] = 1,
    ACTIONS(443), 1,
      sym_ident,
  [3075] = 1,
    ACTIONS(445), 1,
      aux_sym_string_ident_token2,
  [3079] = 1,
    ACTIONS(447), 1,
      anon_sym_EQ,
  [3083] = 1,
    ACTIONS(449), 1,
      aux_sym_string_ident_token2,
  [3087] = 1,
    ACTIONS(451), 1,
      anon_sym_EQ,
  [3091] = 1,
    ACTIONS(453), 1,
      aux_sym_string_ident_token2,
  [3095] = 1,
    ACTIONS(455), 1,
      anon_sym_COLON,
  [3099] = 1,
    ACTIONS(457), 1,
      sym_ident,
  [3103] = 1,
    ACTIONS(459), 1,
      sym_ident,
  [3107] = 1,
    ACTIONS(461), 1,
      sym_ident,
  [3111] = 1,
    ACTIONS(463), 1,
      anon_sym_LPAREN,
  [3115] = 1,
    ACTIONS(465), 1,
      anon_sym_LPAREN,
  [3119] = 1,
    ACTIONS(427), 1,
      anon_sym_COLON,
  [3123] = 1,
    ACTIONS(467), 1,
      anon_sym_COLON,
  [3127] = 1,
    ACTIONS(469), 1,
      anon_sym_COLON,
  [3131] = 1,
    ACTIONS(471), 1,
      aux_sym_string_ident_token2,
  [3135] = 1,
    ACTIONS(473), 1,
      ts_builtin_sym_end,
  [3139] = 1,
    ACTIONS(475), 1,
      sym_event_type,
  [3143] = 1,
    ACTIONS(477), 1,
      sym_ident,
  [3147] = 1,
    ACTIONS(479), 1,
      anon_sym_in,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 33,
  [SMALL_STATE(4)] = 70,
  [SMALL_STATE(5)] = 107,
  [SMALL_STATE(6)] = 144,
  [SMALL_STATE(7)] = 181,
  [SMALL_STATE(8)] = 214,
  [SMALL_STATE(9)] = 247,
  [SMALL_STATE(10)] = 280,
  [SMALL_STATE(11)] = 313,
  [SMALL_STATE(12)] = 346,
  [SMALL_STATE(13)] = 379,
  [SMALL_STATE(14)] = 412,
  [SMALL_STATE(15)] = 445,
  [SMALL_STATE(16)] = 505,
  [SMALL_STATE(17)] = 565,
  [SMALL_STATE(18)] = 614,
  [SMALL_STATE(19)] = 663,
  [SMALL_STATE(20)] = 712,
  [SMALL_STATE(21)] = 758,
  [SMALL_STATE(22)] = 804,
  [SMALL_STATE(23)] = 847,
  [SMALL_STATE(24)] = 890,
  [SMALL_STATE(25)] = 933,
  [SMALL_STATE(26)] = 976,
  [SMALL_STATE(27)] = 1019,
  [SMALL_STATE(28)] = 1062,
  [SMALL_STATE(29)] = 1105,
  [SMALL_STATE(30)] = 1148,
  [SMALL_STATE(31)] = 1191,
  [SMALL_STATE(32)] = 1234,
  [SMALL_STATE(33)] = 1277,
  [SMALL_STATE(34)] = 1320,
  [SMALL_STATE(35)] = 1363,
  [SMALL_STATE(36)] = 1406,
  [SMALL_STATE(37)] = 1449,
  [SMALL_STATE(38)] = 1492,
  [SMALL_STATE(39)] = 1535,
  [SMALL_STATE(40)] = 1578,
  [SMALL_STATE(41)] = 1621,
  [SMALL_STATE(42)] = 1664,
  [SMALL_STATE(43)] = 1686,
  [SMALL_STATE(44)] = 1708,
  [SMALL_STATE(45)] = 1730,
  [SMALL_STATE(46)] = 1752,
  [SMALL_STATE(47)] = 1774,
  [SMALL_STATE(48)] = 1796,
  [SMALL_STATE(49)] = 1818,
  [SMALL_STATE(50)] = 1840,
  [SMALL_STATE(51)] = 1862,
  [SMALL_STATE(52)] = 1884,
  [SMALL_STATE(53)] = 1906,
  [SMALL_STATE(54)] = 1928,
  [SMALL_STATE(55)] = 1950,
  [SMALL_STATE(56)] = 1972,
  [SMALL_STATE(57)] = 1994,
  [SMALL_STATE(58)] = 2016,
  [SMALL_STATE(59)] = 2038,
  [SMALL_STATE(60)] = 2060,
  [SMALL_STATE(61)] = 2082,
  [SMALL_STATE(62)] = 2104,
  [SMALL_STATE(63)] = 2126,
  [SMALL_STATE(64)] = 2148,
  [SMALL_STATE(65)] = 2170,
  [SMALL_STATE(66)] = 2189,
  [SMALL_STATE(67)] = 2208,
  [SMALL_STATE(68)] = 2227,
  [SMALL_STATE(69)] = 2256,
  [SMALL_STATE(70)] = 2275,
  [SMALL_STATE(71)] = 2304,
  [SMALL_STATE(72)] = 2323,
  [SMALL_STATE(73)] = 2352,
  [SMALL_STATE(74)] = 2371,
  [SMALL_STATE(75)] = 2390,
  [SMALL_STATE(76)] = 2409,
  [SMALL_STATE(77)] = 2428,
  [SMALL_STATE(78)] = 2447,
  [SMALL_STATE(79)] = 2466,
  [SMALL_STATE(80)] = 2485,
  [SMALL_STATE(81)] = 2504,
  [SMALL_STATE(82)] = 2522,
  [SMALL_STATE(83)] = 2540,
  [SMALL_STATE(84)] = 2555,
  [SMALL_STATE(85)] = 2570,
  [SMALL_STATE(86)] = 2585,
  [SMALL_STATE(87)] = 2600,
  [SMALL_STATE(88)] = 2615,
  [SMALL_STATE(89)] = 2632,
  [SMALL_STATE(90)] = 2649,
  [SMALL_STATE(91)] = 2666,
  [SMALL_STATE(92)] = 2683,
  [SMALL_STATE(93)] = 2700,
  [SMALL_STATE(94)] = 2717,
  [SMALL_STATE(95)] = 2734,
  [SMALL_STATE(96)] = 2748,
  [SMALL_STATE(97)] = 2762,
  [SMALL_STATE(98)] = 2773,
  [SMALL_STATE(99)] = 2784,
  [SMALL_STATE(100)] = 2795,
  [SMALL_STATE(101)] = 2806,
  [SMALL_STATE(102)] = 2815,
  [SMALL_STATE(103)] = 2823,
  [SMALL_STATE(104)] = 2829,
  [SMALL_STATE(105)] = 2837,
  [SMALL_STATE(106)] = 2845,
  [SMALL_STATE(107)] = 2855,
  [SMALL_STATE(108)] = 2863,
  [SMALL_STATE(109)] = 2873,
  [SMALL_STATE(110)] = 2881,
  [SMALL_STATE(111)] = 2891,
  [SMALL_STATE(112)] = 2901,
  [SMALL_STATE(113)] = 2911,
  [SMALL_STATE(114)] = 2919,
  [SMALL_STATE(115)] = 2929,
  [SMALL_STATE(116)] = 2939,
  [SMALL_STATE(117)] = 2949,
  [SMALL_STATE(118)] = 2957,
  [SMALL_STATE(119)] = 2967,
  [SMALL_STATE(120)] = 2975,
  [SMALL_STATE(121)] = 2983,
  [SMALL_STATE(122)] = 2991,
  [SMALL_STATE(123)] = 2999,
  [SMALL_STATE(124)] = 3009,
  [SMALL_STATE(125)] = 3017,
  [SMALL_STATE(126)] = 3025,
  [SMALL_STATE(127)] = 3033,
  [SMALL_STATE(128)] = 3040,
  [SMALL_STATE(129)] = 3047,
  [SMALL_STATE(130)] = 3052,
  [SMALL_STATE(131)] = 3059,
  [SMALL_STATE(132)] = 3066,
  [SMALL_STATE(133)] = 3071,
  [SMALL_STATE(134)] = 3075,
  [SMALL_STATE(135)] = 3079,
  [SMALL_STATE(136)] = 3083,
  [SMALL_STATE(137)] = 3087,
  [SMALL_STATE(138)] = 3091,
  [SMALL_STATE(139)] = 3095,
  [SMALL_STATE(140)] = 3099,
  [SMALL_STATE(141)] = 3103,
  [SMALL_STATE(142)] = 3107,
  [SMALL_STATE(143)] = 3111,
  [SMALL_STATE(144)] = 3115,
  [SMALL_STATE(145)] = 3119,
  [SMALL_STATE(146)] = 3123,
  [SMALL_STATE(147)] = 3127,
  [SMALL_STATE(148)] = 3131,
  [SMALL_STATE(149)] = 3135,
  [SMALL_STATE(150)] = 3139,
  [SMALL_STATE(151)] = 3143,
  [SMALL_STATE(152)] = 3147,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paren_expr, 3),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paren_expr, 3),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cache_stmt, 4),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cache_stmt, 4),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_stmt, 4, .production_id = 1),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_on_stmt, 4, .production_id = 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_stmt, 4),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_stmt, 4),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_stmt, 5),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_stmt, 5),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_literal, 1),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_literal, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_expr, 3),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_expr, 3),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expr, 3),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expr, 3),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expr, 2),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expr, 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(150),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(104),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(36),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(151),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(74),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(131),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(90),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(95),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(96),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(142),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(141),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(74),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_expr_repeat1, 2), SHIFT_REPEAT(29),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_expr_repeat1, 2), SHIFT_REPEAT(28),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_expr_repeat1, 2), SHIFT_REPEAT(21),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_expr_repeat1, 2),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_expr_repeat1, 2), SHIFT_REPEAT(45),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_expr_repeat1, 2), SHIFT_REPEAT(45),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_expr_repeat1, 2), SHIFT_REPEAT(50),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_expr_repeat1, 2), SHIFT_REPEAT(115),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_expr_repeat1, 2), SHIFT_REPEAT(49),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_expr_repeat1, 2), SHIFT_REPEAT(29),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_stmt, 2, .production_id = 1),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_on_stmt, 2, .production_id = 1),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expr, 3),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expr, 3),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_def_stmt, 8),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_def_stmt, 8),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call_expr, 3),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call_expr, 3),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_stmt, 3),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_stmt, 3),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_on_stmt, 4, .production_id = 2),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_run_on_stmt, 4, .production_id = 2),
  [262] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_run_on_stmt_repeat1, 2), SHIFT_REPEAT(72),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_on_stmt_repeat1, 2),
  [267] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_run_on_stmt_repeat1, 2), SHIFT_REPEAT(38),
  [270] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_run_on_stmt_repeat1, 2), SHIFT_REPEAT(86),
  [273] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_run_on_stmt_repeat1, 2), SHIFT_REPEAT(82),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_on_stmt, 3, .production_id = 2),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_run_on_stmt, 3, .production_id = 2),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt, 1),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stmt, 1),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call_expr, 2),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call_expr, 2),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_def_stmt, 9),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_def_stmt, 9),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_def_stmt, 5),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_def_stmt, 5),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_def_stmt, 6),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_def_stmt, 6),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_stmt, 5),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_stmt, 5),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_def_stmt, 7),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_def_stmt, 7),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_list_expr_repeat1, 2),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_ident, 1),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_ident, 1),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_ident, 5),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_ident, 5),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_run_on_type, 1),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_on_type, 1),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_call_expr_repeat1, 2),
  [346] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_call_expr_repeat1, 2), SHIFT_REPEAT(31),
  [349] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_call_expr_repeat1, 2), SHIFT_REPEAT(100),
  [352] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_call_expr_repeat1, 2), SHIFT_REPEAT(23),
  [355] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_call_expr_repeat1, 2), SHIFT_REPEAT(99),
  [358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_call_expr_repeat1, 2), SHIFT_REPEAT(33),
  [361] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_call_expr_repeat1, 2), SHIFT_REPEAT(101),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_func_call_expr_repeat1, 2),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_def_stmt_repeat1, 2), SHIFT_REPEAT(142),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_def_stmt_repeat1, 2),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_def_stmt_repeat2, 2),
  [397] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_def_stmt_repeat2, 2), SHIFT_REPEAT(139),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [418] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(116),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_def_stmt_repeat2, 3),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_annotation, 2),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [473] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
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
