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

/* USB Device descriptor parameter */
#define DEVICE_VER      0x0003
#undef PRODUCT
#define PRODUCT         Macropad1x5 (rev03)

/* Keyboard Matrix Assignments */
#define DIODE_DIRECTION COL2ROW
#define MATRIX_COL_PINS { D1, D7, E6, B4, B5 }
#define MATRIX_ROW_PINS { F7 }

// encoder
#define ENCODERS_PAD_A { D0 }
#define ENCODERS_PAD_B { D4 }

// backlight
#define BACKLIGHT_PIN C6

// RGB underglow
#define RGB_DI_PIN F6
#define RGBLED_NUM 6
#define RGBLIGHT_ANIMATIONS

// Vial ID
#define VIAL_KEYBOARD_UID {0x4D, 0x10, 0x8A, 0xFB, 0x35, 0x74, 0x5A, 0x6C}

