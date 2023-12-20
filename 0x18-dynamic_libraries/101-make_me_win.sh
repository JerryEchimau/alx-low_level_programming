#!/bin/bash
gcc -shared -o mygm.so -fPIC gm.c
export LD_PRELOAD=/$PWD/mygm.so
