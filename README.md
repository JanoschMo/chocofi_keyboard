# chocofi_keyboard

This is my personal keyboard history thing. I bought the chocofi from beekeeb and try to learn a ting or two.

## working on the keyboard

Use the justfile. This is used to clean the qmk repo, copy my file into it and to build and flash the keyboard.

Install qmk with `pacman -S qmk` and clone everything with:
```sh
qmk -H ~/git-repos/privat/qmk_firmware -y
```

after that use `just s` for setup, `just f` to build and flash and `just c`


## Flashing the board

use this command to build it:
```sh
qmk compile -kb chocofi -km default  -e CONVERT_TO=rp2040_ce
```

And this script to automagically flash it:
```sh
./flash_keyboard.sh
```
