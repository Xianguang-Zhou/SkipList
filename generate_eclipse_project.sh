#!/usr/bin/env bash

# Absolute path to this script, e.g. /home/user/bin/foo.sh
SCRIPT=$(readlink -f "$0")
# Absolute path this script is in, thus /home/user/bin
SCRIPT_DIR_PATH=$(dirname "$SCRIPT")

cd $SCRIPT_DIR_PATH

rm -rf build/*
mkdir -p build
cd build

cmake -G "Eclipse CDT4 - Unix Makefiles" -DCMAKE_ECLIPSE_GENERATE_SOURCE_PROJECT=TRUE -DCMAKE_BUILD_TYPE=Debug -DCMAKE_ECLIPSE_VERSION=3.7 ../src 

