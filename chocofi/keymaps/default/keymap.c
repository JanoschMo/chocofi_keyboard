// Copyright 2025 Janosch Morf
// SPDX-License-Identifier: GPL-2.0-or-later

#include "keycodes.h"
#include QMK_KEYBOARD_H
#include "keymap_german.h"
#include "keymap_swiss_de.h"

// define the LAYERS
//
#define BASE 0
#define SYM 1
#define NUM 2
#define NAV 3
#define MISC 4
#define FACT 5

#define L_TAB LT(NUM, KC_TAB)
#define L_BKSP LT(SYM, KC_BACKSPACE)
#define L_ESC LT(NAV, KC_ESCAPE)
#define L_DEL LT(MISC, KC_DELETE)
/*                                   ┌───┬───┬───┐      ┌───┬───┬───┐
 *                                   │NAV│NUM│   │      │   │SYM│MIC│
 *                                   └───┴───┴───┘      └───┴───┴───┘
 */
// Left-hand HRM
#define HOME_A LGUI_T(CH_A)
#define HOME_S LALT_T(CH_S)
#define HOME_D LSFT_T(CH_D)
#define HOME_F LCTL_T(CH_F)

// Right-hand HRM
#define HOME_J RCTL_T(CH_J)
#define HOME_K RSFT_T(CH_K)
#define HOME_L LALT_T(CH_L)
#define H_MINS RGUI_T(CH_MINS)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* clang-format off */
[BASE] = LAYOUT_split_3x5_3(
     /*  BASE              ┌───┬───┬───┬───┬───┐          ┌───┬───┬───┬───┬───┐
      *                    │ Q │ W │ E │ R │ T │          │ Z │ U │ I │ O │ P │
      *                    ├───┼───┼───┼───┼───┤          ├───┼───┼───┼───┼───┤
      *                    │ A │ S │ D │ F │ G │          │ H │ J │ K │ L │ - │
      *                    ├───┼───┼───┼───┼───┤          ├───┼───┼───┼───┼───┤
      *                    │ Y │ X │ C │ V │ B │          │ N │ M │ , │ . │ / │
      *                    └───┴───┴───┴───┴───┘          └───┴───┴───┴───┴───┘
      *                              ┌───┬───┬───┐      ┌───┬───┬───┐
      *                              │Esc│Tab│Ent│      │Spc│Bsp│Del│
      *                              └───┴───┴───┘      └───┴───┴───┘
      */
    CH_Q,     CH_W,     CH_E,    CH_R,    CH_T,          CH_Z,    CH_U,    CH_I,    CH_O,    CH_P,
  HOME_A,   HOME_S,   HOME_D,  HOME_F,    CH_G,          CH_H,    HOME_J,  HOME_K,  HOME_L,  H_MINS,
    CH_Y,     CH_X,     CH_C,    CH_V,    CH_B,          CH_N,    CH_M,    CH_COMM, CH_DOT,  CH_SLSH,
                       L_ESC,  L_TAB,   KC_ENT,          KC_SPC   ,L_BKSP,  L_DEL
),

[SYM] = LAYOUT_split_3x5_3(
     /*  SYM               ┌───┬───┬───┬───┬───┐          ┌───┬───┬───┬───┬───┐
      *                    │ _ │ @ │ # │ $ │ % │          │ } │ { │ + │ - │ * │
      *                    ├───┼───┼───┼───┼───┤          ├───┼───┼───┼───┼───┤
      *                    │ ^ │ & │ ? │ ! │ ~ │          │ ) │ ( │ / │ | │ \ │
      *                    ├───┼───┼───┼───┼───┤          ├───┼───┼───┼───┼───┤
      *                    │ : │ ; │ ` │ ' │ " │          │ ] │ [ │ < │ = │ > │
      *                    └───┴───┴───┴───┴───┘          └───┴───┴───┴───┴───┘
      *                              ┌───┬───┬───┐      ┌───┬───┬───┐
      *                              │   │   │   │      │   │   │   │
      *                              └───┴───┴───┘      └───┴───┴───┘
      */
  CH_UNDS,  CH_AT,    CH_HASH,  CH_DLR,   CH_PERC,       CH_RCBR,  CH_LCBR,  CH_PLUS,  CH_MINS,  CH_ASTR,    
  CH_CIRC,  CH_AMPR,  CH_QUES,  CH_EXLM,  CH_TILD,       CH_RPRN,  CH_LPRN,  CH_SLSH,  CH_PIPE,  CH_BSLS,    
  CH_COLN,  CH_SCLN,  CH_GRV,   CH_QUOT,  CH_DQUO,       CH_RBRC,  CH_LBRC,  CH_LABK,  CH_EQL,   CH_RABK,    
        	      _______,  _______,  _______,         _______,  _______,  _______ 
),
	
