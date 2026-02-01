[private]
default:
    just --list

alias s := setup
alias f := flash
alias c := clean
alias b := build

QMK := "~/git-repos/privat/qmk_firmware"

# reset the qmk repo
[private]
reset: 
    cd {{QMK}} && git reset --hard && git clean -f
    
# copy the keyboard firmware into qmk
setup: reset
    cp chocofi {{QMK}}/keyboards -fr
    just build
# build the keyboard firmware
build:
    qmk compile -kb chocofi -km default  -e CONVERT_TO=rp2040_ce --compiledb
    mv {{QMK}}/*.uf2 .
    mv {{QMK}}/compile_commands.json .

# flash and build the firmware
flash: build
    sudo ./flash_keyboard.sh

# clean everything
clean:
    cp {{QMK}}/keyboards/chocofi/* chocofi -fr
    just reset
    rm -fr *.uf2
    rm compile_commands.json
    
    
    
