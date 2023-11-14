#! /usr/bin/bash
cc=clang
target=main.c

lib="-lraylib -lm"

if [ ! -d "./build" ]; then
    mkdir build
fi

cc $target -o ./build/game $lib
./build/game