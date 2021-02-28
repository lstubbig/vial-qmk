/*
Copyright 2020 Leon Stubbig <leonstubbig@web.de>

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

/* USB Device descriptor parameter */
#define VENDOR_ID       0x0801
#define PRODUCT_ID      0x1136
#define DEVICE_VER      0x0100
#define MANUFACTURER    LS Keyboards
#define PRODUCT         Macropad1x5_V0.3
#define DESCRIPTION     1x5 Macropad with Rotary Encoder

/* key matrix size */
#define MATRIX_ROWS 1
#define MATRIX_COLS 5

/* Keyboard Matrix Assignments */
#define DIODE_DIRECTION COL2ROW
#define MATRIX_COL_PINS { D1, D7, E6, B4, B5 }
#define MATRIX_ROW_PINS { F7 }

// layer toggle TT()
#define TAPPING_TOGGLE 3

// encoder
#define ENCODERS_PAD_A { D0 }
#define ENCODERS_PAD_B { D4 }
#define ENCODER_RESOLUTION 4

// backlight
#define BACKLIGHT_PIN C6
#define BACKLIGHT_LEVELS 5
#define BACKLIGHT_BREATHING
#define BREATHING_PERIOD 6

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE
