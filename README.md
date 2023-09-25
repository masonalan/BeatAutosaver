# BeatAutosaver

BeatAutosaver is a program that automatically sorts your beats and loops by week. This makes sending out weekly beat or loop packs hassle free. Currently, BeatAutosaver only works on macOS.

Currently, your beats must be saved as `.mp3`s using the following naming convention:
    `<type>_<name>_<bpm>_<producers>`

All spaces in the name or the producers' names must be replaced with a `_`. For example:
    `beat_soft_keys_98_ty_omg`

In this example, the `type` is `beat`, the `name` is `soft_keys`, the `bpm` is `98`, and the `producers` are `ty` and `omg`.

To mark a `.mp3` as a loop, simply begin the name with `loop`, like so:
    `loop_over_the_hill_123_ty`

## Installation

To install, run:
    `sudo ./install.sh`

When prompted, input the folder where you save your beats and the folder where you'd like your weekly folders to be. For now, these paths must be absolute (no `~` or relative paths).

BeatAutosaver requires `python3` and `fswatch`. If either or both are not installed, the installer will take the liberty to install them for you at no extra cost. Xcode Command Line Tools are also required, but you will have to install them manually. To install them, try running:
      `xcode-select –install`


