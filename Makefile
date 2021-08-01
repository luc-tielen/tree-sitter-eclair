TREESITTER=./node_modules/tree-sitter-cli/tree-sitter

build:
	${TREESITTER} generate

#run:
#	${TREESITTER} parse

clean:
	rm binding.gyp index.js

.PHONY: build clean
