#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 167
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 92
#define ALIAS_COUNT 0
#define TOKEN_COUNT 60
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
  anon_sym_elif = 12,
  anon_sym_else = 13,
  anon_sym_for = 14,
  anon_sym_in = 15,
  sym_break_stmt = 16,
  sym_continue_stmt = 17,
  anon_sym_let = 18,
  anon_sym_mut = 19,
  anon_sym_EQ = 20,
  aux_sym_func_call_expr_token1 = 21,
  anon_sym_LPAREN = 22,
  anon_sym_RPAREN = 23,
  anon_sym_LBRACK = 24,
  anon_sym_COMMA = 25,
  anon_sym_RBRACK = 26,
  aux_sym_number_token1 = 27,
  aux_sym_number_token2 = 28,
  aux_sym_number_token3 = 29,
  aux_sym_number_token4 = 30,
  anon_sym_true = 31,
  anon_sym_false = 32,
  anon_sym_DQUOTE = 33,
  aux_sym_string_token1 = 34,
  aux_sym_string_ident_token1 = 35,
  anon_sym_LPAREN2 = 36,
  aux_sym_string_ident_token2 = 37,
  sym_ident = 38,
  anon_sym_not = 39,
  anon_sym_PLUS = 40,
  anon_sym_STAR = 41,
  anon_sym_CARET = 42,
  anon_sym_LT = 43,
  anon_sym_LT_EQ = 44,
  anon_sym_GT = 45,
  anon_sym_GT_EQ = 46,
  anon_sym_and = 47,
  anon_sym_mod = 48,
  anon_sym_or = 49,
  anon_sym_is = 50,
  anon_sym_xor = 51,
  anon_sym_cache = 52,
  anon_sym_using = 53,
  anon_sym_title = 54,
  anon_sym_LPAREN_RPAREN = 55,
  anon_sym_AT = 56,
  anon_sym_fn = 57,
  anon_sym_DASH_GT = 58,
  sym_comment = 59,
  sym_source_file = 60,
  sym_stmt = 61,
  sym_on_stmt = 62,
  sym_run_on_type = 63,
  sym_run_on_stmt = 64,
  sym_if_expr = 65,
  sym_elif_expr = 66,
  sym_else_expr = 67,
  sym_for_stmt = 68,
  sym_let_stmt = 69,
  sym_expr = 70,
  sym_func_call_expr = 71,
  sym_paren_expr = 72,
  sym_list_expr = 73,
  sym_number = 74,
  sym_bool_literal = 75,
  sym_string = 76,
  sym_string_ident = 77,
  sym_unary_expr = 78,
  sym_binary_expr = 79,
  sym_cache_stmt = 80,
  sym_title_stmt = 81,
  sym_type = 82,
  sym_func_annotation = 83,
  sym_func_def_stmt = 84,
  aux_sym_source_file_repeat1 = 85,
  aux_sym_run_on_stmt_repeat1 = 86,
  aux_sym_func_call_expr_repeat1 = 87,
  aux_sym_list_expr_repeat1 = 88,
  aux_sym_string_repeat1 = 89,
  aux_sym_func_def_stmt_repeat1 = 90,
  aux_sym_func_def_stmt_repeat2 = 91,
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
  [anon_sym_elif] = "elif",
  [anon_sym_else] = "else",
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
  [sym_elif_expr] = "elif_expr",
  [sym_else_expr] = "else_expr",
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
  [anon_sym_elif] = anon_sym_elif,
  [anon_sym_else] = anon_sym_else,
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
  [sym_elif_expr] = sym_elif_expr,
  [sym_else_expr] = sym_else_expr,
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
  [anon_sym_elif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
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
  [sym_elif_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_else_expr] = {
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
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 22,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 30,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 40,
  [42] = 42,
  [43] = 42,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 40,
  [49] = 49,
  [50] = 40,
  [51] = 49,
  [52] = 52,
  [53] = 53,
  [54] = 47,
  [55] = 40,
  [56] = 45,
  [57] = 42,
  [58] = 58,
  [59] = 42,
  [60] = 60,
  [61] = 40,
  [62] = 44,
  [63] = 16,
  [64] = 7,
  [65] = 8,
  [66] = 17,
  [67] = 9,
  [68] = 10,
  [69] = 11,
  [70] = 13,
  [71] = 14,
  [72] = 6,
  [73] = 20,
  [74] = 21,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 76,
  [82] = 78,
  [83] = 80,
  [84] = 77,
  [85] = 76,
  [86] = 77,
  [87] = 87,
  [88] = 77,
  [89] = 76,
  [90] = 77,
  [91] = 77,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 9,
  [98] = 98,
  [99] = 99,
  [100] = 13,
  [101] = 101,
  [102] = 102,
  [103] = 102,
  [104] = 104,
  [105] = 105,
  [106] = 102,
  [107] = 107,
  [108] = 108,
  [109] = 95,
  [110] = 95,
  [111] = 111,
  [112] = 112,
  [113] = 95,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 99,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 116,
  [124] = 124,
  [125] = 98,
  [126] = 126,
  [127] = 99,
  [128] = 99,
  [129] = 9,
  [130] = 114,
  [131] = 98,
  [132] = 132,
  [133] = 133,
  [134] = 9,
  [135] = 98,
  [136] = 9,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 145,
  [150] = 150,
  [151] = 145,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 145,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 147,
  [166] = 166,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(94);
      if (lookahead == '"') ADVANCE(162);
      if (lookahead == '#') ADVANCE(328);
      if (lookahead == '(') ADVANCE(222);
      if (lookahead == ')') ADVANCE(141);
      if (lookahead == '*') ADVANCE(286);
      if (lookahead == '+') ADVANCE(284);
      if (lookahead == ',') ADVANCE(144);
      if (lookahead == '-') ADVANCE(106);
      if (lookahead == '/') ADVANCE(110);
      if (lookahead == '0') ADVANCE(152);
      if (lookahead == ':') ADVANCE(108);
      if (lookahead == '<') ADVANCE(290);
      if (lookahead == '=') ADVANCE(137);
      if (lookahead == '>') ADVANCE(294);
      if (lookahead == '@') ADVANCE(322);
      if (lookahead == '[') ADVANCE(142);
      if (lookahead == ']') ADVANCE(145);
      if (lookahead == '^') ADVANCE(288);
      if (lookahead == 'a') ADVANCE(57);
      if (lookahead == 'b') ADVANCE(71);
      if (lookahead == 'c') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(52);
      if (lookahead == 'f') ADVANCE(21);
      if (lookahead == 'i') ADVANCE(39);
      if (lookahead == 'l') ADVANCE(26);
      if (lookahead == 'm') ADVANCE(64);
      if (lookahead == 'n') ADVANCE(67);
      if (lookahead == 'o') ADVANCE(58);
      if (lookahead == 'r') ADVANCE(82);
      if (lookahead == 's') ADVANCE(36);
      if (lookahead == 't') ADVANCE(49);
      if (lookahead == 'u') ADVANCE(73);
      if (lookahead == 'w') ADVANCE(44);
      if (lookahead == 'x') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(90)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(154);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(138);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(163);
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '(') ADVANCE(140);
      if (lookahead == '*') ADVANCE(287);
      if (lookahead == '+') ADVANCE(285);
      if (lookahead == '-') ADVANCE(107);
      if (lookahead == '/') ADVANCE(111);
      if (lookahead == '0') ADVANCE(153);
      if (lookahead == '<') ADVANCE(291);
      if (lookahead == '>') ADVANCE(295);
      if (lookahead == '@') ADVANCE(323);
      if (lookahead == '[') ADVANCE(143);
      if (lookahead == '^') ADVANCE(289);
      if (lookahead == 'a') ADVANCE(193);
      if (lookahead == 'b') ADVANCE(206);
      if (lookahead == 'c') ADVANCE(167);
      if (lookahead == 'e') ADVANCE(190);
      if (lookahead == 'f') ADVANCE(169);
      if (lookahead == 'i') ADVANCE(181);
      if (lookahead == 'l') ADVANCE(173);
      if (lookahead == 'm') ADVANCE(200);
      if (lookahead == 'n') ADVANCE(201);
      if (lookahead == 'o') ADVANCE(194);
      if (lookahead == 'r') ADVANCE(213);
      if (lookahead == 't') ADVANCE(187);
      if (lookahead == 'x') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead != 0) ADVANCE(221);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(112);
      if (lookahead == '(') ADVANCE(222);
      if (lookahead == '-') ADVANCE(107);
      if (lookahead == '/') ADVANCE(111);
      if (lookahead == '0') ADVANCE(153);
      if (lookahead == ':') ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (lookahead != 0) ADVANCE(221);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(112);
      if (lookahead == '(') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0) ADVANCE(221);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(112);
      if (lookahead == '(') ADVANCE(140);
      if (lookahead == '-') ADVANCE(107);
      if (lookahead == '/') ADVANCE(111);
      if (lookahead == '0') ADVANCE(153);
      if (lookahead == ':') ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (lookahead != 0) ADVANCE(221);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(112);
      if (lookahead == '(') ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0) ADVANCE(221);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '"') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(165);
      if (lookahead != 0) ADVANCE(164);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(139);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead == '(') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0) ADVANCE(221);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(139);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead == '(') ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0) ADVANCE(221);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(162);
      if (lookahead == '(') ADVANCE(140);
      if (lookahead == '-') ADVANCE(106);
      if (lookahead == '0') ADVANCE(152);
      if (lookahead == '[') ADVANCE(142);
      if (lookahead == ']') ADVANCE(145);
      if (lookahead == 'e') ADVANCE(251);
      if (lookahead == 'f') ADVANCE(228);
      if (lookahead == 'i') ADVANCE(243);
      if (lookahead == 'n') ADVANCE(261);
      if (lookahead == 't') ADVANCE(268);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 10:
      if (lookahead == '(') ADVANCE(222);
      if (lookahead == 'u') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (lookahead != 0) ADVANCE(221);
      END_STATE();
    case 11:
      if (lookahead == '(') ADVANCE(140);
      if (lookahead == 'u') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (lookahead != 0) ADVANCE(221);
      END_STATE();
    case 12:
      if (lookahead == '(') ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (lookahead != 0) ADVANCE(221);
      END_STATE();
    case 13:
      if (lookahead == '(') ADVANCE(14);
      if (lookahead == ')') ADVANCE(141);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == ':') ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 14:
      if (lookahead == ')') ADVANCE(321);
      END_STATE();
    case 15:
      if (lookahead == '>') ADVANCE(327);
      END_STATE();
    case 16:
      if (lookahead == '_') ADVANCE(45);
      END_STATE();
    case 17:
      if (lookahead == '_') ADVANCE(68);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(22);
      if (lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(53);
      if (lookahead == 'n') ADVANCE(324);
      if (lookahead == 'o') ADVANCE(69);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(46);
      END_STATE();
    case 23:
      if (lookahead == 'd') ADVANCE(298);
      END_STATE();
    case 24:
      if (lookahead == 'd') ADVANCE(301);
      END_STATE();
    case 25:
      if (lookahead == 'd') ADVANCE(102);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(313);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(318);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 39:
      if (lookahead == 'f') ADVANCE(113);
      if (lookahead == 'm') ADVANCE(19);
      if (lookahead == 'n') ADVANCE(125);
      if (lookahead == 's') ADVANCE(307);
      END_STATE();
    case 40:
      if (lookahead == 'f') ADVANCE(116);
      END_STATE();
    case 41:
      if (lookahead == 'f') ADVANCE(16);
      END_STATE();
    case 42:
      if (lookahead == 'g') ADVANCE(316);
      END_STATE();
    case 43:
      if (lookahead == 'g') ADVANCE(31);
      END_STATE();
    case 44:
      if (lookahead == 'h') ADVANCE(38);
      END_STATE();
    case 45:
      if (lookahead == 'h') ADVANCE(66);
      END_STATE();
    case 46:
      if (lookahead == 'h') ADVANCE(29);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(40);
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 48:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 49:
      if (lookahead == 'i') ADVANCE(79);
      if (lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 51:
      if (lookahead == 'k') ADVANCE(126);
      END_STATE();
    case 52:
      if (lookahead == 'l') ADVANCE(47);
      END_STATE();
    case 53:
      if (lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 54:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 55:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 56:
      if (lookahead == 'm') ADVANCE(278);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(56)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 57:
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 58:
      if (lookahead == 'n') ADVANCE(96);
      if (lookahead == 'r') ADVANCE(304);
      END_STATE();
    case 59:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 60:
      if (lookahead == 'n') ADVANCE(103);
      END_STATE();
    case 61:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 62:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 63:
      if (lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 64:
      if (lookahead == 'o') ADVANCE(24);
      if (lookahead == 'u') ADVANCE(77);
      END_STATE();
    case 65:
      if (lookahead == 'o') ADVANCE(70);
      END_STATE();
    case 66:
      if (lookahead == 'o') ADVANCE(74);
      END_STATE();
    case 67:
      if (lookahead == 'o') ADVANCE(78);
      END_STATE();
    case 68:
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 69:
      if (lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 70:
      if (lookahead == 'r') ADVANCE(310);
      END_STATE();
    case 71:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 72:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 73:
      if (lookahead == 's') ADVANCE(48);
      END_STATE();
    case 74:
      if (lookahead == 's') ADVANCE(80);
      END_STATE();
    case 75:
      if (lookahead == 's') ADVANCE(30);
      END_STATE();
    case 76:
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 77:
      if (lookahead == 't') ADVANCE(135);
      END_STATE();
    case 78:
      if (lookahead == 't') ADVANCE(281);
      END_STATE();
    case 79:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 80:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 81:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 82:
      if (lookahead == 'u') ADVANCE(59);
      END_STATE();
    case 83:
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 84:
      if (lookahead == 'u') ADVANCE(34);
      END_STATE();
    case 85:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(146);
      END_STATE();
    case 86:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(86)
      if (lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 87:
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(148);
      END_STATE();
    case 88:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(150);
      END_STATE();
    case 89:
      if (eof) ADVANCE(94);
      if (lookahead == '\n') ADVANCE(138);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(163);
      if (lookahead == '#') ADVANCE(217);
      if (lookahead == '(') ADVANCE(140);
      if (lookahead == '*') ADVANCE(287);
      if (lookahead == '+') ADVANCE(285);
      if (lookahead == '-') ADVANCE(107);
      if (lookahead == '/') ADVANCE(111);
      if (lookahead == '0') ADVANCE(153);
      if (lookahead == '<') ADVANCE(291);
      if (lookahead == '>') ADVANCE(295);
      if (lookahead == '@') ADVANCE(323);
      if (lookahead == '[') ADVANCE(143);
      if (lookahead == '^') ADVANCE(289);
      if (lookahead == 'a') ADVANCE(193);
      if (lookahead == 'b') ADVANCE(206);
      if (lookahead == 'c') ADVANCE(167);
      if (lookahead == 'e') ADVANCE(190);
      if (lookahead == 'f') ADVANCE(169);
      if (lookahead == 'i') ADVANCE(181);
      if (lookahead == 'l') ADVANCE(173);
      if (lookahead == 'm') ADVANCE(200);
      if (lookahead == 'n') ADVANCE(201);
      if (lookahead == 'o') ADVANCE(194);
      if (lookahead == 'r') ADVANCE(213);
      if (lookahead == 't') ADVANCE(187);
      if (lookahead == 'x') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(89)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead != 0) ADVANCE(221);
      END_STATE();
    case 90:
      if (eof) ADVANCE(94);
      if (lookahead == '"') ADVANCE(162);
      if (lookahead == '#') ADVANCE(328);
      if (lookahead == '(') ADVANCE(140);
      if (lookahead == ')') ADVANCE(141);
      if (lookahead == '*') ADVANCE(286);
      if (lookahead == '+') ADVANCE(284);
      if (lookahead == ',') ADVANCE(144);
      if (lookahead == '-') ADVANCE(106);
      if (lookahead == '/') ADVANCE(110);
      if (lookahead == '0') ADVANCE(152);
      if (lookahead == ':') ADVANCE(108);
      if (lookahead == '<') ADVANCE(290);
      if (lookahead == '=') ADVANCE(137);
      if (lookahead == '>') ADVANCE(294);
      if (lookahead == '@') ADVANCE(322);
      if (lookahead == '[') ADVANCE(142);
      if (lookahead == ']') ADVANCE(145);
      if (lookahead == '^') ADVANCE(288);
      if (lookahead == 'a') ADVANCE(57);
      if (lookahead == 'b') ADVANCE(71);
      if (lookahead == 'c') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(52);
      if (lookahead == 'f') ADVANCE(21);
      if (lookahead == 'i') ADVANCE(39);
      if (lookahead == 'l') ADVANCE(26);
      if (lookahead == 'm') ADVANCE(64);
      if (lookahead == 'n') ADVANCE(67);
      if (lookahead == 'o') ADVANCE(58);
      if (lookahead == 'r') ADVANCE(82);
      if (lookahead == 's') ADVANCE(36);
      if (lookahead == 't') ADVANCE(49);
      if (lookahead == 'u') ADVANCE(73);
      if (lookahead == 'w') ADVANCE(44);
      if (lookahead == 'x') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(90)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(154);
      END_STATE();
    case 91:
      if (eof) ADVANCE(94);
      if (lookahead == '"') ADVANCE(162);
      if (lookahead == '#') ADVANCE(328);
      if (lookahead == '(') ADVANCE(140);
      if (lookahead == '*') ADVANCE(286);
      if (lookahead == '+') ADVANCE(284);
      if (lookahead == '-') ADVANCE(106);
      if (lookahead == '/') ADVANCE(110);
      if (lookahead == '0') ADVANCE(152);
      if (lookahead == '<') ADVANCE(290);
      if (lookahead == '>') ADVANCE(294);
      if (lookahead == '@') ADVANCE(322);
      if (lookahead == '[') ADVANCE(142);
      if (lookahead == '^') ADVANCE(288);
      if (lookahead == 'a') ADVANCE(258);
      if (lookahead == 'b') ADVANCE(267);
      if (lookahead == 'c') ADVANCE(225);
      if (lookahead == 'e') ADVANCE(251);
      if (lookahead == 'f') ADVANCE(227);
      if (lookahead == 'i') ADVANCE(242);
      if (lookahead == 'l') ADVANCE(232);
      if (lookahead == 'm') ADVANCE(262);
      if (lookahead == 'n') ADVANCE(261);
      if (lookahead == 'o') ADVANCE(254);
      if (lookahead == 'r') ADVANCE(276);
      if (lookahead == 't') ADVANCE(248);
      if (lookahead == 'x') ADVANCE(263);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(91)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 92:
      if (eof) ADVANCE(94);
      if (lookahead == '"') ADVANCE(162);
      if (lookahead == '#') ADVANCE(328);
      if (lookahead == '(') ADVANCE(140);
      if (lookahead == '-') ADVANCE(106);
      if (lookahead == '0') ADVANCE(152);
      if (lookahead == '@') ADVANCE(322);
      if (lookahead == '[') ADVANCE(142);
      if (lookahead == 'b') ADVANCE(267);
      if (lookahead == 'c') ADVANCE(225);
      if (lookahead == 'e') ADVANCE(251);
      if (lookahead == 'f') ADVANCE(227);
      if (lookahead == 'i') ADVANCE(243);
      if (lookahead == 'l') ADVANCE(232);
      if (lookahead == 'n') ADVANCE(261);
      if (lookahead == 'o') ADVANCE(255);
      if (lookahead == 'r') ADVANCE(276);
      if (lookahead == 't') ADVANCE(248);
      if (lookahead == 'w') ADVANCE(246);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(92)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 93:
      if (eof) ADVANCE(94);
      if (lookahead == '"') ADVANCE(162);
      if (lookahead == '#') ADVANCE(328);
      if (lookahead == '(') ADVANCE(140);
      if (lookahead == '-') ADVANCE(106);
      if (lookahead == '0') ADVANCE(152);
      if (lookahead == '@') ADVANCE(322);
      if (lookahead == '[') ADVANCE(142);
      if (lookahead == 'b') ADVANCE(267);
      if (lookahead == 'c') ADVANCE(225);
      if (lookahead == 'e') ADVANCE(251);
      if (lookahead == 'f') ADVANCE(227);
      if (lookahead == 'i') ADVANCE(243);
      if (lookahead == 'l') ADVANCE(232);
      if (lookahead == 'n') ADVANCE(261);
      if (lookahead == 'o') ADVANCE(255);
      if (lookahead == 'r') ADVANCE(276);
      if (lookahead == 't') ADVANCE(248);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(93)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_event_type);
      if (lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_on);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_on);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_image);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_self_hosted);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_run_on);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_run_on);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_run_on);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_elif);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_elif);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_elif);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_break_stmt);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_break_stmt);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_break_stmt);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_continue_stmt);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_continue_stmt);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_continue_stmt);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_mut);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_mut);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_func_call_expr_token1);
      if (lookahead == '\n') ADVANCE(138);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_func_call_expr_token1);
      if (lookahead == '\n') ADVANCE(139);
      if (lookahead == '\r') ADVANCE(8);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(146);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(150);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (lookahead == 'b') ADVANCE(85);
      if (lookahead == 'o') ADVANCE(87);
      if (lookahead == 'x') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (lookahead == 'b') ADVANCE(216);
      if (lookahead == 'o') ADVANCE(218);
      if (lookahead == 'x') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(164);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == '_') ADVANCE(203);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'a') ADVANCE(170);
      if (lookahead == 'o') ADVANCE(198);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'a') ADVANCE(189);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'a') ADVANCE(191);
      if (lookahead == 'n') ADVANCE(326);
      if (lookahead == 'o') ADVANCE(204);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'c') ADVANCE(184);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'd') ADVANCE(300);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'd') ADVANCE(303);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'e') ADVANCE(209);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'e') ADVANCE(168);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'e') ADVANCE(121);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'e') ADVANCE(158);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'e') ADVANCE(315);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'e') ADVANCE(161);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'e') ADVANCE(320);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'e') ADVANCE(131);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'f') ADVANCE(115);
      if (lookahead == 's') ADVANCE(309);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'f') ADVANCE(118);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'g') ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'h') ADVANCE(177);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'i') ADVANCE(182);
      if (lookahead == 's') ADVANCE(175);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'i') ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'i') ADVANCE(212);
      if (lookahead == 'r') ADVANCE(214);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'i') ADVANCE(199);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'k') ADVANCE(128);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'l') ADVANCE(185);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'l') ADVANCE(208);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'l') ADVANCE(179);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'n') ADVANCE(171);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'n') ADVANCE(98);
      if (lookahead == 'r') ADVANCE(306);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'n') ADVANCE(166);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'n') ADVANCE(105);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'n') ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'n') ADVANCE(211);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'n') ADVANCE(215);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'o') ADVANCE(172);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'o') ADVANCE(210);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'o') ADVANCE(205);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'o') ADVANCE(196);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'r') ADVANCE(124);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'r') ADVANCE(312);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'r') ADVANCE(174);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 's') ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 's') ADVANCE(178);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 't') ADVANCE(134);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 't') ADVANCE(283);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 't') ADVANCE(188);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 't') ADVANCE(192);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'u') ADVANCE(195);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'u') ADVANCE(176);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == 'u') ADVANCE(180);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '(') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(217);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_string_ident_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_string_ident_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ')') ADVANCE(223);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_') ADVANCE(264);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(229);
      if (lookahead == 'o') ADVANCE(259);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(250);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(252);
      if (lookahead == 'n') ADVANCE(325);
      if (lookahead == 'o') ADVANCE(265);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(252);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'c') ADVANCE(245);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(299);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(302);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(271);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(226);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(120);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(157);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(314);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(160);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(319);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(130);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(100);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(269);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(114);
      if (lookahead == 's') ADVANCE(308);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(114);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(117);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'h') ADVANCE(236);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'h') ADVANCE(241);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(244);
      if (lookahead == 's') ADVANCE(234);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(275);
      if (lookahead == 'r') ADVANCE(277);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(260);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'k') ADVANCE(127);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(247);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(270);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(238);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(97);
      if (lookahead == 'r') ADVANCE(305);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(97);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(224);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(104);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(230);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(273);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(279);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(272);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(231);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(266);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(257);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(123);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(311);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(233);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(277);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(240);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(237);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(133);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(282);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(249);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(136);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(253);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(256);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(235);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(274);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(239);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(292);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(296);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_mod);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_mod);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_mod);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_is);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_is);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_xor);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_xor);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_xor);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_cache);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_cache);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_cache);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_using);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_title);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_title);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_title);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_LPAREN_RPAREN);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_fn);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_fn);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(') ADVANCE(221);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(328);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 93},
  [2] = {.lex_state = 93},
  [3] = {.lex_state = 93},
  [4] = {.lex_state = 89},
  [5] = {.lex_state = 91},
  [6] = {.lex_state = 91},
  [7] = {.lex_state = 91},
  [8] = {.lex_state = 91},
  [9] = {.lex_state = 91},
  [10] = {.lex_state = 91},
  [11] = {.lex_state = 91},
  [12] = {.lex_state = 91},
  [13] = {.lex_state = 91},
  [14] = {.lex_state = 91},
  [15] = {.lex_state = 91},
  [16] = {.lex_state = 91},
  [17] = {.lex_state = 91},
  [18] = {.lex_state = 91},
  [19] = {.lex_state = 91},
  [20] = {.lex_state = 91},
  [21] = {.lex_state = 91},
  [22] = {.lex_state = 9},
  [23] = {.lex_state = 9},
  [24] = {.lex_state = 9},
  [25] = {.lex_state = 92},
  [26] = {.lex_state = 93},
  [27] = {.lex_state = 93},
  [28] = {.lex_state = 93},
  [29] = {.lex_state = 93},
  [30] = {.lex_state = 9},
  [31] = {.lex_state = 93},
  [32] = {.lex_state = 9},
  [33] = {.lex_state = 93},
  [34] = {.lex_state = 93},
  [35] = {.lex_state = 93},
  [36] = {.lex_state = 93},
  [37] = {.lex_state = 93},
  [38] = {.lex_state = 93},
  [39] = {.lex_state = 93},
  [40] = {.lex_state = 9},
  [41] = {.lex_state = 9},
  [42] = {.lex_state = 9},
  [43] = {.lex_state = 9},
  [44] = {.lex_state = 9},
  [45] = {.lex_state = 9},
  [46] = {.lex_state = 9},
  [47] = {.lex_state = 9},
  [48] = {.lex_state = 9},
  [49] = {.lex_state = 9},
  [50] = {.lex_state = 9},
  [51] = {.lex_state = 9},
  [52] = {.lex_state = 9},
  [53] = {.lex_state = 9},
  [54] = {.lex_state = 9},
  [55] = {.lex_state = 9},
  [56] = {.lex_state = 9},
  [57] = {.lex_state = 9},
  [58] = {.lex_state = 9},
  [59] = {.lex_state = 9},
  [60] = {.lex_state = 9},
  [61] = {.lex_state = 9},
  [62] = {.lex_state = 9},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 9},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 4},
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 2},
  [96] = {.lex_state = 4},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 4},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 5},
  [102] = {.lex_state = 5},
  [103] = {.lex_state = 11},
  [104] = {.lex_state = 11},
  [105] = {.lex_state = 8},
  [106] = {.lex_state = 8},
  [107] = {.lex_state = 12},
  [108] = {.lex_state = 12},
  [109] = {.lex_state = 3},
  [110] = {.lex_state = 7},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 10},
  [114] = {.lex_state = 6},
  [115] = {.lex_state = 13},
  [116] = {.lex_state = 6},
  [117] = {.lex_state = 11},
  [118] = {.lex_state = 13},
  [119] = {.lex_state = 13},
  [120] = {.lex_state = 13},
  [121] = {.lex_state = 13},
  [122] = {.lex_state = 13},
  [123] = {.lex_state = 6},
  [124] = {.lex_state = 13},
  [125] = {.lex_state = 11},
  [126] = {.lex_state = 6},
  [127] = {.lex_state = 8},
  [128] = {.lex_state = 5},
  [129] = {.lex_state = 8},
  [130] = {.lex_state = 6},
  [131] = {.lex_state = 5},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 13},
  [134] = {.lex_state = 11},
  [135] = {.lex_state = 8},
  [136] = {.lex_state = 5},
  [137] = {.lex_state = 13},
  [138] = {.lex_state = 13},
  [139] = {.lex_state = 13},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 13},
  [142] = {.lex_state = 56},
  [143] = {.lex_state = 13},
  [144] = {.lex_state = 13},
  [145] = {.lex_state = 223},
  [146] = {.lex_state = 13},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 223},
  [150] = {.lex_state = 93},
  [151] = {.lex_state = 223},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 13},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 13},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 93},
  [159] = {.lex_state = 223},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 86},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 13},
  [164] = {.lex_state = 13},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
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
    [anon_sym_elif] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
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
    [sym_source_file] = STATE(154),
    [sym_stmt] = STATE(2),
    [sym_on_stmt] = STATE(29),
    [sym_run_on_stmt] = STATE(29),
    [sym_if_expr] = STATE(6),
    [sym_elif_expr] = STATE(6),
    [sym_else_expr] = STATE(6),
    [sym_for_stmt] = STATE(29),
    [sym_let_stmt] = STATE(29),
    [sym_expr] = STATE(18),
    [sym_func_call_expr] = STATE(29),
    [sym_paren_expr] = STATE(6),
    [sym_list_expr] = STATE(6),
    [sym_number] = STATE(6),
    [sym_bool_literal] = STATE(6),
    [sym_string] = STATE(6),
    [sym_unary_expr] = STATE(6),
    [sym_binary_expr] = STATE(6),
    [sym_cache_stmt] = STATE(29),
    [sym_title_stmt] = STATE(29),
    [sym_func_annotation] = STATE(111),
    [sym_func_def_stmt] = STATE(29),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_func_def_stmt_repeat1] = STATE(111),
    [anon_sym_on] = ACTIONS(3),
    [anon_sym_run_on] = ACTIONS(5),
    [anon_sym_DASH] = ACTIONS(7),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_elif] = ACTIONS(11),
    [anon_sym_else] = ACTIONS(13),
    [anon_sym_for] = ACTIONS(15),
    [sym_break_stmt] = ACTIONS(17),
    [sym_continue_stmt] = ACTIONS(17),
    [anon_sym_let] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [aux_sym_number_token1] = ACTIONS(25),
    [aux_sym_number_token2] = ACTIONS(25),
    [aux_sym_number_token3] = ACTIONS(25),
    [aux_sym_number_token4] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [sym_ident] = ACTIONS(33),
    [anon_sym_not] = ACTIONS(35),
    [anon_sym_cache] = ACTIONS(37),
    [anon_sym_title] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_fn] = ACTIONS(43),
    [sym_comment] = ACTIONS(45),
  },
  [2] = {
    [sym_stmt] = STATE(3),
    [sym_on_stmt] = STATE(29),
    [sym_run_on_stmt] = STATE(29),
    [sym_if_expr] = STATE(6),
    [sym_elif_expr] = STATE(6),
    [sym_else_expr] = STATE(6),
    [sym_for_stmt] = STATE(29),
    [sym_let_stmt] = STATE(29),
    [sym_expr] = STATE(18),
    [sym_func_call_expr] = STATE(29),
    [sym_paren_expr] = STATE(6),
    [sym_list_expr] = STATE(6),
    [sym_number] = STATE(6),
    [sym_bool_literal] = STATE(6),
    [sym_string] = STATE(6),
    [sym_unary_expr] = STATE(6),
    [sym_binary_expr] = STATE(6),
    [sym_cache_stmt] = STATE(29),
    [sym_title_stmt] = STATE(29),
    [sym_func_annotation] = STATE(111),
    [sym_func_def_stmt] = STATE(29),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_func_def_stmt_repeat1] = STATE(111),
    [ts_builtin_sym_end] = ACTIONS(47),
    [anon_sym_on] = ACTIONS(3),
    [anon_sym_run_on] = ACTIONS(5),
    [anon_sym_DASH] = ACTIONS(7),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_elif] = ACTIONS(11),
    [anon_sym_else] = ACTIONS(13),
    [anon_sym_for] = ACTIONS(15),
    [sym_break_stmt] = ACTIONS(17),
    [sym_continue_stmt] = ACTIONS(17),
    [anon_sym_let] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(23),
    [aux_sym_number_token1] = ACTIONS(25),
    [aux_sym_number_token2] = ACTIONS(25),
    [aux_sym_number_token3] = ACTIONS(25),
    [aux_sym_number_token4] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [sym_ident] = ACTIONS(33),
    [anon_sym_not] = ACTIONS(35),
    [anon_sym_cache] = ACTIONS(37),
    [anon_sym_title] = ACTIONS(39),
    [anon_sym_AT] = ACTIONS(41),
    [anon_sym_fn] = ACTIONS(43),
    [sym_comment] = ACTIONS(45),
  },
  [3] = {
    [sym_stmt] = STATE(3),
    [sym_on_stmt] = STATE(29),
    [sym_run_on_stmt] = STATE(29),
    [sym_if_expr] = STATE(6),
    [sym_elif_expr] = STATE(6),
    [sym_else_expr] = STATE(6),
    [sym_for_stmt] = STATE(29),
    [sym_let_stmt] = STATE(29),
    [sym_expr] = STATE(18),
    [sym_func_call_expr] = STATE(29),
    [sym_paren_expr] = STATE(6),
    [sym_list_expr] = STATE(6),
    [sym_number] = STATE(6),
    [sym_bool_literal] = STATE(6),
    [sym_string] = STATE(6),
    [sym_unary_expr] = STATE(6),
    [sym_binary_expr] = STATE(6),
    [sym_cache_stmt] = STATE(29),
    [sym_title_stmt] = STATE(29),
    [sym_func_annotation] = STATE(111),
    [sym_func_def_stmt] = STATE(29),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_func_def_stmt_repeat1] = STATE(111),
    [ts_builtin_sym_end] = ACTIONS(49),
    [anon_sym_on] = ACTIONS(51),
    [anon_sym_run_on] = ACTIONS(54),
    [anon_sym_DASH] = ACTIONS(57),
    [anon_sym_if] = ACTIONS(60),
    [anon_sym_elif] = ACTIONS(63),
    [anon_sym_else] = ACTIONS(66),
    [anon_sym_for] = ACTIONS(69),
    [sym_break_stmt] = ACTIONS(72),
    [sym_continue_stmt] = ACTIONS(72),
    [anon_sym_let] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(78),
    [anon_sym_LBRACK] = ACTIONS(81),
    [aux_sym_number_token1] = ACTIONS(84),
    [aux_sym_number_token2] = ACTIONS(84),
    [aux_sym_number_token3] = ACTIONS(84),
    [aux_sym_number_token4] = ACTIONS(87),
    [anon_sym_true] = ACTIONS(90),
    [anon_sym_false] = ACTIONS(90),
    [anon_sym_DQUOTE] = ACTIONS(93),
    [sym_ident] = ACTIONS(96),
    [anon_sym_not] = ACTIONS(99),
    [anon_sym_cache] = ACTIONS(102),
    [anon_sym_title] = ACTIONS(105),
    [anon_sym_AT] = ACTIONS(108),
    [anon_sym_fn] = ACTIONS(111),
    [sym_comment] = ACTIONS(114),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(117), 1,
      ts_builtin_sym_end,
    ACTIONS(121), 1,
      aux_sym_func_call_expr_token1,
    ACTIONS(123), 1,
      aux_sym_string_ident_token1,
    STATE(127), 1,
      sym_paren_expr,
    STATE(105), 2,
      sym_string_ident,
      aux_sym_func_call_expr_repeat1,
    ACTIONS(119), 39,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_if,
      anon_sym_elif,
      anon_sym_else,
      anon_sym_for,
      sym_break_stmt,
      sym_continue_stmt,
      anon_sym_let,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE,
      sym_ident,
      anon_sym_not,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_and,
      anon_sym_mod,
      anon_sym_or,
      anon_sym_is,
      anon_sym_xor,
      anon_sym_cache,
      anon_sym_title,
      anon_sym_AT,
      anon_sym_fn,
      sym_comment,
  [58] = 4,
    ACTIONS(129), 7,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(131), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_mod,
      anon_sym_or,
      anon_sym_is,
      anon_sym_xor,
    ACTIONS(125), 9,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_comment,
    ACTIONS(127), 17,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_elif,
      anon_sym_else,
      anon_sym_for,
      sym_break_stmt,
      sym_continue_stmt,
      anon_sym_let,
      aux_sym_number_token4,
      anon_sym_true,
      anon_sym_false,
      sym_ident,
      anon_sym_not,
      anon_sym_cache,
      anon_sym_title,
      anon_sym_fn,
  [107] = 2,
    ACTIONS(117), 16,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AT,
      sym_comment,
    ACTIONS(119), 24,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_elif,
      anon_sym_else,
      anon_sym_for,
      sym_break_stmt,
      sym_continue_stmt,
      anon_sym_let,
      aux_sym_number_token4,
      anon_sym_true,
      anon_sym_false,
      sym_ident,
      anon_sym_not,
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
  [152] = 2,
    ACTIONS(133), 16,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AT,
      sym_comment,
    ACTIONS(135), 24,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_elif,
      anon_sym_else,
      anon_sym_for,
      sym_break_stmt,
      sym_continue_stmt,
      anon_sym_let,
      aux_sym_number_token4,
      anon_sym_true,
      anon_sym_false,
      sym_ident,
      anon_sym_not,
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
  [197] = 2,
    ACTIONS(137), 16,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AT,
      sym_comment,
    ACTIONS(139), 24,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_elif,
      anon_sym_else,
      anon_sym_for,
      sym_break_stmt,
      sym_continue_stmt,
      anon_sym_let,
      aux_sym_number_token4,
      anon_sym_true,
      anon_sym_false,
      sym_ident,
      anon_sym_not,
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
  [242] = 2,
    ACTIONS(141), 16,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AT,
      sym_comment,
    ACTIONS(143), 24,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_elif,
      anon_sym_else,
      anon_sym_for,
      sym_break_stmt,
      sym_continue_stmt,
      anon_sym_let,
      aux_sym_number_token4,
      anon_sym_true,
      anon_sym_false,
      sym_ident,
      anon_sym_not,
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
  [287] = 2,
    ACTIONS(145), 16,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AT,
      sym_comment,
    ACTIONS(147), 24,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_elif,
      anon_sym_else,
      anon_sym_for,
      sym_break_stmt,
      sym_continue_stmt,
      anon_sym_let,
      aux_sym_number_token4,
      anon_sym_true,
      anon_sym_false,
      sym_ident,
      anon_sym_not,
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
  [332] = 2,
    ACTIONS(149), 16,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AT,
      sym_comment,
    ACTIONS(151), 24,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_elif,
      anon_sym_else,
      anon_sym_for,
      sym_break_stmt,
      sym_continue_stmt,
      anon_sym_let,
      aux_sym_number_token4,
      anon_sym_true,
      anon_sym_false,
      sym_ident,
      anon_sym_not,
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
  [377] = 4,
    ACTIONS(129), 7,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(131), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_mod,
      anon_sym_or,
      anon_sym_is,
      anon_sym_xor,
    ACTIONS(153), 9,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_comment,
    ACTIONS(155), 17,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_elif,
      anon_sym_else,
      anon_sym_for,
      sym_break_stmt,
      sym_continue_stmt,
      anon_sym_let,
      aux_sym_number_token4,
      anon_sym_true,
      anon_sym_false,
      sym_ident,
      anon_sym_not,
      anon_sym_cache,
      anon_sym_title,
      anon_sym_fn,
  [426] = 2,
    ACTIONS(157), 16,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AT,
      sym_comment,
    ACTIONS(159), 24,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_elif,
      anon_sym_else,
      anon_sym_for,
      sym_break_stmt,
      sym_continue_stmt,
      anon_sym_let,
      aux_sym_number_token4,
      anon_sym_true,
      anon_sym_false,
      sym_ident,
      anon_sym_not,
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
  [471] = 2,
    ACTIONS(161), 16,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AT,
      sym_comment,
    ACTIONS(163), 24,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_elif,
      anon_sym_else,
      anon_sym_for,
      sym_break_stmt,
      sym_continue_stmt,
      anon_sym_let,
      aux_sym_number_token4,
      anon_sym_true,
      anon_sym_false,
      sym_ident,
      anon_sym_not,
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
  [516] = 4,
    ACTIONS(129), 7,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(131), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_mod,
      anon_sym_or,
      anon_sym_is,
      anon_sym_xor,
    ACTIONS(165), 9,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_comment,
    ACTIONS(167), 17,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_elif,
      anon_sym_else,
      anon_sym_for,
      sym_break_stmt,
      sym_continue_stmt,
      anon_sym_let,
      aux_sym_number_token4,
      anon_sym_true,
      anon_sym_false,
      sym_ident,
      anon_sym_not,
      anon_sym_cache,
      anon_sym_title,
      anon_sym_fn,
  [565] = 2,
    ACTIONS(169), 16,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AT,
      sym_comment,
    ACTIONS(171), 24,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_elif,
      anon_sym_else,
      anon_sym_for,
      sym_break_stmt,
      sym_continue_stmt,
      anon_sym_let,
      aux_sym_number_token4,
      anon_sym_true,
      anon_sym_false,
      sym_ident,
      anon_sym_not,
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
  [610] = 2,
    ACTIONS(173), 16,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AT,
      sym_comment,
    ACTIONS(175), 24,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_elif,
      anon_sym_else,
      anon_sym_for,
      sym_break_stmt,
      sym_continue_stmt,
      anon_sym_let,
      aux_sym_number_token4,
      anon_sym_true,
      anon_sym_false,
      sym_ident,
      anon_sym_not,
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
  [655] = 4,
    ACTIONS(129), 7,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(131), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_mod,
      anon_sym_or,
      anon_sym_is,
      anon_sym_xor,
    ACTIONS(177), 9,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_comment,
    ACTIONS(179), 17,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_elif,
      anon_sym_else,
      anon_sym_for,
      sym_break_stmt,
      sym_continue_stmt,
      anon_sym_let,
      aux_sym_number_token4,
      anon_sym_true,
      anon_sym_false,
      sym_ident,
      anon_sym_not,
      anon_sym_cache,
      anon_sym_title,
      anon_sym_fn,
  [704] = 4,
    ACTIONS(129), 7,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(131), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_mod,
      anon_sym_or,
      anon_sym_is,
      anon_sym_xor,
    ACTIONS(181), 9,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_comment,
    ACTIONS(183), 17,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_elif,
      anon_sym_else,
      anon_sym_for,
      sym_break_stmt,
      sym_continue_stmt,
      anon_sym_let,
      aux_sym_number_token4,
      anon_sym_true,
      anon_sym_false,
      sym_ident,
      anon_sym_not,
      anon_sym_cache,
      anon_sym_title,
      anon_sym_fn,
  [753] = 4,
    ACTIONS(129), 7,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(131), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_mod,
      anon_sym_or,
      anon_sym_is,
      anon_sym_xor,
    ACTIONS(185), 9,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_comment,
    ACTIONS(187), 17,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_elif,
      anon_sym_else,
      anon_sym_for,
      sym_break_stmt,
      sym_continue_stmt,
      anon_sym_let,
      aux_sym_number_token4,
      anon_sym_true,
      anon_sym_false,
      sym_ident,
      anon_sym_not,
      anon_sym_cache,
      anon_sym_title,
      anon_sym_fn,
  [802] = 2,
    ACTIONS(189), 16,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      anon_sym_DQUOTE,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AT,
      sym_comment,
    ACTIONS(191), 24,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_elif,
      anon_sym_else,
      anon_sym_for,
      sym_break_stmt,
      sym_continue_stmt,
      anon_sym_let,
      aux_sym_number_token4,
      anon_sym_true,
      anon_sym_false,
      sym_ident,
      anon_sym_not,
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
  [847] = 16,
    ACTIONS(193), 1,
      anon_sym_DASH,
    ACTIONS(195), 1,
      anon_sym_if,
    ACTIONS(197), 1,
      anon_sym_elif,
    ACTIONS(199), 1,
      anon_sym_else,
    ACTIONS(201), 1,
      anon_sym_LPAREN,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(205), 1,
      anon_sym_RBRACK,
    ACTIONS(209), 1,
      aux_sym_number_token4,
    ACTIONS(213), 1,
      anon_sym_DQUOTE,
    ACTIONS(215), 1,
      sym_ident,
    ACTIONS(217), 1,
      anon_sym_not,
    STATE(23), 1,
      aux_sym_list_expr_repeat1,
    STATE(87), 1,
      sym_expr,
    ACTIONS(211), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(207), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(72), 10,
      sym_if_expr,
      sym_elif_expr,
      sym_else_expr,
      sym_paren_expr,
      sym_list_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [908] = 16,
    ACTIONS(219), 1,
      anon_sym_DASH,
    ACTIONS(222), 1,
      anon_sym_if,
    ACTIONS(225), 1,
      anon_sym_elif,
    ACTIONS(228), 1,
      anon_sym_else,
    ACTIONS(231), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 1,
      anon_sym_LBRACK,
    ACTIONS(237), 1,
      anon_sym_RBRACK,
    ACTIONS(242), 1,
      aux_sym_number_token4,
    ACTIONS(248), 1,
      anon_sym_DQUOTE,
    ACTIONS(251), 1,
      sym_ident,
    ACTIONS(254), 1,
      anon_sym_not,
    STATE(23), 1,
      aux_sym_list_expr_repeat1,
    STATE(87), 1,
      sym_expr,
    ACTIONS(245), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(239), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(72), 10,
      sym_if_expr,
      sym_elif_expr,
      sym_else_expr,
      sym_paren_expr,
      sym_list_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [969] = 16,
    ACTIONS(193), 1,
      anon_sym_DASH,
    ACTIONS(195), 1,
      anon_sym_if,
    ACTIONS(197), 1,
      anon_sym_elif,
    ACTIONS(199), 1,
      anon_sym_else,
    ACTIONS(201), 1,
      anon_sym_LPAREN,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(209), 1,
      aux_sym_number_token4,
    ACTIONS(213), 1,
      anon_sym_DQUOTE,
    ACTIONS(215), 1,
      sym_ident,
    ACTIONS(217), 1,
      anon_sym_not,
    ACTIONS(257), 1,
      anon_sym_RBRACK,
    STATE(23), 1,
      aux_sym_list_expr_repeat1,
    STATE(87), 1,
      sym_expr,
    ACTIONS(211), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(207), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(72), 10,
      sym_if_expr,
      sym_elif_expr,
      sym_else_expr,
      sym_paren_expr,
      sym_list_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [1030] = 3,
    ACTIONS(263), 1,
      anon_sym_where,
    ACTIONS(259), 10,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_comment,
    ACTIONS(261), 17,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_elif,
      anon_sym_else,
      anon_sym_for,
      sym_break_stmt,
      sym_continue_stmt,
      anon_sym_let,
      aux_sym_number_token4,
      anon_sym_true,
      anon_sym_false,
      sym_ident,
      anon_sym_not,
      anon_sym_cache,
      anon_sym_title,
      anon_sym_fn,
  [1065] = 2,
    ACTIONS(265), 10,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_comment,
    ACTIONS(267), 17,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_elif,
      anon_sym_else,
      anon_sym_for,
      sym_break_stmt,
      sym_continue_stmt,
      anon_sym_let,
      aux_sym_number_token4,
      anon_sym_true,
      anon_sym_false,
      sym_ident,
      anon_sym_not,
      anon_sym_cache,
      anon_sym_title,
      anon_sym_fn,
  [1097] = 2,
    ACTIONS(269), 10,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_comment,
    ACTIONS(271), 17,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_elif,
      anon_sym_else,
      anon_sym_for,
      sym_break_stmt,
      sym_continue_stmt,
      anon_sym_let,
      aux_sym_number_token4,
      anon_sym_true,
      anon_sym_false,
      sym_ident,
      anon_sym_not,
      anon_sym_cache,
      anon_sym_title,
      anon_sym_fn,
  [1129] = 2,
    ACTIONS(273), 10,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_comment,
    ACTIONS(275), 17,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_elif,
      anon_sym_else,
      anon_sym_for,
      sym_break_stmt,
      sym_continue_stmt,
      anon_sym_let,
      aux_sym_number_token4,
      anon_sym_true,
      anon_sym_false,
      sym_ident,
      anon_sym_not,
      anon_sym_cache,
      anon_sym_title,
      anon_sym_fn,
  [1161] = 2,
    ACTIONS(177), 10,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_comment,
    ACTIONS(179), 17,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_elif,
      anon_sym_else,
      anon_sym_for,
      sym_break_stmt,
      sym_continue_stmt,
      anon_sym_let,
      aux_sym_number_token4,
      anon_sym_true,
      anon_sym_false,
      sym_ident,
      anon_sym_not,
      anon_sym_cache,
      anon_sym_title,
      anon_sym_fn,
  [1193] = 15,
    ACTIONS(193), 1,
      anon_sym_DASH,
    ACTIONS(195), 1,
      anon_sym_if,
    ACTIONS(197), 1,
      anon_sym_elif,
    ACTIONS(199), 1,
      anon_sym_else,
    ACTIONS(201), 1,
      anon_sym_LPAREN,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(209), 1,
      aux_sym_number_token4,
    ACTIONS(213), 1,
      anon_sym_DQUOTE,
    ACTIONS(215), 1,
      sym_ident,
    ACTIONS(217), 1,
      anon_sym_not,
    STATE(24), 1,
      aux_sym_list_expr_repeat1,
    STATE(87), 1,
      sym_expr,
    ACTIONS(211), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(207), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(72), 10,
      sym_if_expr,
      sym_elif_expr,
      sym_else_expr,
      sym_paren_expr,
      sym_list_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [1251] = 2,
    ACTIONS(277), 10,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_comment,
    ACTIONS(279), 17,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_elif,
      anon_sym_else,
      anon_sym_for,
      sym_break_stmt,
      sym_continue_stmt,
      anon_sym_let,
      aux_sym_number_token4,
      anon_sym_true,
      anon_sym_false,
      sym_ident,
      anon_sym_not,
      anon_sym_cache,
      anon_sym_title,
      anon_sym_fn,
  [1283] = 15,
    ACTIONS(193), 1,
      anon_sym_DASH,
    ACTIONS(195), 1,
      anon_sym_if,
    ACTIONS(197), 1,
      anon_sym_elif,
    ACTIONS(199), 1,
      anon_sym_else,
    ACTIONS(201), 1,
      anon_sym_LPAREN,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(209), 1,
      aux_sym_number_token4,
    ACTIONS(213), 1,
      anon_sym_DQUOTE,
    ACTIONS(215), 1,
      sym_ident,
    ACTIONS(217), 1,
      anon_sym_not,
    STATE(22), 1,
      aux_sym_list_expr_repeat1,
    STATE(87), 1,
      sym_expr,
    ACTIONS(211), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(207), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(72), 10,
      sym_if_expr,
      sym_elif_expr,
      sym_else_expr,
      sym_paren_expr,
      sym_list_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [1341] = 2,
    ACTIONS(281), 10,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_comment,
    ACTIONS(283), 17,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_elif,
      anon_sym_else,
      anon_sym_for,
      sym_break_stmt,
      sym_continue_stmt,
      anon_sym_let,
      aux_sym_number_token4,
      anon_sym_true,
      anon_sym_false,
      sym_ident,
      anon_sym_not,
      anon_sym_cache,
      anon_sym_title,
      anon_sym_fn,
  [1373] = 2,
    ACTIONS(285), 10,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_comment,
    ACTIONS(287), 17,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_elif,
      anon_sym_else,
      anon_sym_for,
      sym_break_stmt,
      sym_continue_stmt,
      anon_sym_let,
      aux_sym_number_token4,
      anon_sym_true,
      anon_sym_false,
      sym_ident,
      anon_sym_not,
      anon_sym_cache,
      anon_sym_title,
      anon_sym_fn,
  [1405] = 2,
    ACTIONS(289), 10,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_comment,
    ACTIONS(291), 17,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_elif,
      anon_sym_else,
      anon_sym_for,
      sym_break_stmt,
      sym_continue_stmt,
      anon_sym_let,
      aux_sym_number_token4,
      anon_sym_true,
      anon_sym_false,
      sym_ident,
      anon_sym_not,
      anon_sym_cache,
      anon_sym_title,
      anon_sym_fn,
  [1437] = 2,
    ACTIONS(293), 10,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_comment,
    ACTIONS(295), 17,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_elif,
      anon_sym_else,
      anon_sym_for,
      sym_break_stmt,
      sym_continue_stmt,
      anon_sym_let,
      aux_sym_number_token4,
      anon_sym_true,
      anon_sym_false,
      sym_ident,
      anon_sym_not,
      anon_sym_cache,
      anon_sym_title,
      anon_sym_fn,
  [1469] = 2,
    ACTIONS(297), 10,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_comment,
    ACTIONS(299), 17,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_elif,
      anon_sym_else,
      anon_sym_for,
      sym_break_stmt,
      sym_continue_stmt,
      anon_sym_let,
      aux_sym_number_token4,
      anon_sym_true,
      anon_sym_false,
      sym_ident,
      anon_sym_not,
      anon_sym_cache,
      anon_sym_title,
      anon_sym_fn,
  [1501] = 2,
    ACTIONS(301), 10,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_comment,
    ACTIONS(303), 17,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_elif,
      anon_sym_else,
      anon_sym_for,
      sym_break_stmt,
      sym_continue_stmt,
      anon_sym_let,
      aux_sym_number_token4,
      anon_sym_true,
      anon_sym_false,
      sym_ident,
      anon_sym_not,
      anon_sym_cache,
      anon_sym_title,
      anon_sym_fn,
  [1533] = 2,
    ACTIONS(305), 10,
      ts_builtin_sym_end,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_comment,
    ACTIONS(307), 17,
      anon_sym_on,
      anon_sym_run_on,
      anon_sym_if,
      anon_sym_elif,
      anon_sym_else,
      anon_sym_for,
      sym_break_stmt,
      sym_continue_stmt,
      anon_sym_let,
      aux_sym_number_token4,
      anon_sym_true,
      anon_sym_false,
      sym_ident,
      anon_sym_not,
      anon_sym_cache,
      anon_sym_title,
      anon_sym_fn,
  [1565] = 14,
    ACTIONS(193), 1,
      anon_sym_DASH,
    ACTIONS(195), 1,
      anon_sym_if,
    ACTIONS(197), 1,
      anon_sym_elif,
    ACTIONS(199), 1,
      anon_sym_else,
    ACTIONS(201), 1,
      anon_sym_LPAREN,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(209), 1,
      aux_sym_number_token4,
    ACTIONS(213), 1,
      anon_sym_DQUOTE,
    ACTIONS(215), 1,
      sym_ident,
    ACTIONS(217), 1,
      anon_sym_not,
    STATE(91), 1,
      sym_expr,
    ACTIONS(211), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(207), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(72), 10,
      sym_if_expr,
      sym_elif_expr,
      sym_else_expr,
      sym_paren_expr,
      sym_list_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [1620] = 14,
    ACTIONS(193), 1,
      anon_sym_DASH,
    ACTIONS(195), 1,
      anon_sym_if,
    ACTIONS(197), 1,
      anon_sym_elif,
    ACTIONS(199), 1,
      anon_sym_else,
    ACTIONS(201), 1,
      anon_sym_LPAREN,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(209), 1,
      aux_sym_number_token4,
    ACTIONS(213), 1,
      anon_sym_DQUOTE,
    ACTIONS(215), 1,
      sym_ident,
    ACTIONS(217), 1,
      anon_sym_not,
    STATE(86), 1,
      sym_expr,
    ACTIONS(211), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(207), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(72), 10,
      sym_if_expr,
      sym_elif_expr,
      sym_else_expr,
      sym_paren_expr,
      sym_list_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [1675] = 14,
    ACTIONS(193), 1,
      anon_sym_DASH,
    ACTIONS(195), 1,
      anon_sym_if,
    ACTIONS(197), 1,
      anon_sym_elif,
    ACTIONS(199), 1,
      anon_sym_else,
    ACTIONS(201), 1,
      anon_sym_LPAREN,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(209), 1,
      aux_sym_number_token4,
    ACTIONS(213), 1,
      anon_sym_DQUOTE,
    ACTIONS(215), 1,
      sym_ident,
    ACTIONS(217), 1,
      anon_sym_not,
    STATE(81), 1,
      sym_expr,
    ACTIONS(211), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(207), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(72), 10,
      sym_if_expr,
      sym_elif_expr,
      sym_else_expr,
      sym_paren_expr,
      sym_list_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [1730] = 14,
    ACTIONS(193), 1,
      anon_sym_DASH,
    ACTIONS(195), 1,
      anon_sym_if,
    ACTIONS(197), 1,
      anon_sym_elif,
    ACTIONS(199), 1,
      anon_sym_else,
    ACTIONS(201), 1,
      anon_sym_LPAREN,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(209), 1,
      aux_sym_number_token4,
    ACTIONS(213), 1,
      anon_sym_DQUOTE,
    ACTIONS(215), 1,
      sym_ident,
    ACTIONS(217), 1,
      anon_sym_not,
    STATE(85), 1,
      sym_expr,
    ACTIONS(211), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(207), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(72), 10,
      sym_if_expr,
      sym_elif_expr,
      sym_else_expr,
      sym_paren_expr,
      sym_list_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [1785] = 14,
    ACTIONS(7), 1,
      anon_sym_DASH,
    ACTIONS(9), 1,
      anon_sym_if,
    ACTIONS(11), 1,
      anon_sym_elif,
    ACTIONS(13), 1,
      anon_sym_else,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      aux_sym_number_token4,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(309), 1,
      sym_ident,
    STATE(20), 1,
      sym_expr,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(6), 10,
      sym_if_expr,
      sym_elif_expr,
      sym_else_expr,
      sym_paren_expr,
      sym_list_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [1840] = 14,
    ACTIONS(193), 1,
      anon_sym_DASH,
    ACTIONS(195), 1,
      anon_sym_if,
    ACTIONS(197), 1,
      anon_sym_elif,
    ACTIONS(199), 1,
      anon_sym_else,
    ACTIONS(201), 1,
      anon_sym_LPAREN,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(209), 1,
      aux_sym_number_token4,
    ACTIONS(213), 1,
      anon_sym_DQUOTE,
    ACTIONS(215), 1,
      sym_ident,
    ACTIONS(217), 1,
      anon_sym_not,
    STATE(78), 1,
      sym_expr,
    ACTIONS(211), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(207), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(72), 10,
      sym_if_expr,
      sym_elif_expr,
      sym_else_expr,
      sym_paren_expr,
      sym_list_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [1895] = 14,
    ACTIONS(7), 1,
      anon_sym_DASH,
    ACTIONS(9), 1,
      anon_sym_if,
    ACTIONS(11), 1,
      anon_sym_elif,
    ACTIONS(13), 1,
      anon_sym_else,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      aux_sym_number_token4,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(309), 1,
      sym_ident,
    STATE(12), 1,
      sym_expr,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(6), 10,
      sym_if_expr,
      sym_elif_expr,
      sym_else_expr,
      sym_paren_expr,
      sym_list_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [1950] = 14,
    ACTIONS(193), 1,
      anon_sym_DASH,
    ACTIONS(195), 1,
      anon_sym_if,
    ACTIONS(197), 1,
      anon_sym_elif,
    ACTIONS(199), 1,
      anon_sym_else,
    ACTIONS(201), 1,
      anon_sym_LPAREN,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(209), 1,
      aux_sym_number_token4,
    ACTIONS(213), 1,
      anon_sym_DQUOTE,
    ACTIONS(215), 1,
      sym_ident,
    ACTIONS(217), 1,
      anon_sym_not,
    STATE(83), 1,
      sym_expr,
    ACTIONS(211), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(207), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(72), 10,
      sym_if_expr,
      sym_elif_expr,
      sym_else_expr,
      sym_paren_expr,
      sym_list_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [2005] = 14,
    ACTIONS(193), 1,
      anon_sym_DASH,
    ACTIONS(195), 1,
      anon_sym_if,
    ACTIONS(197), 1,
      anon_sym_elif,
    ACTIONS(199), 1,
      anon_sym_else,
    ACTIONS(201), 1,
      anon_sym_LPAREN,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(209), 1,
      aux_sym_number_token4,
    ACTIONS(213), 1,
      anon_sym_DQUOTE,
    ACTIONS(215), 1,
      sym_ident,
    ACTIONS(217), 1,
      anon_sym_not,
    STATE(84), 1,
      sym_expr,
    ACTIONS(211), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(207), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(72), 10,
      sym_if_expr,
      sym_elif_expr,
      sym_else_expr,
      sym_paren_expr,
      sym_list_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [2060] = 14,
    ACTIONS(7), 1,
      anon_sym_DASH,
    ACTIONS(9), 1,
      anon_sym_if,
    ACTIONS(11), 1,
      anon_sym_elif,
    ACTIONS(13), 1,
      anon_sym_else,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      aux_sym_number_token4,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(309), 1,
      sym_ident,
    STATE(16), 1,
      sym_expr,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(6), 10,
      sym_if_expr,
      sym_elif_expr,
      sym_else_expr,
      sym_paren_expr,
      sym_list_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [2115] = 14,
    ACTIONS(193), 1,
      anon_sym_DASH,
    ACTIONS(195), 1,
      anon_sym_if,
    ACTIONS(197), 1,
      anon_sym_elif,
    ACTIONS(199), 1,
      anon_sym_else,
    ACTIONS(201), 1,
      anon_sym_LPAREN,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(209), 1,
      aux_sym_number_token4,
    ACTIONS(213), 1,
      anon_sym_DQUOTE,
    ACTIONS(215), 1,
      sym_ident,
    ACTIONS(217), 1,
      anon_sym_not,
    STATE(88), 1,
      sym_expr,
    ACTIONS(211), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(207), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(72), 10,
      sym_if_expr,
      sym_elif_expr,
      sym_else_expr,
      sym_paren_expr,
      sym_list_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [2170] = 14,
    ACTIONS(193), 1,
      anon_sym_DASH,
    ACTIONS(195), 1,
      anon_sym_if,
    ACTIONS(197), 1,
      anon_sym_elif,
    ACTIONS(199), 1,
      anon_sym_else,
    ACTIONS(201), 1,
      anon_sym_LPAREN,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(209), 1,
      aux_sym_number_token4,
    ACTIONS(213), 1,
      anon_sym_DQUOTE,
    ACTIONS(215), 1,
      sym_ident,
    ACTIONS(217), 1,
      anon_sym_not,
    STATE(63), 1,
      sym_expr,
    ACTIONS(211), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(207), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(72), 10,
      sym_if_expr,
      sym_elif_expr,
      sym_else_expr,
      sym_paren_expr,
      sym_list_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [2225] = 14,
    ACTIONS(7), 1,
      anon_sym_DASH,
    ACTIONS(9), 1,
      anon_sym_if,
    ACTIONS(11), 1,
      anon_sym_elif,
    ACTIONS(13), 1,
      anon_sym_else,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      aux_sym_number_token4,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(309), 1,
      sym_ident,
    STATE(5), 1,
      sym_expr,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(6), 10,
      sym_if_expr,
      sym_elif_expr,
      sym_else_expr,
      sym_paren_expr,
      sym_list_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [2280] = 14,
    ACTIONS(7), 1,
      anon_sym_DASH,
    ACTIONS(9), 1,
      anon_sym_if,
    ACTIONS(11), 1,
      anon_sym_elif,
    ACTIONS(13), 1,
      anon_sym_else,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      aux_sym_number_token4,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(309), 1,
      sym_ident,
    STATE(15), 1,
      sym_expr,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(6), 10,
      sym_if_expr,
      sym_elif_expr,
      sym_else_expr,
      sym_paren_expr,
      sym_list_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [2335] = 14,
    ACTIONS(193), 1,
      anon_sym_DASH,
    ACTIONS(195), 1,
      anon_sym_if,
    ACTIONS(197), 1,
      anon_sym_elif,
    ACTIONS(199), 1,
      anon_sym_else,
    ACTIONS(201), 1,
      anon_sym_LPAREN,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(209), 1,
      aux_sym_number_token4,
    ACTIONS(213), 1,
      anon_sym_DQUOTE,
    ACTIONS(215), 1,
      sym_ident,
    ACTIONS(217), 1,
      anon_sym_not,
    STATE(80), 1,
      sym_expr,
    ACTIONS(211), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(207), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(72), 10,
      sym_if_expr,
      sym_elif_expr,
      sym_else_expr,
      sym_paren_expr,
      sym_list_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [2390] = 14,
    ACTIONS(193), 1,
      anon_sym_DASH,
    ACTIONS(195), 1,
      anon_sym_if,
    ACTIONS(197), 1,
      anon_sym_elif,
    ACTIONS(199), 1,
      anon_sym_else,
    ACTIONS(201), 1,
      anon_sym_LPAREN,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(209), 1,
      aux_sym_number_token4,
    ACTIONS(213), 1,
      anon_sym_DQUOTE,
    ACTIONS(215), 1,
      sym_ident,
    ACTIONS(217), 1,
      anon_sym_not,
    STATE(77), 1,
      sym_expr,
    ACTIONS(211), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(207), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(72), 10,
      sym_if_expr,
      sym_elif_expr,
      sym_else_expr,
      sym_paren_expr,
      sym_list_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [2445] = 14,
    ACTIONS(193), 1,
      anon_sym_DASH,
    ACTIONS(195), 1,
      anon_sym_if,
    ACTIONS(197), 1,
      anon_sym_elif,
    ACTIONS(199), 1,
      anon_sym_else,
    ACTIONS(201), 1,
      anon_sym_LPAREN,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(209), 1,
      aux_sym_number_token4,
    ACTIONS(213), 1,
      anon_sym_DQUOTE,
    ACTIONS(215), 1,
      sym_ident,
    ACTIONS(217), 1,
      anon_sym_not,
    STATE(82), 1,
      sym_expr,
    ACTIONS(211), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(207), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(72), 10,
      sym_if_expr,
      sym_elif_expr,
      sym_else_expr,
      sym_paren_expr,
      sym_list_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [2500] = 14,
    ACTIONS(193), 1,
      anon_sym_DASH,
    ACTIONS(195), 1,
      anon_sym_if,
    ACTIONS(197), 1,
      anon_sym_elif,
    ACTIONS(199), 1,
      anon_sym_else,
    ACTIONS(201), 1,
      anon_sym_LPAREN,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(209), 1,
      aux_sym_number_token4,
    ACTIONS(213), 1,
      anon_sym_DQUOTE,
    ACTIONS(215), 1,
      sym_ident,
    ACTIONS(217), 1,
      anon_sym_not,
    STATE(76), 1,
      sym_expr,
    ACTIONS(211), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(207), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(72), 10,
      sym_if_expr,
      sym_elif_expr,
      sym_else_expr,
      sym_paren_expr,
      sym_list_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [2555] = 14,
    ACTIONS(193), 1,
      anon_sym_DASH,
    ACTIONS(195), 1,
      anon_sym_if,
    ACTIONS(197), 1,
      anon_sym_elif,
    ACTIONS(199), 1,
      anon_sym_else,
    ACTIONS(201), 1,
      anon_sym_LPAREN,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(209), 1,
      aux_sym_number_token4,
    ACTIONS(213), 1,
      anon_sym_DQUOTE,
    ACTIONS(215), 1,
      sym_ident,
    ACTIONS(217), 1,
      anon_sym_not,
    STATE(79), 1,
      sym_expr,
    ACTIONS(211), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(207), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(72), 10,
      sym_if_expr,
      sym_elif_expr,
      sym_else_expr,
      sym_paren_expr,
      sym_list_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [2610] = 14,
    ACTIONS(193), 1,
      anon_sym_DASH,
    ACTIONS(195), 1,
      anon_sym_if,
    ACTIONS(197), 1,
      anon_sym_elif,
    ACTIONS(199), 1,
      anon_sym_else,
    ACTIONS(201), 1,
      anon_sym_LPAREN,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(209), 1,
      aux_sym_number_token4,
    ACTIONS(213), 1,
      anon_sym_DQUOTE,
    ACTIONS(215), 1,
      sym_ident,
    ACTIONS(217), 1,
      anon_sym_not,
    STATE(89), 1,
      sym_expr,
    ACTIONS(211), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(207), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(72), 10,
      sym_if_expr,
      sym_elif_expr,
      sym_else_expr,
      sym_paren_expr,
      sym_list_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [2665] = 14,
    ACTIONS(7), 1,
      anon_sym_DASH,
    ACTIONS(9), 1,
      anon_sym_if,
    ACTIONS(11), 1,
      anon_sym_elif,
    ACTIONS(13), 1,
      anon_sym_else,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      aux_sym_number_token4,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_not,
    ACTIONS(309), 1,
      sym_ident,
    STATE(19), 1,
      sym_expr,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(25), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(6), 10,
      sym_if_expr,
      sym_elif_expr,
      sym_else_expr,
      sym_paren_expr,
      sym_list_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [2720] = 14,
    ACTIONS(193), 1,
      anon_sym_DASH,
    ACTIONS(195), 1,
      anon_sym_if,
    ACTIONS(197), 1,
      anon_sym_elif,
    ACTIONS(199), 1,
      anon_sym_else,
    ACTIONS(201), 1,
      anon_sym_LPAREN,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(209), 1,
      aux_sym_number_token4,
    ACTIONS(213), 1,
      anon_sym_DQUOTE,
    ACTIONS(215), 1,
      sym_ident,
    ACTIONS(217), 1,
      anon_sym_not,
    STATE(90), 1,
      sym_expr,
    ACTIONS(211), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(207), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(72), 10,
      sym_if_expr,
      sym_elif_expr,
      sym_else_expr,
      sym_paren_expr,
      sym_list_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [2775] = 14,
    ACTIONS(193), 1,
      anon_sym_DASH,
    ACTIONS(195), 1,
      anon_sym_if,
    ACTIONS(197), 1,
      anon_sym_elif,
    ACTIONS(199), 1,
      anon_sym_else,
    ACTIONS(201), 1,
      anon_sym_LPAREN,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(209), 1,
      aux_sym_number_token4,
    ACTIONS(213), 1,
      anon_sym_DQUOTE,
    ACTIONS(215), 1,
      sym_ident,
    ACTIONS(217), 1,
      anon_sym_not,
    STATE(73), 1,
      sym_expr,
    ACTIONS(211), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(207), 3,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
    STATE(72), 10,
      sym_if_expr,
      sym_elif_expr,
      sym_else_expr,
      sym_paren_expr,
      sym_list_expr,
      sym_number,
      sym_bool_literal,
      sym_string,
      sym_unary_expr,
      sym_binary_expr,
  [2830] = 2,
    ACTIONS(171), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(169), 15,
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
  [2852] = 2,
    ACTIONS(135), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(133), 15,
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
  [2874] = 2,
    ACTIONS(139), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(137), 15,
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
  [2896] = 2,
    ACTIONS(175), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(173), 15,
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
  [2918] = 2,
    ACTIONS(143), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(141), 15,
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
  [2940] = 2,
    ACTIONS(147), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(145), 15,
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
  [2962] = 2,
    ACTIONS(151), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(149), 15,
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
  [2984] = 2,
    ACTIONS(159), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(157), 15,
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
  [3006] = 2,
    ACTIONS(163), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(161), 15,
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
  [3028] = 2,
    ACTIONS(119), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(117), 15,
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
  [3050] = 3,
    ACTIONS(313), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(185), 3,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(311), 12,
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
  [3074] = 2,
    ACTIONS(191), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(189), 15,
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
  [3096] = 2,
    ACTIONS(237), 8,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      anon_sym_DQUOTE,
    ACTIONS(315), 8,
      anon_sym_if,
      anon_sym_elif,
      anon_sym_else,
      aux_sym_number_token4,
      anon_sym_true,
      anon_sym_false,
      sym_ident,
      anon_sym_not,
  [3117] = 3,
    ACTIONS(317), 1,
      anon_sym_RPAREN,
    ACTIONS(313), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(311), 12,
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
  [3139] = 3,
    ACTIONS(319), 1,
      anon_sym_RPAREN,
    ACTIONS(313), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(311), 12,
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
  [3161] = 3,
    ACTIONS(321), 1,
      anon_sym_COLON,
    ACTIONS(313), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(311), 12,
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
  [3183] = 3,
    ACTIONS(323), 1,
      anon_sym_COLON,
    ACTIONS(313), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(311), 12,
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
  [3205] = 3,
    ACTIONS(325), 1,
      anon_sym_COLON,
    ACTIONS(313), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(311), 12,
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
  [3227] = 3,
    ACTIONS(327), 1,
      anon_sym_RPAREN,
    ACTIONS(313), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(311), 12,
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
  [3249] = 3,
    ACTIONS(329), 1,
      anon_sym_COLON,
    ACTIONS(313), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(311), 12,
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
  [3271] = 3,
    ACTIONS(331), 1,
      anon_sym_COLON,
    ACTIONS(313), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(311), 12,
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
  [3293] = 3,
    ACTIONS(333), 1,
      anon_sym_RPAREN,
    ACTIONS(313), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(311), 12,
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
  [3315] = 3,
    ACTIONS(335), 1,
      anon_sym_RPAREN,
    ACTIONS(313), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(311), 12,
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
  [3337] = 3,
    ACTIONS(337), 1,
      anon_sym_RPAREN,
    ACTIONS(313), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(311), 12,
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
  [3359] = 3,
    ACTIONS(339), 1,
      anon_sym_COMMA,
    ACTIONS(313), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(311), 12,
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
  [3381] = 3,
    ACTIONS(341), 1,
      anon_sym_RPAREN,
    ACTIONS(313), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(311), 12,
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
  [3403] = 3,
    ACTIONS(343), 1,
      anon_sym_RPAREN,
    ACTIONS(313), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(311), 12,
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
  [3425] = 3,
    ACTIONS(345), 1,
      anon_sym_RPAREN,
    ACTIONS(313), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(311), 12,
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
  [3447] = 3,
    ACTIONS(347), 1,
      anon_sym_RPAREN,
    ACTIONS(313), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(311), 12,
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
  [3469] = 7,
    ACTIONS(351), 1,
      anon_sym_LF,
    ACTIONS(353), 1,
      anon_sym_LPAREN,
    ACTIONS(357), 1,
      aux_sym_string_ident_token1,
    STATE(99), 1,
      sym_paren_expr,
    ACTIONS(349), 3,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
    STATE(94), 3,
      sym_number,
      sym_string_ident,
      aux_sym_run_on_stmt_repeat1,
    ACTIONS(355), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
  [3498] = 7,
    ACTIONS(362), 1,
      anon_sym_LF,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
    ACTIONS(370), 1,
      aux_sym_string_ident_token1,
    STATE(99), 1,
      sym_paren_expr,
    ACTIONS(359), 3,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
    STATE(93), 3,
      sym_number,
      sym_string_ident,
      aux_sym_run_on_stmt_repeat1,
    ACTIONS(367), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
  [3527] = 7,
    ACTIONS(353), 1,
      anon_sym_LPAREN,
    ACTIONS(357), 1,
      aux_sym_string_ident_token1,
    ACTIONS(375), 1,
      anon_sym_LF,
    STATE(99), 1,
      sym_paren_expr,
    ACTIONS(373), 3,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
    STATE(93), 3,
      sym_number,
      sym_string_ident,
      aux_sym_run_on_stmt_repeat1,
    ACTIONS(355), 4,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
  [3556] = 3,
    ACTIONS(379), 1,
      anon_sym_LF,
    ACTIONS(381), 1,
      anon_sym_LPAREN2,
    ACTIONS(377), 9,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_string_ident_token1,
  [3574] = 2,
    ACTIONS(385), 1,
      anon_sym_LF,
    ACTIONS(383), 9,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_string_ident_token1,
  [3589] = 2,
    ACTIONS(141), 1,
      anon_sym_LF,
    ACTIONS(143), 9,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_string_ident_token1,
  [3604] = 2,
    ACTIONS(389), 1,
      anon_sym_LF,
    ACTIONS(387), 9,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_string_ident_token1,
  [3619] = 2,
    ACTIONS(379), 1,
      anon_sym_LF,
    ACTIONS(377), 9,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_string_ident_token1,
  [3634] = 2,
    ACTIONS(157), 1,
      anon_sym_LF,
    ACTIONS(159), 9,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_SLASH,
      anon_sym_LPAREN,
      aux_sym_number_token1,
      aux_sym_number_token2,
      aux_sym_number_token3,
      aux_sym_number_token4,
      aux_sym_string_ident_token1,
  [3649] = 5,
    ACTIONS(391), 1,
      anon_sym_LF,
    ACTIONS(393), 1,
      anon_sym_LPAREN,
    ACTIONS(395), 1,
      aux_sym_string_ident_token1,
    STATE(128), 1,
      sym_paren_expr,
    STATE(102), 2,
      sym_string_ident,
      aux_sym_func_call_expr_repeat1,
  [3666] = 5,
    ACTIONS(397), 1,
      anon_sym_LF,
    ACTIONS(399), 1,
      anon_sym_LPAREN,
    ACTIONS(402), 1,
      aux_sym_string_ident_token1,
    STATE(128), 1,
      sym_paren_expr,
    STATE(102), 2,
      sym_string_ident,
      aux_sym_func_call_expr_repeat1,
  [3683] = 5,
    ACTIONS(405), 1,
      anon_sym_LPAREN,
    ACTIONS(408), 1,
      aux_sym_string_ident_token1,
    ACTIONS(411), 1,
      anon_sym_using,
    STATE(117), 1,
      sym_paren_expr,
    STATE(103), 2,
      sym_string_ident,
      aux_sym_func_call_expr_repeat1,
  [3700] = 5,
    ACTIONS(413), 1,
      anon_sym_LPAREN,
    ACTIONS(415), 1,
      aux_sym_string_ident_token1,
    ACTIONS(417), 1,
      anon_sym_using,
    STATE(117), 1,
      sym_paren_expr,
    STATE(103), 2,
      sym_string_ident,
      aux_sym_func_call_expr_repeat1,
  [3717] = 5,
    ACTIONS(123), 1,
      aux_sym_string_ident_token1,
    ACTIONS(419), 1,
      aux_sym_func_call_expr_token1,
    ACTIONS(421), 1,
      anon_sym_LPAREN,
    STATE(127), 1,
      sym_paren_expr,
    STATE(106), 2,
      sym_string_ident,
      aux_sym_func_call_expr_repeat1,
  [3734] = 5,
    ACTIONS(397), 1,
      aux_sym_func_call_expr_token1,
    ACTIONS(423), 1,
      anon_sym_LPAREN,
    ACTIONS(426), 1,
      aux_sym_string_ident_token1,
    STATE(127), 1,
      sym_paren_expr,
    STATE(106), 2,
      sym_string_ident,
      aux_sym_func_call_expr_repeat1,
  [3751] = 4,
    ACTIONS(413), 1,
      anon_sym_LPAREN,
    ACTIONS(429), 1,
      aux_sym_string_ident_token1,
    STATE(117), 1,
      sym_paren_expr,
    STATE(104), 2,
      sym_string_ident,
      aux_sym_func_call_expr_repeat1,
  [3765] = 4,
    ACTIONS(431), 1,
      anon_sym_LPAREN,
    ACTIONS(433), 1,
      aux_sym_string_ident_token1,
    STATE(128), 1,
      sym_paren_expr,
    STATE(101), 2,
      sym_string_ident,
      aux_sym_func_call_expr_repeat1,
  [3779] = 3,
    ACTIONS(379), 1,
      anon_sym_LF,
    ACTIONS(435), 1,
      anon_sym_LPAREN2,
    ACTIONS(377), 2,
      anon_sym_LPAREN,
      aux_sym_string_ident_token1,
  [3790] = 3,
    ACTIONS(379), 1,
      aux_sym_func_call_expr_token1,
    ACTIONS(437), 1,
      anon_sym_LPAREN2,
    ACTIONS(377), 2,
      anon_sym_LPAREN,
      aux_sym_string_ident_token1,
  [3801] = 3,
    ACTIONS(41), 1,
      anon_sym_AT,
    ACTIONS(439), 1,
      anon_sym_fn,
    STATE(112), 2,
      sym_func_annotation,
      aux_sym_func_def_stmt_repeat1,
  [3812] = 3,
    ACTIONS(441), 1,
      anon_sym_AT,
    ACTIONS(444), 1,
      anon_sym_fn,
    STATE(112), 2,
      sym_func_annotation,
      aux_sym_func_def_stmt_repeat1,
  [3823] = 2,
    ACTIONS(446), 1,
      anon_sym_LPAREN2,
    ACTIONS(377), 3,
      anon_sym_LPAREN,
      aux_sym_string_ident_token1,
      anon_sym_using,
  [3832] = 3,
    ACTIONS(448), 1,
      anon_sym_DQUOTE,
    ACTIONS(450), 1,
      aux_sym_string_token1,
    STATE(116), 1,
      aux_sym_string_repeat1,
  [3842] = 2,
    STATE(139), 1,
      sym_type,
    ACTIONS(452), 2,
      sym_ident,
      anon_sym_LPAREN_RPAREN,
  [3850] = 3,
    ACTIONS(454), 1,
      anon_sym_DQUOTE,
    ACTIONS(456), 1,
      aux_sym_string_token1,
    STATE(126), 1,
      aux_sym_string_repeat1,
  [3860] = 2,
    ACTIONS(379), 1,
      anon_sym_LPAREN,
    ACTIONS(377), 2,
      aux_sym_string_ident_token1,
      anon_sym_using,
  [3868] = 2,
    STATE(157), 1,
      sym_type,
    ACTIONS(452), 2,
      sym_ident,
      anon_sym_LPAREN_RPAREN,
  [3876] = 3,
    ACTIONS(458), 1,
      anon_sym_RPAREN,
    ACTIONS(460), 1,
      sym_ident,
    STATE(119), 1,
      aux_sym_func_def_stmt_repeat2,
  [3886] = 2,
    STATE(152), 1,
      sym_type,
    ACTIONS(452), 2,
      sym_ident,
      anon_sym_LPAREN_RPAREN,
  [3894] = 3,
    ACTIONS(463), 1,
      anon_sym_RPAREN,
    ACTIONS(465), 1,
      sym_ident,
    STATE(137), 1,
      aux_sym_func_def_stmt_repeat2,
  [3904] = 3,
    ACTIONS(463), 1,
      anon_sym_RPAREN,
    ACTIONS(465), 1,
      sym_ident,
    STATE(119), 1,
      aux_sym_func_def_stmt_repeat2,
  [3914] = 3,
    ACTIONS(456), 1,
      aux_sym_string_token1,
    ACTIONS(467), 1,
      anon_sym_DQUOTE,
    STATE(126), 1,
      aux_sym_string_repeat1,
  [3924] = 2,
    STATE(148), 1,
      sym_type,
    ACTIONS(452), 2,
      sym_ident,
      anon_sym_LPAREN_RPAREN,
  [3932] = 2,
    ACTIONS(389), 1,
      anon_sym_LPAREN,
    ACTIONS(387), 2,
      aux_sym_string_ident_token1,
      anon_sym_using,
  [3940] = 3,
    ACTIONS(469), 1,
      anon_sym_DQUOTE,
    ACTIONS(471), 1,
      aux_sym_string_token1,
    STATE(126), 1,
      aux_sym_string_repeat1,
  [3950] = 2,
    ACTIONS(379), 1,
      aux_sym_func_call_expr_token1,
    ACTIONS(377), 2,
      anon_sym_LPAREN,
      aux_sym_string_ident_token1,
  [3958] = 2,
    ACTIONS(379), 1,
      anon_sym_LF,
    ACTIONS(377), 2,
      anon_sym_LPAREN,
      aux_sym_string_ident_token1,
  [3966] = 2,
    ACTIONS(141), 1,
      aux_sym_func_call_expr_token1,
    ACTIONS(143), 2,
      anon_sym_LPAREN,
      aux_sym_string_ident_token1,
  [3974] = 3,
    ACTIONS(474), 1,
      anon_sym_DQUOTE,
    ACTIONS(476), 1,
      aux_sym_string_token1,
    STATE(123), 1,
      aux_sym_string_repeat1,
  [3984] = 2,
    ACTIONS(389), 1,
      anon_sym_LF,
    ACTIONS(387), 2,
      anon_sym_LPAREN,
      aux_sym_string_ident_token1,
  [3992] = 2,
    STATE(92), 1,
      sym_run_on_type,
    ACTIONS(478), 2,
      anon_sym_image,
      anon_sym_self_hosted,
  [4000] = 1,
    ACTIONS(480), 3,
      anon_sym_COLON,
      anon_sym_RPAREN,
      sym_ident,
  [4006] = 2,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 2,
      aux_sym_string_ident_token1,
      anon_sym_using,
  [4014] = 2,
    ACTIONS(389), 1,
      aux_sym_func_call_expr_token1,
    ACTIONS(387), 2,
      anon_sym_LPAREN,
      aux_sym_string_ident_token1,
  [4022] = 2,
    ACTIONS(141), 1,
      anon_sym_LF,
    ACTIONS(143), 2,
      anon_sym_LPAREN,
      aux_sym_string_ident_token1,
  [4030] = 3,
    ACTIONS(465), 1,
      sym_ident,
    ACTIONS(482), 1,
      anon_sym_RPAREN,
    STATE(119), 1,
      aux_sym_func_def_stmt_repeat2,
  [4040] = 3,
    ACTIONS(465), 1,
      sym_ident,
    ACTIONS(484), 1,
      anon_sym_RPAREN,
    STATE(122), 1,
      aux_sym_func_def_stmt_repeat2,
  [4050] = 1,
    ACTIONS(486), 2,
      anon_sym_RPAREN,
      sym_ident,
  [4055] = 1,
    ACTIONS(488), 2,
      anon_sym_AT,
      anon_sym_fn,
  [4060] = 2,
    ACTIONS(490), 1,
      anon_sym_COLON,
    ACTIONS(492), 1,
      anon_sym_DASH_GT,
  [4067] = 2,
    ACTIONS(494), 1,
      anon_sym_mut,
    ACTIONS(496), 1,
      sym_ident,
  [4074] = 2,
    ACTIONS(498), 1,
      anon_sym_COLON,
    ACTIONS(500), 1,
      anon_sym_DASH_GT,
  [4081] = 2,
    ACTIONS(502), 1,
      anon_sym_COLON,
    ACTIONS(504), 1,
      anon_sym_DASH_GT,
  [4088] = 1,
    ACTIONS(506), 1,
      aux_sym_string_ident_token2,
  [4092] = 1,
    ACTIONS(508), 1,
      sym_ident,
  [4096] = 1,
    ACTIONS(510), 1,
      anon_sym_COLON,
  [4100] = 1,
    ACTIONS(512), 1,
      anon_sym_COLON,
  [4104] = 1,
    ACTIONS(514), 1,
      aux_sym_string_ident_token2,
  [4108] = 1,
    ACTIONS(516), 1,
      anon_sym_LPAREN,
  [4112] = 1,
    ACTIONS(518), 1,
      aux_sym_string_ident_token2,
  [4116] = 1,
    ACTIONS(520), 1,
      anon_sym_COLON,
  [4120] = 1,
    ACTIONS(522), 1,
      sym_ident,
  [4124] = 1,
    ACTIONS(524), 1,
      ts_builtin_sym_end,
  [4128] = 1,
    ACTIONS(526), 1,
      sym_ident,
  [4132] = 1,
    ACTIONS(528), 1,
      anon_sym_EQ,
  [4136] = 1,
    ACTIONS(502), 1,
      anon_sym_COLON,
  [4140] = 1,
    ACTIONS(530), 1,
      anon_sym_LPAREN,
  [4144] = 1,
    ACTIONS(532), 1,
      aux_sym_string_ident_token2,
  [4148] = 1,
    ACTIONS(534), 1,
      anon_sym_EQ,
  [4152] = 1,
    ACTIONS(536), 1,
      sym_event_type,
  [4156] = 1,
    ACTIONS(538), 1,
      anon_sym_COLON,
  [4160] = 1,
    ACTIONS(540), 1,
      sym_ident,
  [4164] = 1,
    ACTIONS(542), 1,
      sym_ident,
  [4168] = 1,
    ACTIONS(544), 1,
      anon_sym_COLON,
  [4172] = 1,
    ACTIONS(546), 1,
      anon_sym_in,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 58,
  [SMALL_STATE(6)] = 107,
  [SMALL_STATE(7)] = 152,
  [SMALL_STATE(8)] = 197,
  [SMALL_STATE(9)] = 242,
  [SMALL_STATE(10)] = 287,
  [SMALL_STATE(11)] = 332,
  [SMALL_STATE(12)] = 377,
  [SMALL_STATE(13)] = 426,
  [SMALL_STATE(14)] = 471,
  [SMALL_STATE(15)] = 516,
  [SMALL_STATE(16)] = 565,
  [SMALL_STATE(17)] = 610,
  [SMALL_STATE(18)] = 655,
  [SMALL_STATE(19)] = 704,
  [SMALL_STATE(20)] = 753,
  [SMALL_STATE(21)] = 802,
  [SMALL_STATE(22)] = 847,
  [SMALL_STATE(23)] = 908,
  [SMALL_STATE(24)] = 969,
  [SMALL_STATE(25)] = 1030,
  [SMALL_STATE(26)] = 1065,
  [SMALL_STATE(27)] = 1097,
  [SMALL_STATE(28)] = 1129,
  [SMALL_STATE(29)] = 1161,
  [SMALL_STATE(30)] = 1193,
  [SMALL_STATE(31)] = 1251,
  [SMALL_STATE(32)] = 1283,
  [SMALL_STATE(33)] = 1341,
  [SMALL_STATE(34)] = 1373,
  [SMALL_STATE(35)] = 1405,
  [SMALL_STATE(36)] = 1437,
  [SMALL_STATE(37)] = 1469,
  [SMALL_STATE(38)] = 1501,
  [SMALL_STATE(39)] = 1533,
  [SMALL_STATE(40)] = 1565,
  [SMALL_STATE(41)] = 1620,
  [SMALL_STATE(42)] = 1675,
  [SMALL_STATE(43)] = 1730,
  [SMALL_STATE(44)] = 1785,
  [SMALL_STATE(45)] = 1840,
  [SMALL_STATE(46)] = 1895,
  [SMALL_STATE(47)] = 1950,
  [SMALL_STATE(48)] = 2005,
  [SMALL_STATE(49)] = 2060,
  [SMALL_STATE(50)] = 2115,
  [SMALL_STATE(51)] = 2170,
  [SMALL_STATE(52)] = 2225,
  [SMALL_STATE(53)] = 2280,
  [SMALL_STATE(54)] = 2335,
  [SMALL_STATE(55)] = 2390,
  [SMALL_STATE(56)] = 2445,
  [SMALL_STATE(57)] = 2500,
  [SMALL_STATE(58)] = 2555,
  [SMALL_STATE(59)] = 2610,
  [SMALL_STATE(60)] = 2665,
  [SMALL_STATE(61)] = 2720,
  [SMALL_STATE(62)] = 2775,
  [SMALL_STATE(63)] = 2830,
  [SMALL_STATE(64)] = 2852,
  [SMALL_STATE(65)] = 2874,
  [SMALL_STATE(66)] = 2896,
  [SMALL_STATE(67)] = 2918,
  [SMALL_STATE(68)] = 2940,
  [SMALL_STATE(69)] = 2962,
  [SMALL_STATE(70)] = 2984,
  [SMALL_STATE(71)] = 3006,
  [SMALL_STATE(72)] = 3028,
  [SMALL_STATE(73)] = 3050,
  [SMALL_STATE(74)] = 3074,
  [SMALL_STATE(75)] = 3096,
  [SMALL_STATE(76)] = 3117,
  [SMALL_STATE(77)] = 3139,
  [SMALL_STATE(78)] = 3161,
  [SMALL_STATE(79)] = 3183,
  [SMALL_STATE(80)] = 3205,
  [SMALL_STATE(81)] = 3227,
  [SMALL_STATE(82)] = 3249,
  [SMALL_STATE(83)] = 3271,
  [SMALL_STATE(84)] = 3293,
  [SMALL_STATE(85)] = 3315,
  [SMALL_STATE(86)] = 3337,
  [SMALL_STATE(87)] = 3359,
  [SMALL_STATE(88)] = 3381,
  [SMALL_STATE(89)] = 3403,
  [SMALL_STATE(90)] = 3425,
  [SMALL_STATE(91)] = 3447,
  [SMALL_STATE(92)] = 3469,
  [SMALL_STATE(93)] = 3498,
  [SMALL_STATE(94)] = 3527,
  [SMALL_STATE(95)] = 3556,
  [SMALL_STATE(96)] = 3574,
  [SMALL_STATE(97)] = 3589,
  [SMALL_STATE(98)] = 3604,
  [SMALL_STATE(99)] = 3619,
  [SMALL_STATE(100)] = 3634,
  [SMALL_STATE(101)] = 3649,
  [SMALL_STATE(102)] = 3666,
  [SMALL_STATE(103)] = 3683,
  [SMALL_STATE(104)] = 3700,
  [SMALL_STATE(105)] = 3717,
  [SMALL_STATE(106)] = 3734,
  [SMALL_STATE(107)] = 3751,
  [SMALL_STATE(108)] = 3765,
  [SMALL_STATE(109)] = 3779,
  [SMALL_STATE(110)] = 3790,
  [SMALL_STATE(111)] = 3801,
  [SMALL_STATE(112)] = 3812,
  [SMALL_STATE(113)] = 3823,
  [SMALL_STATE(114)] = 3832,
  [SMALL_STATE(115)] = 3842,
  [SMALL_STATE(116)] = 3850,
  [SMALL_STATE(117)] = 3860,
  [SMALL_STATE(118)] = 3868,
  [SMALL_STATE(119)] = 3876,
  [SMALL_STATE(120)] = 3886,
  [SMALL_STATE(121)] = 3894,
  [SMALL_STATE(122)] = 3904,
  [SMALL_STATE(123)] = 3914,
  [SMALL_STATE(124)] = 3924,
  [SMALL_STATE(125)] = 3932,
  [SMALL_STATE(126)] = 3940,
  [SMALL_STATE(127)] = 3950,
  [SMALL_STATE(128)] = 3958,
  [SMALL_STATE(129)] = 3966,
  [SMALL_STATE(130)] = 3974,
  [SMALL_STATE(131)] = 3984,
  [SMALL_STATE(132)] = 3992,
  [SMALL_STATE(133)] = 4000,
  [SMALL_STATE(134)] = 4006,
  [SMALL_STATE(135)] = 4014,
  [SMALL_STATE(136)] = 4022,
  [SMALL_STATE(137)] = 4030,
  [SMALL_STATE(138)] = 4040,
  [SMALL_STATE(139)] = 4050,
  [SMALL_STATE(140)] = 4055,
  [SMALL_STATE(141)] = 4060,
  [SMALL_STATE(142)] = 4067,
  [SMALL_STATE(143)] = 4074,
  [SMALL_STATE(144)] = 4081,
  [SMALL_STATE(145)] = 4088,
  [SMALL_STATE(146)] = 4092,
  [SMALL_STATE(147)] = 4096,
  [SMALL_STATE(148)] = 4100,
  [SMALL_STATE(149)] = 4104,
  [SMALL_STATE(150)] = 4108,
  [SMALL_STATE(151)] = 4112,
  [SMALL_STATE(152)] = 4116,
  [SMALL_STATE(153)] = 4120,
  [SMALL_STATE(154)] = 4124,
  [SMALL_STATE(155)] = 4128,
  [SMALL_STATE(156)] = 4132,
  [SMALL_STATE(157)] = 4136,
  [SMALL_STATE(158)] = 4140,
  [SMALL_STATE(159)] = 4144,
  [SMALL_STATE(160)] = 4148,
  [SMALL_STATE(161)] = 4152,
  [SMALL_STATE(162)] = 4156,
  [SMALL_STATE(163)] = 4160,
  [SMALL_STATE(164)] = 4164,
  [SMALL_STATE(165)] = 4168,
  [SMALL_STATE(166)] = 4172,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(161),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(132),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(44),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(45),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(54),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(165),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(164),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(29),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(142),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(41),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(32),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(114),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(44),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(107),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(108),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(146),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(155),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(29),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cache_stmt, 4),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cache_stmt, 4),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_expr, 3),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_expr, 3),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paren_expr, 3),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paren_expr, 3),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elif_expr, 3),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elif_expr, 3),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expr, 3),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_expr, 3),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_stmt, 5),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_stmt, 5),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_literal, 1),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_literal, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_stmt, 4, .production_id = 1),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_on_stmt, 4, .production_id = 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expr, 3),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expr, 3),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt, 1),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stmt, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_stmt, 4),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_stmt, 4),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expr, 2),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expr, 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_expr, 2),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_expr, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_expr_repeat1, 2), SHIFT_REPEAT(62),
  [222] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_expr_repeat1, 2), SHIFT_REPEAT(56),
  [225] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_expr_repeat1, 2), SHIFT_REPEAT(47),
  [228] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_expr_repeat1, 2), SHIFT_REPEAT(147),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_expr_repeat1, 2), SHIFT_REPEAT(48),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_expr_repeat1, 2), SHIFT_REPEAT(30),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_expr_repeat1, 2),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_expr_repeat1, 2), SHIFT_REPEAT(70),
  [242] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_expr_repeat1, 2), SHIFT_REPEAT(70),
  [245] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_expr_repeat1, 2), SHIFT_REPEAT(71),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_expr_repeat1, 2), SHIFT_REPEAT(130),
  [251] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_expr_repeat1, 2), SHIFT_REPEAT(72),
  [254] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_expr_repeat1, 2), SHIFT_REPEAT(62),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_stmt, 2, .production_id = 1),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_on_stmt, 2, .production_id = 1),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_def_stmt, 8),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_def_stmt, 8),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_stmt, 3),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_stmt, 3),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call_expr, 3),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call_expr, 3),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_stmt, 5),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_stmt, 5),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_on_stmt, 3, .production_id = 2),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_run_on_stmt, 3, .production_id = 2),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_def_stmt, 5),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_def_stmt, 5),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_def_stmt, 6),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_def_stmt, 6),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_def_stmt, 7),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_def_stmt, 7),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call_expr, 2),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call_expr, 2),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_on_stmt, 4, .production_id = 2),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_run_on_stmt, 4, .production_id = 2),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_def_stmt, 9),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_def_stmt, 9),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_list_expr_repeat1, 2),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [359] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_run_on_stmt_repeat1, 2), SHIFT_REPEAT(93),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_run_on_stmt_repeat1, 2),
  [364] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_run_on_stmt_repeat1, 2), SHIFT_REPEAT(61),
  [367] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_run_on_stmt_repeat1, 2), SHIFT_REPEAT(100),
  [370] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_run_on_stmt_repeat1, 2), SHIFT_REPEAT(95),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_ident, 1),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_ident, 1),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_run_on_type, 1),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_run_on_type, 1),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_ident, 5),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_ident, 5),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_call_expr_repeat1, 2),
  [399] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_call_expr_repeat1, 2), SHIFT_REPEAT(40),
  [402] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_call_expr_repeat1, 2), SHIFT_REPEAT(109),
  [405] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_call_expr_repeat1, 2), SHIFT_REPEAT(55),
  [408] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_call_expr_repeat1, 2), SHIFT_REPEAT(113),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_func_call_expr_repeat1, 2),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [423] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_call_expr_repeat1, 2), SHIFT_REPEAT(50),
  [426] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_func_call_expr_repeat1, 2), SHIFT_REPEAT(110),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [441] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_def_stmt_repeat1, 2), SHIFT_REPEAT(146),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_def_stmt_repeat1, 2),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_def_stmt_repeat2, 2),
  [460] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_def_stmt_repeat2, 2), SHIFT_REPEAT(162),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [471] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(126),
  [474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_def_stmt_repeat2, 3),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_annotation, 2),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [494] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [524] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
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
