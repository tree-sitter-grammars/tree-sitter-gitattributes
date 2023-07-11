#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 116
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 68
#define ALIAS_COUNT 3
#define TOKEN_COUNT 44
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 27

enum {
  sym_attr_name = 1,
  anon_sym_BANG = 2,
  anon_sym_BSLASH = 3,
  anon_sym_DQUOTE = 4,
  aux_sym__quoted_pattern_token1 = 5,
  sym__pattern_char = 6,
  sym_escaped_char = 7,
  sym__special_char = 8,
  sym__octal_code = 9,
  sym__hex_code = 10,
  aux_sym__unicode_code_token1 = 11,
  aux_sym__unicode_code_token2 = 12,
  sym__control_code = 13,
  anon_sym_LBRACK = 14,
  aux_sym_range_notation_token1 = 15,
  anon_sym_DASH = 16,
  anon_sym_RBRACK = 17,
  sym__class_char = 18,
  sym_character_class = 19,
  sym_wildcard = 20,
  sym_dir_sep = 21,
  anon_sym_EQ = 22,
  aux_sym__attr_with_value_token1 = 23,
  aux_sym__attr_with_value_token2 = 24,
  anon_sym_text = 25,
  anon_sym_eol = 26,
  anon_sym_crlf = 27,
  anon_sym_working_DASHtree_DASHencoding = 28,
  anon_sym_ident = 29,
  anon_sym_filter = 30,
  anon_sym_diff = 31,
  anon_sym_merge = 32,
  anon_sym_whitespace = 33,
  anon_sym_export_DASHignore = 34,
  anon_sym_export_DASHsubst = 35,
  anon_sym_delta = 36,
  anon_sym_encoding = 37,
  anon_sym_binary = 38,
  anon_sym_LBRACKattr_RBRACK = 39,
  anon_sym_POUND = 40,
  aux_sym_comment_token1 = 41,
  sym__eol = 42,
  aux_sym__space_token1 = 43,
  sym_file = 44,
  sym__line = 45,
  sym__attr_list = 46,
  sym_pattern = 47,
  aux_sym__pattern = 48,
  sym_quoted_pattern = 49,
  aux_sym__quoted_pattern = 50,
  sym_ansi_c_escape = 51,
  sym__char_code = 52,
  sym__unicode_code = 53,
  sym_range_notation = 54,
  sym_class_range = 55,
  sym_attribute = 56,
  sym__prefixed_attr = 57,
  sym__attr_with_value = 58,
  sym_builtin_attr = 59,
  sym_macro_def = 60,
  sym_comment = 61,
  sym__space = 62,
  aux_sym_file_repeat1 = 63,
  aux_sym__attr_list_repeat1 = 64,
  aux_sym_pattern_repeat1 = 65,
  aux_sym_range_notation_repeat1 = 66,
  aux_sym_comment_repeat1 = 67,
  alias_sym_attr_reset = 68,
  alias_sym_attr_unset = 69,
  alias_sym_trailing_slash = 70,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_attr_name] = "attr_name",
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
  [sym__control_code] = "_control_code",
  [anon_sym_LBRACK] = "[",
  [aux_sym_range_notation_token1] = "range_negation",
  [anon_sym_DASH] = "-",
  [anon_sym_RBRACK] = "]",
  [sym__class_char] = "_class_char",
  [sym_character_class] = "character_class",
  [sym_wildcard] = "wildcard",
  [sym_dir_sep] = "dir_sep",
  [anon_sym_EQ] = "attr_set",
  [aux_sym__attr_with_value_token1] = "boolean_value",
  [aux_sym__attr_with_value_token2] = "string_value",
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
  [anon_sym_POUND] = "#",
  [aux_sym_comment_token1] = "comment_token1",
  [sym__eol] = "_eol",
  [aux_sym__space_token1] = "_space_token1",
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
  [sym_attribute] = "attribute",
  [sym__prefixed_attr] = "_prefixed_attr",
  [sym__attr_with_value] = "_attr_with_value",
  [sym_builtin_attr] = "builtin_attr",
  [sym_macro_def] = "macro_def",
  [sym_comment] = "comment",
  [sym__space] = "_space",
  [aux_sym_file_repeat1] = "file_repeat1",
  [aux_sym__attr_list_repeat1] = "_attr_list_repeat1",
  [aux_sym_pattern_repeat1] = "pattern_repeat1",
  [aux_sym_range_notation_repeat1] = "range_notation_repeat1",
  [aux_sym_comment_repeat1] = "comment_repeat1",
  [alias_sym_attr_reset] = "attr_reset",
  [alias_sym_attr_unset] = "attr_unset",
  [alias_sym_trailing_slash] = "trailing_slash",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_attr_name] = sym_attr_name,
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
  [sym__control_code] = sym__control_code,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [aux_sym_range_notation_token1] = aux_sym_range_notation_token1,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym__class_char] = sym__class_char,
  [sym_character_class] = sym_character_class,
  [sym_wildcard] = sym_wildcard,
  [sym_dir_sep] = sym_dir_sep,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym__attr_with_value_token1] = aux_sym__attr_with_value_token1,
  [aux_sym__attr_with_value_token2] = aux_sym__attr_with_value_token2,
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
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym__eol] = sym__eol,
  [aux_sym__space_token1] = aux_sym__space_token1,
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
  [sym_attribute] = sym_attribute,
  [sym__prefixed_attr] = sym__prefixed_attr,
  [sym__attr_with_value] = sym__attr_with_value,
  [sym_builtin_attr] = sym_builtin_attr,
  [sym_macro_def] = sym_macro_def,
  [sym_comment] = sym_comment,
  [sym__space] = sym__space,
  [aux_sym_file_repeat1] = aux_sym_file_repeat1,
  [aux_sym__attr_list_repeat1] = aux_sym__attr_list_repeat1,
  [aux_sym_pattern_repeat1] = aux_sym_pattern_repeat1,
  [aux_sym_range_notation_repeat1] = aux_sym_range_notation_repeat1,
  [aux_sym_comment_repeat1] = aux_sym_comment_repeat1,
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
  [sym__control_code] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_range_notation_token1] = {
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
  [sym__class_char] = {
    .visible = false,
    .named = true,
  },
  [sym_character_class] = {
    .visible = true,
    .named = true,
  },
  [sym_wildcard] = {
    .visible = true,
    .named = true,
  },
  [sym_dir_sep] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__attr_with_value_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__attr_with_value_token2] = {
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
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__eol] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__space_token1] = {
    .visible = false,
    .named = false,
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
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__space] = {
    .visible = false,
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
  [aux_sym_comment_repeat1] = {
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
  [16] = {.index = 4, .length = 2},
  [19] = {.index = 10, .length = 2},
  [20] = {.index = 12, .length = 1},
  [22] = {.index = 13, .length = 1},
  [23] = {.index = 12, .length = 1},
  [24] = {.index = 14, .length = 2},
  [25] = {.index = 13, .length = 1},
  [26] = {.index = 14, .length = 2},
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
    [3] = alias_sym_trailing_slash,
  },
  [17] = {
    [0] = alias_sym_attr_reset,
  },
  [18] = {
    [0] = alias_sym_attr_unset,
  },
  [19] = {
    [4] = alias_sym_trailing_slash,
  },
  [21] = {
    [3] = alias_sym_trailing_slash,
  },
  [23] = {
    [4] = alias_sym_trailing_slash,
  },
  [25] = {
    [4] = alias_sym_trailing_slash,
  },
  [26] = {
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
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 14,
  [17] = 17,
  [18] = 18,
  [19] = 18,
  [20] = 20,
  [21] = 15,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 23,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 30,
  [39] = 39,
  [40] = 40,
  [41] = 39,
  [42] = 40,
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
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 63,
  [65] = 65,
  [66] = 61,
  [67] = 67,
  [68] = 65,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 72,
  [75] = 75,
  [76] = 76,
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
  [115] = 115,
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
      if (eof) ADVANCE(77);
      if (lookahead == '\n') ADVANCE(121);
      if (lookahead == '\r') ADVANCE(84);
      if (lookahead == '!') ADVANCE(78);
      if (lookahead == '"') ADVANCE(82);
      if (lookahead == '#') ADVANCE(118);
      if (lookahead == '-') ADVANCE(99);
      if (lookahead == '/') ADVANCE(106);
      if (lookahead == '=') ADVANCE(107);
      if (lookahead == '[') ADVANCE(96);
      if (lookahead == '\\') ADVANCE(79);
      if (lookahead == ']') ADVANCE(100);
      if (lookahead == '^') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '*' ||
          lookahead == '?') ADVANCE(83);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      if (lookahead != 0) ADVANCE(83);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(121);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(121);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(78);
      if (lookahead == '-') ADVANCE(99);
      if (lookahead == '=') ADVANCE(107);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(122);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(121);
      if (lookahead == '\r') ADVANCE(120);
      if (lookahead != 0) ADVANCE(119);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(78);
      if (lookahead == '/') ADVANCE(106);
      if (lookahead == '\\') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(82);
      if (lookahead == '*') ADVANCE(105);
      if (lookahead == '/') ADVANCE(106);
      if (lookahead == '?') ADVANCE(104);
      if (lookahead == '[') ADVANCE(96);
      if (lookahead == '\\') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(86);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(82);
      if (lookahead == '/') ADVANCE(106);
      if (lookahead == '\\') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(105);
      if (lookahead == '/') ADVANCE(106);
      if (lookahead == '?') ADVANCE(104);
      if (lookahead == '[') ADVANCE(96);
      if (lookahead == '\\') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(86);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(99);
      if (lookahead == '[') ADVANCE(102);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead == ']') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(106);
      if (lookahead == '\\') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(17);
      END_STATE();
    case 11:
      if (lookahead == 'U') ADVANCE(75);
      if (lookahead == '\\') ADVANCE(88);
      if (lookahead == 'c') ADVANCE(13);
      if (lookahead == 'u') ADVANCE(70);
      if (lookahead == 'x') ADVANCE(65);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('[' <= lookahead && lookahead <= '^')) ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (sym__special_char_character_set_1(lookahead)) ADVANCE(88);
      END_STATE();
    case 12:
      if (lookahead == 'U') ADVANCE(75);
      if (lookahead == 'c') ADVANCE(13);
      if (lookahead == 'u') ADVANCE(70);
      if (lookahead == 'x') ADVANCE(65);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('[' <= lookahead && lookahead <= '^')) ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 13:
      if (lookahead == '\\') ADVANCE(14);
      if ((0 <= lookahead && lookahead <= 127)) ADVANCE(95);
      END_STATE();
    case 14:
      if (lookahead == '\\') ADVANCE(95);
      END_STATE();
    case 15:
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '-' &&
          lookahead != ']') ADVANCE(101);
      END_STATE();
    case 16:
      if (lookahead == ']') ADVANCE(117);
      END_STATE();
    case 17:
      if (lookahead == ']') ADVANCE(103);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(36);
      if (lookahead == 'b') ADVANCE(37);
      if (lookahead == 'c') ADVANCE(43);
      if (lookahead == 'd') ADVANCE(32);
      if (lookahead == 'g') ADVANCE(53);
      if (lookahead == 'l') ADVANCE(45);
      if (lookahead == 'p') ADVANCE(52);
      if (lookahead == 's') ADVANCE(49);
      if (lookahead == 'u') ADVANCE(48);
      if (lookahead == 'x') ADVANCE(25);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(10);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(26);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(56);
      END_STATE();
    case 25:
      if (lookahead == 'd') ADVANCE(32);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 28:
      if (lookahead == 'f') ADVANCE(109);
      if (lookahead == 't') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(115);
      END_STATE();
    case 29:
      if (lookahead == 'g') ADVANCE(33);
      END_STATE();
    case 30:
      if (lookahead == 'h') ADVANCE(10);
      END_STATE();
    case 31:
      if (lookahead == 'h') ADVANCE(19);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 35:
      if (lookahead == 'k') ADVANCE(10);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(10);
      END_STATE();
    case 39:
      if (lookahead == 'm') ADVANCE(10);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(59);
      if (lookahead == 'p') ADVANCE(31);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 45:
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 46:
      if (lookahead == 'p') ADVANCE(27);
      END_STATE();
    case 47:
      if (lookahead == 'p') ADVANCE(30);
      END_STATE();
    case 48:
      if (lookahead == 'p') ADVANCE(46);
      END_STATE();
    case 49:
      if (lookahead == 'p') ADVANCE(20);
      END_STATE();
    case 50:
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 51:
      if (lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 52:
      if (lookahead == 'r') ADVANCE(34);
      if (lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 53:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 59:
      if (lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 60:
      if (lookahead == 'w') ADVANCE(27);
      END_STATE();
    case 61:
      if (lookahead == '!' ||
          lookahead == '^') ADVANCE(98);
      if (lookahead == '-') ADVANCE(99);
      if (lookahead == '[') ADVANCE(102);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ']') ADVANCE(101);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(92);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(93);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(94);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(62);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(63);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      END_STATE();
    case 72:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      END_STATE();
    case 73:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(72);
      END_STATE();
    case 74:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(73);
      END_STATE();
    case 75:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      END_STATE();
    case 76:
      if (eof) ADVANCE(77);
      if (lookahead == '\n') ADVANCE(121);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(78);
      if (lookahead == '"') ADVANCE(82);
      if (lookahead == '#') ADVANCE(118);
      if (lookahead == '*') ADVANCE(105);
      if (lookahead == '/') ADVANCE(106);
      if (lookahead == '?') ADVANCE(104);
      if (lookahead == '[') ADVANCE(97);
      if (lookahead == '\\') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(122);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'U') ADVANCE(75);
      if (lookahead == 'c') ADVANCE(13);
      if (lookahead == 'u') ADVANCE(70);
      if (lookahead == 'x') ADVANCE(65);
      if (lookahead == '?' ||
          lookahead == '\\') ADVANCE(87);
      if (lookahead == '!' ||
          lookahead == '*' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == 'E' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'e' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          ('t' <= lookahead && lookahead <= 'v')) ADVANCE(88);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(87);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym__quoted_pattern_token1);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym__quoted_pattern_token1);
      if (lookahead == '\n') ADVANCE(121);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym__quoted_pattern_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__pattern_char);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_escaped_char);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__special_char);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__octal_code);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__octal_code);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__octal_code);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__hex_code);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym__unicode_code_token1);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym__unicode_code_token2);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__control_code);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_range_notation_token1);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__class_char);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__class_char);
      if (lookahead == ':') ADVANCE(18);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_character_class);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_wildcard);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_wildcard);
      if (lookahead == '*') ADVANCE(104);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_dir_sep);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym__attr_with_value_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(115);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym__attr_with_value_token2);
      if (lookahead == 'a') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(115);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym__attr_with_value_token2);
      if (lookahead == 'e') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(115);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym__attr_with_value_token2);
      if (lookahead == 'l') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(115);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym__attr_with_value_token2);
      if (lookahead == 'r') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(115);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym__attr_with_value_token2);
      if (lookahead == 's') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(115);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym__attr_with_value_token2);
      if (lookahead == 'u') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(115);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym__attr_with_value_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_attr_name);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_LBRACKattr_RBRACK);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(121);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__eol);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym__space_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(122);
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
  [1] = {.lex_state = 76},
  [2] = {.lex_state = 76},
  [3] = {.lex_state = 76},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 76},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 6},
  [11] = {.lex_state = 6},
  [12] = {.lex_state = 6},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 8},
  [15] = {.lex_state = 8},
  [16] = {.lex_state = 8},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 61},
  [19] = {.lex_state = 61},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 8},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 8},
  [24] = {.lex_state = 9},
  [25] = {.lex_state = 8},
  [26] = {.lex_state = 76},
  [27] = {.lex_state = 76},
  [28] = {.lex_state = 9},
  [29] = {.lex_state = 9},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 8},
  [32] = {.lex_state = 7},
  [33] = {.lex_state = 8},
  [34] = {.lex_state = 8},
  [35] = {.lex_state = 7},
  [36] = {.lex_state = 7},
  [37] = {.lex_state = 7},
  [38] = {.lex_state = 8},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 7},
  [41] = {.lex_state = 7},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 7},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 7},
  [49] = {.lex_state = 15},
  [50] = {.lex_state = 7},
  [51] = {.lex_state = 7},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 7},
  [54] = {.lex_state = 7},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 7},
  [59] = {.lex_state = 7},
  [60] = {.lex_state = 7},
  [61] = {.lex_state = 7},
  [62] = {.lex_state = 7},
  [63] = {.lex_state = 5},
  [64] = {.lex_state = 7},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 7},
  [67] = {.lex_state = 7},
  [68] = {.lex_state = 7},
  [69] = {.lex_state = 76},
  [70] = {.lex_state = 76},
  [71] = {.lex_state = 76},
  [72] = {.lex_state = 76},
  [73] = {.lex_state = 76},
  [74] = {.lex_state = 76},
  [75] = {.lex_state = 76},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 76},
  [78] = {.lex_state = 76},
  [79] = {.lex_state = 76},
  [80] = {.lex_state = 76},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 76},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 76},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 76},
  [88] = {.lex_state = 76},
  [89] = {.lex_state = 76},
  [90] = {.lex_state = 28},
  [91] = {.lex_state = 76},
  [92] = {.lex_state = 76},
  [93] = {.lex_state = 76},
  [94] = {.lex_state = 76},
  [95] = {.lex_state = 76},
  [96] = {.lex_state = 76},
  [97] = {.lex_state = 76},
  [98] = {.lex_state = 76},
  [99] = {.lex_state = 76},
  [100] = {.lex_state = 76},
  [101] = {.lex_state = 76},
  [102] = {.lex_state = 76},
  [103] = {.lex_state = 76},
  [104] = {.lex_state = 76},
  [105] = {.lex_state = 76},
  [106] = {.lex_state = 76},
  [107] = {.lex_state = 76},
  [108] = {.lex_state = 76},
  [109] = {.lex_state = 76},
  [110] = {.lex_state = 76},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 76},
  [113] = {.lex_state = 76},
  [114] = {.lex_state = 2},
  [115] = {.lex_state = 76},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_attr_name] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym__quoted_pattern_token1] = ACTIONS(1),
    [sym__pattern_char] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [aux_sym_range_notation_token1] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
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
    [anon_sym_POUND] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(1),
    [sym__eol] = ACTIONS(1),
  },
  [1] = {
    [sym_file] = STATE(111),
    [sym__line] = STATE(2),
    [sym__attr_list] = STATE(108),
    [sym_pattern] = STATE(87),
    [aux_sym__pattern] = STATE(37),
    [sym_quoted_pattern] = STATE(87),
    [sym_range_notation] = STATE(37),
    [sym_macro_def] = STATE(108),
    [sym_comment] = STATE(108),
    [sym__space] = STATE(7),
    [aux_sym_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_BANG] = ACTIONS(5),
    [anon_sym_BSLASH] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [sym__pattern_char] = ACTIONS(7),
    [sym_escaped_char] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [sym_wildcard] = ACTIONS(11),
    [sym_dir_sep] = ACTIONS(15),
    [anon_sym_LBRACKattr_RBRACK] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [sym__eol] = ACTIONS(21),
    [aux_sym__space_token1] = ACTIONS(23),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(5), 1,
      anon_sym_BANG,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      sym_dir_sep,
    ACTIONS(17), 1,
      anon_sym_LBRACKattr_RBRACK,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      aux_sym__space_token1,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      sym__eol,
    STATE(7), 1,
      sym__space,
    ACTIONS(7), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(11), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(3), 2,
      sym__line,
      aux_sym_file_repeat1,
    STATE(37), 2,
      aux_sym__pattern,
      sym_range_notation,
    STATE(87), 2,
      sym_pattern,
      sym_quoted_pattern,
    STATE(108), 3,
      sym__attr_list,
      sym_macro_def,
      sym_comment,
  [56] = 16,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      anon_sym_BANG,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(46), 1,
      sym_dir_sep,
    ACTIONS(49), 1,
      anon_sym_LBRACKattr_RBRACK,
    ACTIONS(52), 1,
      anon_sym_POUND,
    ACTIONS(55), 1,
      sym__eol,
    ACTIONS(58), 1,
      aux_sym__space_token1,
    STATE(7), 1,
      sym__space,
    ACTIONS(34), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(40), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(3), 2,
      sym__line,
      aux_sym_file_repeat1,
    STATE(37), 2,
      aux_sym__pattern,
      sym_range_notation,
    STATE(87), 2,
      sym_pattern,
      sym_quoted_pattern,
    STATE(108), 3,
      sym__attr_list,
      sym_macro_def,
      sym_comment,
  [112] = 8,
    ACTIONS(61), 1,
      sym_attr_name,
    ACTIONS(63), 1,
      anon_sym_BANG,
    ACTIONS(65), 1,
      anon_sym_DASH,
    ACTIONS(69), 1,
      sym__eol,
    STATE(84), 1,
      sym_builtin_attr,
    STATE(94), 1,
      sym_attribute,
    STATE(92), 2,
      sym__prefixed_attr,
      sym__attr_with_value,
    ACTIONS(67), 14,
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
  [151] = 8,
    ACTIONS(61), 1,
      sym_attr_name,
    ACTIONS(63), 1,
      anon_sym_BANG,
    ACTIONS(65), 1,
      anon_sym_DASH,
    ACTIONS(71), 1,
      sym__eol,
    STATE(84), 1,
      sym_builtin_attr,
    STATE(94), 1,
      sym_attribute,
    STATE(92), 2,
      sym__prefixed_attr,
      sym__attr_with_value,
    ACTIONS(67), 14,
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
  [190] = 7,
    ACTIONS(61), 1,
      sym_attr_name,
    ACTIONS(63), 1,
      anon_sym_BANG,
    ACTIONS(65), 1,
      anon_sym_DASH,
    STATE(84), 1,
      sym_builtin_attr,
    STATE(94), 1,
      sym_attribute,
    STATE(92), 2,
      sym__prefixed_attr,
      sym__attr_with_value,
    ACTIONS(67), 14,
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
  [226] = 12,
    ACTIONS(5), 1,
      anon_sym_BANG,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      sym_dir_sep,
    ACTIONS(17), 1,
      anon_sym_LBRACKattr_RBRACK,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(73), 1,
      sym__eol,
    ACTIONS(7), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(11), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(37), 2,
      aux_sym__pattern,
      sym_range_notation,
    STATE(87), 2,
      sym_pattern,
      sym_quoted_pattern,
    STATE(109), 3,
      sym__attr_list,
      sym_macro_def,
      sym_comment,
  [269] = 3,
    ACTIONS(75), 1,
      sym_attr_name,
    STATE(91), 1,
      sym_builtin_attr,
    ACTIONS(67), 14,
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
  [292] = 3,
    ACTIONS(77), 1,
      sym_attr_name,
    STATE(93), 1,
      sym_builtin_attr,
    ACTIONS(67), 14,
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
  [315] = 9,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      sym_escaped_char,
    ACTIONS(85), 1,
      sym__special_char,
    ACTIONS(89), 1,
      sym_dir_sep,
    STATE(77), 1,
      aux_sym_pattern_repeat1,
    ACTIONS(79), 2,
      anon_sym_BSLASH,
      aux_sym__quoted_pattern_token1,
    STATE(20), 2,
      aux_sym__quoted_pattern,
      sym_ansi_c_escape,
    STATE(30), 2,
      sym__char_code,
      sym__unicode_code,
    ACTIONS(87), 5,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
      sym__control_code,
  [350] = 9,
    ACTIONS(83), 1,
      sym_escaped_char,
    ACTIONS(85), 1,
      sym__special_char,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      sym_dir_sep,
    STATE(75), 1,
      aux_sym_pattern_repeat1,
    ACTIONS(79), 2,
      anon_sym_BSLASH,
      aux_sym__quoted_pattern_token1,
    STATE(20), 2,
      aux_sym__quoted_pattern,
      sym_ansi_c_escape,
    STATE(30), 2,
      sym__char_code,
      sym__unicode_code,
    ACTIONS(87), 5,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
      sym__control_code,
  [385] = 9,
    ACTIONS(83), 1,
      sym_escaped_char,
    ACTIONS(85), 1,
      sym__special_char,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      sym_dir_sep,
    STATE(78), 1,
      aux_sym_pattern_repeat1,
    ACTIONS(79), 2,
      anon_sym_BSLASH,
      aux_sym__quoted_pattern_token1,
    STATE(20), 2,
      aux_sym__quoted_pattern,
      sym_ansi_c_escape,
    STATE(30), 2,
      sym__char_code,
      sym__unicode_code,
    ACTIONS(87), 5,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
      sym__control_code,
  [420] = 9,
    ACTIONS(83), 1,
      sym_escaped_char,
    ACTIONS(85), 1,
      sym__special_char,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      sym_dir_sep,
    STATE(88), 1,
      aux_sym_pattern_repeat1,
    ACTIONS(79), 2,
      anon_sym_BSLASH,
      aux_sym__quoted_pattern_token1,
    STATE(20), 2,
      aux_sym__quoted_pattern,
      sym_ansi_c_escape,
    STATE(30), 2,
      sym__char_code,
      sym__unicode_code,
    ACTIONS(87), 5,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
      sym__control_code,
  [455] = 7,
    ACTIONS(103), 1,
      sym__special_char,
    ACTIONS(109), 1,
      anon_sym_RBRACK,
    ACTIONS(111), 1,
      sym__class_char,
    ACTIONS(107), 2,
      anon_sym_DASH,
      sym_character_class,
    STATE(33), 2,
      sym__char_code,
      sym__unicode_code,
    STATE(17), 3,
      sym_ansi_c_escape,
      sym_class_range,
      aux_sym_range_notation_repeat1,
    ACTIONS(105), 5,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
      sym__control_code,
  [485] = 7,
    ACTIONS(103), 1,
      sym__special_char,
    ACTIONS(111), 1,
      sym__class_char,
    ACTIONS(113), 1,
      anon_sym_RBRACK,
    ACTIONS(107), 2,
      anon_sym_DASH,
      sym_character_class,
    STATE(33), 2,
      sym__char_code,
      sym__unicode_code,
    STATE(17), 3,
      sym_ansi_c_escape,
      sym_class_range,
      aux_sym_range_notation_repeat1,
    ACTIONS(105), 5,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
      sym__control_code,
  [515] = 7,
    ACTIONS(103), 1,
      sym__special_char,
    ACTIONS(111), 1,
      sym__class_char,
    ACTIONS(115), 1,
      anon_sym_RBRACK,
    ACTIONS(107), 2,
      anon_sym_DASH,
      sym_character_class,
    STATE(33), 2,
      sym__char_code,
      sym__unicode_code,
    STATE(17), 3,
      sym_ansi_c_escape,
      sym_class_range,
      aux_sym_range_notation_repeat1,
    ACTIONS(105), 5,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
      sym__control_code,
  [545] = 7,
    ACTIONS(117), 1,
      sym__special_char,
    ACTIONS(126), 1,
      anon_sym_RBRACK,
    ACTIONS(128), 1,
      sym__class_char,
    ACTIONS(123), 2,
      anon_sym_DASH,
      sym_character_class,
    STATE(33), 2,
      sym__char_code,
      sym__unicode_code,
    STATE(17), 3,
      sym_ansi_c_escape,
      sym_class_range,
      aux_sym_range_notation_repeat1,
    ACTIONS(120), 5,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
      sym__control_code,
  [575] = 7,
    ACTIONS(103), 1,
      sym__special_char,
    ACTIONS(111), 1,
      sym__class_char,
    ACTIONS(131), 1,
      aux_sym_range_notation_token1,
    ACTIONS(133), 2,
      anon_sym_DASH,
      sym_character_class,
    STATE(33), 2,
      sym__char_code,
      sym__unicode_code,
    STATE(15), 3,
      sym_ansi_c_escape,
      sym_class_range,
      aux_sym_range_notation_repeat1,
    ACTIONS(105), 5,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
      sym__control_code,
  [605] = 7,
    ACTIONS(103), 1,
      sym__special_char,
    ACTIONS(111), 1,
      sym__class_char,
    ACTIONS(135), 1,
      aux_sym_range_notation_token1,
    ACTIONS(137), 2,
      anon_sym_DASH,
      sym_character_class,
    STATE(33), 2,
      sym__char_code,
      sym__unicode_code,
    STATE(21), 3,
      sym_ansi_c_escape,
      sym_class_range,
      aux_sym_range_notation_repeat1,
    ACTIONS(105), 5,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
      sym__control_code,
  [635] = 7,
    ACTIONS(144), 1,
      sym_escaped_char,
    ACTIONS(147), 1,
      sym__special_char,
    ACTIONS(139), 2,
      anon_sym_BSLASH,
      aux_sym__quoted_pattern_token1,
    ACTIONS(142), 2,
      anon_sym_DQUOTE,
      sym_dir_sep,
    STATE(20), 2,
      aux_sym__quoted_pattern,
      sym_ansi_c_escape,
    STATE(30), 2,
      sym__char_code,
      sym__unicode_code,
    ACTIONS(150), 5,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
      sym__control_code,
  [665] = 7,
    ACTIONS(103), 1,
      sym__special_char,
    ACTIONS(111), 1,
      sym__class_char,
    ACTIONS(153), 1,
      anon_sym_RBRACK,
    ACTIONS(107), 2,
      anon_sym_DASH,
      sym_character_class,
    STATE(33), 2,
      sym__char_code,
      sym__unicode_code,
    STATE(17), 3,
      sym_ansi_c_escape,
      sym_class_range,
      aux_sym_range_notation_repeat1,
    ACTIONS(105), 5,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
      sym__control_code,
  [695] = 8,
    ACTIONS(85), 1,
      sym__special_char,
    ACTIONS(155), 1,
      anon_sym_BANG,
    ACTIONS(159), 1,
      sym_escaped_char,
    ACTIONS(161), 1,
      sym_dir_sep,
    ACTIONS(157), 2,
      anon_sym_BSLASH,
      aux_sym__quoted_pattern_token1,
    STATE(12), 2,
      aux_sym__quoted_pattern,
      sym_ansi_c_escape,
    STATE(30), 2,
      sym__char_code,
      sym__unicode_code,
    ACTIONS(87), 5,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
      sym__control_code,
  [727] = 6,
    ACTIONS(103), 1,
      sym__special_char,
    ACTIONS(111), 1,
      sym__class_char,
    ACTIONS(163), 2,
      anon_sym_DASH,
      sym_character_class,
    STATE(33), 2,
      sym__char_code,
      sym__unicode_code,
    STATE(14), 3,
      sym_ansi_c_escape,
      sym_class_range,
      aux_sym_range_notation_repeat1,
    ACTIONS(105), 5,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
      sym__control_code,
  [754] = 7,
    ACTIONS(85), 1,
      sym__special_char,
    ACTIONS(167), 1,
      sym_escaped_char,
    ACTIONS(169), 1,
      sym_dir_sep,
    ACTIONS(165), 2,
      anon_sym_BSLASH,
      aux_sym__quoted_pattern_token1,
    STATE(11), 2,
      aux_sym__quoted_pattern,
      sym_ansi_c_escape,
    STATE(30), 2,
      sym__char_code,
      sym__unicode_code,
    ACTIONS(87), 5,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
      sym__control_code,
  [783] = 6,
    ACTIONS(103), 1,
      sym__special_char,
    ACTIONS(111), 1,
      sym__class_char,
    ACTIONS(171), 2,
      anon_sym_DASH,
      sym_character_class,
    STATE(33), 2,
      sym__char_code,
      sym__unicode_code,
    STATE(16), 3,
      sym_ansi_c_escape,
      sym_class_range,
      aux_sym_range_notation_repeat1,
    ACTIONS(105), 5,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
      sym__control_code,
  [810] = 2,
    ACTIONS(175), 3,
      anon_sym_BSLASH,
      sym__pattern_char,
      anon_sym_LBRACK,
    ACTIONS(173), 10,
      ts_builtin_sym_end,
      anon_sym_BANG,
      anon_sym_DQUOTE,
      sym_escaped_char,
      sym_wildcard,
      sym_dir_sep,
      anon_sym_LBRACKattr_RBRACK,
      anon_sym_POUND,
      sym__eol,
      aux_sym__space_token1,
  [828] = 2,
    ACTIONS(179), 3,
      anon_sym_BSLASH,
      sym__pattern_char,
      anon_sym_LBRACK,
    ACTIONS(177), 10,
      ts_builtin_sym_end,
      anon_sym_BANG,
      anon_sym_DQUOTE,
      sym_escaped_char,
      sym_wildcard,
      sym_dir_sep,
      anon_sym_LBRACKattr_RBRACK,
      anon_sym_POUND,
      sym__eol,
      aux_sym__space_token1,
  [846] = 6,
    ACTIONS(85), 1,
      sym__special_char,
    ACTIONS(183), 1,
      sym_escaped_char,
    ACTIONS(181), 2,
      anon_sym_BSLASH,
      aux_sym__quoted_pattern_token1,
    STATE(10), 2,
      aux_sym__quoted_pattern,
      sym_ansi_c_escape,
    STATE(30), 2,
      sym__char_code,
      sym__unicode_code,
    ACTIONS(87), 5,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
      sym__control_code,
  [872] = 6,
    ACTIONS(85), 1,
      sym__special_char,
    ACTIONS(187), 1,
      sym_escaped_char,
    ACTIONS(185), 2,
      anon_sym_BSLASH,
      aux_sym__quoted_pattern_token1,
    STATE(13), 2,
      aux_sym__quoted_pattern,
      sym_ansi_c_escape,
    STATE(30), 2,
      sym__char_code,
      sym__unicode_code,
    ACTIONS(87), 5,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
      sym__control_code,
  [898] = 2,
    ACTIONS(189), 3,
      anon_sym_BSLASH,
      aux_sym__quoted_pattern_token1,
      sym__special_char,
    ACTIONS(191), 8,
      anon_sym_DQUOTE,
      sym_escaped_char,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
      sym__control_code,
      sym_dir_sep,
  [914] = 2,
    ACTIONS(195), 1,
      sym__class_char,
    ACTIONS(193), 9,
      sym__special_char,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
      sym__control_code,
      anon_sym_DASH,
      anon_sym_RBRACK,
      sym_character_class,
  [929] = 7,
    ACTIONS(201), 1,
      anon_sym_LBRACK,
    ACTIONS(203), 1,
      sym_dir_sep,
    ACTIONS(205), 1,
      aux_sym__space_token1,
    STATE(79), 1,
      aux_sym_pattern_repeat1,
    ACTIONS(197), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(199), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(40), 2,
      aux_sym__pattern,
      sym_range_notation,
  [954] = 3,
    ACTIONS(189), 1,
      sym__class_char,
    ACTIONS(207), 1,
      anon_sym_DASH,
    ACTIONS(191), 8,
      sym__special_char,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
      sym__control_code,
      anon_sym_RBRACK,
      sym_character_class,
  [971] = 3,
    ACTIONS(207), 1,
      anon_sym_DASH,
    ACTIONS(211), 1,
      sym__class_char,
    ACTIONS(209), 8,
      sym__special_char,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
      sym__control_code,
      anon_sym_RBRACK,
      sym_character_class,
  [988] = 7,
    ACTIONS(201), 1,
      anon_sym_LBRACK,
    ACTIONS(213), 1,
      sym_dir_sep,
    ACTIONS(215), 1,
      aux_sym__space_token1,
    STATE(82), 1,
      aux_sym_pattern_repeat1,
    ACTIONS(197), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(199), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(40), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1013] = 7,
    ACTIONS(201), 1,
      anon_sym_LBRACK,
    ACTIONS(217), 1,
      sym_dir_sep,
    ACTIONS(219), 1,
      aux_sym__space_token1,
    STATE(80), 1,
      aux_sym_pattern_repeat1,
    ACTIONS(197), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(199), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(40), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1038] = 7,
    ACTIONS(201), 1,
      anon_sym_LBRACK,
    ACTIONS(221), 1,
      sym_dir_sep,
    ACTIONS(223), 1,
      aux_sym__space_token1,
    STATE(85), 1,
      aux_sym_pattern_repeat1,
    ACTIONS(197), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(199), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(40), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1063] = 2,
    ACTIONS(189), 1,
      sym__class_char,
    ACTIONS(191), 9,
      sym__special_char,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
      sym__control_code,
      anon_sym_DASH,
      anon_sym_RBRACK,
      sym_character_class,
  [1078] = 5,
    ACTIONS(231), 1,
      anon_sym_LBRACK,
    ACTIONS(225), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(227), 2,
      anon_sym_DQUOTE,
      sym_dir_sep,
    ACTIONS(229), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(42), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1098] = 5,
    ACTIONS(239), 1,
      anon_sym_LBRACK,
    ACTIONS(233), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(236), 2,
      sym_escaped_char,
      sym_wildcard,
    ACTIONS(242), 2,
      sym_dir_sep,
      aux_sym__space_token1,
    STATE(40), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1118] = 5,
    ACTIONS(201), 1,
      anon_sym_LBRACK,
    ACTIONS(197), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(199), 2,
      sym_escaped_char,
      sym_wildcard,
    ACTIONS(227), 2,
      sym_dir_sep,
      aux_sym__space_token1,
    STATE(40), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1138] = 5,
    ACTIONS(250), 1,
      anon_sym_LBRACK,
    ACTIONS(242), 2,
      anon_sym_DQUOTE,
      sym_dir_sep,
    ACTIONS(244), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(247), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(42), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1158] = 5,
    ACTIONS(231), 1,
      anon_sym_LBRACK,
    ACTIONS(255), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(257), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(39), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1177] = 5,
    ACTIONS(201), 1,
      anon_sym_LBRACK,
    ACTIONS(263), 1,
      aux_sym__space_token1,
    ACTIONS(259), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(261), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(41), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1196] = 5,
    ACTIONS(231), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(257), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(39), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1215] = 5,
    ACTIONS(231), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(257), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(39), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1234] = 5,
    ACTIONS(231), 1,
      anon_sym_LBRACK,
    ACTIONS(269), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(257), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(39), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1253] = 5,
    ACTIONS(201), 1,
      anon_sym_LBRACK,
    ACTIONS(271), 1,
      aux_sym__space_token1,
    ACTIONS(259), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(261), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(41), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1272] = 2,
    STATE(31), 2,
      sym__char_code,
      sym__unicode_code,
    ACTIONS(273), 6,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
      sym__control_code,
      sym__class_char,
  [1285] = 5,
    ACTIONS(201), 1,
      anon_sym_LBRACK,
    ACTIONS(275), 1,
      aux_sym__space_token1,
    ACTIONS(259), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(261), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(41), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1304] = 5,
    ACTIONS(201), 1,
      anon_sym_LBRACK,
    ACTIONS(277), 1,
      aux_sym__space_token1,
    ACTIONS(259), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(261), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(41), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1323] = 5,
    ACTIONS(231), 1,
      anon_sym_LBRACK,
    ACTIONS(279), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(257), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(39), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1342] = 5,
    ACTIONS(201), 1,
      anon_sym_LBRACK,
    ACTIONS(281), 1,
      aux_sym__space_token1,
    ACTIONS(259), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(261), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(41), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1361] = 5,
    ACTIONS(201), 1,
      anon_sym_LBRACK,
    ACTIONS(283), 1,
      aux_sym__space_token1,
    ACTIONS(259), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(261), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(41), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1380] = 5,
    ACTIONS(231), 1,
      anon_sym_LBRACK,
    ACTIONS(285), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(257), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(39), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1399] = 5,
    ACTIONS(231), 1,
      anon_sym_LBRACK,
    ACTIONS(287), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(257), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(39), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1418] = 5,
    ACTIONS(231), 1,
      anon_sym_LBRACK,
    ACTIONS(289), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(257), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(39), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1437] = 5,
    ACTIONS(201), 1,
      anon_sym_LBRACK,
    ACTIONS(291), 1,
      aux_sym__space_token1,
    ACTIONS(259), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(261), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(41), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1456] = 5,
    ACTIONS(201), 1,
      anon_sym_LBRACK,
    ACTIONS(297), 1,
      sym_dir_sep,
    ACTIONS(293), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(295), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(36), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1475] = 5,
    ACTIONS(201), 1,
      anon_sym_LBRACK,
    ACTIONS(299), 1,
      aux_sym__space_token1,
    ACTIONS(259), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(261), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(41), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1494] = 4,
    ACTIONS(201), 1,
      anon_sym_LBRACK,
    ACTIONS(259), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(261), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(41), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1510] = 4,
    ACTIONS(201), 1,
      anon_sym_LBRACK,
    ACTIONS(301), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(303), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(35), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1526] = 2,
    ACTIONS(305), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(307), 5,
      anon_sym_DQUOTE,
      sym_escaped_char,
      anon_sym_LBRACK,
      sym_wildcard,
      sym_dir_sep,
  [1538] = 2,
    ACTIONS(305), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(307), 5,
      sym_escaped_char,
      anon_sym_LBRACK,
      sym_wildcard,
      sym_dir_sep,
      aux_sym__space_token1,
  [1550] = 2,
    ACTIONS(309), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(311), 5,
      anon_sym_DQUOTE,
      sym_escaped_char,
      anon_sym_LBRACK,
      sym_wildcard,
      sym_dir_sep,
  [1562] = 4,
    ACTIONS(231), 1,
      anon_sym_LBRACK,
    ACTIONS(253), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(257), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(39), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1578] = 4,
    ACTIONS(201), 1,
      anon_sym_LBRACK,
    ACTIONS(313), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(315), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(32), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1594] = 2,
    ACTIONS(309), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(311), 5,
      sym_escaped_char,
      anon_sym_LBRACK,
      sym_wildcard,
      sym_dir_sep,
      aux_sym__space_token1,
  [1606] = 4,
    ACTIONS(317), 1,
      sym__eol,
    ACTIONS(319), 1,
      aux_sym__space_token1,
    STATE(6), 1,
      sym__space,
    STATE(69), 1,
      aux_sym__attr_list_repeat1,
  [1619] = 4,
    ACTIONS(322), 1,
      sym__eol,
    ACTIONS(324), 1,
      aux_sym__space_token1,
    STATE(5), 1,
      sym__space,
    STATE(69), 1,
      aux_sym__attr_list_repeat1,
  [1632] = 4,
    ACTIONS(326), 1,
      sym__eol,
    ACTIONS(328), 1,
      aux_sym__space_token1,
    STATE(4), 1,
      sym__space,
    STATE(69), 1,
      aux_sym__attr_list_repeat1,
  [1645] = 3,
    ACTIONS(330), 1,
      sym_dir_sep,
    ACTIONS(333), 1,
      aux_sym__space_token1,
    STATE(72), 1,
      aux_sym_pattern_repeat1,
  [1655] = 3,
    ACTIONS(335), 1,
      aux_sym__space_token1,
    STATE(6), 1,
      sym__space,
    STATE(71), 1,
      aux_sym__attr_list_repeat1,
  [1665] = 3,
    ACTIONS(333), 1,
      anon_sym_DQUOTE,
    ACTIONS(337), 1,
      sym_dir_sep,
    STATE(74), 1,
      aux_sym_pattern_repeat1,
  [1675] = 3,
    ACTIONS(340), 1,
      anon_sym_DQUOTE,
    ACTIONS(342), 1,
      sym_dir_sep,
    STATE(74), 1,
      aux_sym_pattern_repeat1,
  [1685] = 3,
    ACTIONS(344), 1,
      aux_sym_comment_token1,
    ACTIONS(346), 1,
      sym__eol,
    STATE(81), 1,
      aux_sym_comment_repeat1,
  [1695] = 3,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      sym_dir_sep,
    STATE(74), 1,
      aux_sym_pattern_repeat1,
  [1705] = 3,
    ACTIONS(352), 1,
      anon_sym_DQUOTE,
    ACTIONS(354), 1,
      sym_dir_sep,
    STATE(74), 1,
      aux_sym_pattern_repeat1,
  [1715] = 3,
    ACTIONS(356), 1,
      sym_dir_sep,
    ACTIONS(358), 1,
      aux_sym__space_token1,
    STATE(72), 1,
      aux_sym_pattern_repeat1,
  [1725] = 3,
    ACTIONS(360), 1,
      sym_dir_sep,
    ACTIONS(362), 1,
      aux_sym__space_token1,
    STATE(72), 1,
      aux_sym_pattern_repeat1,
  [1735] = 3,
    ACTIONS(364), 1,
      aux_sym_comment_token1,
    ACTIONS(366), 1,
      sym__eol,
    STATE(86), 1,
      aux_sym_comment_repeat1,
  [1745] = 3,
    ACTIONS(368), 1,
      sym_dir_sep,
    ACTIONS(370), 1,
      aux_sym__space_token1,
    STATE(72), 1,
      aux_sym_pattern_repeat1,
  [1755] = 1,
    ACTIONS(372), 3,
      anon_sym_EQ,
      sym__eol,
      aux_sym__space_token1,
  [1761] = 2,
    ACTIONS(374), 1,
      anon_sym_EQ,
    ACTIONS(376), 2,
      sym__eol,
      aux_sym__space_token1,
  [1769] = 3,
    ACTIONS(378), 1,
      sym_dir_sep,
    ACTIONS(380), 1,
      aux_sym__space_token1,
    STATE(72), 1,
      aux_sym_pattern_repeat1,
  [1779] = 3,
    ACTIONS(382), 1,
      aux_sym_comment_token1,
    ACTIONS(385), 1,
      sym__eol,
    STATE(86), 1,
      aux_sym_comment_repeat1,
  [1789] = 3,
    ACTIONS(335), 1,
      aux_sym__space_token1,
    STATE(6), 1,
      sym__space,
    STATE(70), 1,
      aux_sym__attr_list_repeat1,
  [1799] = 3,
    ACTIONS(387), 1,
      anon_sym_DQUOTE,
    ACTIONS(389), 1,
      sym_dir_sep,
    STATE(74), 1,
      aux_sym_pattern_repeat1,
  [1809] = 1,
    ACTIONS(391), 2,
      sym__eol,
      aux_sym__space_token1,
  [1814] = 2,
    ACTIONS(393), 1,
      aux_sym__attr_with_value_token1,
    ACTIONS(395), 1,
      aux_sym__attr_with_value_token2,
  [1821] = 1,
    ACTIONS(397), 2,
      sym__eol,
      aux_sym__space_token1,
  [1826] = 1,
    ACTIONS(399), 2,
      sym__eol,
      aux_sym__space_token1,
  [1831] = 1,
    ACTIONS(401), 2,
      sym__eol,
      aux_sym__space_token1,
  [1836] = 1,
    ACTIONS(317), 2,
      sym__eol,
      aux_sym__space_token1,
  [1841] = 1,
    ACTIONS(391), 2,
      sym__eol,
      aux_sym__space_token1,
  [1846] = 1,
    ACTIONS(403), 1,
      aux_sym__space_token1,
  [1850] = 1,
    ACTIONS(405), 1,
      aux_sym__space_token1,
  [1854] = 1,
    ACTIONS(407), 1,
      aux_sym__space_token1,
  [1858] = 1,
    ACTIONS(409), 1,
      aux_sym__space_token1,
  [1862] = 1,
    ACTIONS(411), 1,
      aux_sym__space_token1,
  [1866] = 1,
    ACTIONS(413), 1,
      aux_sym__space_token1,
  [1870] = 1,
    ACTIONS(415), 1,
      aux_sym__space_token1,
  [1874] = 1,
    ACTIONS(417), 1,
      aux_sym__space_token1,
  [1878] = 1,
    ACTIONS(419), 1,
      aux_sym__space_token1,
  [1882] = 1,
    ACTIONS(421), 1,
      aux_sym__space_token1,
  [1886] = 1,
    ACTIONS(423), 1,
      aux_sym__space_token1,
  [1890] = 1,
    ACTIONS(425), 1,
      aux_sym__space_token1,
  [1894] = 1,
    ACTIONS(73), 1,
      sym__eol,
  [1898] = 1,
    ACTIONS(427), 1,
      sym__eol,
  [1902] = 1,
    ACTIONS(429), 1,
      aux_sym__space_token1,
  [1906] = 1,
    ACTIONS(431), 1,
      ts_builtin_sym_end,
  [1910] = 1,
    ACTIONS(433), 1,
      aux_sym__space_token1,
  [1914] = 1,
    ACTIONS(435), 1,
      aux_sym__space_token1,
  [1918] = 1,
    ACTIONS(437), 1,
      sym_attr_name,
  [1922] = 1,
    ACTIONS(439), 1,
      aux_sym__space_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 56,
  [SMALL_STATE(4)] = 112,
  [SMALL_STATE(5)] = 151,
  [SMALL_STATE(6)] = 190,
  [SMALL_STATE(7)] = 226,
  [SMALL_STATE(8)] = 269,
  [SMALL_STATE(9)] = 292,
  [SMALL_STATE(10)] = 315,
  [SMALL_STATE(11)] = 350,
  [SMALL_STATE(12)] = 385,
  [SMALL_STATE(13)] = 420,
  [SMALL_STATE(14)] = 455,
  [SMALL_STATE(15)] = 485,
  [SMALL_STATE(16)] = 515,
  [SMALL_STATE(17)] = 545,
  [SMALL_STATE(18)] = 575,
  [SMALL_STATE(19)] = 605,
  [SMALL_STATE(20)] = 635,
  [SMALL_STATE(21)] = 665,
  [SMALL_STATE(22)] = 695,
  [SMALL_STATE(23)] = 727,
  [SMALL_STATE(24)] = 754,
  [SMALL_STATE(25)] = 783,
  [SMALL_STATE(26)] = 810,
  [SMALL_STATE(27)] = 828,
  [SMALL_STATE(28)] = 846,
  [SMALL_STATE(29)] = 872,
  [SMALL_STATE(30)] = 898,
  [SMALL_STATE(31)] = 914,
  [SMALL_STATE(32)] = 929,
  [SMALL_STATE(33)] = 954,
  [SMALL_STATE(34)] = 971,
  [SMALL_STATE(35)] = 988,
  [SMALL_STATE(36)] = 1013,
  [SMALL_STATE(37)] = 1038,
  [SMALL_STATE(38)] = 1063,
  [SMALL_STATE(39)] = 1078,
  [SMALL_STATE(40)] = 1098,
  [SMALL_STATE(41)] = 1118,
  [SMALL_STATE(42)] = 1138,
  [SMALL_STATE(43)] = 1158,
  [SMALL_STATE(44)] = 1177,
  [SMALL_STATE(45)] = 1196,
  [SMALL_STATE(46)] = 1215,
  [SMALL_STATE(47)] = 1234,
  [SMALL_STATE(48)] = 1253,
  [SMALL_STATE(49)] = 1272,
  [SMALL_STATE(50)] = 1285,
  [SMALL_STATE(51)] = 1304,
  [SMALL_STATE(52)] = 1323,
  [SMALL_STATE(53)] = 1342,
  [SMALL_STATE(54)] = 1361,
  [SMALL_STATE(55)] = 1380,
  [SMALL_STATE(56)] = 1399,
  [SMALL_STATE(57)] = 1418,
  [SMALL_STATE(58)] = 1437,
  [SMALL_STATE(59)] = 1456,
  [SMALL_STATE(60)] = 1475,
  [SMALL_STATE(61)] = 1494,
  [SMALL_STATE(62)] = 1510,
  [SMALL_STATE(63)] = 1526,
  [SMALL_STATE(64)] = 1538,
  [SMALL_STATE(65)] = 1550,
  [SMALL_STATE(66)] = 1562,
  [SMALL_STATE(67)] = 1578,
  [SMALL_STATE(68)] = 1594,
  [SMALL_STATE(69)] = 1606,
  [SMALL_STATE(70)] = 1619,
  [SMALL_STATE(71)] = 1632,
  [SMALL_STATE(72)] = 1645,
  [SMALL_STATE(73)] = 1655,
  [SMALL_STATE(74)] = 1665,
  [SMALL_STATE(75)] = 1675,
  [SMALL_STATE(76)] = 1685,
  [SMALL_STATE(77)] = 1695,
  [SMALL_STATE(78)] = 1705,
  [SMALL_STATE(79)] = 1715,
  [SMALL_STATE(80)] = 1725,
  [SMALL_STATE(81)] = 1735,
  [SMALL_STATE(82)] = 1745,
  [SMALL_STATE(83)] = 1755,
  [SMALL_STATE(84)] = 1761,
  [SMALL_STATE(85)] = 1769,
  [SMALL_STATE(86)] = 1779,
  [SMALL_STATE(87)] = 1789,
  [SMALL_STATE(88)] = 1799,
  [SMALL_STATE(89)] = 1809,
  [SMALL_STATE(90)] = 1814,
  [SMALL_STATE(91)] = 1821,
  [SMALL_STATE(92)] = 1826,
  [SMALL_STATE(93)] = 1831,
  [SMALL_STATE(94)] = 1836,
  [SMALL_STATE(95)] = 1841,
  [SMALL_STATE(96)] = 1846,
  [SMALL_STATE(97)] = 1850,
  [SMALL_STATE(98)] = 1854,
  [SMALL_STATE(99)] = 1858,
  [SMALL_STATE(100)] = 1862,
  [SMALL_STATE(101)] = 1866,
  [SMALL_STATE(102)] = 1870,
  [SMALL_STATE(103)] = 1874,
  [SMALL_STATE(104)] = 1878,
  [SMALL_STATE(105)] = 1882,
  [SMALL_STATE(106)] = 1886,
  [SMALL_STATE(107)] = 1890,
  [SMALL_STATE(108)] = 1894,
  [SMALL_STATE(109)] = 1898,
  [SMALL_STATE(110)] = 1902,
  [SMALL_STATE(111)] = 1906,
  [SMALL_STATE(112)] = 1910,
  [SMALL_STATE(113)] = 1914,
  [SMALL_STATE(114)] = 1918,
  [SMALL_STATE(115)] = 1922,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(59),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(37),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(22),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(37),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(19),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(67),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(114),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(76),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(3),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(7),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_def, 4, .production_id = 9),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_list, 3),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_range_notation_repeat1, 2), SHIFT_REPEAT(38),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_range_notation_repeat1, 2), SHIFT_REPEAT(33),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_range_notation_repeat1, 2), SHIFT_REPEAT(17),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_range_notation_repeat1, 2),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_range_notation_repeat1, 2), SHIFT_REPEAT(34),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__quoted_pattern, 2), SHIFT_REPEAT(20),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__quoted_pattern, 2),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__quoted_pattern, 2), SHIFT_REPEAT(20),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__quoted_pattern, 2), SHIFT_REPEAT(30),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__quoted_pattern, 2), SHIFT_REPEAT(30),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 3),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 3),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 2),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 2),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ansi_c_escape, 1),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ansi_c_escape, 1),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_range, 3),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_range, 3),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 2, .production_id = 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_range_notation_repeat1, 1),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_range_notation_repeat1, 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 3, .production_id = 4),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 2),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pattern_repeat1, 2, .production_id = 10),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [233] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__pattern, 2), SHIFT_REPEAT(40),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__pattern, 2), SHIFT_REPEAT(40),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__pattern, 2), SHIFT_REPEAT(19),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__pattern, 2),
  [244] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__pattern, 2), SHIFT_REPEAT(42),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__pattern, 2), SHIFT_REPEAT(42),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__pattern, 2), SHIFT_REPEAT(18),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 5, .production_id = 19),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 2, .production_id = 2),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 4, .production_id = 15),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 3, .production_id = 7),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 4, .production_id = 13),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 4, .production_id = 16),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 3, .production_id = 5),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 3, .production_id = 11),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_notation, 3),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_notation, 3),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_notation, 4),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_notation, 4),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attr_list_repeat1, 2),
  [319] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__attr_list_repeat1, 2), SHIFT_REPEAT(6),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_list, 2),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_def, 3, .production_id = 9),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [330] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pattern_repeat1, 2, .production_id = 12), SHIFT_REPEAT(61),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pattern_repeat1, 2, .production_id = 12),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [337] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pattern_repeat1, 2, .production_id = 12), SHIFT_REPEAT(66),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 3, .production_id = 8),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 3, .production_id = 6),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 4, .production_id = 14),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_attr, 1),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__prefixed_attr, 1),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 2, .production_id = 3),
  [382] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(86),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_with_value, 3),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__prefixed_attr, 2, .production_id = 18),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__prefixed_attr, 2, .production_id = 17),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_pattern, 5, .production_id = 13),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_pattern, 5, .production_id = 14),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_pattern, 5, .production_id = 15),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_pattern, 6, .production_id = 23),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_pattern, 6, .production_id = 24),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_pattern, 4),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_pattern, 6, .production_id = 25),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_pattern, 6, .production_id = 19),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_pattern, 7, .production_id = 26),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_pattern, 5, .production_id = 22),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_pattern, 5, .production_id = 21),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_pattern, 5, .production_id = 20),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_pattern, 4, .production_id = 6),
  [431] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_pattern, 4, .production_id = 5),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_pattern, 4, .production_id = 4),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_pattern, 3),
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
