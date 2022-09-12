#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 113
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 64
#define ALIAS_COUNT 3
#define TOKEN_COUNT 43
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 27

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
  sym__control_code = 15,
  anon_sym_LBRACK = 16,
  aux_sym_range_notation_token1 = 17,
  anon_sym_DASH = 18,
  anon_sym_RBRACK = 19,
  sym__class_char = 20,
  sym_character_class = 21,
  sym_wildcard = 22,
  sym_dir_sep = 23,
  anon_sym_EQ = 24,
  aux_sym__attr_with_value_token1 = 25,
  aux_sym__attr_with_value_token2 = 26,
  anon_sym_text = 27,
  anon_sym_eol = 28,
  anon_sym_crlf = 29,
  anon_sym_working_DASHtree_DASHencoding = 30,
  anon_sym_ident = 31,
  anon_sym_filter = 32,
  anon_sym_diff = 33,
  anon_sym_merge = 34,
  anon_sym_whitespace = 35,
  anon_sym_export_DASHignore = 36,
  anon_sym_export_DASHsubst = 37,
  anon_sym_delta = 38,
  anon_sym_encoding = 39,
  anon_sym_binary = 40,
  anon_sym_LBRACKattr_RBRACK = 41,
  sym_comment = 42,
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
  aux_sym_file_repeat1 = 60,
  aux_sym__attr_list_repeat1 = 61,
  aux_sym_pattern_repeat1 = 62,
  aux_sym_range_notation_repeat1 = 63,
  alias_sym_attr_reset = 64,
  alias_sym_attr_unset = 65,
  alias_sym_trailing_slash = 66,
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
  [19] = 17,
  [20] = 18,
  [21] = 15,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 24,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 30,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 39,
  [41] = 41,
  [42] = 41,
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
  [64] = 64,
  [65] = 64,
  [66] = 62,
  [67] = 61,
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
  [78] = 73,
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
      if (lookahead == '\n') ADVANCE(78);
      if (lookahead == '\r') ADVANCE(84);
      if (lookahead == '!') ADVANCE(79);
      if (lookahead == '"') ADVANCE(82);
      if (lookahead == '-') ADVANCE(100);
      if (lookahead == '/') ADVANCE(107);
      if (lookahead == '=') ADVANCE(108);
      if (lookahead == '[') ADVANCE(97);
      if (lookahead == '\\') ADVANCE(81);
      if (lookahead == ']') ADVANCE(101);
      if (lookahead == '^') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(77);
      if (lookahead == '*' ||
          lookahead == '?') ADVANCE(83);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      if (lookahead != 0) ADVANCE(83);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(78);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(78);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(79);
      if (lookahead == '-') ADVANCE(100);
      if (lookahead == '=') ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(77);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(79);
      if (lookahead == '/') ADVANCE(107);
      if (lookahead == '\\') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(82);
      if (lookahead == '*') ADVANCE(106);
      if (lookahead == '/') ADVANCE(107);
      if (lookahead == '?') ADVANCE(105);
      if (lookahead == '[') ADVANCE(97);
      if (lookahead == '\\') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(86);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(82);
      if (lookahead == '/') ADVANCE(107);
      if (lookahead == '\\') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(106);
      if (lookahead == '/') ADVANCE(107);
      if (lookahead == '?') ADVANCE(105);
      if (lookahead == '[') ADVANCE(97);
      if (lookahead == '\\') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(86);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(100);
      if (lookahead == '[') ADVANCE(103);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == ']') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(107);
      if (lookahead == '\\') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(16);
      END_STATE();
    case 10:
      if (lookahead == 'U') ADVANCE(74);
      if (lookahead == '\\') ADVANCE(89);
      if (lookahead == 'c') ADVANCE(12);
      if (lookahead == 'u') ADVANCE(69);
      if (lookahead == 'x') ADVANCE(64);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('[' <= lookahead && lookahead <= '^')) ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      if (sym__special_char_character_set_1(lookahead)) ADVANCE(89);
      END_STATE();
    case 11:
      if (lookahead == 'U') ADVANCE(74);
      if (lookahead == 'c') ADVANCE(12);
      if (lookahead == 'u') ADVANCE(69);
      if (lookahead == 'x') ADVANCE(64);
      if (lookahead == '!' ||
          lookahead == '-' ||
          ('[' <= lookahead && lookahead <= '^')) ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 12:
      if (lookahead == '\\') ADVANCE(13);
      if ((0 <= lookahead && lookahead <= 127)) ADVANCE(96);
      END_STATE();
    case 13:
      if (lookahead == '\\') ADVANCE(96);
      END_STATE();
    case 14:
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '-' &&
          lookahead != ']') ADVANCE(102);
      END_STATE();
    case 15:
      if (lookahead == ']') ADVANCE(118);
      END_STATE();
    case 16:
      if (lookahead == ']') ADVANCE(104);
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
      if (lookahead == 'f') ADVANCE(110);
      if (lookahead == 't') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(116);
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
          lookahead == '^') ADVANCE(99);
      if (lookahead == '-') ADVANCE(100);
      if (lookahead == '[') ADVANCE(103);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ']') ADVANCE(102);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(93);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(94);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(95);
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
      if (lookahead == '\n') ADVANCE(78);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(79);
      if (lookahead == '"') ADVANCE(82);
      if (lookahead == '#') ADVANCE(87);
      if (lookahead == '*') ADVANCE(106);
      if (lookahead == '/') ADVANCE(107);
      if (lookahead == '?') ADVANCE(105);
      if (lookahead == '[') ADVANCE(98);
      if (lookahead == '\\') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(77);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym__line_token2);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'U') ADVANCE(74);
      if (lookahead == 'c') ADVANCE(12);
      if (lookahead == 'u') ADVANCE(69);
      if (lookahead == 'x') ADVANCE(64);
      if (lookahead == '?' ||
          lookahead == '\\') ADVANCE(88);
      if (lookahead == '!' ||
          lookahead == '*' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == 'E' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'e' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          ('t' <= lookahead && lookahead <= 'v')) ADVANCE(89);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '?' ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(88);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym__quoted_pattern_token1);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym__quoted_pattern_token1);
      if (lookahead == '\n') ADVANCE(78);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym__quoted_pattern_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__pattern_char);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__pattern_char);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(119);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_escaped_char);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__special_char);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__octal_code);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__octal_code);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__octal_code);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__hex_code);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym__unicode_code_token1);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym__unicode_code_token2);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__control_code);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == 'a') ADVANCE(56);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_range_notation_token1);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__class_char);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__class_char);
      if (lookahead == ':') ADVANCE(17);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_character_class);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_wildcard);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_wildcard);
      if (lookahead == '*') ADVANCE(105);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_dir_sep);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym__attr_with_value_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(116);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym__attr_with_value_token2);
      if (lookahead == 'a') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(116);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym__attr_with_value_token2);
      if (lookahead == 'e') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(116);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym__attr_with_value_token2);
      if (lookahead == 'l') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(116);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym__attr_with_value_token2);
      if (lookahead == 'r') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(116);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym__attr_with_value_token2);
      if (lookahead == 's') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(116);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym__attr_with_value_token2);
      if (lookahead == 'u') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(116);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym__attr_with_value_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_attr_name);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_LBRACKattr_RBRACK);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(119);
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
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 75},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 75},
  [7] = {.lex_state = 75},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 60},
  [18] = {.lex_state = 7},
  [19] = {.lex_state = 60},
  [20] = {.lex_state = 7},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 7},
  [23] = {.lex_state = 8},
  [24] = {.lex_state = 7},
  [25] = {.lex_state = 7},
  [26] = {.lex_state = 75},
  [27] = {.lex_state = 8},
  [28] = {.lex_state = 8},
  [29] = {.lex_state = 75},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 7},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 7},
  [35] = {.lex_state = 7},
  [36] = {.lex_state = 7},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 6},
  [49] = {.lex_state = 14},
  [50] = {.lex_state = 6},
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 6},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 6},
  [60] = {.lex_state = 6},
  [61] = {.lex_state = 6},
  [62] = {.lex_state = 6},
  [63] = {.lex_state = 6},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 6},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 6},
  [68] = {.lex_state = 6},
  [69] = {.lex_state = 75},
  [70] = {.lex_state = 75},
  [71] = {.lex_state = 75},
  [72] = {.lex_state = 75},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 75},
  [78] = {.lex_state = 75},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 75},
  [83] = {.lex_state = 75},
  [84] = {.lex_state = 75},
  [85] = {.lex_state = 75},
  [86] = {.lex_state = 75},
  [87] = {.lex_state = 27},
  [88] = {.lex_state = 75},
  [89] = {.lex_state = 75},
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
    [aux_sym__line_token1] = ACTIONS(1),
    [aux_sym__line_token2] = ACTIONS(1),
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
  },
  [1] = {
    [sym_file] = STATE(108),
    [sym__line] = STATE(6),
    [sym__attr_list] = STATE(109),
    [sym_pattern] = STATE(86),
    [aux_sym__pattern] = STATE(33),
    [sym_quoted_pattern] = STATE(86),
    [sym_range_notation] = STATE(33),
    [sym_macro_def] = STATE(109),
    [aux_sym_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym__line_token1] = ACTIONS(5),
    [aux_sym__line_token2] = ACTIONS(7),
    [anon_sym_BANG] = ACTIONS(9),
    [anon_sym_BSLASH] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [sym__pattern_char] = ACTIONS(11),
    [sym_escaped_char] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [sym_wildcard] = ACTIONS(15),
    [sym_dir_sep] = ACTIONS(19),
    [anon_sym_LBRACKattr_RBRACK] = ACTIONS(21),
    [sym_comment] = ACTIONS(23),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(25), 1,
      sym_attr_name,
    ACTIONS(27), 1,
      aux_sym__line_token2,
    ACTIONS(29), 1,
      anon_sym_BANG,
    ACTIONS(31), 1,
      anon_sym_DASH,
    STATE(80), 1,
      sym_builtin_attr,
    STATE(92), 1,
      sym_attribute,
    STATE(89), 2,
      sym__prefixed_attr,
      sym__attr_with_value,
    ACTIONS(33), 14,
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
  [39] = 8,
    ACTIONS(25), 1,
      sym_attr_name,
    ACTIONS(29), 1,
      anon_sym_BANG,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(35), 1,
      aux_sym__line_token2,
    STATE(80), 1,
      sym_builtin_attr,
    STATE(92), 1,
      sym_attribute,
    STATE(89), 2,
      sym__prefixed_attr,
      sym__attr_with_value,
    ACTIONS(33), 14,
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
  [78] = 15,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(39), 1,
      aux_sym__line_token1,
    ACTIONS(42), 1,
      aux_sym__line_token2,
    ACTIONS(45), 1,
      anon_sym_BANG,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(60), 1,
      sym_dir_sep,
    ACTIONS(63), 1,
      anon_sym_LBRACKattr_RBRACK,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(48), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(54), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(4), 2,
      sym__line,
      aux_sym_file_repeat1,
    STATE(33), 2,
      aux_sym__pattern,
      sym_range_notation,
    STATE(86), 2,
      sym_pattern,
      sym_quoted_pattern,
    STATE(109), 2,
      sym__attr_list,
      sym_macro_def,
  [130] = 7,
    ACTIONS(25), 1,
      sym_attr_name,
    ACTIONS(29), 1,
      anon_sym_BANG,
    ACTIONS(31), 1,
      anon_sym_DASH,
    STATE(80), 1,
      sym_builtin_attr,
    STATE(92), 1,
      sym_attribute,
    STATE(89), 2,
      sym__prefixed_attr,
      sym__attr_with_value,
    ACTIONS(33), 14,
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
  [166] = 15,
    ACTIONS(5), 1,
      aux_sym__line_token1,
    ACTIONS(9), 1,
      anon_sym_BANG,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym_dir_sep,
    ACTIONS(21), 1,
      anon_sym_LBRACKattr_RBRACK,
    ACTIONS(23), 1,
      sym_comment,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    ACTIONS(71), 1,
      aux_sym__line_token2,
    ACTIONS(11), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(15), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(4), 2,
      sym__line,
      aux_sym_file_repeat1,
    STATE(33), 2,
      aux_sym__pattern,
      sym_range_notation,
    STATE(86), 2,
      sym_pattern,
      sym_quoted_pattern,
    STATE(109), 2,
      sym__attr_list,
      sym_macro_def,
  [218] = 12,
    ACTIONS(9), 1,
      anon_sym_BANG,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym_dir_sep,
    ACTIONS(21), 1,
      anon_sym_LBRACKattr_RBRACK,
    ACTIONS(73), 1,
      aux_sym__line_token2,
    ACTIONS(75), 1,
      sym_comment,
    ACTIONS(11), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(15), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(33), 2,
      aux_sym__pattern,
      sym_range_notation,
    STATE(86), 2,
      sym_pattern,
      sym_quoted_pattern,
    STATE(103), 2,
      sym__attr_list,
      sym_macro_def,
  [260] = 9,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      sym_escaped_char,
    ACTIONS(83), 1,
      sym__special_char,
    ACTIONS(87), 1,
      sym_dir_sep,
    STATE(75), 1,
      aux_sym_pattern_repeat1,
    ACTIONS(77), 2,
      anon_sym_BSLASH,
      aux_sym__quoted_pattern_token1,
    STATE(14), 2,
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
  [295] = 9,
    ACTIONS(81), 1,
      sym_escaped_char,
    ACTIONS(83), 1,
      sym__special_char,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      sym_dir_sep,
    STATE(76), 1,
      aux_sym_pattern_repeat1,
    ACTIONS(77), 2,
      anon_sym_BSLASH,
      aux_sym__quoted_pattern_token1,
    STATE(14), 2,
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
  [330] = 9,
    ACTIONS(81), 1,
      sym_escaped_char,
    ACTIONS(83), 1,
      sym__special_char,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      sym_dir_sep,
    STATE(74), 1,
      aux_sym_pattern_repeat1,
    ACTIONS(77), 2,
      anon_sym_BSLASH,
      aux_sym__quoted_pattern_token1,
    STATE(14), 2,
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
  [365] = 3,
    ACTIONS(97), 1,
      sym_attr_name,
    STATE(84), 1,
      sym_builtin_attr,
    ACTIONS(33), 14,
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
  [388] = 9,
    ACTIONS(81), 1,
      sym_escaped_char,
    ACTIONS(83), 1,
      sym__special_char,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      sym_dir_sep,
    STATE(81), 1,
      aux_sym_pattern_repeat1,
    ACTIONS(77), 2,
      anon_sym_BSLASH,
      aux_sym__quoted_pattern_token1,
    STATE(14), 2,
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
  [423] = 3,
    ACTIONS(103), 1,
      sym_attr_name,
    STATE(90), 1,
      sym_builtin_attr,
    ACTIONS(33), 14,
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
  [446] = 7,
    ACTIONS(110), 1,
      sym_escaped_char,
    ACTIONS(113), 1,
      sym__special_char,
    ACTIONS(105), 2,
      anon_sym_BSLASH,
      aux_sym__quoted_pattern_token1,
    ACTIONS(108), 2,
      anon_sym_DQUOTE,
      sym_dir_sep,
    STATE(14), 2,
      aux_sym__quoted_pattern,
      sym_ansi_c_escape,
    STATE(30), 2,
      sym__char_code,
      sym__unicode_code,
    ACTIONS(116), 5,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
      sym__control_code,
  [476] = 7,
    ACTIONS(119), 1,
      sym__special_char,
    ACTIONS(125), 1,
      anon_sym_RBRACK,
    ACTIONS(127), 1,
      sym__class_char,
    ACTIONS(123), 2,
      anon_sym_DASH,
      sym_character_class,
    STATE(31), 2,
      sym__char_code,
      sym__unicode_code,
    STATE(22), 3,
      sym_ansi_c_escape,
      sym_class_range,
      aux_sym_range_notation_repeat1,
    ACTIONS(121), 5,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
      sym__control_code,
  [506] = 8,
    ACTIONS(83), 1,
      sym__special_char,
    ACTIONS(129), 1,
      anon_sym_BANG,
    ACTIONS(133), 1,
      sym_escaped_char,
    ACTIONS(135), 1,
      sym_dir_sep,
    ACTIONS(131), 2,
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
  [538] = 7,
    ACTIONS(119), 1,
      sym__special_char,
    ACTIONS(127), 1,
      sym__class_char,
    ACTIONS(137), 1,
      aux_sym_range_notation_token1,
    ACTIONS(139), 2,
      anon_sym_DASH,
      sym_character_class,
    STATE(31), 2,
      sym__char_code,
      sym__unicode_code,
    STATE(15), 3,
      sym_ansi_c_escape,
      sym_class_range,
      aux_sym_range_notation_repeat1,
    ACTIONS(121), 5,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
      sym__control_code,
  [568] = 7,
    ACTIONS(119), 1,
      sym__special_char,
    ACTIONS(127), 1,
      sym__class_char,
    ACTIONS(141), 1,
      anon_sym_RBRACK,
    ACTIONS(123), 2,
      anon_sym_DASH,
      sym_character_class,
    STATE(31), 2,
      sym__char_code,
      sym__unicode_code,
    STATE(22), 3,
      sym_ansi_c_escape,
      sym_class_range,
      aux_sym_range_notation_repeat1,
    ACTIONS(121), 5,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
      sym__control_code,
  [598] = 7,
    ACTIONS(119), 1,
      sym__special_char,
    ACTIONS(127), 1,
      sym__class_char,
    ACTIONS(143), 1,
      aux_sym_range_notation_token1,
    ACTIONS(145), 2,
      anon_sym_DASH,
      sym_character_class,
    STATE(31), 2,
      sym__char_code,
      sym__unicode_code,
    STATE(21), 3,
      sym_ansi_c_escape,
      sym_class_range,
      aux_sym_range_notation_repeat1,
    ACTIONS(121), 5,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
      sym__control_code,
  [628] = 7,
    ACTIONS(119), 1,
      sym__special_char,
    ACTIONS(127), 1,
      sym__class_char,
    ACTIONS(147), 1,
      anon_sym_RBRACK,
    ACTIONS(123), 2,
      anon_sym_DASH,
      sym_character_class,
    STATE(31), 2,
      sym__char_code,
      sym__unicode_code,
    STATE(22), 3,
      sym_ansi_c_escape,
      sym_class_range,
      aux_sym_range_notation_repeat1,
    ACTIONS(121), 5,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
      sym__control_code,
  [658] = 7,
    ACTIONS(119), 1,
      sym__special_char,
    ACTIONS(127), 1,
      sym__class_char,
    ACTIONS(149), 1,
      anon_sym_RBRACK,
    ACTIONS(123), 2,
      anon_sym_DASH,
      sym_character_class,
    STATE(31), 2,
      sym__char_code,
      sym__unicode_code,
    STATE(22), 3,
      sym_ansi_c_escape,
      sym_class_range,
      aux_sym_range_notation_repeat1,
    ACTIONS(121), 5,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
      sym__control_code,
  [688] = 7,
    ACTIONS(151), 1,
      sym__special_char,
    ACTIONS(160), 1,
      anon_sym_RBRACK,
    ACTIONS(162), 1,
      sym__class_char,
    ACTIONS(157), 2,
      anon_sym_DASH,
      sym_character_class,
    STATE(31), 2,
      sym__char_code,
      sym__unicode_code,
    STATE(22), 3,
      sym_ansi_c_escape,
      sym_class_range,
      aux_sym_range_notation_repeat1,
    ACTIONS(154), 5,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
      sym__control_code,
  [718] = 7,
    ACTIONS(83), 1,
      sym__special_char,
    ACTIONS(167), 1,
      sym_escaped_char,
    ACTIONS(169), 1,
      sym_dir_sep,
    ACTIONS(165), 2,
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
  [747] = 6,
    ACTIONS(119), 1,
      sym__special_char,
    ACTIONS(127), 1,
      sym__class_char,
    ACTIONS(171), 2,
      anon_sym_DASH,
      sym_character_class,
    STATE(31), 2,
      sym__char_code,
      sym__unicode_code,
    STATE(20), 3,
      sym_ansi_c_escape,
      sym_class_range,
      aux_sym_range_notation_repeat1,
    ACTIONS(121), 5,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
      sym__control_code,
  [774] = 6,
    ACTIONS(119), 1,
      sym__special_char,
    ACTIONS(127), 1,
      sym__class_char,
    ACTIONS(173), 2,
      anon_sym_DASH,
      sym_character_class,
    STATE(31), 2,
      sym__char_code,
      sym__unicode_code,
    STATE(18), 3,
      sym_ansi_c_escape,
      sym_class_range,
      aux_sym_range_notation_repeat1,
    ACTIONS(121), 5,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
      sym__control_code,
  [801] = 2,
    ACTIONS(177), 4,
      anon_sym_BSLASH,
      sym__pattern_char,
      anon_sym_LBRACK,
      sym_comment,
    ACTIONS(175), 9,
      ts_builtin_sym_end,
      aux_sym__line_token1,
      aux_sym__line_token2,
      anon_sym_BANG,
      anon_sym_DQUOTE,
      sym_escaped_char,
      sym_wildcard,
      sym_dir_sep,
      anon_sym_LBRACKattr_RBRACK,
  [819] = 6,
    ACTIONS(83), 1,
      sym__special_char,
    ACTIONS(181), 1,
      sym_escaped_char,
    ACTIONS(179), 2,
      anon_sym_BSLASH,
      aux_sym__quoted_pattern_token1,
    STATE(9), 2,
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
  [845] = 6,
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
  [871] = 2,
    ACTIONS(189), 4,
      anon_sym_BSLASH,
      sym__pattern_char,
      anon_sym_LBRACK,
      sym_comment,
    ACTIONS(187), 9,
      ts_builtin_sym_end,
      aux_sym__line_token1,
      aux_sym__line_token2,
      anon_sym_BANG,
      anon_sym_DQUOTE,
      sym_escaped_char,
      sym_wildcard,
      sym_dir_sep,
      anon_sym_LBRACKattr_RBRACK,
  [889] = 2,
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
  [905] = 3,
    ACTIONS(191), 1,
      sym__class_char,
    ACTIONS(195), 1,
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
  [922] = 7,
    ACTIONS(197), 1,
      aux_sym__line_token1,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(205), 1,
      sym_dir_sep,
    STATE(77), 1,
      aux_sym_pattern_repeat1,
    ACTIONS(199), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(201), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(40), 2,
      aux_sym__pattern,
      sym_range_notation,
  [947] = 7,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(207), 1,
      aux_sym__line_token1,
    ACTIONS(209), 1,
      sym_dir_sep,
    STATE(72), 1,
      aux_sym_pattern_repeat1,
    ACTIONS(199), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(201), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(40), 2,
      aux_sym__pattern,
      sym_range_notation,
  [972] = 2,
    ACTIONS(213), 1,
      sym__class_char,
    ACTIONS(211), 9,
      sym__special_char,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
      sym__control_code,
      anon_sym_DASH,
      anon_sym_RBRACK,
      sym_character_class,
  [987] = 2,
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
  [1002] = 3,
    ACTIONS(195), 1,
      anon_sym_DASH,
    ACTIONS(217), 1,
      sym__class_char,
    ACTIONS(215), 8,
      sym__special_char,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
      sym__control_code,
      anon_sym_RBRACK,
      sym_character_class,
  [1019] = 7,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(219), 1,
      aux_sym__line_token1,
    ACTIONS(221), 1,
      sym_dir_sep,
    STATE(71), 1,
      aux_sym_pattern_repeat1,
    ACTIONS(199), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(201), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(40), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1044] = 7,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(223), 1,
      aux_sym__line_token1,
    ACTIONS(225), 1,
      sym_dir_sep,
    STATE(82), 1,
      aux_sym_pattern_repeat1,
    ACTIONS(199), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(201), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(40), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1069] = 5,
    ACTIONS(235), 1,
      anon_sym_LBRACK,
    ACTIONS(227), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(230), 2,
      anon_sym_DQUOTE,
      sym_dir_sep,
    ACTIONS(232), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(39), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1089] = 5,
    ACTIONS(244), 1,
      anon_sym_LBRACK,
    ACTIONS(230), 2,
      aux_sym__line_token1,
      sym_dir_sep,
    ACTIONS(238), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(241), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(40), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1109] = 5,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(199), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(201), 2,
      sym_escaped_char,
      sym_wildcard,
    ACTIONS(247), 2,
      aux_sym__line_token1,
      sym_dir_sep,
    STATE(40), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1129] = 5,
    ACTIONS(253), 1,
      anon_sym_LBRACK,
    ACTIONS(247), 2,
      anon_sym_DQUOTE,
      sym_dir_sep,
    ACTIONS(249), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(251), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(39), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1149] = 5,
    ACTIONS(253), 1,
      anon_sym_LBRACK,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
    ACTIONS(255), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(259), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(42), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1168] = 5,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(261), 1,
      aux_sym__line_token1,
    ACTIONS(263), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(265), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(41), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1187] = 5,
    ACTIONS(253), 1,
      anon_sym_LBRACK,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(255), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(259), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(42), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1206] = 5,
    ACTIONS(253), 1,
      anon_sym_LBRACK,
    ACTIONS(269), 1,
      anon_sym_DQUOTE,
    ACTIONS(255), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(259), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(42), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1225] = 5,
    ACTIONS(253), 1,
      anon_sym_LBRACK,
    ACTIONS(271), 1,
      anon_sym_DQUOTE,
    ACTIONS(255), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(259), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(42), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1244] = 5,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(273), 1,
      aux_sym__line_token1,
    ACTIONS(263), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(265), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(41), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1263] = 2,
    STATE(34), 2,
      sym__char_code,
      sym__unicode_code,
    ACTIONS(275), 6,
      sym__octal_code,
      sym__hex_code,
      aux_sym__unicode_code_token1,
      aux_sym__unicode_code_token2,
      sym__control_code,
      sym__class_char,
  [1276] = 5,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(277), 1,
      aux_sym__line_token1,
    ACTIONS(263), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(265), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(41), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1295] = 5,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(279), 1,
      aux_sym__line_token1,
    ACTIONS(263), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(265), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(41), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1314] = 5,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(281), 1,
      aux_sym__line_token1,
    ACTIONS(263), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(265), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(41), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1333] = 5,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(283), 1,
      aux_sym__line_token1,
    ACTIONS(263), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(265), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(41), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1352] = 5,
    ACTIONS(253), 1,
      anon_sym_LBRACK,
    ACTIONS(285), 1,
      anon_sym_DQUOTE,
    ACTIONS(255), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(259), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(42), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1371] = 5,
    ACTIONS(253), 1,
      anon_sym_LBRACK,
    ACTIONS(287), 1,
      anon_sym_DQUOTE,
    ACTIONS(255), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(259), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(42), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1390] = 5,
    ACTIONS(253), 1,
      anon_sym_LBRACK,
    ACTIONS(289), 1,
      anon_sym_DQUOTE,
    ACTIONS(255), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(259), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(42), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1409] = 5,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(291), 1,
      aux_sym__line_token1,
    ACTIONS(263), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(265), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(41), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1428] = 5,
    ACTIONS(253), 1,
      anon_sym_LBRACK,
    ACTIONS(293), 1,
      anon_sym_DQUOTE,
    ACTIONS(255), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(259), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(42), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1447] = 5,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(299), 1,
      sym_dir_sep,
    ACTIONS(295), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(297), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(38), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1466] = 5,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(301), 1,
      aux_sym__line_token1,
    ACTIONS(263), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(265), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(41), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1485] = 4,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(263), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(265), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(41), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1501] = 2,
    ACTIONS(305), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(303), 5,
      aux_sym__line_token1,
      sym_escaped_char,
      anon_sym_LBRACK,
      sym_wildcard,
      sym_dir_sep,
  [1513] = 4,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(307), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(309), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(37), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1529] = 2,
    ACTIONS(311), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(313), 5,
      anon_sym_DQUOTE,
      sym_escaped_char,
      anon_sym_LBRACK,
      sym_wildcard,
      sym_dir_sep,
  [1541] = 2,
    ACTIONS(311), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(313), 5,
      aux_sym__line_token1,
      sym_escaped_char,
      anon_sym_LBRACK,
      sym_wildcard,
      sym_dir_sep,
  [1553] = 2,
    ACTIONS(305), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(303), 5,
      anon_sym_DQUOTE,
      sym_escaped_char,
      anon_sym_LBRACK,
      sym_wildcard,
      sym_dir_sep,
  [1565] = 4,
    ACTIONS(253), 1,
      anon_sym_LBRACK,
    ACTIONS(255), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(259), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(42), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1581] = 4,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(315), 2,
      anon_sym_BSLASH,
      sym__pattern_char,
    ACTIONS(317), 2,
      sym_escaped_char,
      sym_wildcard,
    STATE(32), 2,
      aux_sym__pattern,
      sym_range_notation,
  [1597] = 3,
    ACTIONS(319), 1,
      aux_sym__line_token1,
    ACTIONS(321), 1,
      aux_sym__line_token2,
    STATE(83), 1,
      aux_sym__attr_list_repeat1,
  [1607] = 3,
    ACTIONS(323), 1,
      aux_sym__line_token1,
    ACTIONS(325), 1,
      aux_sym__line_token2,
    STATE(83), 1,
      aux_sym__attr_list_repeat1,
  [1617] = 3,
    ACTIONS(327), 1,
      aux_sym__line_token1,
    ACTIONS(329), 1,
      sym_dir_sep,
    STATE(78), 1,
      aux_sym_pattern_repeat1,
  [1627] = 3,
    ACTIONS(331), 1,
      aux_sym__line_token1,
    ACTIONS(333), 1,
      sym_dir_sep,
    STATE(78), 1,
      aux_sym_pattern_repeat1,
  [1637] = 3,
    ACTIONS(335), 1,
      anon_sym_DQUOTE,
    ACTIONS(337), 1,
      sym_dir_sep,
    STATE(73), 1,
      aux_sym_pattern_repeat1,
  [1647] = 3,
    ACTIONS(340), 1,
      anon_sym_DQUOTE,
    ACTIONS(342), 1,
      sym_dir_sep,
    STATE(73), 1,
      aux_sym_pattern_repeat1,
  [1657] = 3,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      sym_dir_sep,
    STATE(73), 1,
      aux_sym_pattern_repeat1,
  [1667] = 3,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      sym_dir_sep,
    STATE(73), 1,
      aux_sym_pattern_repeat1,
  [1677] = 3,
    ACTIONS(352), 1,
      aux_sym__line_token1,
    ACTIONS(354), 1,
      sym_dir_sep,
    STATE(78), 1,
      aux_sym_pattern_repeat1,
  [1687] = 3,
    ACTIONS(335), 1,
      aux_sym__line_token1,
    ACTIONS(356), 1,
      sym_dir_sep,
    STATE(78), 1,
      aux_sym_pattern_repeat1,
  [1697] = 1,
    ACTIONS(359), 3,
      aux_sym__line_token1,
      aux_sym__line_token2,
      anon_sym_EQ,
  [1703] = 2,
    ACTIONS(363), 1,
      anon_sym_EQ,
    ACTIONS(361), 2,
      aux_sym__line_token1,
      aux_sym__line_token2,
  [1711] = 3,
    ACTIONS(365), 1,
      anon_sym_DQUOTE,
    ACTIONS(367), 1,
      sym_dir_sep,
    STATE(73), 1,
      aux_sym_pattern_repeat1,
  [1721] = 3,
    ACTIONS(369), 1,
      aux_sym__line_token1,
    ACTIONS(371), 1,
      sym_dir_sep,
    STATE(78), 1,
      aux_sym_pattern_repeat1,
  [1731] = 3,
    ACTIONS(373), 1,
      aux_sym__line_token1,
    ACTIONS(376), 1,
      aux_sym__line_token2,
    STATE(83), 1,
      aux_sym__attr_list_repeat1,
  [1741] = 1,
    ACTIONS(378), 2,
      aux_sym__line_token1,
      aux_sym__line_token2,
  [1746] = 2,
    ACTIONS(380), 1,
      aux_sym__line_token1,
    STATE(70), 1,
      aux_sym__attr_list_repeat1,
  [1753] = 2,
    ACTIONS(380), 1,
      aux_sym__line_token1,
    STATE(69), 1,
      aux_sym__attr_list_repeat1,
  [1760] = 2,
    ACTIONS(382), 1,
      aux_sym__attr_with_value_token1,
    ACTIONS(384), 1,
      aux_sym__attr_with_value_token2,
  [1767] = 1,
    ACTIONS(386), 2,
      aux_sym__line_token1,
      aux_sym__line_token2,
  [1772] = 1,
    ACTIONS(388), 2,
      aux_sym__line_token1,
      aux_sym__line_token2,
  [1777] = 1,
    ACTIONS(390), 2,
      aux_sym__line_token1,
      aux_sym__line_token2,
  [1782] = 1,
    ACTIONS(386), 2,
      aux_sym__line_token1,
      aux_sym__line_token2,
  [1787] = 1,
    ACTIONS(376), 2,
      aux_sym__line_token1,
      aux_sym__line_token2,
  [1792] = 1,
    ACTIONS(392), 1,
      aux_sym__line_token1,
  [1796] = 1,
    ACTIONS(394), 1,
      aux_sym__line_token1,
  [1800] = 1,
    ACTIONS(396), 1,
      aux_sym__line_token1,
  [1804] = 1,
    ACTIONS(398), 1,
      aux_sym__line_token1,
  [1808] = 1,
    ACTIONS(400), 1,
      aux_sym__line_token1,
  [1812] = 1,
    ACTIONS(402), 1,
      aux_sym__line_token1,
  [1816] = 1,
    ACTIONS(404), 1,
      aux_sym__line_token1,
  [1820] = 1,
    ACTIONS(406), 1,
      aux_sym__line_token1,
  [1824] = 1,
    ACTIONS(408), 1,
      aux_sym__line_token1,
  [1828] = 1,
    ACTIONS(410), 1,
      aux_sym__line_token1,
  [1832] = 1,
    ACTIONS(412), 1,
      aux_sym__line_token2,
  [1836] = 1,
    ACTIONS(414), 1,
      aux_sym__line_token1,
  [1840] = 1,
    ACTIONS(416), 1,
      aux_sym__line_token1,
  [1844] = 1,
    ACTIONS(418), 1,
      aux_sym__line_token1,
  [1848] = 1,
    ACTIONS(420), 1,
      aux_sym__line_token1,
  [1852] = 1,
    ACTIONS(422), 1,
      ts_builtin_sym_end,
  [1856] = 1,
    ACTIONS(73), 1,
      aux_sym__line_token2,
  [1860] = 1,
    ACTIONS(424), 1,
      aux_sym__line_token1,
  [1864] = 1,
    ACTIONS(426), 1,
      sym_attr_name,
  [1868] = 1,
    ACTIONS(428), 1,
      aux_sym__line_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 39,
  [SMALL_STATE(4)] = 78,
  [SMALL_STATE(5)] = 130,
  [SMALL_STATE(6)] = 166,
  [SMALL_STATE(7)] = 218,
  [SMALL_STATE(8)] = 260,
  [SMALL_STATE(9)] = 295,
  [SMALL_STATE(10)] = 330,
  [SMALL_STATE(11)] = 365,
  [SMALL_STATE(12)] = 388,
  [SMALL_STATE(13)] = 423,
  [SMALL_STATE(14)] = 446,
  [SMALL_STATE(15)] = 476,
  [SMALL_STATE(16)] = 506,
  [SMALL_STATE(17)] = 538,
  [SMALL_STATE(18)] = 568,
  [SMALL_STATE(19)] = 598,
  [SMALL_STATE(20)] = 628,
  [SMALL_STATE(21)] = 658,
  [SMALL_STATE(22)] = 688,
  [SMALL_STATE(23)] = 718,
  [SMALL_STATE(24)] = 747,
  [SMALL_STATE(25)] = 774,
  [SMALL_STATE(26)] = 801,
  [SMALL_STATE(27)] = 819,
  [SMALL_STATE(28)] = 845,
  [SMALL_STATE(29)] = 871,
  [SMALL_STATE(30)] = 889,
  [SMALL_STATE(31)] = 905,
  [SMALL_STATE(32)] = 922,
  [SMALL_STATE(33)] = 947,
  [SMALL_STATE(34)] = 972,
  [SMALL_STATE(35)] = 987,
  [SMALL_STATE(36)] = 1002,
  [SMALL_STATE(37)] = 1019,
  [SMALL_STATE(38)] = 1044,
  [SMALL_STATE(39)] = 1069,
  [SMALL_STATE(40)] = 1089,
  [SMALL_STATE(41)] = 1109,
  [SMALL_STATE(42)] = 1129,
  [SMALL_STATE(43)] = 1149,
  [SMALL_STATE(44)] = 1168,
  [SMALL_STATE(45)] = 1187,
  [SMALL_STATE(46)] = 1206,
  [SMALL_STATE(47)] = 1225,
  [SMALL_STATE(48)] = 1244,
  [SMALL_STATE(49)] = 1263,
  [SMALL_STATE(50)] = 1276,
  [SMALL_STATE(51)] = 1295,
  [SMALL_STATE(52)] = 1314,
  [SMALL_STATE(53)] = 1333,
  [SMALL_STATE(54)] = 1352,
  [SMALL_STATE(55)] = 1371,
  [SMALL_STATE(56)] = 1390,
  [SMALL_STATE(57)] = 1409,
  [SMALL_STATE(58)] = 1428,
  [SMALL_STATE(59)] = 1447,
  [SMALL_STATE(60)] = 1466,
  [SMALL_STATE(61)] = 1485,
  [SMALL_STATE(62)] = 1501,
  [SMALL_STATE(63)] = 1513,
  [SMALL_STATE(64)] = 1529,
  [SMALL_STATE(65)] = 1541,
  [SMALL_STATE(66)] = 1553,
  [SMALL_STATE(67)] = 1565,
  [SMALL_STATE(68)] = 1581,
  [SMALL_STATE(69)] = 1597,
  [SMALL_STATE(70)] = 1607,
  [SMALL_STATE(71)] = 1617,
  [SMALL_STATE(72)] = 1627,
  [SMALL_STATE(73)] = 1637,
  [SMALL_STATE(74)] = 1647,
  [SMALL_STATE(75)] = 1657,
  [SMALL_STATE(76)] = 1667,
  [SMALL_STATE(77)] = 1677,
  [SMALL_STATE(78)] = 1687,
  [SMALL_STATE(79)] = 1697,
  [SMALL_STATE(80)] = 1703,
  [SMALL_STATE(81)] = 1711,
  [SMALL_STATE(82)] = 1721,
  [SMALL_STATE(83)] = 1731,
  [SMALL_STATE(84)] = 1741,
  [SMALL_STATE(85)] = 1746,
  [SMALL_STATE(86)] = 1753,
  [SMALL_STATE(87)] = 1760,
  [SMALL_STATE(88)] = 1767,
  [SMALL_STATE(89)] = 1772,
  [SMALL_STATE(90)] = 1777,
  [SMALL_STATE(91)] = 1782,
  [SMALL_STATE(92)] = 1787,
  [SMALL_STATE(93)] = 1792,
  [SMALL_STATE(94)] = 1796,
  [SMALL_STATE(95)] = 1800,
  [SMALL_STATE(96)] = 1804,
  [SMALL_STATE(97)] = 1808,
  [SMALL_STATE(98)] = 1812,
  [SMALL_STATE(99)] = 1816,
  [SMALL_STATE(100)] = 1820,
  [SMALL_STATE(101)] = 1824,
  [SMALL_STATE(102)] = 1828,
  [SMALL_STATE(103)] = 1832,
  [SMALL_STATE(104)] = 1836,
  [SMALL_STATE(105)] = 1840,
  [SMALL_STATE(106)] = 1844,
  [SMALL_STATE(107)] = 1848,
  [SMALL_STATE(108)] = 1852,
  [SMALL_STATE(109)] = 1856,
  [SMALL_STATE(110)] = 1860,
  [SMALL_STATE(111)] = 1864,
  [SMALL_STATE(112)] = 1868,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_list, 3),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_def, 4, .production_id = 9),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(7),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(4),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(59),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(33),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(16),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(33),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(17),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(68),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(111),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(109),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__quoted_pattern, 2), SHIFT_REPEAT(14),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__quoted_pattern, 2),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__quoted_pattern, 2), SHIFT_REPEAT(14),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__quoted_pattern, 2), SHIFT_REPEAT(30),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__quoted_pattern, 2), SHIFT_REPEAT(30),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_range_notation_repeat1, 2), SHIFT_REPEAT(35),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_range_notation_repeat1, 2), SHIFT_REPEAT(31),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_range_notation_repeat1, 2), SHIFT_REPEAT(22),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_range_notation_repeat1, 2),
  [162] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_range_notation_repeat1, 2), SHIFT_REPEAT(36),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 3),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 3),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 2),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 2),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ansi_c_escape, 1),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ansi_c_escape, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 2, .production_id = 1),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_range, 3),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_range, 3),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_range_notation_repeat1, 1),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_range_notation_repeat1, 1),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 3, .production_id = 4),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 2),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [227] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__pattern, 2), SHIFT_REPEAT(39),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__pattern, 2),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__pattern, 2), SHIFT_REPEAT(39),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__pattern, 2), SHIFT_REPEAT(19),
  [238] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__pattern, 2), SHIFT_REPEAT(40),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__pattern, 2), SHIFT_REPEAT(40),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__pattern, 2), SHIFT_REPEAT(17),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pattern_repeat1, 2, .production_id = 10),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 4, .production_id = 13),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 3, .production_id = 5),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 4, .production_id = 16),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 3, .production_id = 7),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 4, .production_id = 15),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 2, .production_id = 2),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 5, .production_id = 19),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 3, .production_id = 11),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_notation, 4),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_notation, 4),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_notation, 3),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_notation, 3),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_list, 2),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_def, 3, .production_id = 9),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 4, .production_id = 14),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 2, .production_id = 3),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pattern_repeat1, 2, .production_id = 12),
  [337] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pattern_repeat1, 2, .production_id = 12), SHIFT_REPEAT(67),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 3, .production_id = 8),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pattern_repeat1, 2, .production_id = 12), SHIFT_REPEAT(61),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_attr, 1),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__prefixed_attr, 1),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 3, .production_id = 6),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [373] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__attr_list_repeat1, 2), SHIFT_REPEAT(5),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__attr_list_repeat1, 2),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__prefixed_attr, 2, .production_id = 18),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__attr_with_value, 3),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__prefixed_attr, 2, .production_id = 17),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_pattern, 5, .production_id = 13),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_pattern, 5, .production_id = 15),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_pattern, 4),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_pattern, 6, .production_id = 23),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_pattern, 6, .production_id = 24),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_pattern, 5, .production_id = 14),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_pattern, 6, .production_id = 25),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_pattern, 6, .production_id = 19),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_pattern, 7, .production_id = 26),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_pattern, 5, .production_id = 22),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_pattern, 5, .production_id = 21),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_pattern, 5, .production_id = 20),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_pattern, 4, .production_id = 6),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_pattern, 4, .production_id = 5),
  [422] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_pattern, 4, .production_id = 4),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_pattern, 3),
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
