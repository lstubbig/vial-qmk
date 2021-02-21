#include QMK_KEYBOARD_H

enum layer_names {
    _Media,
    _1,
    _2,
    _3
};

enum custom_keycodes {
    TROLL = SAFE_RANGE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_Media] = LAYOUT_ortho_1x4(RESET, KC_VOLD, KC_VOLU, TROLL ),
    [_1] = LAYOUT_ortho_1x4(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS ),
    [_2] = LAYOUT_ortho_1x4(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS ),
    [_3] = LAYOUT_ortho_1x4(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS ),
};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case TROLL:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING("trollolol");
        } else {
        }
        break;
    }
    return true;
};
