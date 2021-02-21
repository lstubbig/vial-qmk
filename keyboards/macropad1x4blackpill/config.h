/*
Copyright 2015 Jun Wako <wakojun@gmail.com>

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
#define VENDOR_ID       0xfeed
#define PRODUCT_ID      0x1135
#define DEVICE_VER      0x0001
#define MANUFACTURER    LS Keyboards
#define PRODUCT         macropad1x4

/* key matrix size */
#define MATRIX_ROWS 1
#define MATRIX_COLS 4
#define DIODE_DIRECTION COL2ROW

#define MATRIX_COL_PINS { A7, A4, C14, C13 }
#define MATRIX_ROW_PINS { B0 }
#define UNUSED_PINS { B1, B2, B3, B4, B5, B10, B13, B15, A0, A1, A2, A3, A6, A8, A9, A10, A11, A12, A15, C15 }

#define BACKLIGHT_PIN           A0
#define BACKLIGHT_PWM_DRIVER    PWMD5
#define BACKLIGHT_PWM_CHANNEL   1

#define RGB_DI_PIN A1

#define ADC_PIN A0
/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE    5

#define TAPPING_TERM 500
#define TAPPING_TOGGLE 2

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
//#define NO_ACTION_MACRO
//#define NO_ACTION_FUNCTION
