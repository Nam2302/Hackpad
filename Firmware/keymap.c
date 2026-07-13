// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[1][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        LCTL(KC_T),
        LCTL(KC_N),
        LCTL(KC_Z),
        LCTL(LSFT(KC_Z)),
        LCTL(KC_R),
        LCTL(KC_V),
        LCTL(KC_C)
    )
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) }
};
#endif

#ifdef OLED_ENABLE
bool oled_task_user(void) {
    oled_write_P(PSTR("Naman's Hackpad\n"), false);
    oled_write_P(PSTR("Ready to work!\n"), false);
    return false;
}
#endif