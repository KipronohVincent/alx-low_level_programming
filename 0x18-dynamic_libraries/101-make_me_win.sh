#!/bin/bash
wget -P /tmp https://github.com/KipronohVincent/alx-low_level_programming/raw/master/0x18-dynamic_libraries/101-make_me_win.sh/libwin.so
export LD_PRELOAD=/tmp/libwin.so 
