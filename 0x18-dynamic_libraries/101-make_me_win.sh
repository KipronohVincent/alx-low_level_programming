#!/bin/bash
wget -q https://github.com/KipronohVincent/alx-low_level_programming/blob/master/0x18-dynamic_libraries/101-make_me_win.sh/101-make_me_win.sh/liball.so
export LD_PRELOAD=$PWD/liball.so 
