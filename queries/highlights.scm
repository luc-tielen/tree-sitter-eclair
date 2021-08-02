(lit) @number

(fact name: (identifier) @function)

(rule name: (identifier) @function)

(identifier) @variable

["." ","] @punctuation.delimiter

["(" ")"] @punctuation.bracket

":-" @punctuation.special

(ERROR) @error
