// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include "quantum.h"
#include QMK_KEYBOARD_H
#include "ws2812.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {[0] = LAYOUT(KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9)};

#ifdef RGB_MATRIX_ENABLE

led_config_t g_led_config = {{
                                 // Key Matrix to LED Index
                                 {8, 7, 6},
                                 {3, 4, 5},
                                 {2, 1, 0},

                             },
                             {// LED Index to Physical Position
                              {128, 48},
                              {112, 48},
                              {96, 48},
                              {96, 32},
                              {112, 32},
                              {128, 32},
                              {128, 16},
                              {112, 16},
                              {96, 16}},
};

#endif

#ifdef OLED_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    return OLED_ROTATION_180;
}

bool oled_task_user() {
    oled_set_cursor(0, 1);

    oled_write("Placeholder...", false);

    return false;
}

#endif
