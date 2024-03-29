[
  "and"
  "cache"
  "elif"
  "else"
  "for"
  "fn"
  "if"
  "in"
  "is"
; "import"
  "let"
  "mod"
  "mut"
; "noop"
  "not"
  "on"
  "or"
; "return"
  "run_on"
  "title"
; "unreachable"
  "using"
  "where"
; "while"
  "xor"
] @keyword

(break_stmt) @keyword
(continue_stmt) @keyword

["(" ")" "[" "]"] @punctuation.bracket

[":"] @punctuation

(number) @number

(string) @string

(ident) @variable

(comment) @comment

(func_call_expr . (ident)? @function)

(on_stmt event: (event_type) @constant)

(run_on_stmt type: (run_on_type) @constant)

(bool_literal) @constant

(type) @type
(type (ident)@type)