[NUM] = LAYOUT_split_3x5_3(
     /*  NUM               ┌───┬───┬───┬───┬───┐          ┌───┬───┬───┬───┬───┐
      *                    │   │   │   │   │ ä │          │ * │ 7 │ 8 │ 9 │ + │
      *                    ├───┼───┼───┼───┼───┤          ├───┼───┼───┼───┼───┤
      *                    │CMD│ALT│SHT│CTR│ ö │          │ = │ 4 │ 5 │ 6 │ 0 │
      *                    ├───┼───┼───┼───┼───┤          ├───┼───┼───┼───┼───┤
      *                    │   │   │   │   │ ü │          │ / │ 1 │ 2 │ 3 │ - │
      *                    └───┴───┴───┴───┴───┘          └───┴───┴───┴───┴───┘
      *                              ┌───┬───┬───┐      ┌───┬───┬───┐
      *                              │   │   │   │      │   │   │   │
      *                              └───┴───┴───┘      └───┴───┴───┘
      */
  KC_NO,    KC_NO,    KC_NO,    KC_NO,    CH_ADIA,       CH_ASTR,  KC_7,     KC_8,     KC_9,     CH_PLUS,    
  KC_LGUI,  KC_LALT,  KC_LSFT,  KC_LCTL,  CH_ODIA,       CH_EQL,   KC_4,     KC_5,     KC_6,     KC_0,    
  KC_NO,    KC_NO,    KC_NO,    KC_NO,    CH_UDIA,       CH_SLSH,  KC_1,     KC_2,     KC_3,     CH_MINS,    
        	    _______,  _______,  _______,       _______,  _______,  _______ 
),

[NAV] = LAYOUT_split_3x5_3(
     /*  NAV               ┌───┬───┬───┬───┬───┐          ┌───┬───┬───┬───┬───┐
      *                    │   │V- │V0 │V+ │   │          │HOM│PUP│ ^ │PDW│END│
      *                    ├───┼───┼───┼───┼───┤          ├───┼───┼───┼───┼───┤
      *                    │CMD│ALT│SHT│CTR│   │          │   │ < │ v │ > │   │
      *                    ├───┼───┼───┼───┼───┤          ├───┼───┼───┼───┼───┤
      *                    │   │<< │=/=│ >>│   │          │   │   │   │   │   │
      *                    └───┴───┴───┴───┴───┘          └───┴───┴───┴───┴───┘
      *                              ┌───┬───┬───┐      ┌───┬───┬───┐
      *                              │   │   │   │      │   │   │   │
      *                              └───┴───┴───┘      └───┴───┴───┘
      */
  KC_NO,    KC_VOLD,  KC_MUTE,  KC_VOLU,  KC_NO,         KC_NO,   KC_HOME, KC_PGUP, KC_PGDN,  KC_END,    
  KC_LGUI,  KC_LALT,  KC_LSFT,  KC_LCTL,  KC_NO,         KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT, KC_NO,    
  KC_NO,    KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_NO,         KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,    
        	    _______,  _______,  _______,       _______,  _______,  _______ 
),

[MISC] = LAYOUT_split_3x5_3(
     /*  MISC              ┌───┬───┬───┬───┬───┐          ┌───┬───┬───┬───┬───┐
      *                    │F1 │F2 │F3 │F4 │F5 │          │   │FAC│   │   │BAS│
      *                    ├───┼───┼───┼───┼───┤          ├───┼───┼───┼───┼───┤
      *                    │F6 │F7 │F8 │F9 │F10│          │   │   │   │   │   │
      *                    ├───┼───┼───┼───┼───┤          ├───┼───┼───┼───┼───┤
      *                    │F11│F12│F13│F14│F15│          │   │   │   │   │   │
      *                    └───┴───┴───┴───┴───┘          └───┴───┴───┴───┴───┘
      *                              ┌───┬───┬───┐      ┌───┬───┬───┐
      *                              │   │   │   │      │   │   │   │
      *                              └───┴───┴───┘      └───┴───┴───┘
      */
  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,         KC_NO,    DF(FACT), KC_NO,    KC_NO,    DF(BASE),    
  KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    
  KC_F11,   KC_F12,   KC_F13,   KC_F14,   KC_F15,        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    
        	    _______,  _______,  _______,       _______,  _______,  _______ 
),
[FACT] = LAYOUT_split_3x5_3(
     /*                    ┌───┬───┬───┬───┬───┐          ┌───┬───┬───┬───┬───┐
      *                    │ALT│ Q │ W │ E │ R │          │   │   │   │   │   │
      *                    ├───┼───┼───┼───┼───┤          ├───┼───┼───┼───┼───┤
      *                    │SHT│ A │ S │ D │ F │          │   │   │   │   │   │
      *                    ├───┼───┼───┼───┼───┤          ├───┼───┼───┼───┼───┤
      *                    │CTL│ Y │ X │ C │ V │          │   │   │   │   │   │
      *                    └───┴───┴───┴───┴───┘          └───┴───┴───┴───┴───┘
      *                              ┌───┬───┬───┐      ┌───┬───┬───┐
      *                              │Esc│Etr│Tab│      │Bsp│Spc│Del│
      *                              └───┴───┴───┘      └───┴───┴───┘
      */
   KC_LEFT_ALT,   CH_Q,     CH_W,     CH_E,    CH_R,          CH_Z,    CH_U,    CH_I,    CH_O,    CH_P,
   KC_LEFT_SHIFT,   CH_A,     CH_S,     CH_D,    CH_F,          CH_H,    HOME_J,  HOME_K,  HOME_L,  H_MINS,
   KC_LEFT_CTRL,    CH_Y,     CH_X,     CH_C,    CH_V,          CH_N,    CH_M,    CH_COMM, CH_DOT,  CH_SLSH,
         		L_DEL,  KC_ENT,  KC_TAB,          L_BKSP,  KC_SPC,  L_ESC
),
};
/* clang-format on */
