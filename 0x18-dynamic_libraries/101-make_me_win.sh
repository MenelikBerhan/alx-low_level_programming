#!/bin/bash
wget https://github.com/MenelikBerhan/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libsrand.so -O ../libsrand.so
export LD_PRELOAD="../libsrand.so"