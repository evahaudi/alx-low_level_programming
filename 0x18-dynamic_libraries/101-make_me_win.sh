#!/bin/bash
wget -P /tmp https://github.com/evahaudi/alx-low_level_programming/blob/master/0x18-dynamic_libraries/if_win.so
export LD_PRELOAD=/tmp/if_win.so
