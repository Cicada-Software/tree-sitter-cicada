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
      $.binary_expr,
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

    number: $ => choice(
      /0b[01_]+/,
      /0o[0-7_]+/,
      /0x[A-Fa-f0-9_]+/,
      /[0-9]+([0-9])?/,
    ),

    bool_literal: $ => choice('true', 'false'),

    string: $ => seq('"', optional(repeat(/./)), '"'),

    string_ident: $ => choice(
      $.paren_expr,
      seq(
        /[^\S(]+/,
        optional(
          seq(token.immediate('('), $.expr, ')', /[^\S)]*/),
        ),
      ),
    ),

    ident: $ => /[a-zA-Z_][a-zA-Z0-9._]*/,

    unary_expr: $ => prec.left(
      seq(
        choice('not', '-'),
        $.expr,
      )
    ),

    binary_expr: $ => prec.left(
      seq(
        $.expr,
        choice(
          '+', '-', '*', '/', '^', '<', '<=', '>', '>=',
          'and', 'mod', 'or', 'is', 'xor'
        ),
        $.expr,
      ),
    ),

    comment: $ => /#.*/,
  }
});
