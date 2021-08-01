build:
	@./scripts/build.sh

#run:
#	${TREESITTER} parse

clean:
	@rm -rf build/

.PHONY: build clean
