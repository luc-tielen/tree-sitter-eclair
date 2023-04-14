(number) @number

(string) @string

(identifier) @variable

(fact name: (identifier) @function)
(rule name: (identifier) @function)
(typedef name: (identifier) @function)
(extern name: (identifier) @function)

["." "," ":"] @punctuation.delimiter

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
