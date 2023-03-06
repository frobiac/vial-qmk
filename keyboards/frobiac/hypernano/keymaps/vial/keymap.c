// Copyright 2023 @frobiac
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#include "frobiac.h" // include userspace for layouts and wrappers

// Four extra keys in center bottom rows, below trackpoint area

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_FROBIAC] = LAYOUT_hypernano_4x12_wrapper( _FROBIAC_L, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX ),
  [_QWERTZ ] = LAYOUT_hypernano_4x12_wrapper( _QWERTZ_L,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX ),
  [_SYMBOLS] = LAYOUT_hypernano_4x12_wrapper( _SYMBOLS_L, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX ),
  [_NAVNUM ] = LAYOUT_hypernano_4x12_wrapper( _NAVNUM_L,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX ),
  [_FUNC   ] = LAYOUT_hypernano_4x12_wrapper( _FUNC_L,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX ),
  [_MOUSE  ] = LAYOUT_hypernano_4x12_wrapper( _MOUSE_L,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX ),
};
// clang-format on
