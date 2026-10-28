// AZERTY (French) layout for the corne, generated from the stock keymap.
// Layer 0 keys stay where they are (the computer's keyboard language decides what they type);
// the other layers type the same characters as the stock keymap. Extra keys:
//   layer 2, key 30: é
//   layer 2, key 31: è
//   layer 2, key 32: à
//   layer 2, key 33: ç
//   layer 2, key 34: €
//   layer 2, key 22: ¨
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
        _______,        S(KC_1),    S(KC_2),    S(KC_3),    S(KC_4),    S(KC_5),          S(KC_6),    S(KC_7),    S(KC_8),    S(KC_9),    S(KC_0),    XXXXXXX,
        _______,        KC_SLSH, ALGR(KC_0),   ALGR(KC_3), KC_RBRC,  S(KC_QUOT),       KC_LBRC, KC_1, KC_NUHS, KC_5, KC_MINS, KC_4,
        _______,        XXXXXXX, KC_PPLS, KC_PMNS, ALGR(KC_4), ALGR(KC_5),       ALGR(KC_MINS), ALGR(KC_EQL), XXXXXXX, KC_EQL,  KC_8, _______,
                                          _______, _______, _______,       _______, _______, KC_RALT
    ),
    [2] = LAYOUT_split_3x6_3(
        _______,        KC_F1,   KC_F2,   KC_F3,   KC_F4,   XXXXXXX,       KC_HOME, KC_PGDN, KC_PGUP, KC_END,  XXXXXXX, XXXXXXX,
        _______,        KC_F5,   KC_F6,   KC_F7,   KC_F8,   XXXXXXX,       KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, S(KC_LBRC), XXXXXXX,
        _______,        KC_F9,   KC_F10,  KC_F11,  KC_F12,  XXXXXXX,       KC_2, KC_7, KC_0, KC_9, ALGR(KC_E), _______,
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
