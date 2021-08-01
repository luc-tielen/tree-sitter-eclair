module.exports = grammar({
  name: "eclair",
  rules: {
    source_file: $ => repeat($._statement),
    _statement: $ => $.fact,
    fact: $ => seq(
      $.identifier,
      '(', $.argument_list, ')',
      '.'
    ),
    argument_list: $ => seq(
      $._argument,
      repeat(seq(',', $._argument))
    ),
    _argument: $ => choice($.identifier, $.lit),
    identifier: _ => /[a-zA-Z][a-zA-Z0-9_]*/,
    lit: _ => /\d+/
  }
});
