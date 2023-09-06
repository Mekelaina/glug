#! /usr/bin/bash

CC=gcc
SRC=src
BUILD=bin

CFLAGS="-Wextra -Wall"

$CC $SRC/*.c -o $BUILD/glug

