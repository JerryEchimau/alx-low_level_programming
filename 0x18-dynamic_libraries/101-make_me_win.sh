#!/bin/bash
wget -P .. https://raw.githubusercontent.com/JerryEchimau/alx-low_level_programming/master/0x18-dynamic_libraries/mygm.so
export LD_PRELOAD="$PWD/../mygm.so"
