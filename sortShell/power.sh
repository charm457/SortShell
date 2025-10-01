#!/bin/bash
mkdir -p bin
rm -f bin/example
g++ main.cpp -o bin/example && ./bin/example