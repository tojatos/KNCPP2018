#!/bin/bash
SPOJ_PATH="/home/tojatos/Scripts/cppPolitechnika/"
SAVE_PATH="/tmp/"
g++ $SPOJ_PATH$1 -o $SAVE_PATH$1
$SAVE_PATH$1 < "$SPOJ_PATH"input.txt 
