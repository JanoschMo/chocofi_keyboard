#!/bin/bash

# Minimal Raspberry Pi Pico UF2 flash script
set -e

# Configuration
UF2_FILE="/home/$SUDO_USER/qmk/crkbd_rev1_chocofi_rp2040_ce.uf2"
MOUNT_POINT="/media/$SUDO_USER/RPI-RP2"

# Check file exists
[ -f "$UF2_FILE" ] || { echo "Error: $UF2_FILE not found"; exit 1; }

# build the software
echo "Building the software..."
sudo -u "$SUDO_USER" qmk compile -kb crkbd/rev1 -km chocofi -e CONVERT_TO=rp2040_ce

# Flash both halves
for i in {1..2}; do

    # loop number
    echo "Loop $i"

    # Wait for Pico to be connected
    echo "Connect Pico while holding BOOTSEL button..."
    while ! lsblk -o LABEL | grep -q "RPI-RP2"; do
        sleep 1
    done

    # Get device and mount
    DEV=$(lsblk -o NAME,LABEL | grep "RPI-RP2" | awk -F "─" '{print$2}' | awk '{print "/dev/"$1}')
    echo $DEV
    mount "$DEV" "$MOUNT_POINT"

    # Flash the file
    echo "Flashing $UF2_FILE to $MOUNT_POINT"
    cp "$UF2_FILE" "$MOUNT_POINT/"
    sync

    # umount  "$DEV" "$MOUNT_POINT"
    echo "Done with $i"
    sleep 8
done

echo "Done! Pico will reboot automatically."
