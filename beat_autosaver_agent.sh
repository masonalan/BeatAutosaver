#!/bin/bash

DIR=$(dirname "$0")
source "$DIR/config.sh"

/usr/local/bin/fswatch -0 "$WATCH_P" | xargs -0 -n 1 "$INST_P/beat_autosaver.sh"