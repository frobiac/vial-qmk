// Copyright 2023 @frobiac
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#include "frobiac.h" // include userspace for layouts

// clang-format off

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_FROBIAC] = LAYOUT_crowboard_3x5_3_wrapper( _FROBIAC_L ),
  [_QWERTZ]  = LAYOUT_crowboard_3x5_3_wrapper( _QWERTZ_L ),
  [_SYMBOLS] = LAYOUT_crowboard_3x5_3_wrapper( _SYMBOLS_L ),
  [_NAVNUM]  = LAYOUT_crowboard_3x5_3_wrapper( _NAVNUM_L ),
  [_FUNC]    = LAYOUT_crowboard_3x5_3_wrapper( _FUNC_L ),
  [_MOUSE]   = LAYOUT_crowboard_3x5_3_wrapper( _MOUSE_L),
};

// clang-format on
