/**
 * @file Tree-sitter grammar definition
 * @author ObserverOfTime
 * @license MIT
 * @see {@link https://git-scm.com/docs/gitattributes|gitattributes documentation}
 * @see {@link https://git-scm.com/docs/gitignore#_pattern_format|pattern format}
 * @see {@link https://github.com/git/git/blob/master/attr.c|git attr source}
 * @see {@link https://github.com/git/git/blob/master/wildmatch.c|git wildmatch source}
 * @see {@link https://www.gnu.org/software/bash/manual/html_node/ANSI_002dC-Quoting.html|ANSI-C quoting}
 * @see {@link https://www.gnu.org/software/grep/manual/html_node/Character-Classes-and-Bracket-Expressions.html|character classes}
 */

/** Built-in attribute names */
const BUILTIN_ATTRIBUTES = [
  'text',
  'eol',
  'crlf',
  'working-tree-encoding',
  'ident',
  'filter',
  'diff',
  'merge',
  'whitespace',
  'export-ignore',
  'export-subst',
  'delta',
  'encoding',
  'binary'
];

/** POSIX character classes */
const POSIX_CLASSES = [
  'alnum',
  'alpha',
  'blank',
  'cntrl',
  'digit',
  'graph',
  'lower',
  'print',
  'punct',
  'space',
  'upper',
  'xdigit'
];

/** New line token */
const NL = /\r?\n/;

/** Whitespace token */
const WS = /[ \t]+/;

/**
 * Returns a quoted or unquoted pattern sequence
 * @param {GrammarSymbols<any>} $ the symbols of the grammar
 * @param {boolean} quoted `true` if the pattern is in quotes
 */
const __pattern = ($, quoted) => [
  optional(alias('!', $.pattern_negation)), // error
  optional(field('absolute', $.dir_sep)),
  quoted ? $._quoted_pattern : $._pattern,
  repeat(seq(field('relative', $.dir_sep), $._pattern)),
  optional(alias($.dir_sep, $.trailing_slash)) // error
]

module.exports = grammar({
  name: 'gitattributes',

  extras: _ => [],

  word: $ => $.attr_name,

  rules: {
    file: $ => repeat($._line),

    _line: $ => choice(
      seq(optional(WS), $.comment, NL),
      seq(optional(WS), $._attr_list, NL),
      seq(optional(WS), $.macro_def, NL),
      seq(optional(WS), NL)
    ),

    _attr_list: $ => seq(
      prec.left(choice($.pattern, $.quoted_pattern)),
      repeat1(seq(WS, $.attribute)),
      optional(WS)
    ),

    pattern: $ => seq(...__pattern($, false)),

    _pattern: $ => repeat1(choice(
      $._pattern_char,
      $.wildcard,
      $.escaped_char,
      $.range_notation,
      alias('\\', $.redundant_escape) // error
    )),

    quoted_pattern: $ => seq(
      '"', ...__pattern($, true), '"'
    ),

    _quoted_pattern: $ => repeat1(choice(
      /[^\n/]/,
      choice($.ansi_c_escape, $.escaped_char),
      alias('\\', $.redundant_escape)
    )),

    _pattern_char: _ => /[^\s/?*]/,

    escaped_char: _ => /\\[\\\[\]!?*]/,

    // TODO: \c control characters
    ansi_c_escape: $ => prec.right(
      1, choice(
        $._special_char, $._char_code
      )
    ),

    _special_char: _ => /\\[abeEfnrtv\\'"?]/,

    _char_code: $ => choice(
      $._octal_code,
      $._hex_code,
      $._unicode_code
    ),

    _octal_code: _ => /\\\d{1,3}/,

    _hex_code: _ => /\\x[0-9A-Fa-f]{1,2}/,

    _unicode_code: _ => choice(
        /\\u[0-9A-Fa-f]{1,4}/,
        /\\U[0-9A-Fa-f]{1,8}/
    ),

    range_notation: $ => prec.left(seq(
      '[',
      optional(alias(
        choice('!', '^'),
        $.range_negation
      )),
      repeat1(choice(
        $.class_range,
        $.character_class,
        $._class_char,
        $.ansi_c_escape,
        '-'
      )),
      ']'
    )),

    class_range: $ => prec.right(
      2, seq(
        choice($._class_char, $._char_code),
        '-',
        choice($._class_char, $._char_code)
      )
    ),

    _class_char: _ => choice(
      /[^-\\\]\n]/, /\\[-\\\[\]]/
    ),

    character_class: _ => token(seq(
      '[:', choice(...POSIX_CLASSES), ':]'
    )),

    wildcard: _ => choice('?', '*', '**'),

    dir_sep: _ => '/',

    attribute: $ => choice(
      $._attr_with_value,
      $._prefixed_attr
    ),

    _prefixed_attr: $ => seq(
      optional(choice(
        alias('!', $.attr_reset),
        alias('-', $.attr_unset),
      )),
      choice($.attr_name, $.builtin_attr),
    ),

    _attr_with_value: $ => seq(
      choice($.attr_name, $.builtin_attr),
      alias('=', $.attr_set),
      // TODO: can values be quoted?
      choice(
        prec(2, alias(
          choice('true', 'false'),
          $.boolean_value
        )),
        prec(1, alias(/\S+/, $.string_value))
      )
    ),

    attr_name: _ => /[A-Za-z0-9_.][-A-Za-z0-9_.]*/,

    builtin_attr: _ => prec(1, choice(...BUILTIN_ATTRIBUTES)),

    macro_def: $ => seq(
      alias('[attr]', $.macro_tag),
      field('macro_name', $.attr_name),
      repeat1(seq(WS, $.attribute)),
      optional(WS)
    ),

    comment: _ => /#[^\n]*/
  }
});
