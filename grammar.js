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

    on_stmt: $ => seq('on', /[a-z.]+/),

    let_stmt: $ => seq('let', $.ident, '=', $.expr),

    expr: $ => choice(
      $.ident,
      $.number,
    ),

    func_call_expr: $ => prec.right(seq(
      $.ident,
      repeat($.string_ident),
      /\r?\n/,
    )),

    // floats aren't actually supported yet :(
    number: $ => /[0-9]+([0-9])?/,

    string: $ => /".*"/,

    string_ident: $ => /\S+/,
    ident: $ => /[a-zA-Z_][a-zA-Z0-9._]*/,

    comment: $ => /#.*/,
  }
});
