#!/bin/bash
wget -O ../libsrand.so https://github.com/MenelikBerhan/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libsrand.so
export LD_PRELOAD="../libsrand.so"