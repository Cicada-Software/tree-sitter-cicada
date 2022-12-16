[
  "on"
  "let"
] @keyword

(number) @number

(string) @string

(ident) @variable

(comment) @comment

(func_call_expr . (ident)? @function)
