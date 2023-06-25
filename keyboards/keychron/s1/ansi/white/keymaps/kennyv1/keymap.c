/* Copyright 2022 @ Keychron (https://www.keychron.com)
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

// clang-format off

enum layers{
    PROGRAMMING_BASE,
    PROGRAMMING_FN,
    WIN_BASE,
    WIN_FN,
};

#define KC_TASK LGUI(KC_TAB)
#define KC_FLXP LGUI(KC_E)
#define HOLD_ON_OTHER_KEY_PRESS

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [PROGRAMMING_BASE] = LAYOUT_75_ansi(
        KC_CAPS,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,    KC_F12,   KC_PSCR,  KC_DEL,   BL_STEP,
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,   KC_EQL,   KC_BSPC,            KC_PGUP,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LPRN,   KC_RPRN,  KC_BSLS,            KC_PGDN,
        MT(MOD_LCTL, KC_ESC), KC_A,KC_S,KC_D,   KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,             KC_ENT,             KC_HOME,
        KC_LSFT, KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,             RSFT_T(KC_UNDS),  KC_UP,    KC_END,
        KC_LCTL,  KC_LWIN,  KC_LALT,                                KC_SPC,                                 KC_RALT, MO(WIN_FN), KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT),

    [PROGRAMMING_FN] = LAYOUT_75_ansi(
        _______,  KC_BRID,  KC_BRIU,  KC_TASK,  KC_FLXP,  BL_DOWN,  BL_UP,    KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,   KC_VOLU,  _______,  _______,  BL_TOGG,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,  _______,            _______,
        BL_TOGG,  BL_STEP,  BL_UP,    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,  _______,            _______,
        _______,  _______,  BL_DOWN,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,             _______,            _______,
        _______,            _______,  _______,  _______,  _______,  _______,  NK_TOGG,  _______,  _______,  _______,  _______,             _______,  _______,  _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,   _______,  _______,  _______,  _______),
    // [PROGRAMMING_FLIPNUM] = LAYOUT_75_ansi(
    //     KC_CAPS,  KC_F1,    KC_2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,    KC_F12,   KC_PSCR,  KC_DEL,   BL_STEP,
    //     KC_GRV,   KC_EXLM,  KC_AT,    KC_HASH,  KC_DLR,   KC_PERC,  KC_CIRC,  KC_AMPR,  KC_ASTR,  KC_LPRN,  KC_RPRN,  KC_UNDS,   KC_EQL,   KC_BSPC,            KC_PGUP,
    //     KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,   LSFT(KC_9),LSFT(KC_0), KC_BSLS,            KC_PGDN,
    //     MT(MOD_LCTL, KC_ESC), KC_A,KC_S,KC_D,   KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,             KC_ENT,             KC_HOME,
    //     KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,             KC_RSFT,  KC_UP,    KC_END,
    //     KC_LCTL,  KC_LWIN,  KC_LALT,                                KC_SPC,                                 KC_RALT, MO(WIN_FN), KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT),

    [WIN_BASE] = LAYOUT_75_ansi(
        KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,    KC_F12,   KC_PSCR,  KC_DEL,   BL_STEP,
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,   KC_EQL,   KC_BSPC,            KC_PGUP,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,   KC_RBRC,  KC_BSLS,            KC_PGDN,
        KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,             KC_ENT,             KC_HOME,
        KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,             KC_RSFT,  KC_UP,    KC_END,
        KC_LCTL,  KC_LWIN,  KC_LALT,                                KC_SPC,                                 KC_RALT, MO(WIN_FN), KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT),

    [WIN_FN] = LAYOUT_75_ansi(
        _______,  KC_BRID,  KC_BRIU,  KC_TASK,  KC_FLXP,  BL_DOWN,  BL_UP,    KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,   KC_VOLU,  _______,  _______,  BL_TOGG,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,  _______,            _______,
        BL_TOGG,  BL_STEP,  BL_UP,    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,  _______,            _______,
        _______,  _______,  BL_DOWN,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,             _______,            _______,
        _______,            _______,  _______,  _______,  _______,  _______,  NK_TOGG,  _______,  _______,  _______,  _______,             _______,  _______,  _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,   _______,  _______,  _______,  _______),
};

const key_override_t LPRN_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_LPRN, KC_LCBR);
const key_override_t RPRN_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_RPRN, KC_RCBR);
const key_override_t nine_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_9, KC_LBRC);
const key_override_t zero_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_0, KC_RBRC);

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case KC_SPC:
            if (record->event.pressed) {
                if (get_mods() & MOD_MASK_SHIFT) {
                    tap_code16(KC_MINS);
                    // register_code(KC_MINS);
                    return false;
                }
            } else {
                if (get_mods() & MOD_MASK_SHIFT) {
                    // unregister_code(KC_MINS);
                    return false;
                }
            
            }
            break;
        case RSFT_T(KC_UNDS):
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_UNDS);
                return false;
            }
            break;
        default:
            return true;
    }
    return true;
}

// [_BLANK] = LAYOUT_75_ansi(
//     _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,   _______,  _______,  _______,  _______,
//     _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,   _______,  _______,            _______,
//     _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,   _______,  _______,            _______,
//     _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,             _______,            _______,
//     _______,            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,             _______,  _______,  _______,
//     _______,  _______,  _______,                                _______,                                _______,   _______,   _______,  _______,  _______,  _______),

// const key_override_t one_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_1, KC_1);
// const key_override_t two_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_2, KC_2);
// const key_override_t three_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_3, KC_3);
// const key_override_t four_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_4, KC_4);
// const key_override_t five_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_5, KC_5);
// const key_override_t six_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_6, KC_6);
// const key_override_t seven_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_7, KC_7);
// const key_override_t eight_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_8, KC_8);
// const key_override_t nine_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_9, KC_9);
// const key_override_t zero_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_0, KC_0);


const key_override_t **key_overrides = (const key_override_t *[]){
    &LPRN_key_override,
    &RPRN_key_override,
    &nine_key_override,
    &zero_key_override,
    NULL
};
// const key_override_t **key_overrides = (const key_override_t *[]){
//     &one_key_override,
//     &two_key_override,
//     &five_key_override, 
//     &six_key_override,
//     &seven_key_override,
//     &eight_key_override,
//     &nine_key_override,
//     &zero_key_override,
//     NULL
// };