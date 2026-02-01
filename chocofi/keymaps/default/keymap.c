// Copyright 2025 Janosch Morf
// SPDX-License-Identifier: GPL-2.0-or-later

#include "keycodes.h"
#include QMK_KEYBOARD_H
#include "keymap_german.h"
#include "keymap_swiss_de.h"

// define the LAYERS
#define BASE 0
#define NUM 1
#define NAV 2
#define MISC 3
#define RES 4

#define L_TAB LT(NAV, KC_TAB)
#define L_BKSP LT(NUM, KC_BACKSPACE)
#define L_ESC LT(MISC, KC_ESCAPE)
#define L_DEL LT(RES, KC_DELETE)

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
     /*                    ┌───┬───┬───┬───┬───┐          ┌───┬───┬───┬───┬───┐
      *                    │ Q │ W │ E │ R │ T │          │ Z │ U │ I │ O │ P │
      *                    ├───┼───┼───┼───┼───┤          ├───┼───┼───┼───┼───┤
      *                    │ A │ S │ D │ F │ G │          │ H │ J │ K │ L │ - │
      *                    ├───┼───┼───┼───┼───┤          ├───┼───┼───┼───┼───┤
      *                    │ Y │ X │ C │ V │ B │          │ N │ M │ , │ . │ / │
      *                    └───┴───┴───┴───┴───┘          └───┴───┴───┴───┴───┘
      *                              ┌───┬───┬───┐      ┌───┬───┬───┐
      *                              │Esc│Etr│Tab│      │Bsp│Spc│Del│
      *                              └───┴───┴───┘      └───┴───┴───┘
      */
    CH_Q,     CH_W,     CH_E,    CH_R,    CH_T,          CH_Z,    CH_U,    CH_I,    CH_O,    CH_P,
  HOME_A,   HOME_S,   HOME_D,  HOME_F,    CH_G,          CH_H,    HOME_J,  HOME_K,  HOME_L,  H_MINS,
    CH_Y,     CH_X,     CH_C,    CH_V,    CH_B,          CH_N,    CH_M,    CH_COMM, CH_DOT,  CH_SLSH,
                       L_ESC,  KC_ENT,   L_TAB,          L_BKSP,  KC_SPC,  L_DEL

),

[NUM] = LAYOUT_split_3x5_3(
     /*                    ┌───┬───┬───┬───┬───┐          ┌───┬───┬───┬───┬───┐
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
  KC_NO,    KC_NO,    KC_NO,    KC_NO,    CH_ADIA,       KC_PAST,  KC_7,     KC_8,     KC_9,     KC_PPLS,    
  KC_LGUI,  KC_LALT,  KC_LSFT,  KC_LCTL,  CH_ODIA,       KC_EQL,   KC_4,     KC_5,     KC_6,     KC_0,    
  KC_NO,    KC_NO,    KC_NO,    KC_NO,    CH_UDIA,       KC_SLSH,  KC_1,     KC_2,     KC_3,     KC_PMNS,    
                      KC_NO,    KC_NO,    KC_NO,         KC_NO,    KC_NO,    KC_NO 
),

[NAV] = LAYOUT_split_3x5_3(
     /*                    ┌───┬───┬───┬───┬───┐          ┌───┬───┬───┬───┬───┐
      *                    │   │   │   │   │   │          │   │   │   │   │   │
      *                    ├───┼───┼───┼───┼───┤          ├───┼───┼───┼───┼───┤
      *                    │   │   │   │   │   │          │   │   │   │   │   │
      *                    ├───┼───┼───┼───┼───┤          ├───┼───┼───┼───┼───┤
      *                    │   │   │   │   │   │          │   │   │   │   │   │
      *                    └───┴───┴───┴───┴───┘          └───┴───┴───┴───┴───┘
      *                              ┌───┬───┬───┐      ┌───┬───┬───┐
      *                              │   │   │   │      │   │   │   │
      *                              └───┴───┴───┘      └───┴───┴───┘
      */
  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,         KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    
  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,         KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    
  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,         KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    
                      KC_NO,    KC_NO,    KC_NO,         KC_NO,    KC_NO,    KC_NO 
),

[MISC] = LAYOUT_split_3x5_3(
     /*                    ┌───┬───┬───┬───┬───┐          ┌───┬───┬───┬───┬───┐
      *                    │   │   │   │   │   │          │   │   │   │   │   │
      *                    ├───┼───┼───┼───┼───┤          ├───┼───┼───┼───┼───┤
      *                    │   │   │   │   │   │          │   │   │   │   │   │
      *                    ├───┼───┼───┼───┼───┤          ├───┼───┼───┼───┼───┤
      *                    │   │   │   │   │   │          │   │   │   │   │   │
      *                    └───┴───┴───┴───┴───┘          └───┴───┴───┴───┴───┘
      *                              ┌───┬───┬───┐      ┌───┬───┬───┐
      *                              │   │   │   │      │   │   │   │
      *                              └───┴───┴───┘      └───┴───┴───┘
      */
  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,         KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    
  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,         KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    
  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,         KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    
                      KC_NO,    KC_NO,    KC_NO,         KC_NO,    KC_NO,    KC_NO 
),

