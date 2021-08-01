module.exports = grammar({
  name: "eclair",
  rules: {
    source_file: $ => repeat($._statement),
    _statement: $ => choice($.fact, $.rule),
    fact: $ => seq($._atom, '.'),
    _atom: $ => seq(
      $.identifier,
      '(', $.argument_list, ')'
    ),
    rule: $ => seq(
      $.identifier,
      '(', $.argument_list, ')',
      ':-',
      $.clause_list,
      '.'
    ),
    clause_list: $ => seq(
      alias($._atom, $.clause),
      repeat(seq(',', alias($._atom, $.clause)))
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
