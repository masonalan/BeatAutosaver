# --------------------------------------
# Install directory
# 
# By default, it is: ~/Library/Application Support/TyOS/beat-autosaver
#
# --------------------------------------
INST_P="%inst_path%"


# --------------------------------------
# Watch directory
# 
# The path where beat bounces are stored
# Requires restart of com.tyos.BeatAutosaver.plist for change to take effect
# 		
#		launchctl stop com.tyos.BeatAutosaver.plist
#		launchctl start com.tyos.BeatAutosaver.plist
#
# --------------------------------------
WATCH_P="%watch_path%"

# --------------------------------------
# Destination directory
# 
# The path where sorted bounces are stored
# Requires restart of com.tyos.BeatAutosaver.plist for change to take effect
#
# --------------------------------------
DEST_P="%dest_path%"