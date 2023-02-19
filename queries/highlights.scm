[
  "and"
; "break"
; "continue"
; "elif"
; "else"
; "if"
  "is"
; "import"
  "let"
  "mod"
; "mut"
; "noop"
  "not"
  "on"
  "or"
; "return"
; "unreachable"
  "where"
; "while"
  "xor"
] @keyword

["(" ")"] @punctuation.bracket

(number) @number

(string) @string

(ident) @variable

(comment) @comment

(func_call_expr . (ident)? @function)

(on_stmt event: (event_type) @constant)

(bool_literal) @constant
