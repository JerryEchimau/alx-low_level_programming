#!/bin/bash

# compile all the .c files into object files
gcc -Wall -fPIC -c *.c

# create the dynamic library
gcc -shared -o liball.so *.o

# remove object files
rm -f *.o
