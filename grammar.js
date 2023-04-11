// Precedences:

const PREC = {
  UNARY: 0,
  PLUS_MINUS: 1,
  MUL_DIV: 2,
};

// Some extra combinators:

const sepBy1 = (p1, sep) => seq(p1, repeat(seq(sep, p1)));

const between = (begin, end) => (p) => seq(begin, p, end);

const betweenParens = between("(", ")");

// Grammar definition:
module.exports = grammar({
  name: "eclair",
  rules: {
    source_file: ($) => repeat($._statement),
    _statement: ($) => choice($.typedef, $.extern, $.fact, $.rule),
    typedef: ($) =>
      seq(
        "@def",
        field("name", $.identifier),
        betweenParens(field("types", $.type_list)),
        optional(repeat($.qualifier)),
        "."
      ),
    extern: ($) =>
      seq(
        "@extern",
        field("name", $.identifier),
        betweenParens(field("types", $.type_list)),
        optional($.type),
        "."
      ),
    qualifier: () => choice("input", "output"),
    type_list: ($) => sepBy1($.type, ","),
    type: () => choice("u32", "string"),
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
    clause_list: ($) => sepBy1($._clause, ","),
    _clause: ($) => choice($.comparison, alias($._atom, $.clause), $.negation),
    negation: ($) => seq("!", alias($._atom, $.clause)),
    comparison: ($) => seq($._expr, $.compare_op, $._expr),
    compare_op: () => choice("=", "!=", "<", "<=", ">", ">="),
    argument_list: ($) => sepBy1($._expr, ","),
    _expr: ($) =>
      choice(seq("(", $._expr, ")"), $.unary_expr, $.binary_expr, $._term),
    unary_expr: ($) =>
      prec.left(
        PREC.UNARY,
        seq(field("operator", "-"), field("expr", $._expr))
      ),
    binary_expr: ($) => {
      const precedenceTable = [
        [PREC.PLUS_MINUS, "+"],
        [PREC.PLUS_MINUS, "-"],
        [PREC.MUL_DIV, "*"],
        [PREC.MUL_DIV, "/"],
      ];
      return choice(
        ...precedenceTable.map(([precedence, op]) =>
          prec.left(
            precedence,
            seq(
              field("left", $._expr),
              field("operator", op),
              field("right", $._expr)
            )
          )
        )
      );
    },
    _term: ($) => choice($.identifier, $._literal, $._atom, $.wildcard, $.hole),
    identifier: (_) => /[a-zA-Z][a-zA-Z0-9_]*/,
    _literal: ($) => choice($.number, $.string),
    number: (_) => /\d+/,
    string: (_) => /\".*\"/,
    wildcard: (_) => "_",
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
