#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 115
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 69
#define ALIAS_COUNT 3
#define TOKEN_COUNT 46
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 28

enum {
  sym_attr_name = 1,
  aux_sym__line_token1 = 2,
  aux_sym__line_token2 = 3,
  anon_sym_BANG = 4,
  anon_sym_BSLASH = 5,
  anon_sym_DQUOTE = 6,
  aux_sym__quoted_pattern_token1 = 7,
  sym__pattern_char = 8,
  sym_escaped_char = 9,
  sym__special_char = 10,
  sym__octal_code = 11,
  sym__hex_code = 12,
  aux_sym__unicode_code_token1 = 13,
  aux_sym__unicode_code_token2 = 14,
  anon_sym_LBRACK = 15,
  anon_sym_CARET = 16,
  anon_sym_DASH = 17,
  anon_sym_RBRACK = 18,
  aux_sym__class_char_token1 = 19,
  aux_sym__class_char_token2 = 20,
  sym_character_class = 21,
  anon_sym_QMARK = 22,
  anon_sym_STAR = 23,
  anon_sym_STAR_STAR = 24,
  sym_dir_sep = 25,
  anon_sym_EQ = 26,
  anon_sym_true = 27,
  anon_sym_false = 28,
  aux_sym__attr_with_value_token1 = 29,
  anon_sym_text = 30,
  anon_sym_eol = 31,
  anon_sym_crlf = 32,
  anon_sym_working_DASHtree_DASHencoding = 33,
  anon_sym_ident = 34,
  anon_sym_filter = 35,
  anon_sym_diff = 36,
  anon_sym_merge = 37,
  anon_sym_whitespace = 38,
  anon_sym_export_DASHignore = 39,
  anon_sym_export_DASHsubst = 40,
  anon_sym_delta = 41,
  anon_sym_encoding = 42,
  anon_sym_binary = 43,
  anon_sym_LBRACKattr_RBRACK = 44,
  sym_comment = 45,
  sym_file = 46,
  sym__line = 47,
  sym__attr_list = 48,
  sym_pattern = 49,
  aux_sym__pattern = 50,
  sym_quoted_pattern = 51,
  aux_sym__quoted_pattern = 52,
  sym_ansi_c_escape = 53,
  sym__char_code = 54,
  sym__unicode_code = 55,
  sym_range_notation = 56,
  sym_class_range = 57,
  sym__class_char = 58,
  sym_wildcard = 59,
  sym_attribute = 60,
  sym__prefixed_attr = 61,
  sym__attr_with_value = 62,
  sym_builtin_attr = 63,
  sym_macro_def = 64,
  aux_sym_file_repeat1 = 65,
  aux_sym__attr_list_repeat1 = 66,
  aux_sym_pattern_repeat1 = 67,
  aux_sym_range_notation_repeat1 = 68,
  alias_sym_attr_reset = 69,
  alias_sym_attr_unset = 70,
  alias_sym_trailing_slash = 71,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_attr_name] = "attr_name",
  [aux_sym__line_token1] = "_line_token1",
  [aux_sym__line_token2] = "_line_token2",
  [anon_sym_BANG] = "pattern_negation",
  [anon_sym_BSLASH] = "redundant_escape",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__quoted_pattern_token1] = "_quoted_pattern_token1",
  [sym__pattern_char] = "_pattern_char",
  [sym_escaped_char] = "escaped_char",
  [sym__special_char] = "_special_char",
  [sym__octal_code] = "_octal_code",
  [sym__hex_code] = "_hex_code",
  [aux_sym__unicode_code_token1] = "_unicode_code_token1",
  [aux_sym__unicode_code_token2] = "_unicode_code_token2",
  [anon_sym_LBRACK] = "[",
  [anon_sym_CARET] = "range_negation",
  [anon_sym_DASH] = "-",
  [anon_sym_RBRACK] = "]",
  [aux_sym__class_char_token1] = "_class_char_token1",
  [aux_sym__class_char_token2] = "_class_char_token2",
  [sym_character_class] = "character_class",
  [anon_sym_QMARK] = "\?",
  [anon_sym_STAR] = "*",
  [anon_sym_STAR_STAR] = "**",
  [sym_dir_sep] = "dir_sep",
  [anon_sym_EQ] = "attr_set",
  [anon_sym_true] = "boolean_value",
  [anon_sym_false] = "boolean_value",
  [aux_sym__attr_with_value_token1] = "string_value",
  [anon_sym_text] = "text",
  [anon_sym_eol] = "eol",
  [anon_sym_crlf] = "crlf",
  [anon_sym_working_DASHtree_DASHencoding] = "working-tree-encoding",
  [anon_sym_ident] = "ident",
  [anon_sym_filter] = "filter",
  [anon_sym_diff] = "diff",
  [anon_sym_merge] = "merge",
  [anon_sym_whitespace] = "whitespace",
  [anon_sym_export_DASHignore] = "export-ignore",
  [anon_sym_export_DASHsubst] = "export-subst",
  [anon_sym_delta] = "delta",
  [anon_sym_encoding] = "encoding",
  [anon_sym_binary] = "binary",
  [anon_sym_LBRACKattr_RBRACK] = "macro_tag",
  [sym_comment] = "comment",
  [sym_file] = "file",
  [sym__line] = "_line",
  [sym__attr_list] = "_attr_list",
  [sym_pattern] = "pattern",
  [aux_sym__pattern] = "_pattern",
  [sym_quoted_pattern] = "quoted_pattern",
  [aux_sym__quoted_pattern] = "_quoted_pattern",
  [sym_ansi_c_escape] = "ansi_c_escape",
  [sym__char_code] = "_char_code",
  [sym__unicode_code] = "_unicode_code",
  [sym_range_notation] = "range_notation",
  [sym_class_range] = "class_range",
  [sym__class_char] = "_class_char",
  [sym_wildcard] = "wildcard",
  [sym_attribute] = "attribute",
  [sym__prefixed_attr] = "_prefixed_attr",
  [sym__attr_with_value] = "_attr_with_value",
  [sym_builtin_attr] = "builtin_attr",
  [sym_macro_def] = "macro_def",
  [aux_sym_file_repeat1] = "file_repeat1",
  [aux_sym__attr_list_repeat1] = "_attr_list_repeat1",
  [aux_sym_pattern_repeat1] = "pattern_repeat1",
  [aux_sym_range_notation_repeat1] = "range_notation_repeat1",
  [alias_sym_attr_reset] = "attr_reset",
  [alias_sym_attr_unset] = "attr_unset",
  [alias_sym_trailing_slash] = "trailing_slash",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_attr_name] = sym_attr_name,
  [aux_sym__line_token1] = aux_sym__line_token1,
  [aux_sym__line_token2] = aux_sym__line_token2,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__quoted_pattern_token1] = aux_sym__quoted_pattern_token1,
  [sym__pattern_char] = sym__pattern_char,
  [sym_escaped_char] = sym_escaped_char,
  [sym__special_char] = sym__special_char,
  [sym__octal_code] = sym__octal_code,
  [sym__hex_code] = sym__hex_code,
  [aux_sym__unicode_code_token1] = aux_sym__unicode_code_token1,
  [aux_sym__unicode_code_token2] = aux_sym__unicode_code_token2,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [aux_sym__class_char_token1] = aux_sym__class_char_token1,
  [aux_sym__class_char_token2] = aux_sym__class_char_token2,
  [sym_character_class] = sym_character_class,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_STAR_STAR] = anon_sym_STAR_STAR,
  [sym_dir_sep] = sym_dir_sep,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_true,
  [aux_sym__attr_with_value_token1] = aux_sym__attr_with_value_token1,
  [anon_sym_text] = anon_sym_text,
  [anon_sym_eol] = anon_sym_eol,
  [anon_sym_crlf] = anon_sym_crlf,
  [anon_sym_working_DASHtree_DASHencoding] = anon_sym_working_DASHtree_DASHencoding,
  [anon_sym_ident] = anon_sym_ident,
  [anon_sym_filter] = anon_sym_filter,
  [anon_sym_diff] = anon_sym_diff,
  [anon_sym_merge] = anon_sym_merge,
  [anon_sym_whitespace] = anon_sym_whitespace,
  [anon_sym_export_DASHignore] = anon_sym_export_DASHignore,
  [anon_sym_export_DASHsubst] = anon_sym_export_DASHsubst,
  [anon_sym_delta] = anon_sym_delta,
  [anon_sym_encoding] = anon_sym_encoding,
  [anon_sym_binary] = anon_sym_binary,
  [anon_sym_LBRACKattr_RBRACK] = anon_sym_LBRACKattr_RBRACK,
  [sym_comment] = sym_comment,
  [sym_file] = sym_file,
  [sym__line] = sym__line,
  [sym__attr_list] = sym__attr_list,
  [sym_pattern] = sym_pattern,
  [aux_sym__pattern] = aux_sym__pattern,
  [sym_quoted_pattern] = sym_quoted_pattern,
  [aux_sym__quoted_pattern] = aux_sym__quoted_pattern,
  [sym_ansi_c_escape] = sym_ansi_c_escape,
  [sym__char_code] = sym__char_code,
  [sym__unicode_code] = sym__unicode_code,
  [sym_range_notation] = sym_range_notation,
  [sym_class_range] = sym_class_range,
  [sym__class_char] = sym__class_char,
  [sym_wildcard] = sym_wildcard,
  [sym_attribute] = sym_attribute,
  [sym__prefixed_attr] = sym__prefixed_attr,
  [sym__attr_with_value] = sym__attr_with_value,
  [sym_builtin_attr] = sym_builtin_attr,
  [sym_macro_def] = sym_macro_def,
  [aux_sym_file_repeat1] = aux_sym_file_repeat1,
  [aux_sym__attr_list_repeat1] = aux_sym__attr_list_repeat1,
  [aux_sym_pattern_repeat1] = aux_sym_pattern_repeat1,
  [aux_sym_range_notation_repeat1] = aux_sym_range_notation_repeat1,
  [alias_sym_attr_reset] = alias_sym_attr_reset,
  [alias_sym_attr_unset] = alias_sym_attr_unset,
  [alias_sym_trailing_slash] = alias_sym_trailing_slash,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_attr_name] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__line_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__line_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__quoted_pattern_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__pattern_char] = {
    .visible = false,
    .named = true,
  },
  [sym_escaped_char] = {
    .visible = true,
    .named = true,
  },
  [sym__special_char] = {
    .visible = false,
    .named = true,
  },
  [sym__octal_code] = {
    .visible = false,
    .named = true,
  },
  [sym__hex_code] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__unicode_code_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__unicode_code_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__class_char_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__class_char_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_character_class] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_STAR] = {
    .visible = true,
    .named = false,
  },
  [sym_dir_sep] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__attr_with_value_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_text] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_eol] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_crlf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_working_DASHtree_DASHencoding] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ident] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_filter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_diff] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_merge] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_whitespace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_export_DASHignore] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_export_DASHsubst] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_delta] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_encoding] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_binary] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKattr_RBRACK] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_file] = {
    .visible = true,
    .named = true,
  },
  [sym__line] = {
    .visible = false,
    .named = true,
  },
  [sym__attr_list] = {
    .visible = false,
    .named = true,
  },
  [sym_pattern] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__pattern] = {
    .visible = false,
    .named = false,
  },
  [sym_quoted_pattern] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__quoted_pattern] = {
    .visible = false,
    .named = false,
  },
  [sym_ansi_c_escape] = {
    .visible = true,
    .named = true,
  },
  [sym__char_code] = {
    .visible = false,
    .named = true,
  },
  [sym__unicode_code] = {
    .visible = false,
    .named = true,
  },
  [sym_range_notation] = {
    .visible = true,
    .named = true,
  },
  [sym_class_range] = {
    .visible = true,
    .named = true,
  },
  [sym__class_char] = {
    .visible = false,
    .named = true,
  },
  [sym_wildcard] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym__prefixed_attr] = {
    .visible = false,
    .named = true,
  },
  [sym__attr_with_value] = {
    .visible = false,
    .named = true,
  },
  [sym_builtin_attr] = {
    .visible = true,
    .named = true,
  },
  [sym_macro_def] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__attr_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pattern_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_range_notation_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_attr_reset] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_attr_unset] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_trailing_slash] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_absolute = 1,
  field_macro_name = 2,
  field_relative = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_absolute] = "absolute",
  [field_macro_name] = "macro_name",
  [field_relative] = "relative",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 1},
  [4] = {.index = 2, .length = 1},
  [6] = {.index = 3, .length = 1},
  [7] = {.index = 0, .length = 1},
  [8] = {.index = 4, .length = 2},
  [9] = {.index = 6, .length = 1},
  [10] = {.index = 7, .length = 1},
  [11] = {.index = 1, .length = 1},
  [12] = {.index = 8, .length = 2},
  [13] = {.index = 2, .length = 1},
  [14] = {.index = 10, .length = 2},
  [15] = {.index = 3, .length = 1},
  [17] = {.index = 4, .length = 2},
  [20] = {.index = 10, .length = 2},
  [21] = {.index = 12, .length = 1},
  [23] = {.index = 13, .length = 1},
  [24] = {.index = 12, .length = 1},
  [25] = {.index = 14, .length = 2},
  [26] = {.index = 13, .length = 1},
  [27] = {.index = 14, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_absolute, 0},
  [1] =
    {field_relative, 1, .inherited = true},
  [2] =
    {field_absolute, 1},
  [3] =
    {field_relative, 2, .inherited = true},
  [4] =
    {field_absolute, 0},
    {field_relative, 2, .inherited = true},
  [6] =
    {field_macro_name, 1},
  [7] =
    {field_relative, 0},
  [8] =
    {field_relative, 0, .inherited = true},
    {field_relative, 1, .inherited = true},
  [10] =
    {field_absolute, 1},
    {field_relative, 3, .inherited = true},
  [12] =
    {field_absolute, 2},
  [13] =
    {field_relative, 3, .inherited = true},
  [14] =
    {field_absolute, 2},
    {field_relative, 4, .inherited = true},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [2] = {
    [1] = alias_sym_trailing_slash,
  },
  [5] = {
    [2] = alias_sym_trailing_slash,
  },
  [7] = {
    [2] = alias_sym_trailing_slash,
  },
  [11] = {
    [2] = alias_sym_trailing_slash,
  },
  [13] = {
    [3] = alias_sym_trailing_slash,
  },
  [15] = {
    [3] = alias_sym_trailing_slash,
  },
  [16] = {
    [1] = anon_sym_CARET,
  },
  [17] = {
    [3] = alias_sym_trailing_slash,
  },
  [18] = {
    [0] = alias_sym_attr_reset,
  },
  [19] = {
    [0] = alias_sym_attr_unset,
  },
  [20] = {
    [4] = alias_sym_trailing_slash,
  },
  [22] = {
    [3] = alias_sym_trailing_slash,
  },
  [24] = {
    [4] = alias_sym_trailing_slash,
  },
  [26] = {
    [4] = alias_sym_trailing_slash,
  },
  [27] = {
    [5] = alias_sym_trailing_slash,
  },
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
  [9] = 8,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 11,
  [15] = 15,
  [16] = 12,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 21,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 33,
  [36] = 34,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 56,
  [59] = 59,
  [60] = 60,
  [61] = 60,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 64,
  [69] = 65,
  [70] = 66,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 73,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
};

