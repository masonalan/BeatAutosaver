
from datetime import datetime
import json
import os
import pathlib
import shutil
import sys

def copy_mp3(path):
	name = os.path.basename(path)

	c_timestamp = pathlib.Path(path).stat().st_ctime
	c_datetime = datetime.fromtimestamp(c_timestamp)
	
	diff = 6 - c_datetime.weekday()

	sun = c_datetime.day + diff
	container = f"{c_datetime.strftime('%b').lower()} {sun}"

	dest_folder = ""
	if name.startswith("loop_"):
		dest_folder = os.path.join(output_dir, container, "loops")
	else:
		dest_folder = os.path.join(output_dir, container)

	if not os.path.exists(dest_folder):
		os.makedirs(dest_folder)

	print(f"Copying {name} to {dest_folder}...")
	shutil.copy2(path, dest_folder)


def copy_mp3s(proj_dir):
	entries = os.listdir(proj_dir)

	to_copy = {}
	for e in entries:
		path = os.path.join(proj_dir, e)
		if os.path.isfile(path) and e.endswith(".mp3") and (e.startswith("beat_") or e.startswith("loop_")):
			parts = e.split("_")
			to_copy[f"{parts[0]}_{parts[1]}"] = path

	for k in to_copy:
		path = to_copy[k]
		copy_mp3(path)


# change this to look for .mp3 file and then send the pwd to copy_mp3s
def search(search_dir):
	entries = os.listdir(search_dir)

	for e in entries:
		path = os.path.join(search_dir, e)
		if os.path.isdir(path):
			if e.startswith("beat_") or e.startswith("loop_"):
				copy_mp3s(path)
			else:
				search(path)


def main():
	global output_dir 
	output_dir = sys.argv[3]

	arg = sys.argv[1]

	if arg == "--all" or arg == "-a":
		search_dir = sys.argv[2]
		search(search_dir)
	else:
		path = arg
		name = os.path.basename(path)

		if os.path.isfile(path) and name.endswith(".mp3") and (name.startswith("beat") or name.startswith("loop")):
			copy_mp3(path)



if __name__ == "__main__":
	main()
