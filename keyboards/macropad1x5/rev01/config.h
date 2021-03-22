/*
Copyright 2021 Leon Stubbig <leonstubbig@web.de>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

#define DEVICE_VER      0x0001
#undef PRODUCT
#define PRODUCT         Macropad1x5 (rev01)

/* Keyboard Matrix Assignments */
#define DIRECT_PINS { \
    { B6, E6, D4, C6, D7} \
}

// encoder
#define ENCODERS_PAD_A { B4 }
#define ENCODERS_PAD_B { B5 }

// backlight
#define BACKLIGHT_PIN F7

// Vial defines
#define DYNAMIC_KEYMAP_LAYER_COUNT 4
#define VIAL_UNLOCK_COMBO_ROWS { 0, 0 }
#define VIAL_UNLOCK_COMBO_COLS { 1, 4 }
#undef VIAL_KEYBOARD_UID
#define VIAL_KEYBOARD_UID {0x38, 0x3C, 0xF9, 0xC2, 0x06, 0xB8, 0x07, 0x43}
#define VIAL_ENCODER_DEFAULT { KC_VOLD, KC_VOLU, BL_DEC, BL_INC, LCTL(KC_MINUS), LCTL(KC_PLUS), KC_TRNS, KC_TRNS }