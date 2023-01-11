(number) @number

(string) @string

(fact name: (identifier) @function)
(rule name: (identifier) @function)
(typedef name: (identifier) @function)
(extern name: (identifier) @function)

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


[
  "@def"
  "@extern"
  "!"
  (hole)
  (qualifier)
] @keyword

(type) @type

(ERROR) @error

;; Spellchecking in comments
(comment) @comment
(comment) @spell