[RES] = LAYOUT_split_3x5_3(
     /*                    ┌───┬───┬───┬───┬───┐          ┌───┬───┬───┬───┬───┐
      *                    │   │   │   │   │   │          │   │   │   │   │   │
      *                    ├───┼───┼───┼───┼───┤          ├───┼───┼───┼───┼───┤
      *                    │   │   │   │   │   │          │   │   │   │   │   │
      *                    ├───┼───┼───┼───┼───┤          ├───┼───┼───┼───┼───┤
      *                    │   │   │   │   │   │          │   │   │   │   │   │
      *                    └───┴───┴───┴───┴───┘          └───┴───┴───┴───┴───┘
      *                              ┌───┬───┬───┐      ┌───┬───┬───┐
      *                              │   │   │   │      │   │   │   │
      *                              └───┴───┴───┘      └───┴───┴───┘
      */
  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,         KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    
  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,         KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    
  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,         KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    
                      KC_NO,    KC_NO,    KC_NO,         KC_NO,    KC_NO,    KC_NO 
)};
/* clang-format on */

// #define QMK_SWISS_DE_KEYCODES_VERSION "0.0.1"
// #define QMK_SWISS_DE_KEYCODES_VERSION_BCD 0x00000001
// #define QMK_SWISS_DE_KEYCODES_VERSION_MAJOR 0
// #define QMK_SWISS_DE_KEYCODES_VERSION_MINOR 0
// #define QMK_SWISS_DE_KEYCODES_VERSION_PATCH 1

// #undef CH_H

// // Aliases
// #define CH_SECT KC_GRV  // §
// #define CH_1    KC_1    // 1
// #define CH_2    KC_2    // 2
// #define CH_3    KC_3    // 3
// #define CH_4    KC_4    // 4
// #define CH_5    KC_5    // 5
// #define CH_6    KC_6    // 6
// #define CH_7    KC_7    // 7
// #define CH_8    KC_8    // 8
// #define CH_9    KC_9    // 9
// #define CH_0    KC_0    // 0
// #define CH_QUOT KC_MINS // '
// #define CH_CIRC KC_EQL  // ^ (dead)
// #define CH_Q    KC_Q    // Q
// #define CH_W    KC_W    // W
// #define CH_E    KC_E    // E
// #define CH_R    KC_R    // R
// #define CH_T    KC_T    // T
// #define CH_Z    KC_Y    // Z
// #define CH_U    KC_U    // U
// #define CH_I    KC_I    // I
// #define CH_O    KC_O    // O
// #define CH_P    KC_P    // P
// #define CH_UDIA KC_LBRC // ü
// #define CH_DIAE KC_RBRC // ¨ (dead)
// #define CH_A    KC_A    // A
// #define CH_S    KC_S    // S
// #define CH_D    KC_D    // D
// #define CH_F    KC_F    // F
// #define CH_G    KC_G    // G
// #define CH_H    KC_H    // H
// #define CH_J    KC_J    // J
// #define CH_K    KC_K    // K
// #define CH_L    KC_L    // L
// #define CH_ODIA KC_SCLN // ö
// #define CH_ADIA KC_QUOT // ä
// #define CH_DLR  KC_NUHS // $
// #define CH_LABK KC_NUBS // <
// #define CH_Y    KC_Z    // Y
// #define CH_X    KC_X    // X
// #define CH_C    KC_C    // C
// #define CH_V    KC_V    // V
// #define CH_B    KC_B    // B
// #define CH_N    KC_N    // N
// #define CH_M    KC_M    // M
// #define CH_COMM KC_COMM // ,
// #define CH_DOT  KC_DOT  // .
// #define CH_MINS KC_SLSH // -
// #define CH_DEG  S(CH_SECT) // °
// #define CH_PLUS S(CH_1)    // +
// #define CH_DQUO S(CH_2)    // "
// #define CH_ASTR S(CH_3)    // *
// #define CH_CCED S(CH_4)    // ç
// #define CH_PERC S(CH_5)    // %
// #define CH_AMPR S(CH_6)    // &
// #define CH_SLSH S(CH_7)    // /
// #define CH_LPRN S(CH_8)    // (
// #define CH_RPRN S(CH_9)    // )
// #define CH_EQL  S(CH_0)    // =
// #define CH_QUES S(CH_QUOT) // ?
// #define CH_GRV  S(CH_CIRC) // ` (dead)
// #define CH_EGRV S(CH_UDIA) // è
// #define CH_EXLM S(CH_DIAE) // !
// #define CH_EACU S(CH_ODIA) // é
// #define CH_AGRV S(CH_ADIA) // à
// #define CH_PND  S(CH_DLR)  // £
// #define CH_RABK S(CH_LABK) // >
// #define CH_SCLN S(CH_COMM) // ;
// #define CH_COLN S(CH_DOT)  // :
// #define CH_UNDS S(CH_MINS) // _
// #define CH_BRKP ALGR(CH_1)    // ¦
// #define CH_AT   ALGR(CH_2)    // @
// #define CH_HASH ALGR(CH_3)    // #
// #define CH_NOT  ALGR(CH_6)    // ¬
// #define CH_PIPE ALGR(CH_7)    // |
// #define CH_CENT ALGR(CH_8)    // ¢
// #define CH_ACUT ALGR(CH_QUOT) // ´ (dead)
// #define CH_TILD ALGR(CH_CIRC) // ~ (dead)
// #define CH_EURO ALGR(CH_E)    // €
// #define CH_LBRC ALGR(CH_UDIA) // [
// #define CH_RBRC ALGR(CH_DIAE) // ]
// #define CH_LCBR ALGR(CH_ADIA) // {
// #define CH_RCBR ALGR(CH_DLR)  // }
// #define CH_BSLS ALGR(CH_LABK) // (backslash)
