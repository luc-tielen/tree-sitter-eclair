build:
	@./node_modules/tree-sitter-cli/tree-sitter generate

test: build
	@./node_modules/tree-sitter-cli/tree-sitter test

clean:
	@rm -rf Cargo.toml binding.gyp bindings src

.PHONY: build test clean
