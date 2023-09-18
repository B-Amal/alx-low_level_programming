#!/bin/bash
wget -P /tmp https://github.com/B-Amal/alx-low_level_programming/blob/main/0x18-dynamic_libraries/libgiga.so
export LD_PRELOAD=/tmp/libgiga.so
