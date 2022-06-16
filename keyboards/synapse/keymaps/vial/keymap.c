/* Copyright 2021 qpockets
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

enum layers{
  _COLEMAK,
  _QWERTY,
  _NUMBER,
  _NAVA,
  _OTHER
};

#define CTL_TAB LCTL_T(KC_TAB)
#define _NUM MO(_NUMBER)
#define _NAV MO(_NAVA)
#define _OTH MO(_OTHER)
#define _QWE TO(_QWERTY)
#define _COL TO(_COLEMAK)

// Left-hand home row mods
#define ALT_A LALT_T(KC_A)
#define GUI_S LGUI_T(KC_S)
#define CTL_D LCTL_T(KC_D)
#define HOM_F LSFT_T(KC_F)

// Right-hand home row mods
#define HOM_J RSFT_T(KC_J)
#define CTL_K RCTL_T(KC_K)
#define GUI_L LGUI_T(KC_L)
#define ALT_SCLN RALT_T(KC_SCLN)

#define GENG  G(KC_SPC)
#define SLBRC S(KC_LBRC)
#define SRBRC S(KC_RBRC)
#define SQUOT S(KC_QUOT)
#define SMINS S(KC_MINS)
#define SEQL S(KC_EQL)
#define PIPE S(KC_BSLS)
#define TILDE S(KC_GRV)
#define DTP DT_PRNT

#define RIGHT KC_RIGHT

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_COLEMAK] = LAYOUT_default(
        KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
        CTL_TAB, ALT_A,   GUI_S,   CTL_D,   HOM_F,   KC_G,    KC_H,    HOM_J,   CTL_K,   GUI_L,   ALT_SCLN,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,
        XXXXXXX, KC_LALT, _NAV,    KC_SPC,  _NUM,    _NAV,    _OTH,    XXXXXXX
    ),

    [_QWERTY] = LAYOUT_default(
        _______, KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
        _______, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,
        _______, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,
        XXXXXXX, _______, _______, _______, _______, _COL,    _______, XXXXXXX
    ),

    [_NUMBER] = LAYOUT_default(
        _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_DEL,
        _______, S(KC_1), S(KC_2), S(KC_3), S(KC_4), S(KC_5), S(KC_6), S(KC_7), S(KC_8), S(KC_9), S(KC_0),
        _______, SLBRC,   SRBRC,   KC_LBRC, KC_RBRC, SQUOT,   KC_QUOT, SMINS,   KC_MINS, SEQL,    KC_EQL,
        XXXXXXX, _______, GENG,    KC_BSPC, _______, _______, _______, XXXXXXX
    ),

    [_NAVA] = LAYOUT_default(
        _______, KC_ESC,  KC_HOME, KC_UP,   KC_END,  KC_PGUP, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_DEL,  _______,
        _______, CTL_TAB, KC_LEFT, KC_DOWN, RIGHT,   KC_PGDN, KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_RCTL,
        _______, KC_LSFT, TILDE,   KC_BSLS, PIPE,    KC_GRV,  KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_LSFT,
        XXXXXXX, _______, _______, KC_LALT, KC_RGUI, _______, _______, XXXXXXX
    ),

    [_OTHER] = LAYOUT_default(
        RESET,   RGB_TOG, _______, _______, _______, _______, _______, _______, _______, _______, _______,  DTP,
        _______, RGB_MOD, _______, _______, _______, _______, _______, _______, _______, _______, DT_UP,
        _______, RGB_HUI, RGB_SAI, RGB_VAI, _______, _______, _______, _______, _______, _______, DT_DOWN,
        XXXXXXX, _______, _______, _______, _______, _QWE,    _______, XXXXXXX
    ),
};

// Light LEDs 6 to 9 and 12 to 15 red when caps lock is active. Hard to ignore!
// const rgblight_segment_t PROGMEM my_capslock_layer[] = RGBLIGHT_LAYER_SEGMENTS(
//     {11, 4, HSV_RED}       // Light 4 LEDs, starting with LED 12
// );
// // Light LEDs 9 & 10 in cyan when keyboard layer 1 is active
// const rgblight_segment_t PROGMEM my_layer1_layer[] = RGBLIGHT_LAYER_SEGMENTS(
//     {3, 7, HSV_CYAN}
// );
// // Light LEDs 11 & 12 in purple when keyboard layer 2 is active
// const rgblight_segment_t PROGMEM my_layer2_layer[] = RGBLIGHT_LAYER_SEGMENTS(
//     {3, 7, HSV_PURPLE}
// );
// // Light LEDs 13 & 14 in green when keyboard layer 3 is active
// const rgblight_segment_t PROGMEM my_layer3_layer[] = RGBLIGHT_LAYER_SEGMENTS(
//     {3, 7, HSV_GOLD}
// );
// // etc..

// const rgblight_segment_t* const PROGMEM my_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
//     my_capslock_layer,
//     my_layer1_layer,    // Overrides caps lock layer
//     my_layer2_layer,    // Overrides other layers
//     my_layer3_layer     // Overrides other layers
// );

// void keyboard_post_init_user(void) {
//     // Enable the LED layers
//     rgblight_layers = my_rgb_layers;
// }

// bool led_update_user(led_t led_state) {
//     rgblight_set_layer_state(0, led_state.caps_lock);
//     return true;
// }

// layer_state_t layer_state_set_user(layer_state_t state) {
//     rgblight_set_layer_state(1, layer_state_cmp(state, _QWERTY));
//     rgblight_set_layer_state(2, layer_state_cmp(state, _NUMBER));
//     rgblight_set_layer_state(3, layer_state_cmp(state, _NAVA));
//     return state;
// }

// enum combos {
//     // QW_ESC,
//     CV_TAB,
//     M_ENT,
//     CM_BS,
// };

// // const uint16_t PROGMEM qw_combo[] = {KC_Q, KC_W, COMBO_END};
// const uint16_t PROGMEM cv_combo[] = {KC_C, KC_V, COMBO_END};
// const uint16_t PROGMEM m_combo[] = {KC_M, KC_COMM, COMBO_END};
// const uint16_t PROGMEM cm_combo[] = {KC_DOT, KC_SLSH, COMBO_END};

// combo_t key_combos[COMBO_COUNT] = {
//     // [QW_ESC] = COMBO(qw_combo, KC_ESC),
//     [CV_TAB] = COMBO(cv_combo, KC_TAB),
//     [M_ENT] = COMBO(m_combo, KC_ENT),
//     [CM_BS] = COMBO(cm_combo, KC_BSPC),
// };

// bool get_retro_tapping(uint16_t keycode, keyrecord_t *record) {
//     switch (keycode) {
//         case GUI_S:
//             return true;
//         case ALT_A:
//             return true;
//         case ALT_SCLN:
//             return true;
//         case GUI_L:
//             return true;
//         default:
//             return false;
//     }
// }
