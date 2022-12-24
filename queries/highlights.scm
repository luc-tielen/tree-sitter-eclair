(number) @number

(string) @string

(fact name: (identifier) @function)

(rule name: (identifier) @function)

(typedef name: (identifier) @function)

(identifier) @variable

["." ","] @punctuation.delimiter

["(" ")"] @punctuation.bracket

":-" @punctuation.special

[
  (compare_op)
  "+"
  "-"
  "*"
  "/"
] @operator


"@def" @keyword

(hole) @keyword

(qualifier) @keyword

(type) @type

(ERROR) @error

;; Spellchecking in comments
(comment) @comment
(comment) @spell
