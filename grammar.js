// Some extra combinators:

const sepBy1 = (p1, sep) => seq(p1, repeat(seq(sep, p1)));

const between = (begin, end) => (p) => seq(begin, p, end);

const betweenParens = between("(", ")");

// Grammar definition:
module.exports = grammar({
  name: "eclair",
  rules: {
    source_file: ($) => repeat($._statement),
    _statement: ($) => choice($.typedef, $.fact, $.rule),
    typedef: ($) =>
      seq(
        "@def",
        field("name", $.identifier),
        betweenParens(field("types", $.type_list)),
        optional(repeat($.qualifier)),
        "."
      ),
    qualifier: ($) => choice("input", "output"),
    type_list: ($) => sepBy1($.type, ","),
    type: ($) => choice("u32", "string"),
    fact: ($) => seq($._atom, "."),
    _atom: ($) =>
      seq(
        field("name", $.identifier),
        betweenParens(field("arguments", $.argument_list))
      ),
    rule: ($) =>
      seq(
        field("name", $.identifier),
        betweenParens(field("arguments", $.argument_list)),
        ":-",
        field("clauses", $.clause_list),
        "."
      ),
    clause_list: ($) =>
      sepBy1(choice($.equality, alias($._atom, $.clause)), ","),
    equality: ($) => seq($._argument, "=", $._argument),
    argument_list: ($) => sepBy1($._argument, ","),
    _argument: ($) => choice($.identifier, $._literal, $.hole),
    identifier: (_) => /[a-zA-Z][a-zA-Z0-9_]*/,
    _literal: ($) => choice($.number, $.string),
    number: (_) => /\d+/,
    string: (_) => /\".*\"/,
    hole: (_) => "?",

    // http://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
    comment: (_) =>
      token(
        choice(
          seq("//", /(\\(.|\r?\n)|[^\\\n])*/),
          seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/")
        )
      ),
  },
  extras: ($) => [/\s|\\\r?\n/, $.comment],
});
