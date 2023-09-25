#!/bin/bash

DIR=$(dirname "$0")
source "$DIR/config.sh"

ARG_1=$1
if [ $ARG_1 -ne "--all" ]; then
	ARG_1=$*
fi

python3 "$INST_P/beat_autosaver.py" "$ARG_1" "$WATCH_P" "$DEST_P"