static inline bool sym__special_char_character_set_1(int32_t c) {
  return (c < 'a'
    ? (c < '?'
      ? (c < '\''
        ? c == '"'
        : c <= '\'')
      : (c <= '?' || c == 'E'))
    : (c <= 'b' || (c < 'r'
      ? (c < 'n'
        ? (c >= 'e' && c <= 'f')
        : c <= 'n')
      : (c <= 'r' || (c >= 't' && c <= 'v')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(63);
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead == '\r') ADVANCE(71);
      if (lookahead == '!') ADVANCE(66);
      if (lookahead == '"') ADVANCE(69);
      if (lookahead == '*') ADVANCE(104);
      if (lookahead == '-') ADVANCE(97);
      if (lookahead == '/') ADVANCE(107);
      if (lookahead == '=') ADVANCE(108);
      if (lookahead == '?') ADVANCE(103);
      if (lookahead == '[') ADVANCE(94);
      if (lookahead == '\\') ADVANCE(68);
      if (lookahead == ']') ADVANCE(98);
      if (lookahead == '^') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(64);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      if (lookahead != 0) ADVANCE(70);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(65);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(66);
      if (lookahead == '-') ADVANCE(97);
      if (lookahead == '=') ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(66);
      if (lookahead == '-') ADVANCE(97);
      if (lookahead == '[') ADVANCE(100);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead == '^') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ']') ADVANCE(99);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(66);
      if (lookahead == '/') ADVANCE(107);
      if (lookahead == '\\') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(70);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(69);
      if (lookahead == '*') ADVANCE(105);
      if (lookahead == '/') ADVANCE(107);
      if (lookahead == '?') ADVANCE(103);
      if (lookahead == '[') ADVANCE(94);
      if (lookahead == '\\') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(73);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(69);
      if (lookahead == '/') ADVANCE(107);
      if (lookahead == '\\') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(70);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(105);
      if (lookahead == '/') ADVANCE(107);
      if (lookahead == '?') ADVANCE(103);
      if (lookahead == '[') ADVANCE(94);
      if (lookahead == '\\') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(73);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(97);
      if (lookahead == '[') ADVANCE(100);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead == ']') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(99);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(107);
      if (lookahead == '\\') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(70);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(15);
      END_STATE();
    case 11:
      if (lookahead == 'U') ADVANCE(59);
      if (lookahead == '\\') ADVANCE(76);
      if (lookahead == 'u') ADVANCE(60);
      if (lookahead == 'x') ADVANCE(61);
      if (lookahead == '-' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (sym__special_char_character_set_1(lookahead)) ADVANCE(76);
      END_STATE();
    case 12:
      if (lookahead == 'U') ADVANCE(59);
      if (lookahead == 'u') ADVANCE(60);
      if (lookahead == 'x') ADVANCE(61);
      if (lookahead == '-' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 13:
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '-' &&
          lookahead != ']') ADVANCE(99);
      END_STATE();
    case 14:
      if (lookahead == ']') ADVANCE(120);
      END_STATE();
    case 15:
      if (lookahead == ']') ADVANCE(102);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(34);
      if (lookahead == 'b') ADVANCE(35);
      if (lookahead == 'c') ADVANCE(41);
      if (lookahead == 'd') ADVANCE(30);
      if (lookahead == 'g') ADVANCE(51);
      if (lookahead == 'l') ADVANCE(43);
      if (lookahead == 'p') ADVANCE(50);
      if (lookahead == 's') ADVANCE(47);
      if (lookahead == 'u') ADVANCE(46);
      if (lookahead == 'x') ADVANCE(23);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(10);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(21);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(24);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(54);
      END_STATE();
    case 23:
      if (lookahead == 'd') ADVANCE(30);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 26:
      if (lookahead == 'f') ADVANCE(111);
      if (lookahead == 't') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(118);
      END_STATE();
    case 27:
      if (lookahead == 'g') ADVANCE(31);
      END_STATE();
    case 28:
      if (lookahead == 'h') ADVANCE(10);
      END_STATE();
    case 29:
      if (lookahead == 'h') ADVANCE(17);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 33:
      if (lookahead == 'k') ADVANCE(10);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(10);
      END_STATE();
    case 37:
      if (lookahead == 'm') ADVANCE(10);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(57);
      if (lookahead == 'p') ADVANCE(29);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 43:
      if (lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 44:
      if (lookahead == 'p') ADVANCE(25);
      END_STATE();
    case 45:
      if (lookahead == 'p') ADVANCE(28);
      END_STATE();
    case 46:
      if (lookahead == 'p') ADVANCE(44);
      END_STATE();
    case 47:
      if (lookahead == 'p') ADVANCE(18);
      END_STATE();
    case 48:
      if (lookahead == 'r') ADVANCE(14);
      END_STATE();
    case 49:
      if (lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 50:
      if (lookahead == 'r') ADVANCE(32);
      if (lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 51:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 52:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 54:
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 57:
      if (lookahead == 'u') ADVANCE(37);
      END_STATE();
    case 58:
      if (lookahead == 'w') ADVANCE(25);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(93);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      END_STATE();
    case 62:
      if (eof) ADVANCE(63);
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(66);
      if (lookahead == '"') ADVANCE(69);
      if (lookahead == '#') ADVANCE(74);
      if (lookahead == '*') ADVANCE(105);
      if (lookahead == '/') ADVANCE(107);
      if (lookahead == '?') ADVANCE(103);
      if (lookahead == '[') ADVANCE(95);
      if (lookahead == '\\') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead != 0) ADVANCE(73);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym__line_token2);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'U') ADVANCE(59);
      if (lookahead == 'u') ADVANCE(60);
      if (lookahead == 'x') ADVANCE(61);
      if (lookahead == '?' ||
          lookahead == '\\') ADVANCE(75);
      if (lookahead == '!' ||
          lookahead == '*' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == 'E' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'e' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          ('t' <= lookahead && lookahead <= 'v')) ADVANCE(76);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(75);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym__quoted_pattern_token1);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym__quoted_pattern_token1);
      if (lookahead == '\n') ADVANCE(65);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym__quoted_pattern_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym__pattern_char);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym__pattern_char);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(121);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_escaped_char);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym__special_char);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym__octal_code);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym__octal_code);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym__octal_code);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym__hex_code);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym__hex_code);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym__unicode_code_token1);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym__unicode_code_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(82);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym__unicode_code_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym__unicode_code_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym__unicode_code_token2);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym__unicode_code_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym__unicode_code_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym__unicode_code_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(88);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym__unicode_code_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(89);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym__unicode_code_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym__unicode_code_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym__unicode_code_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(92);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym__class_char_token1);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym__class_char_token1);
      if (lookahead == ':') ADVANCE(16);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym__class_char_token2);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_character_class);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(106);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_dir_sep);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(118);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(118);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym__attr_with_value_token1);
      if (lookahead == 'a') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(118);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym__attr_with_value_token1);
      if (lookahead == 'e') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(118);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym__attr_with_value_token1);
      if (lookahead == 'e') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(118);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym__attr_with_value_token1);
      if (lookahead == 'l') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(118);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym__attr_with_value_token1);
      if (lookahead == 'r') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(118);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym__attr_with_value_token1);
      if (lookahead == 's') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(118);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym__attr_with_value_token1);
      if (lookahead == 'u') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(118);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym__attr_with_value_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_attr_name);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_LBRACKattr_RBRACK);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(121);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'b') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(2);
      if (lookahead == 'd') ADVANCE(3);
      if (lookahead == 'e') ADVANCE(4);
      if (lookahead == 'f') ADVANCE(5);
      if (lookahead == 'i') ADVANCE(6);
      if (lookahead == 'm') ADVANCE(7);
      if (lookahead == 't') ADVANCE(8);
      if (lookahead == 'w') ADVANCE(9);
      END_STATE();
    case 1:
      if (lookahead == 'i') ADVANCE(10);
      END_STATE();
    case 2:
      if (lookahead == 'r') ADVANCE(11);
      END_STATE();
    case 3:
      if (lookahead == 'e') ADVANCE(12);
      if (lookahead == 'i') ADVANCE(13);
      END_STATE();
    case 4:
      if (lookahead == 'n') ADVANCE(14);
      if (lookahead == 'o') ADVANCE(15);
      if (lookahead == 'x') ADVANCE(16);
      END_STATE();
    case 5:
      if (lookahead == 'i') ADVANCE(17);
      END_STATE();
    case 6:
      if (lookahead == 'd') ADVANCE(18);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 9:
      if (lookahead == 'h') ADVANCE(21);
      if (lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 10:
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 11:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 12:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 13:
      if (lookahead == 'f') ADVANCE(26);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(27);
      END_STATE();
    case 15:
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 16:
      if (lookahead == 'p') ADVANCE(29);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 19:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 20:
      if (lookahead == 'x') ADVANCE(33);
      END_STATE();
    case 21:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 22:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 24:
      if (lookahead == 'f') ADVANCE(37);
      END_STATE();
    case 25:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 26:
      if (lookahead == 'f') ADVANCE(39);
      END_STATE();
    case 27:
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_eol);
      END_STATE();
    case 29:
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 30:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 31:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 32:
      if (lookahead == 'g') ADVANCE(44);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 35:
      if (lookahead == 'k') ADVANCE(47);
      END_STATE();
    case 36:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_crlf);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_diff);
      END_STATE();
    case 40:
      if (lookahead == 'd') ADVANCE(50);
      END_STATE();
    case 41:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 48:
      if (lookahead == 'y') ADVANCE(57);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_delta);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 51:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 52:
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_ident);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_merge);
      END_STATE();
    case 55:
      if (lookahead == 's') ADVANCE(61);
      END_STATE();
    case 56:
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_binary);
      END_STATE();
    case 58:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 59:
      if (lookahead == '-') ADVANCE(64);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_filter);
      END_STATE();
    case 61:
      if (lookahead == 'p') ADVANCE(65);
      END_STATE();
    case 62:
      if (lookahead == 'g') ADVANCE(66);
      END_STATE();
    case 63:
      if (lookahead == 'g') ADVANCE(67);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(68);
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 66:
      if (lookahead == '-') ADVANCE(71);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_encoding);
      END_STATE();
    case 68:
      if (lookahead == 'g') ADVANCE(72);
      END_STATE();
    case 69:
      if (lookahead == 'u') ADVANCE(73);
      END_STATE();
    case 70:
      if (lookahead == 'c') ADVANCE(74);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 72:
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 73:
      if (lookahead == 'b') ADVANCE(77);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 75:
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 76:
      if (lookahead == 'o') ADVANCE(80);
      END_STATE();
    case 77:
      if (lookahead == 's') ADVANCE(81);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_whitespace);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 80:
      if (lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 81:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_export_DASHsubst);
      END_STATE();
    case 85:
      if (lookahead == '-') ADVANCE(87);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_export_DASHignore);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(89);
      END_STATE();
    case 89:
      if (lookahead == 'c') ADVANCE(90);
      END_STATE();
    case 90:
      if (lookahead == 'o') ADVANCE(91);
      END_STATE();
    case 91:
      if (lookahead == 'd') ADVANCE(92);
      END_STATE();
    case 92:
      if (lookahead == 'i') ADVANCE(93);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(94);
      END_STATE();
    case 94:
      if (lookahead == 'g') ADVANCE(95);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_working_DASHtree_DASHencoding);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 62},
  [2] = {.lex_state = 62},
  [3] = {.lex_state = 62},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 62},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 8},
  [11] = {.lex_state = 8},
  [12] = {.lex_state = 8},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 8},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 8},
  [17] = {.lex_state = 62},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 8},
  [22] = {.lex_state = 62},
  [23] = {.lex_state = 8},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 9},
  [28] = {.lex_state = 7},
  [29] = {.lex_state = 7},
  [30] = {.lex_state = 7},
  [31] = {.lex_state = 7},
  [32] = {.lex_state = 9},
  [33] = {.lex_state = 7},
  [34] = {.lex_state = 7},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 9},
  [38] = {.lex_state = 7},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 7},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 7},
  [45] = {.lex_state = 7},
  [46] = {.lex_state = 7},
  [47] = {.lex_state = 7},
  [48] = {.lex_state = 7},
  [49] = {.lex_state = 7},
  [50] = {.lex_state = 5},
  [51] = {.lex_state = 7},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 7},
  [56] = {.lex_state = 7},
  [57] = {.lex_state = 7},
  [58] = {.lex_state = 7},
  [59] = {.lex_state = 8},
  [60] = {.lex_state = 8},
  [61] = {.lex_state = 6},
  [62] = {.lex_state = 8},
  [63] = {.lex_state = 8},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 7},
  [67] = {.lex_state = 13},
  [68] = {.lex_state = 7},
  [69] = {.lex_state = 7},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 62},
  [72] = {.lex_state = 26},
  [73] = {.lex_state = 62},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 62},
  [76] = {.lex_state = 62},
  [77] = {.lex_state = 62},
  [78] = {.lex_state = 62},
  [79] = {.lex_state = 62},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 62},
  [82] = {.lex_state = 62},
  [83] = {.lex_state = 62},
  [84] = {.lex_state = 62},
  [85] = {.lex_state = 62},
  [86] = {.lex_state = 62},
  [87] = {.lex_state = 62},
  [88] = {.lex_state = 62},
  [89] = {.lex_state = 62},
  [90] = {.lex_state = 62},
  [91] = {.lex_state = 62},
  [92] = {.lex_state = 62},
  [93] = {.lex_state = 62},
  [94] = {.lex_state = 62},
  [95] = {.lex_state = 62},
  [96] = {.lex_state = 62},
  [97] = {.lex_state = 62},
  [98] = {.lex_state = 62},
  [99] = {.lex_state = 62},
  [100] = {.lex_state = 62},
  [101] = {.lex_state = 62},
  [102] = {.lex_state = 62},
  [103] = {.lex_state = 62},
  [104] = {.lex_state = 62},
  [105] = {.lex_state = 62},
  [106] = {.lex_state = 62},
  [107] = {.lex_state = 62},
  [108] = {.lex_state = 2},
  [109] = {.lex_state = 62},
  [110] = {.lex_state = 62},
  [111] = {.lex_state = 62},
  [112] = {.lex_state = 62},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 62},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_attr_name] = ACTIONS(1),
    [aux_sym__line_token1] = ACTIONS(1),
    [aux_sym__line_token2] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym__quoted_pattern_token1] = ACTIONS(1),
    [sym__pattern_char] = ACTIONS(1),
    [sym_escaped_char] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [aux_sym__class_char_token1] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [sym_dir_sep] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_text] = ACTIONS(1),
    [anon_sym_eol] = ACTIONS(1),
    [anon_sym_crlf] = ACTIONS(1),
    [anon_sym_working_DASHtree_DASHencoding] = ACTIONS(1),
    [anon_sym_ident] = ACTIONS(1),
    [anon_sym_filter] = ACTIONS(1),
    [anon_sym_diff] = ACTIONS(1),
    [anon_sym_merge] = ACTIONS(1),
    [anon_sym_whitespace] = ACTIONS(1),
    [anon_sym_export_DASHignore] = ACTIONS(1),
    [anon_sym_export_DASHsubst] = ACTIONS(1),
    [anon_sym_delta] = ACTIONS(1),
    [anon_sym_encoding] = ACTIONS(1),
    [anon_sym_binary] = ACTIONS(1),
  },
  [1] = {
    [sym_file] = STATE(113),
    [sym__line] = STATE(2),
    [sym__attr_list] = STATE(114),
    [sym_pattern] = STATE(93),
    [aux_sym__pattern] = STATE(29),
    [sym_quoted_pattern] = STATE(93),
    [sym_range_notation] = STATE(29),
    [sym_wildcard] = STATE(29),
    [sym_macro_def] = STATE(114),
    [aux_sym_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym__line_token1] = ACTIONS(5),
    [aux_sym__line_token2] = ACTIONS(7),
    [anon_sym_BANG] = ACTIONS(9),
    [anon_sym_BSLASH] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym__pattern_char] = ACTIONS(11),
    [sym_escaped_char] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_QMARK] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_STAR_STAR] = ACTIONS(19),
    [sym_dir_sep] = ACTIONS(23),
    [anon_sym_LBRACKattr_RBRACK] = ACTIONS(25),
    [sym_comment] = ACTIONS(27),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 17,
    ACTIONS(5), 1,
      aux_sym__line_token1,
    ACTIONS(9), 1,
      anon_sym_BANG,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym_escaped_char,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      sym_dir_sep,
    ACTIONS(25), 1,
      anon_sym_LBRACKattr_RBRACK,
    ACTIONS(27), 1,
      sym_comment,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      aux_sym__line_token2,
    ACTIONS(11), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(19), 2,
      anon_sym_QMARK,
      anon_sym_STAR_STAR,
    STATE(3), 2,
      sym__line,
      aux_sym_file_repeat1,
    STATE(93), 2,
      sym_pattern,
      sym_quoted_pattern,
    STATE(114), 2,
      sym__attr_list,
      sym_macro_def,
    STATE(29), 3,
      aux_sym__pattern,
      sym_range_notation,
      sym_wildcard,
  [59] = 17,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      aux_sym__line_token1,
    ACTIONS(38), 1,
      aux_sym__line_token2,
    ACTIONS(41), 1,
      anon_sym_BANG,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(50), 1,
      sym_escaped_char,
    ACTIONS(53), 1,
      anon_sym_LBRACK,
    ACTIONS(59), 1,
      anon_sym_STAR,
    ACTIONS(62), 1,
      sym_dir_sep,
    ACTIONS(65), 1,
      anon_sym_LBRACKattr_RBRACK,
    ACTIONS(68), 1,
      sym_comment,
    ACTIONS(44), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(56), 2,
      anon_sym_QMARK,
      anon_sym_STAR_STAR,
    STATE(3), 2,
      sym__line,
      aux_sym_file_repeat1,
    STATE(93), 2,
      sym_pattern,
      sym_quoted_pattern,
    STATE(114), 2,
      sym__attr_list,
      sym_macro_def,
    STATE(29), 3,
      aux_sym__pattern,
      sym_range_notation,
      sym_wildcard,
  [118] = 8,
    ACTIONS(71), 1,
      sym_attr_name,
    ACTIONS(73), 1,
      aux_sym__line_token2,
    ACTIONS(75), 1,
      anon_sym_BANG,
    ACTIONS(77), 1,
      anon_sym_DASH,
    STATE(80), 1,
      sym_builtin_attr,
    STATE(90), 1,
      sym_attribute,
    STATE(87), 2,
      sym__prefixed_attr,
      sym__attr_with_value,
    ACTIONS(79), 14,
      anon_sym_text,
      anon_sym_eol,
      anon_sym_crlf,
      anon_sym_working_DASHtree_DASHencoding,
      anon_sym_ident,
      anon_sym_filter,
      anon_sym_diff,
      anon_sym_merge,
      anon_sym_whitespace,
      anon_sym_export_DASHignore,
      anon_sym_export_DASHsubst,
      anon_sym_delta,
      anon_sym_encoding,
      anon_sym_binary,
  [157] = 8,
    ACTIONS(71), 1,
      sym_attr_name,
    ACTIONS(75), 1,
      anon_sym_BANG,
    ACTIONS(77), 1,
      anon_sym_DASH,
    ACTIONS(81), 1,
      aux_sym__line_token2,
    STATE(80), 1,
      sym_builtin_attr,
    STATE(90), 1,
      sym_attribute,
    STATE(87), 2,
      sym__prefixed_attr,
      sym__attr_with_value,
    ACTIONS(79), 14,
      anon_sym_text,
      anon_sym_eol,
      anon_sym_crlf,
      anon_sym_working_DASHtree_DASHencoding,
      anon_sym_ident,
      anon_sym_filter,
      anon_sym_diff,
      anon_sym_merge,
      anon_sym_whitespace,
      anon_sym_export_DASHignore,
      anon_sym_export_DASHsubst,
      anon_sym_delta,
      anon_sym_encoding,
      anon_sym_binary,
  [196] = 7,
    ACTIONS(71), 1,
      sym_attr_name,
    ACTIONS(75), 1,
      anon_sym_BANG,
    ACTIONS(77), 1,
      anon_sym_DASH,
    STATE(80), 1,
      sym_builtin_attr,
    STATE(90), 1,
      sym_attribute,
    STATE(87), 2,
      sym__prefixed_attr,
      sym__attr_with_value,
    ACTIONS(79), 14,
      anon_sym_text,
      anon_sym_eol,
      anon_sym_crlf,
      anon_sym_working_DASHtree_DASHencoding,
      anon_sym_ident,
      anon_sym_filter,
      anon_sym_diff,
      anon_sym_merge,
      anon_sym_whitespace,
      anon_sym_export_DASHignore,
      anon_sym_export_DASHsubst,
      anon_sym_delta,
      anon_sym_encoding,
      anon_sym_binary,
  [232] = 14,
    ACTIONS(9), 1,
      anon_sym_BANG,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym_escaped_char,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      sym_dir_sep,
    ACTIONS(25), 1,
      anon_sym_LBRACKattr_RBRACK,
    ACTIONS(83), 1,
      aux_sym__line_token2,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(11), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(19), 2,
      anon_sym_QMARK,
      anon_sym_STAR_STAR,
    STATE(93), 2,
      sym_pattern,
      sym_quoted_pattern,
    STATE(110), 2,
      sym__attr_list,
      sym_macro_def,
    STATE(29), 3,
      aux_sym__pattern,
      sym_range_notation,
      sym_wildcard,
  [281] = 8,
    ACTIONS(89), 1,
      sym__special_char,
    STATE(59), 1,
      sym__class_char,
    ACTIONS(87), 2,
      anon_sym_BANG,
      anon_sym_CARET,
    ACTIONS(93), 2,
      anon_sym_DASH,
      sym_character_class,
    ACTIONS(95), 2,
      aux_sym__class_char_token1,
      aux_sym__class_char_token2,
    STATE(62), 2,
      sym__char_code,
      sym__unicode_code,
    STATE(12), 3,
      sym_ansi_c_escape,
      sym_class_range,
      aux_sym_range_notation_repeat1,
    ACTIONS(91), 4,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
  [315] = 8,
    ACTIONS(89), 1,
      sym__special_char,
    STATE(59), 1,
      sym__class_char,
    ACTIONS(95), 2,
      aux_sym__class_char_token1,
      aux_sym__class_char_token2,
    ACTIONS(97), 2,
      anon_sym_BANG,
      anon_sym_CARET,
    ACTIONS(99), 2,
      anon_sym_DASH,
      sym_character_class,
    STATE(62), 2,
      sym__char_code,
      sym__unicode_code,
    STATE(16), 3,
      sym_ansi_c_escape,
      sym_class_range,
      aux_sym_range_notation_repeat1,
    ACTIONS(91), 4,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
  [349] = 8,
    ACTIONS(101), 1,
      sym__special_char,
    ACTIONS(110), 1,
      anon_sym_RBRACK,
    STATE(59), 1,
      sym__class_char,
    ACTIONS(107), 2,
      anon_sym_DASH,
      sym_character_class,
    ACTIONS(112), 2,
      aux_sym__class_char_token1,
      aux_sym__class_char_token2,
    STATE(62), 2,
      sym__char_code,
      sym__unicode_code,
    STATE(10), 3,
      sym_ansi_c_escape,
      sym_class_range,
      aux_sym_range_notation_repeat1,
    ACTIONS(104), 4,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
  [382] = 8,
    ACTIONS(89), 1,
      sym__special_char,
    ACTIONS(117), 1,
      anon_sym_RBRACK,
    STATE(59), 1,
      sym__class_char,
    ACTIONS(95), 2,
      aux_sym__class_char_token1,
      aux_sym__class_char_token2,
    ACTIONS(115), 2,
      anon_sym_DASH,
      sym_character_class,
    STATE(62), 2,
      sym__char_code,
      sym__unicode_code,
    STATE(10), 3,
      sym_ansi_c_escape,
      sym_class_range,
      aux_sym_range_notation_repeat1,
    ACTIONS(91), 4,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
  [415] = 8,
    ACTIONS(89), 1,
      sym__special_char,
    ACTIONS(119), 1,
      anon_sym_RBRACK,
    STATE(59), 1,
      sym__class_char,
    ACTIONS(95), 2,
      aux_sym__class_char_token1,
      aux_sym__class_char_token2,
    ACTIONS(115), 2,
      anon_sym_DASH,
      sym_character_class,
    STATE(62), 2,
      sym__char_code,
      sym__unicode_code,
    STATE(10), 3,
      sym_ansi_c_escape,
      sym_class_range,
      aux_sym_range_notation_repeat1,
    ACTIONS(91), 4,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
  [448] = 3,
    ACTIONS(121), 1,
      sym_attr_name,
    STATE(91), 1,
      sym_builtin_attr,
    ACTIONS(79), 14,
      anon_sym_text,
      anon_sym_eol,
      anon_sym_crlf,
      anon_sym_working_DASHtree_DASHencoding,
      anon_sym_ident,
      anon_sym_filter,
      anon_sym_diff,
      anon_sym_merge,
      anon_sym_whitespace,
      anon_sym_export_DASHignore,
      anon_sym_export_DASHsubst,
      anon_sym_delta,
      anon_sym_encoding,
      anon_sym_binary,
  [471] = 8,
    ACTIONS(89), 1,
      sym__special_char,
    ACTIONS(123), 1,
      anon_sym_RBRACK,
    STATE(59), 1,
      sym__class_char,
    ACTIONS(95), 2,
      aux_sym__class_char_token1,
      aux_sym__class_char_token2,
    ACTIONS(115), 2,
      anon_sym_DASH,
      sym_character_class,
    STATE(62), 2,
      sym__char_code,
      sym__unicode_code,
    STATE(10), 3,
      sym_ansi_c_escape,
      sym_class_range,
      aux_sym_range_notation_repeat1,
    ACTIONS(91), 4,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
  [504] = 3,
    ACTIONS(125), 1,
      sym_attr_name,
    STATE(89), 1,
      sym_builtin_attr,
    ACTIONS(79), 14,
      anon_sym_text,
      anon_sym_eol,
      anon_sym_crlf,
      anon_sym_working_DASHtree_DASHencoding,
      anon_sym_ident,
      anon_sym_filter,
      anon_sym_diff,
      anon_sym_merge,
      anon_sym_whitespace,
      anon_sym_export_DASHignore,
      anon_sym_export_DASHsubst,
      anon_sym_delta,
      anon_sym_encoding,
      anon_sym_binary,
  [527] = 8,
    ACTIONS(89), 1,
      sym__special_char,
    ACTIONS(127), 1,
      anon_sym_RBRACK,
    STATE(59), 1,
      sym__class_char,
    ACTIONS(95), 2,
      aux_sym__class_char_token1,
      aux_sym__class_char_token2,
    ACTIONS(115), 2,
      anon_sym_DASH,
      sym_character_class,
    STATE(62), 2,
      sym__char_code,
      sym__unicode_code,
    STATE(10), 3,
      sym_ansi_c_escape,
      sym_class_range,
      aux_sym_range_notation_repeat1,
    ACTIONS(91), 4,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
  [560] = 2,
    ACTIONS(131), 5,
      anon_sym_BSLASH,
      sym__pattern_char,
      anon_sym_LBRACK,
      anon_sym_STAR,
      sym_comment,
    ACTIONS(129), 10,
      ts_builtin_sym_end,
      aux_sym__line_token1,
      aux_sym__line_token2,
      anon_sym_BANG,
      anon_sym_DQUOTE,
      sym_escaped_char,
      anon_sym_QMARK,
      anon_sym_STAR_STAR,
      sym_dir_sep,
      anon_sym_LBRACKattr_RBRACK,
  [580] = 9,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      sym_escaped_char,
    ACTIONS(139), 1,
      sym__special_char,
    ACTIONS(143), 1,
      sym_dir_sep,
    STATE(75), 1,
      aux_sym_pattern_repeat1,
    ACTIONS(133), 2,
      anon_sym_BSLASH,
      aux_sym__quoted_pattern_token1,
    STATE(26), 2,
      aux_sym__quoted_pattern,
      sym_ansi_c_escape,
    STATE(61), 2,
      sym__char_code,
      sym__unicode_code,
    ACTIONS(141), 4,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
  [614] = 9,
    ACTIONS(137), 1,
      sym_escaped_char,
    ACTIONS(139), 1,
      sym__special_char,
    ACTIONS(145), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      sym_dir_sep,
    STATE(77), 1,
      aux_sym_pattern_repeat1,
    ACTIONS(133), 2,
      anon_sym_BSLASH,
      aux_sym__quoted_pattern_token1,
    STATE(26), 2,
      aux_sym__quoted_pattern,
      sym_ansi_c_escape,
    STATE(61), 2,
      sym__char_code,
      sym__unicode_code,
    ACTIONS(141), 4,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
  [648] = 9,
    ACTIONS(137), 1,
      sym_escaped_char,
    ACTIONS(139), 1,
      sym__special_char,
    ACTIONS(149), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      sym_dir_sep,
    STATE(85), 1,
      aux_sym_pattern_repeat1,
    ACTIONS(133), 2,
      anon_sym_BSLASH,
      aux_sym__quoted_pattern_token1,
    STATE(26), 2,
      aux_sym__quoted_pattern,
      sym_ansi_c_escape,
    STATE(61), 2,
      sym__char_code,
      sym__unicode_code,
    ACTIONS(141), 4,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
  [682] = 7,
    ACTIONS(89), 1,
      sym__special_char,
    STATE(59), 1,
      sym__class_char,
    ACTIONS(95), 2,
      aux_sym__class_char_token1,
      aux_sym__class_char_token2,
    ACTIONS(153), 2,
      anon_sym_DASH,
      sym_character_class,
    STATE(62), 2,
      sym__char_code,
      sym__unicode_code,
    STATE(14), 3,
      sym_ansi_c_escape,
      sym_class_range,
      aux_sym_range_notation_repeat1,
    ACTIONS(91), 4,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
  [712] = 2,
    ACTIONS(157), 5,
      anon_sym_BSLASH,
      sym__pattern_char,
      anon_sym_LBRACK,
      anon_sym_STAR,
      sym_comment,
    ACTIONS(155), 10,
      ts_builtin_sym_end,
      aux_sym__line_token1,
      aux_sym__line_token2,
      anon_sym_BANG,
      anon_sym_DQUOTE,
      sym_escaped_char,
      anon_sym_QMARK,
      anon_sym_STAR_STAR,
      sym_dir_sep,
      anon_sym_LBRACKattr_RBRACK,
  [732] = 7,
    ACTIONS(89), 1,
      sym__special_char,
    STATE(59), 1,
      sym__class_char,
    ACTIONS(95), 2,
      aux_sym__class_char_token1,
      aux_sym__class_char_token2,
    ACTIONS(159), 2,
      anon_sym_DASH,
      sym_character_class,
    STATE(62), 2,
      sym__char_code,
      sym__unicode_code,
    STATE(11), 3,
      sym_ansi_c_escape,
      sym_class_range,
      aux_sym_range_notation_repeat1,
    ACTIONS(91), 4,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
  [762] = 9,
    ACTIONS(137), 1,
      sym_escaped_char,
    ACTIONS(139), 1,
      sym__special_char,
    ACTIONS(161), 1,
      anon_sym_DQUOTE,
    ACTIONS(163), 1,
      sym_dir_sep,
    STATE(86), 1,
      aux_sym_pattern_repeat1,
    ACTIONS(133), 2,
      anon_sym_BSLASH,
      aux_sym__quoted_pattern_token1,
    STATE(26), 2,
      aux_sym__quoted_pattern,
      sym_ansi_c_escape,
    STATE(61), 2,
      sym__char_code,
      sym__unicode_code,
    ACTIONS(141), 4,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
  [796] = 8,
    ACTIONS(139), 1,
      sym__special_char,
    ACTIONS(165), 1,
      anon_sym_BANG,
    ACTIONS(169), 1,
      sym_escaped_char,
    ACTIONS(171), 1,
      sym_dir_sep,
    ACTIONS(167), 2,
      anon_sym_BSLASH,
      aux_sym__quoted_pattern_token1,
    STATE(20), 2,
      aux_sym__quoted_pattern,
      sym_ansi_c_escape,
    STATE(61), 2,
      sym__char_code,
      sym__unicode_code,
    ACTIONS(141), 4,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
  [827] = 7,
    ACTIONS(178), 1,
      sym_escaped_char,
    ACTIONS(181), 1,
      sym__special_char,
    ACTIONS(173), 2,
      anon_sym_BSLASH,
      aux_sym__quoted_pattern_token1,
    ACTIONS(176), 2,
      anon_sym_DQUOTE,
      sym_dir_sep,
    STATE(26), 2,
      aux_sym__quoted_pattern,
      sym_ansi_c_escape,
    STATE(61), 2,
      sym__char_code,
      sym__unicode_code,
    ACTIONS(184), 4,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
  [856] = 7,
    ACTIONS(139), 1,
      sym__special_char,
    ACTIONS(189), 1,
      sym_escaped_char,
    ACTIONS(191), 1,
      sym_dir_sep,
    ACTIONS(187), 2,
      anon_sym_BSLASH,
      aux_sym__quoted_pattern_token1,
    STATE(19), 2,
      aux_sym__quoted_pattern,
      sym_ansi_c_escape,
    STATE(61), 2,
      sym__char_code,
      sym__unicode_code,
    ACTIONS(141), 4,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
  [884] = 9,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(193), 1,
      aux_sym__line_token1,
    ACTIONS(197), 1,
      sym_escaped_char,
    ACTIONS(199), 1,
      anon_sym_LBRACK,
    ACTIONS(201), 1,
      sym_dir_sep,
    STATE(82), 1,
      aux_sym_pattern_repeat1,
    ACTIONS(19), 2,
      anon_sym_QMARK,
      anon_sym_STAR_STAR,
    ACTIONS(195), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    STATE(34), 3,
      aux_sym__pattern,
      sym_range_notation,
      sym_wildcard,
  [916] = 9,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(197), 1,
      sym_escaped_char,
    ACTIONS(199), 1,
      anon_sym_LBRACK,
    ACTIONS(203), 1,
      aux_sym__line_token1,
    ACTIONS(205), 1,
      sym_dir_sep,
    STATE(78), 1,
      aux_sym_pattern_repeat1,
    ACTIONS(19), 2,
      anon_sym_QMARK,
      anon_sym_STAR_STAR,
    ACTIONS(195), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    STATE(34), 3,
      aux_sym__pattern,
      sym_range_notation,
      sym_wildcard,
  [948] = 9,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(197), 1,
      sym_escaped_char,
    ACTIONS(199), 1,
      anon_sym_LBRACK,
    ACTIONS(207), 1,
      aux_sym__line_token1,
    ACTIONS(209), 1,
      sym_dir_sep,
    STATE(83), 1,
      aux_sym_pattern_repeat1,
    ACTIONS(19), 2,
      anon_sym_QMARK,
      anon_sym_STAR_STAR,
    ACTIONS(195), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    STATE(34), 3,
      aux_sym__pattern,
      sym_range_notation,
      sym_wildcard,
  [980] = 9,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(197), 1,
      sym_escaped_char,
    ACTIONS(199), 1,
      anon_sym_LBRACK,
    ACTIONS(211), 1,
      aux_sym__line_token1,
    ACTIONS(213), 1,
      sym_dir_sep,
    STATE(79), 1,
      aux_sym_pattern_repeat1,
    ACTIONS(19), 2,
      anon_sym_QMARK,
      anon_sym_STAR_STAR,
    ACTIONS(195), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    STATE(34), 3,
      aux_sym__pattern,
      sym_range_notation,
      sym_wildcard,
  [1012] = 6,
    ACTIONS(139), 1,
      sym__special_char,
    ACTIONS(217), 1,
      sym_escaped_char,
    ACTIONS(215), 2,
      anon_sym_BSLASH,
      aux_sym__quoted_pattern_token1,
    STATE(24), 2,
      aux_sym__quoted_pattern,
      sym_ansi_c_escape,
    STATE(61), 2,
      sym__char_code,
      sym__unicode_code,
    ACTIONS(141), 4,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
  [1037] = 7,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(197), 1,
      sym_escaped_char,
    ACTIONS(199), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 2,
      anon_sym_QMARK,
      anon_sym_STAR_STAR,
    ACTIONS(195), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(219), 2,
      aux_sym__line_token1,
      sym_dir_sep,
    STATE(34), 3,
      aux_sym__pattern,
      sym_range_notation,
      sym_wildcard,
  [1064] = 7,
    ACTIONS(226), 1,
      sym_escaped_char,
    ACTIONS(229), 1,
      anon_sym_LBRACK,
    ACTIONS(235), 1,
      anon_sym_STAR,
    ACTIONS(221), 2,
      aux_sym__line_token1,
      sym_dir_sep,
    ACTIONS(223), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(232), 2,
      anon_sym_QMARK,
      anon_sym_STAR_STAR,
    STATE(34), 3,
      aux_sym__pattern,
      sym_range_notation,
      sym_wildcard,
  [1091] = 7,
    ACTIONS(240), 1,
      sym_escaped_char,
    ACTIONS(242), 1,
      anon_sym_LBRACK,
    ACTIONS(246), 1,
      anon_sym_STAR,
    ACTIONS(219), 2,
      anon_sym_DQUOTE,
      sym_dir_sep,
    ACTIONS(238), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(244), 2,
      anon_sym_QMARK,
      anon_sym_STAR_STAR,
    STATE(36), 3,
      aux_sym__pattern,
      sym_range_notation,
      sym_wildcard,
  [1118] = 7,
    ACTIONS(251), 1,
      sym_escaped_char,
    ACTIONS(254), 1,
      anon_sym_LBRACK,
    ACTIONS(260), 1,
      anon_sym_STAR,
    ACTIONS(221), 2,
      anon_sym_DQUOTE,
      sym_dir_sep,
    ACTIONS(248), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(257), 2,
      anon_sym_QMARK,
      anon_sym_STAR_STAR,
    STATE(36), 3,
      aux_sym__pattern,
      sym_range_notation,
      sym_wildcard,
  [1145] = 6,
    ACTIONS(139), 1,
      sym__special_char,
    ACTIONS(265), 1,
      sym_escaped_char,
    ACTIONS(263), 2,
      anon_sym_BSLASH,
      aux_sym__quoted_pattern_token1,
    STATE(18), 2,
      aux_sym__quoted_pattern,
      sym_ansi_c_escape,
    STATE(61), 2,
      sym__char_code,
      sym__unicode_code,
    ACTIONS(141), 4,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
  [1170] = 7,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(199), 1,
      anon_sym_LBRACK,
    ACTIONS(269), 1,
      sym_escaped_char,
    ACTIONS(271), 1,
      sym_dir_sep,
    ACTIONS(19), 2,
      anon_sym_QMARK,
      anon_sym_STAR_STAR,
    ACTIONS(267), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    STATE(30), 3,
      aux_sym__pattern,
      sym_range_notation,
      sym_wildcard,
  [1196] = 7,
    ACTIONS(242), 1,
      anon_sym_LBRACK,
    ACTIONS(246), 1,
      anon_sym_STAR,
    ACTIONS(275), 1,
      anon_sym_DQUOTE,
    ACTIONS(277), 1,
      sym_escaped_char,
    ACTIONS(244), 2,
      anon_sym_QMARK,
      anon_sym_STAR_STAR,
    ACTIONS(273), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    STATE(35), 3,
      aux_sym__pattern,
      sym_range_notation,
      sym_wildcard,
  [1222] = 7,
    ACTIONS(242), 1,
      anon_sym_LBRACK,
    ACTIONS(246), 1,
      anon_sym_STAR,
    ACTIONS(277), 1,
      sym_escaped_char,
    ACTIONS(279), 1,
      anon_sym_DQUOTE,
    ACTIONS(244), 2,
      anon_sym_QMARK,
      anon_sym_STAR_STAR,
    ACTIONS(273), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    STATE(35), 3,
      aux_sym__pattern,
      sym_range_notation,
      sym_wildcard,
  [1248] = 7,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(199), 1,
      anon_sym_LBRACK,
    ACTIONS(281), 1,
      aux_sym__line_token1,
    ACTIONS(285), 1,
      sym_escaped_char,
    ACTIONS(19), 2,
      anon_sym_QMARK,
      anon_sym_STAR_STAR,
    ACTIONS(283), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    STATE(33), 3,
      aux_sym__pattern,
      sym_range_notation,
      sym_wildcard,
  [1274] = 7,
    ACTIONS(242), 1,
      anon_sym_LBRACK,
    ACTIONS(246), 1,
      anon_sym_STAR,
    ACTIONS(277), 1,
      sym_escaped_char,
    ACTIONS(287), 1,
      anon_sym_DQUOTE,
    ACTIONS(244), 2,
      anon_sym_QMARK,
      anon_sym_STAR_STAR,
    ACTIONS(273), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    STATE(35), 3,
      aux_sym__pattern,
      sym_range_notation,
      sym_wildcard,
  [1300] = 7,
    ACTIONS(242), 1,
      anon_sym_LBRACK,
    ACTIONS(246), 1,
      anon_sym_STAR,
    ACTIONS(277), 1,
      sym_escaped_char,
    ACTIONS(289), 1,
      anon_sym_DQUOTE,
    ACTIONS(244), 2,
      anon_sym_QMARK,
      anon_sym_STAR_STAR,
    ACTIONS(273), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    STATE(35), 3,
      aux_sym__pattern,
      sym_range_notation,
      sym_wildcard,
  [1326] = 7,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(199), 1,
      anon_sym_LBRACK,
    ACTIONS(285), 1,
      sym_escaped_char,
    ACTIONS(291), 1,
      aux_sym__line_token1,
    ACTIONS(19), 2,
      anon_sym_QMARK,
      anon_sym_STAR_STAR,
    ACTIONS(283), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    STATE(33), 3,
      aux_sym__pattern,
      sym_range_notation,
      sym_wildcard,
  [1352] = 7,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(199), 1,
      anon_sym_LBRACK,
    ACTIONS(285), 1,
      sym_escaped_char,
    ACTIONS(293), 1,
      aux_sym__line_token1,
    ACTIONS(19), 2,
      anon_sym_QMARK,
      anon_sym_STAR_STAR,
    ACTIONS(283), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    STATE(33), 3,
      aux_sym__pattern,
      sym_range_notation,
      sym_wildcard,
  [1378] = 7,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(199), 1,
      anon_sym_LBRACK,
    ACTIONS(285), 1,
      sym_escaped_char,
    ACTIONS(295), 1,
      aux_sym__line_token1,
    ACTIONS(19), 2,
      anon_sym_QMARK,
      anon_sym_STAR_STAR,
    ACTIONS(283), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    STATE(33), 3,
      aux_sym__pattern,
      sym_range_notation,
      sym_wildcard,
  [1404] = 7,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(199), 1,
      anon_sym_LBRACK,
    ACTIONS(285), 1,
      sym_escaped_char,
    ACTIONS(297), 1,
      aux_sym__line_token1,
    ACTIONS(19), 2,
      anon_sym_QMARK,
      anon_sym_STAR_STAR,
    ACTIONS(283), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    STATE(33), 3,
      aux_sym__pattern,
      sym_range_notation,
      sym_wildcard,
  [1430] = 7,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(199), 1,
      anon_sym_LBRACK,
    ACTIONS(285), 1,
      sym_escaped_char,
    ACTIONS(299), 1,
      aux_sym__line_token1,
    ACTIONS(19), 2,
      anon_sym_QMARK,
      anon_sym_STAR_STAR,
    ACTIONS(283), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    STATE(33), 3,
      aux_sym__pattern,
      sym_range_notation,
      sym_wildcard,
  [1456] = 7,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(199), 1,
      anon_sym_LBRACK,
    ACTIONS(285), 1,
      sym_escaped_char,
    ACTIONS(301), 1,
      aux_sym__line_token1,
    ACTIONS(19), 2,
      anon_sym_QMARK,
      anon_sym_STAR_STAR,
    ACTIONS(283), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    STATE(33), 3,
      aux_sym__pattern,
      sym_range_notation,
      sym_wildcard,
  [1482] = 7,
    ACTIONS(242), 1,
      anon_sym_LBRACK,
    ACTIONS(246), 1,
      anon_sym_STAR,
    ACTIONS(277), 1,
      sym_escaped_char,
    ACTIONS(303), 1,
      anon_sym_DQUOTE,
    ACTIONS(244), 2,
      anon_sym_QMARK,
      anon_sym_STAR_STAR,
    ACTIONS(273), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    STATE(35), 3,
      aux_sym__pattern,
      sym_range_notation,
      sym_wildcard,
  [1508] = 7,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(199), 1,
      anon_sym_LBRACK,
    ACTIONS(285), 1,
      sym_escaped_char,
    ACTIONS(305), 1,
      aux_sym__line_token1,
    ACTIONS(19), 2,
      anon_sym_QMARK,
      anon_sym_STAR_STAR,
    ACTIONS(283), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    STATE(33), 3,
      aux_sym__pattern,
      sym_range_notation,
      sym_wildcard,
  [1534] = 7,
    ACTIONS(242), 1,
      anon_sym_LBRACK,
    ACTIONS(246), 1,
      anon_sym_STAR,
    ACTIONS(277), 1,
      sym_escaped_char,
    ACTIONS(307), 1,
      anon_sym_DQUOTE,
    ACTIONS(244), 2,
      anon_sym_QMARK,
      anon_sym_STAR_STAR,
    ACTIONS(273), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    STATE(35), 3,
      aux_sym__pattern,
      sym_range_notation,
      sym_wildcard,
  [1560] = 7,
    ACTIONS(242), 1,
      anon_sym_LBRACK,
    ACTIONS(246), 1,
      anon_sym_STAR,
    ACTIONS(277), 1,
      sym_escaped_char,
    ACTIONS(309), 1,
      anon_sym_DQUOTE,
    ACTIONS(244), 2,
      anon_sym_QMARK,
      anon_sym_STAR_STAR,
    ACTIONS(273), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    STATE(35), 3,
      aux_sym__pattern,
      sym_range_notation,
      sym_wildcard,
  [1586] = 7,
    ACTIONS(242), 1,
      anon_sym_LBRACK,
    ACTIONS(246), 1,
      anon_sym_STAR,
    ACTIONS(277), 1,
      sym_escaped_char,
    ACTIONS(311), 1,
      anon_sym_DQUOTE,
    ACTIONS(244), 2,
      anon_sym_QMARK,
      anon_sym_STAR_STAR,
    ACTIONS(273), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    STATE(35), 3,
      aux_sym__pattern,
      sym_range_notation,
      sym_wildcard,
  [1612] = 6,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(199), 1,
      anon_sym_LBRACK,
    ACTIONS(315), 1,
      sym_escaped_char,
    ACTIONS(19), 2,
      anon_sym_QMARK,
      anon_sym_STAR_STAR,
    ACTIONS(313), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    STATE(31), 3,
      aux_sym__pattern,
      sym_range_notation,
      sym_wildcard,
  [1635] = 6,
    ACTIONS(242), 1,
      anon_sym_LBRACK,
    ACTIONS(246), 1,
      anon_sym_STAR,
    ACTIONS(277), 1,
      sym_escaped_char,
    ACTIONS(244), 2,
      anon_sym_QMARK,
      anon_sym_STAR_STAR,
    ACTIONS(273), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    STATE(35), 3,
      aux_sym__pattern,
      sym_range_notation,
      sym_wildcard,
  [1658] = 6,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(199), 1,
      anon_sym_LBRACK,
    ACTIONS(319), 1,
      sym_escaped_char,
    ACTIONS(19), 2,
      anon_sym_QMARK,
      anon_sym_STAR_STAR,
    ACTIONS(317), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    STATE(28), 3,
      aux_sym__pattern,
      sym_range_notation,
      sym_wildcard,
  [1681] = 6,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(199), 1,
      anon_sym_LBRACK,
    ACTIONS(285), 1,
      sym_escaped_char,
    ACTIONS(19), 2,
      anon_sym_QMARK,
      anon_sym_STAR_STAR,
    ACTIONS(283), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    STATE(33), 3,
      aux_sym__pattern,
      sym_range_notation,
      sym_wildcard,
  [1704] = 3,
    ACTIONS(323), 1,
      anon_sym_DASH,
    ACTIONS(325), 2,
      aux_sym__class_char_token1,
      aux_sym__class_char_token2,
    ACTIONS(321), 7,
      sym__special_char,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
      anon_sym_RBRACK,
      sym_character_class,
  [1721] = 2,
    ACTIONS(329), 2,
      aux_sym__class_char_token1,
      aux_sym__class_char_token2,
    ACTIONS(327), 8,
      sym__special_char,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
      anon_sym_DASH,
      anon_sym_RBRACK,
      sym_character_class,
  [1736] = 2,
    ACTIONS(329), 3,
      anon_sym_BSLASH,
      aux_sym__quoted_pattern_token1,
      sym__special_char,
    ACTIONS(327), 7,
      anon_sym_DQUOTE,
      sym_escaped_char,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
      sym_dir_sep,
  [1751] = 3,
    ACTIONS(323), 1,
      anon_sym_DASH,
    ACTIONS(329), 2,
      aux_sym__class_char_token1,
      aux_sym__class_char_token2,
    ACTIONS(327), 7,
      sym__special_char,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
      anon_sym_RBRACK,
      sym_character_class,
  [1768] = 2,
    ACTIONS(333), 2,
      aux_sym__class_char_token1,
      aux_sym__class_char_token2,
    ACTIONS(331), 8,
      sym__special_char,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
      anon_sym_DASH,
      anon_sym_RBRACK,
      sym_character_class,
  [1783] = 2,
    ACTIONS(335), 3,
      anon_sym_BSLASH,
      sym__pattern_char,
      anon_sym_STAR,
    ACTIONS(337), 6,
      anon_sym_DQUOTE,
      sym_escaped_char,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_STAR_STAR,
      sym_dir_sep,
  [1797] = 2,
    ACTIONS(339), 3,
      anon_sym_BSLASH,
      sym__pattern_char,
      anon_sym_STAR,
    ACTIONS(341), 6,
      anon_sym_DQUOTE,
      sym_escaped_char,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_STAR_STAR,
      sym_dir_sep,
  [1811] = 2,
    ACTIONS(345), 3,
      anon_sym_BSLASH,
      sym__pattern_char,
      anon_sym_STAR,
    ACTIONS(343), 6,
      aux_sym__line_token1,
      sym_escaped_char,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_STAR_STAR,
      sym_dir_sep,
  [1825] = 2,
    STATE(63), 3,
      sym__char_code,
      sym__unicode_code,
      sym__class_char,
    ACTIONS(347), 6,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
      aux_sym__class_char_token1,
      aux_sym__class_char_token2,
  [1839] = 2,
    ACTIONS(335), 3,
      anon_sym_BSLASH,
      sym__pattern_char,
      anon_sym_STAR,
    ACTIONS(337), 6,
      aux_sym__line_token1,
      sym_escaped_char,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_STAR_STAR,
      sym_dir_sep,
  [1853] = 2,
    ACTIONS(339), 3,
      anon_sym_BSLASH,
      sym__pattern_char,
      anon_sym_STAR,
    ACTIONS(341), 6,
      aux_sym__line_token1,
      sym_escaped_char,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_STAR_STAR,
      sym_dir_sep,
  [1867] = 2,
    ACTIONS(345), 3,
      anon_sym_BSLASH,
      sym__pattern_char,
      anon_sym_STAR,
    ACTIONS(343), 6,
      anon_sym_DQUOTE,
      sym_escaped_char,
      anon_sym_LBRACK,
      anon_sym_QMARK,
      anon_sym_STAR_STAR,
      sym_dir_sep,
  [1881] = 3,
    ACTIONS(349), 1,
      aux_sym__line_token1,
    ACTIONS(351), 1,
      aux_sym__line_token2,
    STATE(84), 1,
      aux_sym__attr_list_repeat1,
  [1891] = 2,
    ACTIONS(355), 1,
      aux_sym__attr_with_value_token1,
    ACTIONS(353), 2,
      anon_sym_true,
      anon_sym_false,
  [1899] = 3,
    ACTIONS(357), 1,
      anon_sym_DQUOTE,
    ACTIONS(359), 1,
      sym_dir_sep,
    STATE(73), 1,
      aux_sym_pattern_repeat1,
  [1909] = 1,
    ACTIONS(362), 3,
      aux_sym__line_token1,
      aux_sym__line_token2,
      anon_sym_EQ,
  [1915] = 3,
    ACTIONS(364), 1,
      anon_sym_DQUOTE,
    ACTIONS(366), 1,
      sym_dir_sep,
    STATE(73), 1,
      aux_sym_pattern_repeat1,
  [1925] = 3,
    ACTIONS(357), 1,
      aux_sym__line_token1,
    ACTIONS(368), 1,
      sym_dir_sep,
    STATE(76), 1,
      aux_sym_pattern_repeat1,
  [1935] = 3,
    ACTIONS(371), 1,
      anon_sym_DQUOTE,
    ACTIONS(373), 1,
      sym_dir_sep,
    STATE(73), 1,
      aux_sym_pattern_repeat1,
  [1945] = 3,
    ACTIONS(375), 1,
      aux_sym__line_token1,
    ACTIONS(377), 1,
      sym_dir_sep,
    STATE(76), 1,
      aux_sym_pattern_repeat1,
  [1955] = 3,
    ACTIONS(379), 1,
      aux_sym__line_token1,
    ACTIONS(381), 1,
      sym_dir_sep,
    STATE(76), 1,
      aux_sym_pattern_repeat1,
  [1965] = 2,
    ACTIONS(385), 1,
      anon_sym_EQ,
    ACTIONS(383), 2,
      aux_sym__line_token1,
      aux_sym__line_token2,
  [1973] = 3,
    ACTIONS(387), 1,
      aux_sym__line_token1,
    ACTIONS(389), 1,
      aux_sym__line_token2,
    STATE(84), 1,
      aux_sym__attr_list_repeat1,
  [1983] = 3,
    ACTIONS(391), 1,
      aux_sym__line_token1,
    ACTIONS(393), 1,
      sym_dir_sep,
    STATE(76), 1,
      aux_sym_pattern_repeat1,
  [1993] = 3,
    ACTIONS(395), 1,
      aux_sym__line_token1,
    ACTIONS(397), 1,
      sym_dir_sep,
    STATE(76), 1,
      aux_sym_pattern_repeat1,
  [2003] = 3,
    ACTIONS(399), 1,
      aux_sym__line_token1,
    ACTIONS(402), 1,
      aux_sym__line_token2,
    STATE(84), 1,
      aux_sym__attr_list_repeat1,
  [2013] = 3,
    ACTIONS(404), 1,
      anon_sym_DQUOTE,
    ACTIONS(406), 1,
      sym_dir_sep,
    STATE(73), 1,
      aux_sym_pattern_repeat1,
  [2023] = 3,
    ACTIONS(408), 1,
      anon_sym_DQUOTE,
    ACTIONS(410), 1,
      sym_dir_sep,
    STATE(73), 1,
      aux_sym_pattern_repeat1,
  [2033] = 1,
    ACTIONS(412), 2,
      aux_sym__line_token1,
      aux_sym__line_token2,
  [2038] = 1,
    ACTIONS(414), 2,
      aux_sym__line_token1,
      aux_sym__line_token2,
  [2043] = 1,
    ACTIONS(416), 2,
      aux_sym__line_token1,
      aux_sym__line_token2,
  [2048] = 1,
    ACTIONS(402), 2,
      aux_sym__line_token1,
      aux_sym__line_token2,
  [2053] = 1,
    ACTIONS(418), 2,
      aux_sym__line_token1,
      aux_sym__line_token2,
  [2058] = 2,
    ACTIONS(420), 1,
      aux_sym__line_token1,
    STATE(81), 1,
      aux_sym__attr_list_repeat1,
  [2065] = 2,
    ACTIONS(420), 1,
      aux_sym__line_token1,
    STATE(71), 1,
      aux_sym__attr_list_repeat1,
  [2072] = 1,
    ACTIONS(414), 2,
      aux_sym__line_token1,
      aux_sym__line_token2,
  [2077] = 1,
    ACTIONS(422), 1,
      aux_sym__line_token1,
  [2081] = 1,
    ACTIONS(424), 1,
      aux_sym__line_token1,
  [2085] = 1,
    ACTIONS(426), 1,
      aux_sym__line_token1,
  [2089] = 1,
    ACTIONS(428), 1,
      aux_sym__line_token1,
  [2093] = 1,
    ACTIONS(430), 1,
      aux_sym__line_token1,
  [2097] = 1,
    ACTIONS(432), 1,
      aux_sym__line_token1,
  [2101] = 1,
    ACTIONS(434), 1,
      aux_sym__line_token1,
  [2105] = 1,
    ACTIONS(436), 1,
      aux_sym__line_token1,
  [2109] = 1,
    ACTIONS(438), 1,
      aux_sym__line_token1,
  [2113] = 1,
    ACTIONS(440), 1,
      aux_sym__line_token1,
  [2117] = 1,
    ACTIONS(442), 1,
      aux_sym__line_token1,
  [2121] = 1,
    ACTIONS(444), 1,
      aux_sym__line_token1,
  [2125] = 1,
    ACTIONS(446), 1,
      aux_sym__line_token1,
  [2129] = 1,
    ACTIONS(448), 1,
      sym_attr_name,
  [2133] = 1,
    ACTIONS(450), 1,
      aux_sym__line_token1,
  [2137] = 1,
    ACTIONS(452), 1,
      aux_sym__line_token2,
  [2141] = 1,
    ACTIONS(454), 1,
      aux_sym__line_token1,
  [2145] = 1,
    ACTIONS(456), 1,
      aux_sym__line_token1,
  [2149] = 1,
    ACTIONS(458), 1,
      ts_builtin_sym_end,
  [2153] = 1,
    ACTIONS(83), 1,
      aux_sym__line_token2,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 59,
  [SMALL_STATE(4)] = 118,
  [SMALL_STATE(5)] = 157,
  [SMALL_STATE(6)] = 196,
  [SMALL_STATE(7)] = 232,
  [SMALL_STATE(8)] = 281,
  [SMALL_STATE(9)] = 315,
  [SMALL_STATE(10)] = 349,
  [SMALL_STATE(11)] = 382,
  [SMALL_STATE(12)] = 415,
  [SMALL_STATE(13)] = 448,
  [SMALL_STATE(14)] = 471,
  [SMALL_STATE(15)] = 504,
  [SMALL_STATE(16)] = 527,
  [SMALL_STATE(17)] = 560,
  [SMALL_STATE(18)] = 580,
  [SMALL_STATE(19)] = 614,
  [SMALL_STATE(20)] = 648,
  [SMALL_STATE(21)] = 682,
  [SMALL_STATE(22)] = 712,
  [SMALL_STATE(23)] = 732,
  [SMALL_STATE(24)] = 762,
  [SMALL_STATE(25)] = 796,
  [SMALL_STATE(26)] = 827,
  [SMALL_STATE(27)] = 856,
  [SMALL_STATE(28)] = 884,
  [SMALL_STATE(29)] = 916,
  [SMALL_STATE(30)] = 948,
  [SMALL_STATE(31)] = 980,
  [SMALL_STATE(32)] = 1012,
  [SMALL_STATE(33)] = 1037,
  [SMALL_STATE(34)] = 1064,
  [SMALL_STATE(35)] = 1091,
  [SMALL_STATE(36)] = 1118,
  [SMALL_STATE(37)] = 1145,
  [SMALL_STATE(38)] = 1170,
  [SMALL_STATE(39)] = 1196,
  [SMALL_STATE(40)] = 1222,
  [SMALL_STATE(41)] = 1248,
  [SMALL_STATE(42)] = 1274,
  [SMALL_STATE(43)] = 1300,
  [SMALL_STATE(44)] = 1326,
  [SMALL_STATE(45)] = 1352,
  [SMALL_STATE(46)] = 1378,
  [SMALL_STATE(47)] = 1404,
  [SMALL_STATE(48)] = 1430,
  [SMALL_STATE(49)] = 1456,
  [SMALL_STATE(50)] = 1482,
  [SMALL_STATE(51)] = 1508,
  [SMALL_STATE(52)] = 1534,
  [SMALL_STATE(53)] = 1560,
  [SMALL_STATE(54)] = 1586,
  [SMALL_STATE(55)] = 1612,
  [SMALL_STATE(56)] = 1635,
  [SMALL_STATE(57)] = 1658,
  [SMALL_STATE(58)] = 1681,
  [SMALL_STATE(59)] = 1704,
  [SMALL_STATE(60)] = 1721,
  [SMALL_STATE(61)] = 1736,
  [SMALL_STATE(62)] = 1751,
  [SMALL_STATE(63)] = 1768,
  [SMALL_STATE(64)] = 1783,
  [SMALL_STATE(65)] = 1797,
  [SMALL_STATE(66)] = 1811,
  [SMALL_STATE(67)] = 1825,
  [SMALL_STATE(68)] = 1839,
  [SMALL_STATE(69)] = 1853,
  [SMALL_STATE(70)] = 1867,
  [SMALL_STATE(71)] = 1881,
  [SMALL_STATE(72)] = 1891,
  [SMALL_STATE(73)] = 1899,
  [SMALL_STATE(74)] = 1909,
  [SMALL_STATE(75)] = 1915,
  [SMALL_STATE(76)] = 1925,
  [SMALL_STATE(77)] = 1935,
  [SMALL_STATE(78)] = 1945,
  [SMALL_STATE(79)] = 1955,
  [SMALL_STATE(80)] = 1965,
  [SMALL_STATE(81)] = 1973,
  [SMALL_STATE(82)] = 1983,
  [SMALL_STATE(83)] = 1993,
  [SMALL_STATE(84)] = 2003,
  [SMALL_STATE(85)] = 2013,
  [SMALL_STATE(86)] = 2023,
  [SMALL_STATE(87)] = 2033,
  [SMALL_STATE(88)] = 2038,
  [SMALL_STATE(89)] = 2043,
  [SMALL_STATE(90)] = 2048,
  [SMALL_STATE(91)] = 2053,
  [SMALL_STATE(92)] = 2058,
  [SMALL_STATE(93)] = 2065,
  [SMALL_STATE(94)] = 2072,
  [SMALL_STATE(95)] = 2077,
  [SMALL_STATE(96)] = 2081,
  [SMALL_STATE(97)] = 2085,
  [SMALL_STATE(98)] = 2089,
  [SMALL_STATE(99)] = 2093,
  [SMALL_STATE(100)] = 2097,
  [SMALL_STATE(101)] = 2101,
  [SMALL_STATE(102)] = 2105,
  [SMALL_STATE(103)] = 2109,
  [SMALL_STATE(104)] = 2113,
  [SMALL_STATE(105)] = 2117,
  [SMALL_STATE(106)] = 2121,
  [SMALL_STATE(107)] = 2125,
  [SMALL_STATE(108)] = 2129,
  [SMALL_STATE(109)] = 2133,
  [SMALL_STATE(110)] = 2137,
  [SMALL_STATE(111)] = 2141,
  [SMALL_STATE(112)] = 2145,
  [SMALL_STATE(113)] = 2149,
  [SMALL_STATE(114)] = 2153,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(7),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(3),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(38),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(29),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(25),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(29),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(9),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(68),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(68),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(57),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(108),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(114),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_def, 4, .production_id = 9),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_list, 3),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_range_notation_repeat1, 2), SHIFT_REPEAT(60),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_range_notation_repeat1, 2), SHIFT_REPEAT(62),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_range_notation_repeat1, 2), SHIFT_REPEAT(10),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_range_notation_repeat1, 2),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_range_notation_repeat1, 2), SHIFT_REPEAT(59),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 2),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 2),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 3),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 3),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__quoted_pattern, 2), SHIFT_REPEAT(26),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__quoted_pattern, 2),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__quoted_pattern, 2), SHIFT_REPEAT(26),
  [181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__quoted_pattern, 2), SHIFT_REPEAT(61),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__quoted_pattern, 2), SHIFT_REPEAT(61),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 2, .production_id = 1),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 2),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 3, .production_id = 4),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pattern_repeat1, 2, .production_id = 10),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__pattern, 2),
  [223] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__pattern, 2), SHIFT_REPEAT(34),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__pattern, 2), SHIFT_REPEAT(34),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__pattern, 2), SHIFT_REPEAT(9),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__pattern, 2), SHIFT_REPEAT(68),
  [235] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__pattern, 2), SHIFT_REPEAT(68),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [248] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__pattern, 2), SHIFT_REPEAT(36),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__pattern, 2), SHIFT_REPEAT(36),
  [254] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__pattern, 2), SHIFT_REPEAT(8),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__pattern, 2), SHIFT_REPEAT(64),
  [260] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__pattern, 2), SHIFT_REPEAT(64),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 4, .production_id = 17),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 4, .production_id = 15),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 3, .production_id = 5),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 4, .production_id = 13),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 3, .production_id = 11),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 5, .production_id = 20),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 3, .production_id = 7),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 2, .production_id = 2),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_range_notation_repeat1, 1),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_range_notation_repeat1, 1),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ansi_c_escape, 1),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ansi_c_escape, 1),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_range, 3),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_range, 3),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_wildcard, 1),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard, 1),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_notation, 4, .production_id = 16),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_notation, 4, .production_id = 16),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_notation, 3),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_notation, 3),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_list, 2),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pattern_repeat1, 2, .production_id = 12),
  [359] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pattern_repeat1, 2, .production_id = 12), SHIFT_REPEAT(56),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_attr, 1),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [368] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pattern_repeat1, 2, .production_id = 12), SHIFT_REPEAT(58),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 2, .production_id = 3),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 4, .production_id = 14),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__prefixed_attr, 1),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_def, 3, .production_id = 9),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 3, .production_id = 8),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 3, .production_id = 6),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [399] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__attr_list_repeat1, 2), SHIFT_REPEAT(6),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attr_list_repeat1, 2),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_with_value, 3),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__prefixed_attr, 2, .production_id = 19),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__prefixed_attr, 2, .production_id = 18),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_pattern, 5, .production_id = 14),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_pattern, 5, .production_id = 15),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_pattern, 6, .production_id = 24),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_pattern, 6, .production_id = 25),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_pattern, 4, .production_id = 5),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_pattern, 6, .production_id = 26),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_pattern, 6, .production_id = 20),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_pattern, 7, .production_id = 27),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_pattern, 5, .production_id = 13),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_pattern, 5, .production_id = 23),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_pattern, 5, .production_id = 22),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_pattern, 3),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_pattern, 5, .production_id = 21),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_pattern, 4, .production_id = 4),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_pattern, 4),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_pattern, 4, .production_id = 6),
  [458] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_gitattributes(void) {
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_attr_name,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
