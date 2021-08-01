build:
	@./scripts/build.sh

test: build
	@./scripts/test.sh

#run:
#	${TREESITTER} parse

clean:
	@rm -rf build/

.PHONY: build test clean
