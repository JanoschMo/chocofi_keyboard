# chocofi_keyboard

This is my personal keyboard history thing. I bought the chocofi from beekeeb and try to learn a ting or two.

## Flashing the board

use this command to build it:
```sh
qmk compile -kb chocofi -km default  -e CONVERT_TO=rp2040_ce
```

And this script to automagically flash it:
```sh
./flash_keyboard.sh
```
