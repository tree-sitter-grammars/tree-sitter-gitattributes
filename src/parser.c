#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 113
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 65
#define ALIAS_COUNT 3
#define TOKEN_COUNT 43
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
  sym_comment = 40,
  sym__eol = 41,
  aux_sym__space_token1 = 42,
  sym_file = 43,
  sym__line = 44,
  sym__attr_list = 45,
  sym_pattern = 46,
  aux_sym__pattern = 47,
  sym_quoted_pattern = 48,
  aux_sym__quoted_pattern = 49,
  sym_ansi_c_escape = 50,
  sym__char_code = 51,
  sym__unicode_code = 52,
  sym_range_notation = 53,
  sym_class_range = 54,
  sym_attribute = 55,
  sym__prefixed_attr = 56,
  sym__attr_with_value = 57,
  sym_builtin_attr = 58,
  sym_macro_def = 59,
  sym__space = 60,
  aux_sym_file_repeat1 = 61,
  aux_sym__attr_list_repeat1 = 62,
  aux_sym_pattern_repeat1 = 63,
  aux_sym_range_notation_repeat1 = 64,
  alias_sym_attr_reset = 65,
  alias_sym_attr_unset = 66,
  alias_sym_trailing_slash = 67,
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
  [sym_comment] = "comment",
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
  [sym__space] = "_space",
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
  [sym_comment] = sym_comment,
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
  [sym__space] = sym__space,
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
  [sym_comment] = {
    .visible = true,
    .named = true,
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
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 14,
  [21] = 17,
  [22] = 15,
  [23] = 23,
  [24] = 23,
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
  [64] = 62,
  [65] = 65,
  [66] = 61,
  [67] = 67,
  [68] = 67,
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
  [83] = 80,
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
      if (eof) ADVANCE(76);
      if (lookahead == '\n') ADVANCE(118);
      if (lookahead == '\r') ADVANCE(82);
      if (lookahead == '!') ADVANCE(77);
      if (lookahead == '"') ADVANCE(80);
      if (lookahead == '-') ADVANCE(98);
      if (lookahead == '/') ADVANCE(105);
      if (lookahead == '=') ADVANCE(106);
      if (lookahead == '[') ADVANCE(95);
      if (lookahead == '\\') ADVANCE(79);
      if (lookahead == ']') ADVANCE(99);
      if (lookahead == '^') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '*' ||
          lookahead == '?') ADVANCE(81);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      if (lookahead != 0) ADVANCE(81);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(118);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(118);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(77);
      if (lookahead == '-') ADVANCE(98);
      if (lookahead == '=') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(119);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(77);
      if (lookahead == '/') ADVANCE(105);
      if (lookahead == '\\') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(81);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(80);
      if (lookahead == '*') ADVANCE(104);
      if (lookahead == '/') ADVANCE(105);
      if (lookahead == '?') ADVANCE(103);
      if (lookahead == '[') ADVANCE(95);
      if (lookahead == '\\') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(84);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(80);
      if (lookahead == '/') ADVANCE(105);
      if (lookahead == '\\') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(81);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(104);
      if (lookahead == '/') ADVANCE(105);
      if (lookahead == '?') ADVANCE(103);
      if (lookahead == '[') ADVANCE(95);
      if (lookahead == '\\') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(84);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(98);
      if (lookahead == '[') ADVANCE(101);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == ']') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(100);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(105);
      if (lookahead == '\\') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(81);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(16);
      END_STATE();
    case 10:
      if (lookahead == 'U') ADVANCE(74);
      if (lookahead == '\\') ADVANCE(87);
      if (lookahead == 'c') ADVANCE(12);
      if (lookahead == 'u') ADVANCE(69);
      if (lookahead == 'x') ADVANCE(64);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('[' <= lookahead && lookahead <= '^')) ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      if (sym__special_char_character_set_1(lookahead)) ADVANCE(87);
      END_STATE();
    case 11:
      if (lookahead == 'U') ADVANCE(74);
      if (lookahead == 'c') ADVANCE(12);
      if (lookahead == 'u') ADVANCE(69);
      if (lookahead == 'x') ADVANCE(64);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('[' <= lookahead && lookahead <= '^')) ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      END_STATE();
    case 12:
      if (lookahead == '\\') ADVANCE(13);
      if ((0 <= lookahead && lookahead <= 127)) ADVANCE(94);
      END_STATE();
    case 13:
      if (lookahead == '\\') ADVANCE(94);
      END_STATE();
    case 14:
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '-' &&
          lookahead != ']') ADVANCE(100);
      END_STATE();
    case 15:
      if (lookahead == ']') ADVANCE(116);
      END_STATE();
    case 16:
      if (lookahead == ']') ADVANCE(102);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(35);
      if (lookahead == 'b') ADVANCE(36);
      if (lookahead == 'c') ADVANCE(42);
      if (lookahead == 'd') ADVANCE(31);
      if (lookahead == 'g') ADVANCE(52);
      if (lookahead == 'l') ADVANCE(44);
      if (lookahead == 'p') ADVANCE(51);
      if (lookahead == 's') ADVANCE(48);
      if (lookahead == 'u') ADVANCE(47);
      if (lookahead == 'x') ADVANCE(24);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(9);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(25);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(55);
      END_STATE();
    case 24:
      if (lookahead == 'd') ADVANCE(31);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 27:
      if (lookahead == 'f') ADVANCE(108);
      if (lookahead == 't') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(114);
      END_STATE();
    case 28:
      if (lookahead == 'g') ADVANCE(32);
      END_STATE();
    case 29:
      if (lookahead == 'h') ADVANCE(9);
      END_STATE();
    case 30:
      if (lookahead == 'h') ADVANCE(18);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 34:
      if (lookahead == 'k') ADVANCE(9);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(20);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(9);
      END_STATE();
    case 38:
      if (lookahead == 'm') ADVANCE(9);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(58);
      if (lookahead == 'p') ADVANCE(30);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 44:
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 45:
      if (lookahead == 'p') ADVANCE(26);
      END_STATE();
    case 46:
      if (lookahead == 'p') ADVANCE(29);
      END_STATE();
    case 47:
      if (lookahead == 'p') ADVANCE(45);
      END_STATE();
    case 48:
      if (lookahead == 'p') ADVANCE(19);
      END_STATE();
    case 49:
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 50:
      if (lookahead == 'r') ADVANCE(9);
      END_STATE();
    case 51:
      if (lookahead == 'r') ADVANCE(33);
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 52:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 53:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 54:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 58:
      if (lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 59:
      if (lookahead == 'w') ADVANCE(26);
      END_STATE();
    case 60:
      if (lookahead == '!' ||
          lookahead == '^') ADVANCE(97);
      if (lookahead == '-') ADVANCE(98);
      if (lookahead == '[') ADVANCE(101);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ']') ADVANCE(100);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(65);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
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
      if (eof) ADVANCE(76);
      if (lookahead == '\n') ADVANCE(118);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(77);
      if (lookahead == '"') ADVANCE(80);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '*') ADVANCE(104);
      if (lookahead == '/') ADVANCE(105);
      if (lookahead == '?') ADVANCE(103);
      if (lookahead == '[') ADVANCE(96);
      if (lookahead == '\\') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(119);
      if (lookahead != 0) ADVANCE(84);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'U') ADVANCE(74);
      if (lookahead == 'c') ADVANCE(12);
      if (lookahead == 'u') ADVANCE(69);
      if (lookahead == 'x') ADVANCE(64);
      if (lookahead == '?' ||
          lookahead == '\\') ADVANCE(86);
      if (lookahead == '!' ||
          lookahead == '*' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == 'E' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'e' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          ('t' <= lookahead && lookahead <= 'v')) ADVANCE(87);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(86);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym__quoted_pattern_token1);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym__quoted_pattern_token1);
      if (lookahead == '\n') ADVANCE(118);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym__quoted_pattern_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym__pattern_char);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym__pattern_char);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(117);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_escaped_char);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__special_char);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__octal_code);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__octal_code);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__octal_code);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__hex_code);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym__unicode_code_token1);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym__unicode_code_token2);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__control_code);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == 'a') ADVANCE(56);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_range_notation_token1);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__class_char);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__class_char);
      if (lookahead == ':') ADVANCE(17);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_character_class);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_wildcard);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_wildcard);
      if (lookahead == '*') ADVANCE(103);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_dir_sep);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym__attr_with_value_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(114);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym__attr_with_value_token2);
      if (lookahead == 'a') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(114);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym__attr_with_value_token2);
      if (lookahead == 'e') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(114);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym__attr_with_value_token2);
      if (lookahead == 'l') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(114);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym__attr_with_value_token2);
      if (lookahead == 'r') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(114);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym__attr_with_value_token2);
      if (lookahead == 's') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(114);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym__attr_with_value_token2);
      if (lookahead == 'u') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(114);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym__attr_with_value_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_attr_name);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_LBRACKattr_RBRACK);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__eol);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym__space_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(119);
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
  [1] = {.lex_state = 75},
  [2] = {.lex_state = 75},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 75},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 75},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 60},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 7},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 60},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 7},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 7},
  [25] = {.lex_state = 8},
  [26] = {.lex_state = 75},
  [27] = {.lex_state = 8},
  [28] = {.lex_state = 8},
  [29] = {.lex_state = 75},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 7},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 7},
  [36] = {.lex_state = 7},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 7},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 14},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 6},
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 6},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 6},
  [60] = {.lex_state = 6},
  [61] = {.lex_state = 6},
  [62] = {.lex_state = 6},
  [63] = {.lex_state = 6},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 6},
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 6},
  [69] = {.lex_state = 75},
  [70] = {.lex_state = 75},
  [71] = {.lex_state = 75},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 75},
  [75] = {.lex_state = 75},
  [76] = {.lex_state = 75},
  [77] = {.lex_state = 75},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 75},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 75},
  [84] = {.lex_state = 75},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 75},
  [87] = {.lex_state = 75},
  [88] = {.lex_state = 75},
  [89] = {.lex_state = 27},
  [90] = {.lex_state = 75},
  [91] = {.lex_state = 75},
  [92] = {.lex_state = 75},
  [93] = {.lex_state = 75},
  [94] = {.lex_state = 75},
  [95] = {.lex_state = 75},
  [96] = {.lex_state = 75},
  [97] = {.lex_state = 75},
  [98] = {.lex_state = 75},
  [99] = {.lex_state = 75},
  [100] = {.lex_state = 75},
  [101] = {.lex_state = 75},
  [102] = {.lex_state = 75},
  [103] = {.lex_state = 75},
  [104] = {.lex_state = 75},
  [105] = {.lex_state = 75},
  [106] = {.lex_state = 75},
  [107] = {.lex_state = 75},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 75},
  [110] = {.lex_state = 75},
  [111] = {.lex_state = 2},
  [112] = {.lex_state = 75},
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
    [sym_escaped_char] = ACTIONS(1),
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
    [sym__eol] = ACTIONS(1),
  },
  [1] = {
    [sym_file] = STATE(108),
    [sym__line] = STATE(4),
    [sym__attr_list] = STATE(109),
    [sym_pattern] = STATE(74),
    [aux_sym__pattern] = STATE(31),
    [sym_quoted_pattern] = STATE(74),
    [sym_range_notation] = STATE(31),
    [sym_macro_def] = STATE(109),
    [sym__space] = STATE(7),
    [aux_sym_file_repeat1] = STATE(4),
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
    [sym_comment] = ACTIONS(19),
    [sym__eol] = ACTIONS(21),
    [aux_sym__space_token1] = ACTIONS(23),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(42), 1,
      sym_dir_sep,
    ACTIONS(45), 1,
      anon_sym_LBRACKattr_RBRACK,
    ACTIONS(48), 1,
      sym_comment,
    ACTIONS(51), 1,
      sym__eol,
    ACTIONS(54), 1,
      aux_sym__space_token1,
    STATE(7), 1,
      sym__space,
    ACTIONS(30), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(36), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(2), 2,
      sym__line,
      aux_sym_file_repeat1,
    STATE(31), 2,
      aux_sym__pattern,
      sym_range_notation,
    STATE(74), 2,
      sym_pattern,
      sym_quoted_pattern,
    STATE(109), 2,
      sym__attr_list,
      sym_macro_def,
  [55] = 8,
    ACTIONS(57), 1,
      sym_attr_name,
    ACTIONS(59), 1,
      anon_sym_BANG,
    ACTIONS(61), 1,
      anon_sym_DASH,
    ACTIONS(65), 1,
      sym__eol,
    STATE(72), 1,
      sym_builtin_attr,
    STATE(86), 1,
      sym_attribute,
    STATE(90), 2,
      sym__prefixed_attr,
      sym__attr_with_value,
    ACTIONS(63), 14,
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
  [94] = 16,
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
      sym_comment,
    ACTIONS(23), 1,
      aux_sym__space_token1,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    ACTIONS(69), 1,
      sym__eol,
    STATE(7), 1,
      sym__space,
    ACTIONS(7), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(11), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(2), 2,
      sym__line,
      aux_sym_file_repeat1,
    STATE(31), 2,
      aux_sym__pattern,
      sym_range_notation,
    STATE(74), 2,
      sym_pattern,
      sym_quoted_pattern,
    STATE(109), 2,
      sym__attr_list,
      sym_macro_def,
  [149] = 8,
    ACTIONS(57), 1,
      sym_attr_name,
    ACTIONS(59), 1,
      anon_sym_BANG,
    ACTIONS(61), 1,
      anon_sym_DASH,
    ACTIONS(71), 1,
      sym__eol,
    STATE(72), 1,
      sym_builtin_attr,
    STATE(86), 1,
      sym_attribute,
    STATE(90), 2,
      sym__prefixed_attr,
      sym__attr_with_value,
    ACTIONS(63), 14,
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
  [188] = 7,
    ACTIONS(57), 1,
      sym_attr_name,
    ACTIONS(59), 1,
      anon_sym_BANG,
    ACTIONS(61), 1,
      anon_sym_DASH,
    STATE(72), 1,
      sym_builtin_attr,
    STATE(86), 1,
      sym_attribute,
    STATE(90), 2,
      sym__prefixed_attr,
      sym__attr_with_value,
    ACTIONS(63), 14,
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
  [224] = 12,
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
    ACTIONS(73), 1,
      sym_comment,
    ACTIONS(75), 1,
      sym__eol,
    ACTIONS(7), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(11), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(31), 2,
      aux_sym__pattern,
      sym_range_notation,
    STATE(74), 2,
      sym_pattern,
      sym_quoted_pattern,
    STATE(103), 2,
      sym__attr_list,
      sym_macro_def,
  [266] = 9,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      sym_escaped_char,
    ACTIONS(83), 1,
      sym__special_char,
    ACTIONS(87), 1,
      sym_dir_sep,
    STATE(78), 1,
      aux_sym_pattern_repeat1,
    ACTIONS(77), 2,
      anon_sym_BSLASH,
      aux_sym__quoted_pattern_token1,
    STATE(16), 2,
      aux_sym__quoted_pattern,
      sym_ansi_c_escape,
    STATE(30), 2,
      sym__char_code,
      sym__unicode_code,
    ACTIONS(85), 5,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
      sym__control_code,
  [301] = 3,
    ACTIONS(89), 1,
      sym_attr_name,
    STATE(87), 1,
      sym_builtin_attr,
    ACTIONS(63), 14,
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
  [324] = 9,
    ACTIONS(81), 1,
      sym_escaped_char,
    ACTIONS(83), 1,
      sym__special_char,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      sym_dir_sep,
    STATE(82), 1,
      aux_sym_pattern_repeat1,
    ACTIONS(77), 2,
      anon_sym_BSLASH,
      aux_sym__quoted_pattern_token1,
    STATE(16), 2,
      aux_sym__quoted_pattern,
      sym_ansi_c_escape,
    STATE(30), 2,
      sym__char_code,
      sym__unicode_code,
    ACTIONS(85), 5,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
      sym__control_code,
  [359] = 9,
    ACTIONS(81), 1,
      sym_escaped_char,
    ACTIONS(83), 1,
      sym__special_char,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      sym_dir_sep,
    STATE(85), 1,
      aux_sym_pattern_repeat1,
    ACTIONS(77), 2,
      anon_sym_BSLASH,
      aux_sym__quoted_pattern_token1,
    STATE(16), 2,
      aux_sym__quoted_pattern,
      sym_ansi_c_escape,
    STATE(30), 2,
      sym__char_code,
      sym__unicode_code,
    ACTIONS(85), 5,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
      sym__control_code,
  [394] = 9,
    ACTIONS(81), 1,
      sym_escaped_char,
    ACTIONS(83), 1,
      sym__special_char,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      sym_dir_sep,
    STATE(73), 1,
      aux_sym_pattern_repeat1,
    ACTIONS(77), 2,
      anon_sym_BSLASH,
      aux_sym__quoted_pattern_token1,
    STATE(16), 2,
      aux_sym__quoted_pattern,
      sym_ansi_c_escape,
    STATE(30), 2,
      sym__char_code,
      sym__unicode_code,
    ACTIONS(85), 5,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
      sym__control_code,
  [429] = 3,
    ACTIONS(103), 1,
      sym_attr_name,
    STATE(88), 1,
      sym_builtin_attr,
    ACTIONS(63), 14,
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
  [452] = 7,
    ACTIONS(105), 1,
      sym__special_char,
    ACTIONS(109), 1,
      aux_sym_range_notation_token1,
    ACTIONS(113), 1,
      sym__class_char,
    ACTIONS(111), 2,
      anon_sym_DASH,
      sym_character_class,
    STATE(35), 2,
      sym__char_code,
      sym__unicode_code,
    STATE(15), 3,
      sym_ansi_c_escape,
      sym_class_range,
      aux_sym_range_notation_repeat1,
    ACTIONS(107), 5,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
      sym__control_code,
  [482] = 7,
    ACTIONS(105), 1,
      sym__special_char,
    ACTIONS(113), 1,
      sym__class_char,
    ACTIONS(117), 1,
      anon_sym_RBRACK,
    ACTIONS(115), 2,
      anon_sym_DASH,
      sym_character_class,
    STATE(35), 2,
      sym__char_code,
      sym__unicode_code,
    STATE(18), 3,
      sym_ansi_c_escape,
      sym_class_range,
      aux_sym_range_notation_repeat1,
    ACTIONS(107), 5,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
      sym__control_code,
  [512] = 7,
    ACTIONS(124), 1,
      sym_escaped_char,
    ACTIONS(127), 1,
      sym__special_char,
    ACTIONS(119), 2,
      anon_sym_BSLASH,
      aux_sym__quoted_pattern_token1,
    ACTIONS(122), 2,
      anon_sym_DQUOTE,
      sym_dir_sep,
    STATE(16), 2,
      aux_sym__quoted_pattern,
      sym_ansi_c_escape,
    STATE(30), 2,
      sym__char_code,
      sym__unicode_code,
    ACTIONS(130), 5,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
      sym__control_code,
  [542] = 7,
    ACTIONS(105), 1,
      sym__special_char,
    ACTIONS(113), 1,
      sym__class_char,
    ACTIONS(133), 1,
      anon_sym_RBRACK,
    ACTIONS(115), 2,
      anon_sym_DASH,
      sym_character_class,
    STATE(35), 2,
      sym__char_code,
      sym__unicode_code,
    STATE(18), 3,
      sym_ansi_c_escape,
      sym_class_range,
      aux_sym_range_notation_repeat1,
    ACTIONS(107), 5,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
      sym__control_code,
  [572] = 7,
    ACTIONS(135), 1,
      sym__special_char,
    ACTIONS(144), 1,
      anon_sym_RBRACK,
    ACTIONS(146), 1,
      sym__class_char,
    ACTIONS(141), 2,
      anon_sym_DASH,
      sym_character_class,
    STATE(35), 2,
      sym__char_code,
      sym__unicode_code,
    STATE(18), 3,
      sym_ansi_c_escape,
      sym_class_range,
      aux_sym_range_notation_repeat1,
    ACTIONS(138), 5,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
      sym__control_code,
  [602] = 8,
    ACTIONS(83), 1,
      sym__special_char,
    ACTIONS(149), 1,
      anon_sym_BANG,
    ACTIONS(153), 1,
      sym_escaped_char,
    ACTIONS(155), 1,
      sym_dir_sep,
    ACTIONS(151), 2,
      anon_sym_BSLASH,
      aux_sym__quoted_pattern_token1,
    STATE(11), 2,
      aux_sym__quoted_pattern,
      sym_ansi_c_escape,
    STATE(30), 2,
      sym__char_code,
      sym__unicode_code,
    ACTIONS(85), 5,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
      sym__control_code,
  [634] = 7,
    ACTIONS(105), 1,
      sym__special_char,
    ACTIONS(113), 1,
      sym__class_char,
    ACTIONS(157), 1,
      aux_sym_range_notation_token1,
    ACTIONS(159), 2,
      anon_sym_DASH,
      sym_character_class,
    STATE(35), 2,
      sym__char_code,
      sym__unicode_code,
    STATE(22), 3,
      sym_ansi_c_escape,
      sym_class_range,
      aux_sym_range_notation_repeat1,
    ACTIONS(107), 5,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
      sym__control_code,
  [664] = 7,
    ACTIONS(105), 1,
      sym__special_char,
    ACTIONS(113), 1,
      sym__class_char,
    ACTIONS(161), 1,
      anon_sym_RBRACK,
    ACTIONS(115), 2,
      anon_sym_DASH,
      sym_character_class,
    STATE(35), 2,
      sym__char_code,
      sym__unicode_code,
    STATE(18), 3,
      sym_ansi_c_escape,
      sym_class_range,
      aux_sym_range_notation_repeat1,
    ACTIONS(107), 5,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
      sym__control_code,
  [694] = 7,
    ACTIONS(105), 1,
      sym__special_char,
    ACTIONS(113), 1,
      sym__class_char,
    ACTIONS(163), 1,
      anon_sym_RBRACK,
    ACTIONS(115), 2,
      anon_sym_DASH,
      sym_character_class,
    STATE(35), 2,
      sym__char_code,
      sym__unicode_code,
    STATE(18), 3,
      sym_ansi_c_escape,
      sym_class_range,
      aux_sym_range_notation_repeat1,
    ACTIONS(107), 5,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
      sym__control_code,
  [724] = 6,
    ACTIONS(105), 1,
      sym__special_char,
    ACTIONS(113), 1,
      sym__class_char,
    ACTIONS(165), 2,
      anon_sym_DASH,
      sym_character_class,
    STATE(35), 2,
      sym__char_code,
      sym__unicode_code,
    STATE(17), 3,
      sym_ansi_c_escape,
      sym_class_range,
      aux_sym_range_notation_repeat1,
    ACTIONS(107), 5,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
      sym__control_code,
  [751] = 6,
    ACTIONS(105), 1,
      sym__special_char,
    ACTIONS(113), 1,
      sym__class_char,
    ACTIONS(167), 2,
      anon_sym_DASH,
      sym_character_class,
    STATE(35), 2,
      sym__char_code,
      sym__unicode_code,
    STATE(21), 3,
      sym_ansi_c_escape,
      sym_class_range,
      aux_sym_range_notation_repeat1,
    ACTIONS(107), 5,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
      sym__control_code,
  [778] = 7,
    ACTIONS(83), 1,
      sym__special_char,
    ACTIONS(171), 1,
      sym_escaped_char,
    ACTIONS(173), 1,
      sym_dir_sep,
    ACTIONS(169), 2,
      anon_sym_BSLASH,
      aux_sym__quoted_pattern_token1,
    STATE(8), 2,
      aux_sym__quoted_pattern,
      sym_ansi_c_escape,
    STATE(30), 2,
      sym__char_code,
      sym__unicode_code,
    ACTIONS(85), 5,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
      sym__control_code,
  [807] = 2,
    ACTIONS(177), 4,
      anon_sym_BSLASH,
      sym__pattern_char,
      anon_sym_LBRACK,
      sym_comment,
    ACTIONS(175), 9,
      ts_builtin_sym_end,
      anon_sym_BANG,
      anon_sym_DQUOTE,
      sym_escaped_char,
      sym_wildcard,
      sym_dir_sep,
      anon_sym_LBRACKattr_RBRACK,
      sym__eol,
      aux_sym__space_token1,
  [825] = 6,
    ACTIONS(83), 1,
      sym__special_char,
    ACTIONS(181), 1,
      sym_escaped_char,
    ACTIONS(179), 2,
      anon_sym_BSLASH,
      aux_sym__quoted_pattern_token1,
    STATE(10), 2,
      aux_sym__quoted_pattern,
      sym_ansi_c_escape,
    STATE(30), 2,
      sym__char_code,
      sym__unicode_code,
    ACTIONS(85), 5,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
      sym__control_code,
  [851] = 6,
    ACTIONS(83), 1,
      sym__special_char,
    ACTIONS(185), 1,
      sym_escaped_char,
    ACTIONS(183), 2,
      anon_sym_BSLASH,
      aux_sym__quoted_pattern_token1,
    STATE(12), 2,
      aux_sym__quoted_pattern,
      sym_ansi_c_escape,
    STATE(30), 2,
      sym__char_code,
      sym__unicode_code,
    ACTIONS(85), 5,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
      sym__control_code,
  [877] = 2,
    ACTIONS(189), 4,
      anon_sym_BSLASH,
      sym__pattern_char,
      anon_sym_LBRACK,
      sym_comment,
    ACTIONS(187), 9,
      ts_builtin_sym_end,
      anon_sym_BANG,
      anon_sym_DQUOTE,
      sym_escaped_char,
      sym_wildcard,
      sym_dir_sep,
      anon_sym_LBRACKattr_RBRACK,
      sym__eol,
      aux_sym__space_token1,
  [895] = 2,
    ACTIONS(191), 3,
      anon_sym_BSLASH,
      aux_sym__quoted_pattern_token1,
      sym__special_char,
    ACTIONS(193), 8,
      anon_sym_DQUOTE,
      sym_escaped_char,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
      sym__control_code,
      sym_dir_sep,
  [911] = 7,
    ACTIONS(199), 1,
      anon_sym_LBRACK,
    ACTIONS(201), 1,
      sym_dir_sep,
    ACTIONS(203), 1,
      aux_sym__space_token1,
    STATE(75), 1,
      aux_sym_pattern_repeat1,
    ACTIONS(195), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(197), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(40), 2,
      aux_sym__pattern,
      sym_range_notation,
  [936] = 2,
    ACTIONS(207), 1,
      sym__class_char,
    ACTIONS(205), 9,
      sym__special_char,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
      sym__control_code,
      anon_sym_DASH,
      anon_sym_RBRACK,
      sym_character_class,
  [951] = 7,
    ACTIONS(199), 1,
      anon_sym_LBRACK,
    ACTIONS(209), 1,
      sym_dir_sep,
    ACTIONS(211), 1,
      aux_sym__space_token1,
    STATE(84), 1,
      aux_sym_pattern_repeat1,
    ACTIONS(195), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(197), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(40), 2,
      aux_sym__pattern,
      sym_range_notation,
  [976] = 7,
    ACTIONS(199), 1,
      anon_sym_LBRACK,
    ACTIONS(213), 1,
      sym_dir_sep,
    ACTIONS(215), 1,
      aux_sym__space_token1,
    STATE(79), 1,
      aux_sym_pattern_repeat1,
    ACTIONS(195), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(197), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(40), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1001] = 3,
    ACTIONS(191), 1,
      sym__class_char,
    ACTIONS(217), 1,
      anon_sym_DASH,
    ACTIONS(193), 8,
      sym__special_char,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
      sym__control_code,
      anon_sym_RBRACK,
      sym_character_class,
  [1018] = 3,
    ACTIONS(217), 1,
      anon_sym_DASH,
    ACTIONS(221), 1,
      sym__class_char,
    ACTIONS(219), 8,
      sym__special_char,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
      sym__control_code,
      anon_sym_RBRACK,
      sym_character_class,
  [1035] = 7,
    ACTIONS(199), 1,
      anon_sym_LBRACK,
    ACTIONS(223), 1,
      sym_dir_sep,
    ACTIONS(225), 1,
      aux_sym__space_token1,
    STATE(77), 1,
      aux_sym_pattern_repeat1,
    ACTIONS(195), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(197), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(40), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1060] = 2,
    ACTIONS(191), 1,
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
  [1075] = 5,
    ACTIONS(199), 1,
      anon_sym_LBRACK,
    ACTIONS(195), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(197), 2,
      sym_escaped_char,
      sym_wildcard,
    ACTIONS(227), 2,
      sym_dir_sep,
      aux_sym__space_token1,
    STATE(40), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1095] = 5,
    ACTIONS(235), 1,
      anon_sym_LBRACK,
    ACTIONS(229), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(232), 2,
      sym_escaped_char,
      sym_wildcard,
    ACTIONS(238), 2,
      sym_dir_sep,
      aux_sym__space_token1,
    STATE(40), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1115] = 5,
    ACTIONS(244), 1,
      anon_sym_LBRACK,
    ACTIONS(227), 2,
      anon_sym_DQUOTE,
      sym_dir_sep,
    ACTIONS(240), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(242), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(42), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1135] = 5,
    ACTIONS(252), 1,
      anon_sym_LBRACK,
    ACTIONS(238), 2,
      anon_sym_DQUOTE,
      sym_dir_sep,
    ACTIONS(246), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(249), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(42), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1155] = 5,
    ACTIONS(244), 1,
      anon_sym_LBRACK,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
    ACTIONS(255), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(259), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(41), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1174] = 5,
    ACTIONS(199), 1,
      anon_sym_LBRACK,
    ACTIONS(265), 1,
      aux_sym__space_token1,
    ACTIONS(261), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(263), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(39), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1193] = 5,
    ACTIONS(244), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(255), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(259), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(41), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1212] = 5,
    ACTIONS(244), 1,
      anon_sym_LBRACK,
    ACTIONS(269), 1,
      anon_sym_DQUOTE,
    ACTIONS(255), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(259), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(41), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1231] = 5,
    ACTIONS(244), 1,
      anon_sym_LBRACK,
    ACTIONS(271), 1,
      anon_sym_DQUOTE,
    ACTIONS(255), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(259), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(41), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1250] = 2,
    STATE(32), 2,
      sym__char_code,
      sym__unicode_code,
    ACTIONS(273), 6,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
      sym__control_code,
      sym__class_char,
  [1263] = 5,
    ACTIONS(244), 1,
      anon_sym_LBRACK,
    ACTIONS(275), 1,
      anon_sym_DQUOTE,
    ACTIONS(255), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(259), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(41), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1282] = 5,
    ACTIONS(199), 1,
      anon_sym_LBRACK,
    ACTIONS(277), 1,
      aux_sym__space_token1,
    ACTIONS(261), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(263), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(39), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1301] = 5,
    ACTIONS(199), 1,
      anon_sym_LBRACK,
    ACTIONS(279), 1,
      aux_sym__space_token1,
    ACTIONS(261), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(263), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(39), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1320] = 5,
    ACTIONS(199), 1,
      anon_sym_LBRACK,
    ACTIONS(281), 1,
      aux_sym__space_token1,
    ACTIONS(261), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(263), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(39), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1339] = 5,
    ACTIONS(244), 1,
      anon_sym_LBRACK,
    ACTIONS(283), 1,
      anon_sym_DQUOTE,
    ACTIONS(255), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(259), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(41), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1358] = 5,
    ACTIONS(244), 1,
      anon_sym_LBRACK,
    ACTIONS(285), 1,
      anon_sym_DQUOTE,
    ACTIONS(255), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(259), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(41), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1377] = 5,
    ACTIONS(244), 1,
      anon_sym_LBRACK,
    ACTIONS(287), 1,
      anon_sym_DQUOTE,
    ACTIONS(255), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(259), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(41), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1396] = 5,
    ACTIONS(199), 1,
      anon_sym_LBRACK,
    ACTIONS(289), 1,
      aux_sym__space_token1,
    ACTIONS(261), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(263), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(39), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1415] = 5,
    ACTIONS(199), 1,
      anon_sym_LBRACK,
    ACTIONS(291), 1,
      aux_sym__space_token1,
    ACTIONS(261), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(263), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(39), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1434] = 5,
    ACTIONS(199), 1,
      anon_sym_LBRACK,
    ACTIONS(297), 1,
      sym_dir_sep,
    ACTIONS(293), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(295), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(37), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1453] = 5,
    ACTIONS(199), 1,
      anon_sym_LBRACK,
    ACTIONS(299), 1,
      aux_sym__space_token1,
    ACTIONS(261), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(263), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(39), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1472] = 5,
    ACTIONS(199), 1,
      anon_sym_LBRACK,
    ACTIONS(301), 1,
      aux_sym__space_token1,
    ACTIONS(261), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(263), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(39), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1491] = 4,
    ACTIONS(244), 1,
      anon_sym_LBRACK,
    ACTIONS(255), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(259), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(41), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1507] = 2,
    ACTIONS(303), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(305), 5,
      sym_escaped_char,
      anon_sym_LBRACK,
      sym_wildcard,
      sym_dir_sep,
      aux_sym__space_token1,
  [1519] = 4,
    ACTIONS(199), 1,
      anon_sym_LBRACK,
    ACTIONS(307), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(309), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(33), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1535] = 2,
    ACTIONS(303), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(305), 5,
      anon_sym_DQUOTE,
      sym_escaped_char,
      anon_sym_LBRACK,
      sym_wildcard,
      sym_dir_sep,
  [1547] = 4,
    ACTIONS(199), 1,
      anon_sym_LBRACK,
    ACTIONS(311), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(313), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(34), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1563] = 4,
    ACTIONS(199), 1,
      anon_sym_LBRACK,
    ACTIONS(261), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(263), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(39), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1579] = 2,
    ACTIONS(315), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(317), 5,
      anon_sym_DQUOTE,
      sym_escaped_char,
      anon_sym_LBRACK,
      sym_wildcard,
      sym_dir_sep,
  [1591] = 2,
    ACTIONS(315), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(317), 5,
      sym_escaped_char,
      anon_sym_LBRACK,
      sym_wildcard,
      sym_dir_sep,
      aux_sym__space_token1,
  [1603] = 4,
    ACTIONS(319), 1,
      sym__eol,
    ACTIONS(321), 1,
      aux_sym__space_token1,
    STATE(3), 1,
      sym__space,
    STATE(70), 1,
      aux_sym__attr_list_repeat1,
  [1616] = 4,
    ACTIONS(323), 1,
      sym__eol,
    ACTIONS(325), 1,
      aux_sym__space_token1,
    STATE(6), 1,
      sym__space,
    STATE(70), 1,
      aux_sym__attr_list_repeat1,
  [1629] = 4,
    ACTIONS(328), 1,
      sym__eol,
    ACTIONS(330), 1,
      aux_sym__space_token1,
    STATE(5), 1,
      sym__space,
    STATE(70), 1,
      aux_sym__attr_list_repeat1,
  [1642] = 2,
    ACTIONS(332), 1,
      anon_sym_EQ,
    ACTIONS(334), 2,
      sym__eol,
      aux_sym__space_token1,
  [1650] = 3,
    ACTIONS(336), 1,
      anon_sym_DQUOTE,
    ACTIONS(338), 1,
      sym_dir_sep,
    STATE(80), 1,
      aux_sym_pattern_repeat1,
  [1660] = 3,
    ACTIONS(340), 1,
      aux_sym__space_token1,
    STATE(6), 1,
      sym__space,
    STATE(71), 1,
      aux_sym__attr_list_repeat1,
  [1670] = 3,
    ACTIONS(342), 1,
      sym_dir_sep,
    ACTIONS(344), 1,
      aux_sym__space_token1,
    STATE(83), 1,
      aux_sym_pattern_repeat1,
  [1680] = 3,
    ACTIONS(340), 1,
      aux_sym__space_token1,
    STATE(6), 1,
      sym__space,
    STATE(69), 1,
      aux_sym__attr_list_repeat1,
  [1690] = 3,
    ACTIONS(346), 1,
      sym_dir_sep,
    ACTIONS(348), 1,
      aux_sym__space_token1,
    STATE(83), 1,
      aux_sym_pattern_repeat1,
  [1700] = 3,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      sym_dir_sep,
    STATE(80), 1,
      aux_sym_pattern_repeat1,
  [1710] = 3,
    ACTIONS(354), 1,
      sym_dir_sep,
    ACTIONS(356), 1,
      aux_sym__space_token1,
    STATE(83), 1,
      aux_sym_pattern_repeat1,
  [1720] = 3,
    ACTIONS(358), 1,
      anon_sym_DQUOTE,
    ACTIONS(360), 1,
      sym_dir_sep,
    STATE(80), 1,
      aux_sym_pattern_repeat1,
  [1730] = 1,
    ACTIONS(363), 3,
      anon_sym_EQ,
      sym__eol,
      aux_sym__space_token1,
  [1736] = 3,
    ACTIONS(365), 1,
      anon_sym_DQUOTE,
    ACTIONS(367), 1,
      sym_dir_sep,
    STATE(80), 1,
      aux_sym_pattern_repeat1,
  [1746] = 3,
    ACTIONS(358), 1,
      aux_sym__space_token1,
    ACTIONS(369), 1,
      sym_dir_sep,
    STATE(83), 1,
      aux_sym_pattern_repeat1,
  [1756] = 3,
    ACTIONS(372), 1,
      sym_dir_sep,
    ACTIONS(374), 1,
      aux_sym__space_token1,
    STATE(83), 1,
      aux_sym_pattern_repeat1,
  [1766] = 3,
    ACTIONS(376), 1,
      anon_sym_DQUOTE,
    ACTIONS(378), 1,
      sym_dir_sep,
    STATE(80), 1,
      aux_sym_pattern_repeat1,
  [1776] = 1,
    ACTIONS(323), 2,
      sym__eol,
      aux_sym__space_token1,
  [1781] = 1,
    ACTIONS(380), 2,
      sym__eol,
      aux_sym__space_token1,
  [1786] = 1,
    ACTIONS(382), 2,
      sym__eol,
      aux_sym__space_token1,
  [1791] = 2,
    ACTIONS(384), 1,
      aux_sym__attr_with_value_token1,
    ACTIONS(386), 1,
      aux_sym__attr_with_value_token2,
  [1798] = 1,
    ACTIONS(388), 2,
      sym__eol,
      aux_sym__space_token1,
  [1803] = 1,
    ACTIONS(390), 2,
      sym__eol,
      aux_sym__space_token1,
  [1808] = 1,
    ACTIONS(390), 2,
      sym__eol,
      aux_sym__space_token1,
  [1813] = 1,
    ACTIONS(392), 1,
      aux_sym__space_token1,
  [1817] = 1,
    ACTIONS(394), 1,
      aux_sym__space_token1,
  [1821] = 1,
    ACTIONS(396), 1,
      aux_sym__space_token1,
  [1825] = 1,
    ACTIONS(398), 1,
      aux_sym__space_token1,
  [1829] = 1,
    ACTIONS(400), 1,
      aux_sym__space_token1,
  [1833] = 1,
    ACTIONS(402), 1,
      aux_sym__space_token1,
  [1837] = 1,
    ACTIONS(404), 1,
      aux_sym__space_token1,
  [1841] = 1,
    ACTIONS(406), 1,
      aux_sym__space_token1,
  [1845] = 1,
    ACTIONS(408), 1,
      aux_sym__space_token1,
  [1849] = 1,
    ACTIONS(410), 1,
      aux_sym__space_token1,
  [1853] = 1,
    ACTIONS(412), 1,
      sym__eol,
  [1857] = 1,
    ACTIONS(414), 1,
      aux_sym__space_token1,
  [1861] = 1,
    ACTIONS(416), 1,
      aux_sym__space_token1,
  [1865] = 1,
    ACTIONS(418), 1,
      aux_sym__space_token1,
  [1869] = 1,
    ACTIONS(420), 1,
      aux_sym__space_token1,
  [1873] = 1,
    ACTIONS(422), 1,
      ts_builtin_sym_end,
  [1877] = 1,
    ACTIONS(75), 1,
      sym__eol,
  [1881] = 1,
    ACTIONS(424), 1,
      aux_sym__space_token1,
  [1885] = 1,
    ACTIONS(426), 1,
      sym_attr_name,
  [1889] = 1,
    ACTIONS(428), 1,
      aux_sym__space_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 55,
  [SMALL_STATE(4)] = 94,
  [SMALL_STATE(5)] = 149,
  [SMALL_STATE(6)] = 188,
  [SMALL_STATE(7)] = 224,
  [SMALL_STATE(8)] = 266,
  [SMALL_STATE(9)] = 301,
  [SMALL_STATE(10)] = 324,
  [SMALL_STATE(11)] = 359,
  [SMALL_STATE(12)] = 394,
  [SMALL_STATE(13)] = 429,
  [SMALL_STATE(14)] = 452,
  [SMALL_STATE(15)] = 482,
  [SMALL_STATE(16)] = 512,
  [SMALL_STATE(17)] = 542,
  [SMALL_STATE(18)] = 572,
  [SMALL_STATE(19)] = 602,
  [SMALL_STATE(20)] = 634,
  [SMALL_STATE(21)] = 664,
  [SMALL_STATE(22)] = 694,
  [SMALL_STATE(23)] = 724,
  [SMALL_STATE(24)] = 751,
  [SMALL_STATE(25)] = 778,
  [SMALL_STATE(26)] = 807,
  [SMALL_STATE(27)] = 825,
  [SMALL_STATE(28)] = 851,
  [SMALL_STATE(29)] = 877,
  [SMALL_STATE(30)] = 895,
  [SMALL_STATE(31)] = 911,
  [SMALL_STATE(32)] = 936,
  [SMALL_STATE(33)] = 951,
  [SMALL_STATE(34)] = 976,
  [SMALL_STATE(35)] = 1001,
  [SMALL_STATE(36)] = 1018,
  [SMALL_STATE(37)] = 1035,
  [SMALL_STATE(38)] = 1060,
  [SMALL_STATE(39)] = 1075,
  [SMALL_STATE(40)] = 1095,
  [SMALL_STATE(41)] = 1115,
  [SMALL_STATE(42)] = 1135,
  [SMALL_STATE(43)] = 1155,
  [SMALL_STATE(44)] = 1174,
  [SMALL_STATE(45)] = 1193,
  [SMALL_STATE(46)] = 1212,
  [SMALL_STATE(47)] = 1231,
  [SMALL_STATE(48)] = 1250,
  [SMALL_STATE(49)] = 1263,
  [SMALL_STATE(50)] = 1282,
  [SMALL_STATE(51)] = 1301,
  [SMALL_STATE(52)] = 1320,
  [SMALL_STATE(53)] = 1339,
  [SMALL_STATE(54)] = 1358,
  [SMALL_STATE(55)] = 1377,
  [SMALL_STATE(56)] = 1396,
  [SMALL_STATE(57)] = 1415,
  [SMALL_STATE(58)] = 1434,
  [SMALL_STATE(59)] = 1453,
  [SMALL_STATE(60)] = 1472,
  [SMALL_STATE(61)] = 1491,
  [SMALL_STATE(62)] = 1507,
  [SMALL_STATE(63)] = 1519,
  [SMALL_STATE(64)] = 1535,
  [SMALL_STATE(65)] = 1547,
  [SMALL_STATE(66)] = 1563,
  [SMALL_STATE(67)] = 1579,
  [SMALL_STATE(68)] = 1591,
  [SMALL_STATE(69)] = 1603,
  [SMALL_STATE(70)] = 1616,
  [SMALL_STATE(71)] = 1629,
  [SMALL_STATE(72)] = 1642,
  [SMALL_STATE(73)] = 1650,
  [SMALL_STATE(74)] = 1660,
  [SMALL_STATE(75)] = 1670,
  [SMALL_STATE(76)] = 1680,
  [SMALL_STATE(77)] = 1690,
  [SMALL_STATE(78)] = 1700,
  [SMALL_STATE(79)] = 1710,
  [SMALL_STATE(80)] = 1720,
  [SMALL_STATE(81)] = 1730,
  [SMALL_STATE(82)] = 1736,
  [SMALL_STATE(83)] = 1746,
  [SMALL_STATE(84)] = 1756,
  [SMALL_STATE(85)] = 1766,
  [SMALL_STATE(86)] = 1776,
  [SMALL_STATE(87)] = 1781,
  [SMALL_STATE(88)] = 1786,
  [SMALL_STATE(89)] = 1791,
  [SMALL_STATE(90)] = 1798,
  [SMALL_STATE(91)] = 1803,
  [SMALL_STATE(92)] = 1808,
  [SMALL_STATE(93)] = 1813,
  [SMALL_STATE(94)] = 1817,
  [SMALL_STATE(95)] = 1821,
  [SMALL_STATE(96)] = 1825,
  [SMALL_STATE(97)] = 1829,
  [SMALL_STATE(98)] = 1833,
  [SMALL_STATE(99)] = 1837,
  [SMALL_STATE(100)] = 1841,
  [SMALL_STATE(101)] = 1845,
  [SMALL_STATE(102)] = 1849,
  [SMALL_STATE(103)] = 1853,
  [SMALL_STATE(104)] = 1857,
  [SMALL_STATE(105)] = 1861,
  [SMALL_STATE(106)] = 1865,
  [SMALL_STATE(107)] = 1869,
  [SMALL_STATE(108)] = 1873,
  [SMALL_STATE(109)] = 1877,
  [SMALL_STATE(110)] = 1881,
  [SMALL_STATE(111)] = 1885,
  [SMALL_STATE(112)] = 1889,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(58),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(31),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(19),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(31),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(20),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(65),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(111),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(109),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(2),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(7),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_def, 4, .production_id = 9),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_list, 3),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__quoted_pattern, 2), SHIFT_REPEAT(16),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__quoted_pattern, 2),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__quoted_pattern, 2), SHIFT_REPEAT(16),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__quoted_pattern, 2), SHIFT_REPEAT(30),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__quoted_pattern, 2), SHIFT_REPEAT(30),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_range_notation_repeat1, 2), SHIFT_REPEAT(38),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_range_notation_repeat1, 2), SHIFT_REPEAT(35),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_range_notation_repeat1, 2), SHIFT_REPEAT(18),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_range_notation_repeat1, 2),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_range_notation_repeat1, 2), SHIFT_REPEAT(36),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 2),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 2),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 3),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 3),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ansi_c_escape, 1),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ansi_c_escape, 1),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_range, 3),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_range, 3),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 3, .production_id = 4),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 2, .production_id = 1),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_range_notation_repeat1, 1),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_range_notation_repeat1, 1),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 2),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pattern_repeat1, 2, .production_id = 10),
  [229] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__pattern, 2), SHIFT_REPEAT(40),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__pattern, 2), SHIFT_REPEAT(40),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__pattern, 2), SHIFT_REPEAT(20),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__pattern, 2),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [246] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__pattern, 2), SHIFT_REPEAT(42),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__pattern, 2), SHIFT_REPEAT(42),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__pattern, 2), SHIFT_REPEAT(14),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 2, .production_id = 2),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 3, .production_id = 7),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 5, .production_id = 19),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 4, .production_id = 16),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 4, .production_id = 15),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 4, .production_id = 13),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 3, .production_id = 11),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 3, .production_id = 5),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_notation, 3),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_notation, 3),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_notation, 4),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_notation, 4),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_def, 3, .production_id = 9),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attr_list_repeat1, 2),
  [325] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__attr_list_repeat1, 2), SHIFT_REPEAT(6),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_list, 2),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__prefixed_attr, 1),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 2, .production_id = 3),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 3, .production_id = 6),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 3, .production_id = 8),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pattern_repeat1, 2, .production_id = 12),
  [360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pattern_repeat1, 2, .production_id = 12), SHIFT_REPEAT(61),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_attr, 1),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [369] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pattern_repeat1, 2, .production_id = 12), SHIFT_REPEAT(66),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 4, .production_id = 14),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__prefixed_attr, 2, .production_id = 17),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__prefixed_attr, 2, .production_id = 18),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_with_value, 3),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_pattern, 5, .production_id = 21),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_pattern, 5, .production_id = 14),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_pattern, 5, .production_id = 13),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_pattern, 6, .production_id = 23),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_pattern, 6, .production_id = 24),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_pattern, 3),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_pattern, 6, .production_id = 25),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_pattern, 6, .production_id = 19),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_pattern, 7, .production_id = 26),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_pattern, 5, .production_id = 15),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_pattern, 5, .production_id = 22),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_pattern, 5, .production_id = 20),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_pattern, 4, .production_id = 6),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_pattern, 4, .production_id = 5),
  [422] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_pattern, 4, .production_id = 4),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_pattern, 4),
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
