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
        "."
      ),
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
    clause_list: ($) => sepBy1(alias($._atom, $.clause), ","),
    argument_list: ($) => sepBy1($._argument, ","),
    _argument: ($) => choice($.identifier, $.lit),
    identifier: (_) => /[a-zA-Z][a-zA-Z0-9_]*/,
    lit: (_) => /\d+/,
  },
});
