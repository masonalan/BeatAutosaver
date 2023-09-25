#!/bin/bash

if [ $(id -u) -ne 0 ]; then
	echo "please run as root or with sudo."
	exit
fi

if ! command -v python3 >/dev/null; then
	echo -n "installing python3..."
	cd vendor/Python-3.11.5
	./configure --enable-optimizations &> configure.log
	make &> make.log
	make install &> install.log
	cd ../..
	echo "done"
fi

if ! command -v fswatch >/dev/null; then
	echo -n "installing fswatch..."
	cd vendor/fswatch-1.17.1
	./configure &> configure.log
	make &> make.log
	make install &> install.log
	cd ../..
	echo "done"
fi


echo -n "set installation directory (press ENTER to use default): "
read INST_DIR

if [ "$INST_DIR" == "" ]; then
	INST_DIR="$(echo ~)/Library/Application Support"
	echo "default install directory used $INST_DIR/TyOS"
fi

INST_DIR="$INST_DIR/TyOS"

echo -n "set beats directory: "
read WTCH_P

echo -n "set bounces directory: "
read DEST_P


if [ ! -d "$INST_DIR" ]; then
	mkdir "$INST_DIR"
fi


cp "beat_autosaver.sh" "$INST_DIR"
cp "beat_autosaver_agent.sh" "$INST_DIR"
cp "beat_autosaver.py" "$INST_DIR"


CNFG_N="config.sh"
CNFG=$(< "$CNFG_N") 
CNFG=${CNFG/"%inst_path%"/"$INST_DIR"}
CNFG=${CNFG/"%watch_path%"/"$WTCH_P"}
CNFG=${CNFG/"%dest_path%"/"$DEST_P"}
echo "$CNFG" > "$INST_DIR/$CNFG_N"

PLST_N="com.tyos.BeatAutosaver.plist"
PLST=$(< "$PLST_N")
PLST=${PLST/"%inst_dir%"/"$INST_DIR"}
ABS_PLST_PATH="$(echo ~)/Library/LaunchAgents/$PLST_N"
echo "$ABS_PLST_PATH"
echo "$PLST" > "$ABS_PLST_PATH"
chown root:wheel "$ABS_PLST_PATH"


sudo -u "$SUDO_USER" launchctl load $ABS_PLST_PATH


echo done.
