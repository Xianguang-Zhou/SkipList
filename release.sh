#!/usr/bin/env bash

# Absolute path to this script, e.g. /home/user/bin/foo.sh
SCRIPT=$(readlink -f "$0")
# Absolute path this script is in, thus /home/user/bin
SCRIPT_DIR_PATH=$(dirname "$SCRIPT")

cd $SCRIPT_DIR_PATH

rm -rf release
mkdir release
cd release

# Release MinSizeRel
cmake -DCMAKE_BUILD_TYPE=Release ../src 
make

