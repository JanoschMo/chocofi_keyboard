// Copyright 2025 Janosch Morf
// SPDX-License-Identifier: GPL-2.0-or-later

#define MASTER_RIGHT

// #define USE_SERIAL
// #define SOFT_SERIAL_PIN GP1

/* setting for Home-Row-Mods HMO */
/* General time to hold instead of tap */
#define TAPPING_TERM 200
/* case ABBA should also trigger the hold but not rolling (ABAB) */
#define PERMISSIVE_HOLD
/* 2nd tab delay, to auto tap button instead of hold */
#define QUICK_TAB_TERM 120
/* Fast writing, no mods allowed -> min time after a keypress */
#define FLOW_TAP_TERM 120
// There is chordal hold, might wanna look into that
// There is Retro tapping, whatch taps a hold of nop other key was pressed
/* send the mods earlier and maybe revoke them / good fore the mouse */
#define SPECULATIVE_HOLD
