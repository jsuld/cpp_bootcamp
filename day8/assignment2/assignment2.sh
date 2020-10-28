#!/bin/bash 

git clone https://github.com/jsuld/cpp_bootcamp 

cd cpp_bootcamp/day7/assignment1/
make all
export LD_LIBRARY_PATH=lib
./program