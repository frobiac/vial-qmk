// Copyright 2023 @frobiac
// SPDX-License-Identifier: GPL-2.0-or-later

#include "keycodes.h"
#include QMK_KEYBOARD_H

#include "keymap_german.h"

enum layer_number {
    _ADNW = 0,
    _QWERTZ,
    _NAVNUM,
    _SYMBOL,
    _FUNC,
    _MOUSE,
};

#define CTL_TAB LCTL_T(KC_TAB)
#define ALT_SPC LALT_T(KC_SPC)
#define NAV_ESC LT(_NAVNUM, KC_ESC)
#define SFT_BSP LSFT_T(KC_BSPC)
#define SYM_ENT LT(_SYMBOL, KC_ENT)
#define MOUSE_X LT(_MOUSE, KC_X)
#define MOUSE_Y LT(_MOUSE, KC_Y)

// clang-format off

/*  Row/col matrix: (0-based)
 *  unused in layout: 29
 *

    ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
    │30 │31 │32 │33 │34 │35 │36 │37 │38 │39 │310│311│
    ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┤
    │20   │21 │22 │23 │24 │25 │26 │27 │28 │210│  211│
    ├───┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬───┤
    │10 │11 │12 │13 │14 │15 │16 │17 │18 │19 │110│111│
    ├───┼───┴┬──┴───┼───┴┬──┴──┬┴───┼───┴──┬┴───┼───┤
    │00 │ 01 │  02  │ 03 │ 05  │ 08 │  09  │010 │011│
    └───┴────┴──────┴────┴─────┴────┴──────┴────┴───┘
                      ┌───┬───┬───┐
                      └───┴───┴───┘
                       04  06  07

 */

#define LMB KC_NO
#define MMB KC_NO
#define RMB KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_ADNW] = LAYOUT(
      _______, KC_K,    KC_U,    KC_Q,    KC_DOT,  KC_J,    KC_P,    KC_C,    KC_L,    KC_M,    KC_F,   _______,
      KC_H,    KC_I,    KC_E,    KC_A,    KC_O,    _______,/*no C9*/ KC_D,    KC_T,    KC_R,    KC_N,    KC_S,
      MOUSE_X, DE_Y,    DE_MINS, KC_COMM, DE_SLSH, _______, _______, KC_B,    KC_G,    KC_W,    KC_V,    RSFT_T(DE_Z),
      _______, _______, KC_LGUI, CTL_TAB, LMB,     ALT_SPC, MMB,     RMB,     NAV_ESC, SFT_BSP, SYM_ENT, MO(_FUNC)
  ),

  [_QWERTZ] = LAYOUT(
      KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    DE_Z,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BACKSPACE,
      KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,   /*no C9*/ KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,
      KC_LSFT, MOUSE_Y, KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
      XXXXXXX, XXXXXXX, KC_LGUI, CTL_TAB, ALT_SPC, ALT_SPC, MMB,     NAV_ESC, SFT_BSP, SYM_ENT, XXXXXXX, MO(_FUNC)
  ),

  [_SYMBOL] = LAYOUT(
      DE_AT,   DE_DEG,  DE_LBRC, DE_RBRC, DE_HASH, _______, _______, DE_EXLM, DE_LABK, DE_RABK, DE_EQL,  DE_AMPR,
      DE_BSLS, DE_EURO, DE_LCBR, DE_RCBR, DE_ASTR, _______,/*no C9*/ DE_QUES, DE_LPRN, DE_RPRN, DE_PLUS, KC_ENT,
      XXXXXXX, DE_DLR,  DE_PIPE, DE_TILD, DE_GRV,  _______, _______, DE_CIRC, DE_PERC, DE_DQUO, DE_QUOT, XXXXXXX,
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
  ),

  [_NAVNUM] = LAYOUT(
      KC_PGUP, KC_BSPC, KC_UP,   KC_DEL,  KC_PGDN, _______, _______, DE_SS,   KC_7,    KC_8,    KC_9,    DE_ADIA,
      KC_HOME, KC_LEFT, KC_DOWN, KC_RGHT, KC_END,  _______,/*no C9*/ KC_DOT,  KC_4,    KC_5,    KC_6,    DE_ODIA,
      XXXXXXX, XXXXXXX, KC_INS,  XXXXXXX, XXXXXXX, _______, _______, KC_0,    KC_1,    KC_2,    KC_3,    DE_UDIA,
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
  ),

  [_FUNC] = LAYOUT(
      XXXXXXX, XXXXXXX, XXXXXXX, DF(1),   DF(0),   _______, _______, XXXXXXX, KC_F7,   KC_F8,   KC_F9,   KC_F10,
      DM_REC1, DM_RSTP, DM_PLY1, XXXXXXX, QK_RBT,  _______,/*no C9*/ XXXXXXX, KC_F4,   KC_F5,   KC_F6,   KC_F11,
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, QK_BOOT, _______, _______, XXXXXXX, KC_F1,   KC_F2,   KC_F3,   KC_F12,
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
  ),

  [_MOUSE] = LAYOUT(
      KC_WH_L, XXXXXXX, KC_MS_U, XXXXXXX, XXXXXXX, _______, _______, KC_ACL0, XXXXXXX, KC_BTN3, XXXXXXX, KC_BTN5,
      KC_WH_R, KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_U, _______,/*no C9*/ KC_ACL1, XXXXXXX, KC_BTN1, KC_BTN2, KC_BTN4,
      MOUSE_X, KC_BTN1, KC_BTN3, KC_BTN2, KC_WH_D, _______, _______, KC_ACL2, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
  ),
};

// clang-format on
