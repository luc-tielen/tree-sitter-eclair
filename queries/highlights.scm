(number) @number

(string) @string

(fact name: (identifier) @function)

(rule name: (identifier) @function)

(typedef name: (identifier) @function)

(identifier) @variable

["." ","] @punctuation.delimiter

["(" ")"] @punctuation.bracket

":-" @punctuation.special

"=" @operator

"@def" @keyword

(hole) @keyword

(type) @type

(ERROR) @error
