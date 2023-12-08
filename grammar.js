SHELL_ALIASES = ['cd', 'cp', 'echo', 'git', 'ls', 'make', 'mkdir', 'rm'];

module.exports = grammar({
  name: 'cicada',

  rules: {
    source_file: $ => repeat1($.stmt),

    stmt: $ => choice(
      $.on_stmt,
      $.run_on_stmt,
      $.comment,
      $.let_stmt,
      $.func_call_expr,
      $.cache_stmt,
      $.title_stmt,
      $.func_def_stmt,
      $.if_expr, // TODO: make this an expression
      $.for_stmt,
      $.break_stmt,
      $.continue_stmt,
    ),

    event_type: $ => /[a-z.]+/,

    on_stmt: $ => seq(
      'on',
      field('event', $.event_type),
      optional(seq('where', $.expr)),
    ),

    run_on_type: $ => choice('image', 'self_hosted'),

    run_on_stmt: $ => seq(
      'run_on',
      field('type', $.run_on_type),
      optional(
        repeat1(
          choice($.string_ident, '-', ':', '/', $.number),
        ),
      ),
      '\n',
    ),

    if_expr: $ => seq('if', $.expr, ':'),

    for_stmt: $ => seq('for', $.ident, 'in', $.expr, ':'),

    break_stmt: $ => 'break' ,
    continue_stmt: $ => 'continue',

    let_stmt: $ => seq('let', optional('mut'), $.ident, '=', $.expr),

    expr: $ => choice(
      $.binary_expr,
      $.unary_expr,
      $.ident,
      $.number,
      $.string,
      $.paren_expr,
      $.bool_literal,
      $.list_expr,
    ),

    func_call_expr: $ => prec.right(seq(
      $.ident,
      repeat($.string_ident),
      /\r?\n/,
    )),

    paren_expr: $ => seq('(', $.expr, ')'),

    list_expr: $ => seq(
      '[',
      repeat1(seq($.expr, ',')),
      ']'
    ),

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

    cache_stmt: $ => seq(
      'cache',
      repeat1($.string_ident),
      'using',
      $.expr,
    ),

    title_stmt: $ => seq('title', repeat1($.string_ident), '\n'),

    type: $ => choice($.ident, '()'),

    func_annotation: $ => seq('@', $.ident),

    func_def_stmt: $ => seq(
      repeat($.func_annotation),
      'fn',
      $.ident,
      '(',
      repeat(seq($.ident, ':', $.type)),
      ')',
      optional(seq('->', $.type)),
      ':',
    ),

    comment: $ => /#.*/,
  }
});
