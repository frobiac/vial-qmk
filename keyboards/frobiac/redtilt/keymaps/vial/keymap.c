// Copyright 2023 @frobiac
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#include "frobiac.h" // include userspace for layouts

// Extra pinky columns found on RedTilt board, from top to bottom
#define RT_LEFT_PINKY_UNUSED KC_NO, KC_NO, KC_NO, KC_NO
#define RT_RGHT_PINKY_UNUSED KC_NO, KC_NO, KC_NO, KC_NO

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_FROBIAC] = LAYOUT_redtilt_4x12_wrapper( _FROBIAC_L, RT_LEFT_PINKY_UNUSED, RT_RGHT_PINKY_UNUSED ),
  [_QWERTZ ] = LAYOUT_redtilt_4x12_wrapper( _QWERTZ_L , RT_LEFT_PINKY_UNUSED, RT_RGHT_PINKY_UNUSED ),
  [_SYMBOLS] = LAYOUT_redtilt_4x12_wrapper( _SYMBOLS_L, RT_LEFT_PINKY_UNUSED, RT_RGHT_PINKY_UNUSED ),
  [_NAVNUM ] = LAYOUT_redtilt_4x12_wrapper( _NAVNUM_L , RT_LEFT_PINKY_UNUSED, RT_RGHT_PINKY_UNUSED ),
  [_FUNC   ] = LAYOUT_redtilt_4x12_wrapper( _FUNC_L   , RT_LEFT_PINKY_UNUSED, RT_RGHT_PINKY_UNUSED ),
  [_MOUSE  ] = LAYOUT_redtilt_4x12_wrapper( _MOUSE_L  , RT_LEFT_PINKY_UNUSED, RT_RGHT_PINKY_UNUSED ),
};

// clang-format on
