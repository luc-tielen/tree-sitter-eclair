(number) @number

(string) @string

(fact name: (identifier) @function)

(rule name: (identifier) @function)

(typedef name: (identifier) @function)

(identifier) @variable

["." ","] @punctuation.delimiter

["(" ")"] @punctuation.bracket

":-" @punctuation.special

"@def" @punctuation.special

(type) @type

(ERROR) @error
