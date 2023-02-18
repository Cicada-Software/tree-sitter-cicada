SHELL_ALIASES = ['git', 'cd', 'mkdir', 'rm', 'echo', 'make'];

module.exports = grammar({
  name: 'cicada',

  rules: {
    source_file: $ => repeat1($.stmt),

    stmt: $ => choice(
      $.on_stmt,
      $.comment,
      $.let_stmt,
      $.func_call_expr,
    ),

    event_type: $ => /[a-z.]+/,

    on_stmt: $ => seq(
      'on',
      field('event', $.event_type),
      optional(seq('where', $.expr)),
    ),

    let_stmt: $ => seq('let', $.ident, '=', $.expr),

    expr: $ => choice(
      $.unary_expr,
      $.ident,
      $.number,
      $.string,
      $.paren_expr,
      $.bool_literal,
    ),

    func_call_expr: $ => prec.right(seq(
      $.ident,
      repeat($.string_ident),
      /\r?\n/,
    )),

    paren_expr: $ => seq('(', $.expr, ')'),

    // floats aren't actually supported yet :(
    number: $ => /[0-9]+([0-9])?/,

    bool_literal: $ => choice('true', 'false'),

    string: $ => /".*"/,

    string_ident: $ => /\S+/,
    ident: $ => /[a-zA-Z_][a-zA-Z0-9._]*/,

    unary_expr: $ => seq(
      choice('not', '-'),
      $.expr,
    ),

    comment: $ => /#.*/,
  }
});
