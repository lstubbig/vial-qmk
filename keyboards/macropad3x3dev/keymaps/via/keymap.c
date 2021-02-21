/* Copyright 2020 Leon Stubbig
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _Media,
    _Nav,
    _2,
    _3
};

// Defines the keycodes used by our macros in process_record_user
enum custom_keycodes {
    QMKBEST = SAFE_RANGE,
    QMKURL,
    HALLO
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_Media] = LAYOUT_ENCODER(
        KC_MUTE,                 KC_AUDIO_VOL_DOWN,      KC_AUDIO_VOL_UP,
        LALT(LCTL(LSFT(KC_V))),  KC_MEDIA_PREV_TRACK,    KC_MEDIA_NEXT_TRACK,
        KC_F,       KC_SPACE,    LT(_Nav, KC_MEDIA_PLAY_PAUSE),
        KC_MUTE
    ),
    [_Nav] = LAYOUT_ENCODER(
        KC_HOME,    KC_UP,      KC_END,
        KC_LEFT,    KC_DOWN,    KC_RIGHT,
        TG(3),      TG(2),      _______,
        _______
    ),
    [_2] = LAYOUT_ENCODER(
        KC_MY_COMPUTER,     KC_BRIGHTNESS_DOWN, KC_BRIGHTNESS_UP,
        KC_WWW_REFRESH,     KC_WWW_BACK,        KC_WWW_FORWARD,
        KC_MAIL,            KC_CALC,            TO(0),
        _______
    ),
    [_3] = LAYOUT_ENCODER(
        KC_BTN1,    KC_MS_UP,    KC_BTN2,
        KC_MS_LEFT, KC_MS_DOWN,  KC_MS_RIGHT,
        KC_F13,     KC_BTN3,     TO(0),
        _______
    )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case QMKBEST:
            if (record->event.pressed) {
                // when keycode QMKBEST is pressed
                SEND_STRING("QMK is the best thing ever!");
            } else {
                // when keycode QMKBEST is released
            }
            break;
        case QMKURL:
            if (record->event.pressed) {
                // when keycode QMKURL is pressed
                SEND_STRING("https://qmk.fm/\n");
            } else {
                // when keycode QMKURL is released
            }
            break;
        case HALLO:
            if (record->event.pressed) {
                // when keycode QMKURL is pressed
                SEND_STRING("Hello there.");
            } else {
                // when keycode QMKURL is released
            }
            break;
    }
    return true;
};

// encoder functions
void encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { /* First encoder */
        if (clockwise) {
            tap_code(KC_AUDIO_VOL_UP);
        } else {
            tap_code(KC_AUDIO_VOL_DOWN);
        }
    } else if (index == 1) { /* Second encoder */
        if (clockwise) {
            tap_code(KC_DOWN);
        } else {
            tap_code(KC_UP);
        }
    }
}

// oled display functions
// #ifdef OLED_DRIVER_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    oled_scroll_set_area(3, 3);
    oled_scroll_set_speed(1);
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
}

// Draw the QMK logo at the top left corner, clipping if it does not fit.
static void test_logo(void) {
    uint8_t lines = oled_max_lines();
    if (lines > 3) {
        lines = 3;
    }
    uint8_t chars = oled_max_chars();
    if (chars > 21) {
        chars = 21;
    }
    for (uint8_t row = 0; row < lines; ++row) {
        oled_set_cursor(0, row);
        for (uint8_t col = 0; col < chars; ++col) {
            oled_write_char(0x80 + 0x20 * row + col, false);
        }
    }
}

void oled_task_user(void) {
    // oled_clear();
    // oled_render();

    // qmk logo
    test_logo();

    // Layer Status
    // oled_set_cursor(0, 3);
    oled_write_P(PSTR("      Layer: "), false);
    switch (get_highest_layer(layer_state)) {
        case _Media:
            oled_write_P(PSTR("Media\n"), false);
            break;
        case _Nav:
            // oled_set_cursor(14, 3);
            oled_write_P(PSTR("Nav\n"), false);
            break;
        case _2: 
            oled_write_P(PSTR("Comp\n"), false);
            break;
        case _3:
            // oled_set_cursor(14, 3);
            oled_write_P(PSTR("Mouse\n"), false);
            break;
        default:
            // Or use the write_ln shortcut over adding '\n' to the end of your string
            oled_write_ln_P(PSTR("Hello there."), false);
    }

    // oled_scroll_left();
}
// #endiff