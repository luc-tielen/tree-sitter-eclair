#!/bin/bash

set -e

SCRIPT_DIR=$(dirname $0)
ROOT_DIR=$SCRIPT_DIR/..
BUILD_DIR=$ROOT_DIR/build
TEST_DIR=$ROOT_DIR/test
TREE_SITTER=../node_modules/tree-sitter-cli/tree-sitter

echo "Preparing test environment."
cd $ROOT_DIR
cp -r $TEST_DIR $BUILD_DIR
cd $BUILD_DIR

echo "Running tests."
${TREE_SITTER} test

exit 0
