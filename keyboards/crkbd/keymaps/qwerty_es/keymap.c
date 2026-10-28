// QWERTY (Spanish) layout for the corne, generated from the stock keymap.
// Layer 0 keys stay where they are (the computer's keyboard language decides what they type);
// the other layers type the same characters as the stock keymap. Extra keys:
//   layer 2, key 30: ¿
//   layer 2, key 31: ¡
//   layer 2, key 32: €
// TheKeebLab Corne, wired (Vial). Same layers as the wireless Corne keymap;
// wireless-only keys are left empty.
#include QMK_KEYBOARD_H
#include "tkl_brightness.h"
#include "tkl_layers.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // Layer 1 has no double-tap Caps Lock here (Vial tap dances start empty): Caps Lock is on layer 3, top left.
    [0] = LAYOUT_split_3x6_3(
        KC_TAB,         KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,          KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
        KC_LSFT,        KC_A,    KC_S,    KC_D,    KC_F,    KC_G,          KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        LCTL_T(KC_ESC), KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,          KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, LALT_T(KC_GRV),
                                          KC_LGUI, MO(1),   LT(2, KC_ENT), KC_SPC,  KC_BSPC, KC_DEL
    ),
    [1] = LAYOUT_split_3x6_3(
        _______,        KC_1,    KC_2,    KC_3,    KC_4,    KC_5,          KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    XXXXXXX,
        _______,        KC_EXLM, ALGR(KC_2),   ALGR(KC_3), KC_DLR,  KC_PERC,       S(KC_LBRC), S(KC_6), S(KC_RBRC), S(KC_8), S(KC_9), KC_MINS,
        _______,        XXXXXXX, KC_PPLS, KC_PMNS, ALGR(KC_QUOT), ALGR(KC_LBRC),       ALGR(KC_RBRC), ALGR(KC_NUHS), XXXXXXX, S(KC_0),  S(KC_SLSH), _______,
                                          _______, _______, _______,       _______, _______, KC_RALT
    ),
    [2] = LAYOUT_split_3x6_3(
        _______,        KC_F1,   KC_F2,   KC_F3,   KC_F4,   XXXXXXX,       KC_HOME, KC_PGDN, KC_PGUP, KC_END,  XXXXXXX, XXXXXXX,
        _______,        KC_F5,   KC_F6,   KC_F7,   KC_F8,   XXXXXXX,       KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, XXXXXXX, XXXXXXX,
        _______,        KC_F9,   KC_F10,  KC_F11,  KC_F12,  XXXXXXX,       S(KC_EQL), KC_EQL, ALGR(KC_5), XXXXXXX, XXXXXXX, _______,
                                          _______, _______, _______,       _______, _______, _______
    ),
    // Reached by holding layers 1 and 2 together (see layer_state_set_user), or any layer key set up in Vial.
    [3] = LAYOUT_split_3x6_3(
        KC_CAPS,        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,       KC_VOLU, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX,        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,       KC_VOLD, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX,        XXXXXXX, XXXXXXX, TKL_BRI, XXXXXXX, XXXXXXX,       KC_MUTE, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                          XXXXXXX, XXXXXXX, XXXXXXX,       XXXXXXX, XXXXXXX, XXXXXXX
    ),
};

layer_state_t layer_state_set_user(layer_state_t state) {
    return tkl_tri_layer(state, 1, 2, 3);
}
