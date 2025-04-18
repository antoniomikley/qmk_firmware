/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

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

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(
      KC_ESC,  KC_Q, KC_W, KC_F, KC_P,  KC_B,        KC_J,   KC_L,  KC_U,         KC_Y,   KC_SCLN, KC_BSPC,
      LCTL_T(KC_TAB),  KC_A, KC_R, KC_S, KC_T,  KC_G,        KC_M,   KC_N,  KC_E, KC_I,   KC_O,    LALT_T(KC_QUOT),
      KC_LSFT, KC_X, KC_C, KC_D,         KC_V,  KC_Z,        KC_K,   KC_H,  KC_COMM,      KC_DOT, KC_SLSH, KC_RSFT,
                           KC_LGUI,      MO(1), KC_ENT,      KC_SPC, MO(2), KC_RGUI

  ),

    [1] = LAYOUT_split_3x6_3(
      XXXXXXX, KC_EXLM, KC_AT  , KC_HASH, KC_DLR , KC_PERC,                      KC_CIRC, KC_AMPR, KC_ASTR, XXXXXXX, XXXXXXX, XXXXXXX,
      KC_GRV , KC_TILD, KC_LT, KC_LCBR, KC_LPRN, KC_LBRC,                        KC_RBRC, KC_RPRN, KC_RCBR, KC_GT, KC_PIPE, KC_BSLS,
      KC_LSFT, XXXXXXX, XXXXXXX, KC_UNDS, KC_MINS, XXXXXXX,                      KC_PLUS, KC_EQL, KC_SCLN, KC_COLN, XXXXXXX, KC_RSFT,
                                          KC_LGUI, _______,  KC_ENT,     KC_SPC,   MO(3), KC_RALT
  ),

    [2] = LAYOUT_split_3x6_3(
      XXXXXXX, XXXXXXX, KC_7, KC_8, KC_9, XXXXXXX,             XXXXXXX, KC_PGUP, KC_UP, KC_PGDN, XXXXXXX, XXXXXXX,
      XXXXXXX, XXXXXXX, KC_4, KC_5, KC_6, KC_0,             XXXXXXX, KC_LEFT, KC_DOWN, KC_RGHT, XXXXXXX, XXXXXXX,
      KC_LSFT, XXXXXXX, KC_1, KC_2, KC_3, XXXXXXX,             XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_RSFT,
                                XXXXXXX, MO(3), XXXXXXX,        XXXXXXX, _______, XXXXXXX
  ),

    [3] = LAYOUT_split_3x6_3(
      KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,
      XXXXXXX, XXXXXXX, OSM(MOD_LALT), OSM(MOD_LCTL), OSM(MOD_LCTL | MOD_LALT), XXXXXXX, KC_INS, KC_DEL, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
      TG(4), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                          KC_LCTL, _______,  KC_ENT,     KC_SPC, _______, KC_RALT
  ),

    [4] = LAYOUT_split_3x6_3(
        KC_ESC, KC_Q, KC_W, KC_E, KC_R, KC_T,           KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC,
        KC_TAB, KC_A, KC_S, KC_D, KC_F, KC_G,           KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT,
        KC_LSFT,KC_Z, KC_X, KC_C, KC_V, KC_B,           KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
                    KC_LALT, KC_LCTL, KC_SPACE,     KC_ENT, KC_GRV, TG(4)
    )
};
