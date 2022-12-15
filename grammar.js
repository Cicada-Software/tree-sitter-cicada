module.exports = grammar({
  name: 'cicada',

  rules: {
    source_file: $ => repeat1($.stmt),

    stmt: $ => choice(
      $.on_stmt,
    ),

    on_stmt: $ => seq('on', /[a-z.]+/),

    comment: $ => /#.*/,
  }
});
