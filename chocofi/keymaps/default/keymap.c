// Copyright 2025 Janosch Morf
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "keymap_german.h"
#include "keymap_swiss_de.h"


#define BASE 0
#define NUM 1
#define NAV 2
#define MISC 3

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /*
      * ┌───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┐
      * │ Q │ W │ E │ R │ T │       │ Y │ U │ I │ O │ P │
      * ├───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┤
      * │ A │ S │ D │ F │ G │       │ H │ J │ K │ L │ ; │
      * ├───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┤
      * │ Z │ X │ C │ V │ B │       │ N │ M │ , │ . │ / │
      * └───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┘
      *           ┌───┐                   ┌───┐
      *           │GUI├───┐           ┌───┤Alt│
      *           └───┤Bsp├───┐   ┌───┤Ent├───┘
      *               └───┤   │   │   ├───┘
      *                   └───┘   └───┘
      */
[BASE] = LAYOUT_split_3x5_3(
  DE_Q,    DE_W,    DE_E,    DE_R,    DE_T,                       DE_Z,    DE_U,    DE_I,    DE_O,    DE_P,
  DE_A,    DE_S,    DE_D,    DE_F,    DE_G,                       DE_H,    DE_J,    DE_K,    DE_L,    KC_SPC,
  DE_Y,    DE_X,    DE_C,    DE_V,    DE_B,                       DE_N,    DE_M,    DE_COMM, DE_DOT,  DE_MINS,
                     KC_LCTL, MO(NAV), MO(NUM),		      KC_LGUI, KC_LSFT, KC_LALT
),

[NUM] = LAYOUT_split_3x5_3(
  DE_EXLM,  DE_QUES,  DE_SECT, DE_DLR,  DE_HASH,                  DE_PLUS,  DE_7,  DE_8,   DE_9, DE_0,
  DE_CIRC,  DE_QUOT, DE_DQUO, DE_GRV, DE_AMPR,              	    DE_ASTR,  DE_4,  DE_5,   DE_6, DE_EQL,
  DE_SLSH,  DE_PIPE,  DE_BSLS, DE_AT,   DE_EURO,                  DE_PERC,  DE_1,  DE_2,   DE_3, KC_TAB,
                    _______, _______, _______,        _______,  _______,  _______
),

[NAV] = LAYOUT_split_3x5_3(
  KC_AUDIO_MUTE,  KC_AUDIO_VOL_DOWN,  DE_LBRC,  DE_RBRC,  KC_AUDIO_VOL_UP,  KC_HOME,      KC_PGDN,    KC_PGUP,  KC_END,   DE_TILD,
  KC_ESC,   DE_LABK,  DE_LPRN,  DE_RPRN,  DE_RABK,                          KC_LEFT,      KC_DOWN,    KC_UP,    KC_RIGHT, KC_ENT,
  KC_BSPC,  KC_DEL,   DE_LCBR,  DE_RCBR,  KC_PSCR,                        	_______,  DE_ADIA,  DE_ODIA,  DE_UDIA,  DE_SS,
                        _______, _______, _______,                    _______,  MO(MISC), _______
),

[MISC] = LAYOUT_split_3x5_3(
  _______,  _______,  _______,  _______,  _______,             _______,   KC_F7,    KC_F8,    KC_F9,   KC_F10,
  _______,  _______,  _______,  _______,     _______,             _______,   KC_F4,    KC_F5,    KC_F6,   KC_F11,
  QK_BOOT,  _______,  _______,  _______,  _______,             _______,   KC_F1,     KC_F2,    KC_F3,   KC_F12,
                          _______,  _______,  _______,      _______,  _______,  _______
)};
