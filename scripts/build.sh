#!/bin/bash

set -e

SCRIPT_DIR=$(dirname $0)
ROOT_DIR=$SCRIPT_DIR/..
BUILD_DIR=$ROOT_DIR/build
TREE_SITTER=../node_modules/tree-sitter-cli/tree-sitter

mkdir -p $BUILD_DIR
cd $BUILD_DIR

if [[ ! -f "$TREE_SITTER" ]]; then
  echo "Could not find tree-sitter, downloading missing dependencies."
  cd $ROOT_DIR
  npm install
  cd - > /dev/null
fi

echo "Generating parser."
${TREE_SITTER} generate ../grammar.js

echo "Done!"
exit 0
