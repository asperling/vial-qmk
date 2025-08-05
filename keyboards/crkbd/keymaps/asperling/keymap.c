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

enum custom_keycodes {
  M_BKTK = SAFE_RANGE,
  M_TILD,
  M_CARET,
  M_DQUO,
  M_QUOT,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_split_3x6_3_ex2(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,   MT(MOD_HYPR, KC_PGUP), MT(MOD_HYPR, KC_END),     KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,  KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      LT(4, KC_ESC),    MT(MOD_LALT, KC_A),    MT(MOD_LCTL, KC_S),    MT(MOD_LGUI, KC_D),    MT(MOD_LSFT, KC_F),    KC_G,   MT(MOD_MEH, KC_PGDN), MT(MOD_MEH, KC_HOME),     KC_H,    MT(MOD_LSFT, KC_J),    MT(MOD_LGUI, KC_K),    MT(MOD_LCTL, KC_L), MT(MOD_LALT, KC_SCLN), LT(5, KC_MINS),
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,  TO(6),
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI, LT(1, KC_SPC),  MT(MOD_LSFT, KC_BSPC),     LT(2, KC_DEL), LT(3, KC_ENT), KC_RALT
                                      //`--------------------------'  `--------------------------'

  ),

  [1] = LAYOUT_split_3x6_3_ex2(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       _______,    RALT(KC_S),    LSFT(RALT(KC_Q)),    LSFT(RALT(KC_P)),    LSFT(RALT(KC_Y)),    LSFT(KC_6),   _______, _______,     KC_KP_MINUS,    KC_7,    KC_8,    KC_9,    KC_KP_DOT, _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, RALT(KC_S), RALT(KC_Q), RALT(KC_P), RALT(KC_Y), KC_GRAVE,   _______, _______,  KC_KP_PLUS, KC_4,   KC_5, KC_6, KC_KP_ASTERISK, _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, _______, _______, KC_QUOTE, LSFT(KC_QUOTE), LSFT(KC_GRAVE),                      KC_KP_COMMA, KC_1, KC_2, KC_3, KC_KP_SLASH, _______,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______,  _______,     KC_LCTL, KC_LGUI, KC_KP_0
                                      //`--------------------------'  `--------------------------'
  ),

  [2] = LAYOUT_split_3x6_3_ex2(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       _______, _______,   _______, KC_LCBR,  KC_RCBR, M_CARET,  _______, _______,   KC_AT, KC_EXLM, KC_DLR, KC_PERC, _______, _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, LSFT(KC_BSLS), KC_BSLS, KC_LPRN, KC_RPRN, M_BKTK,  _______, _______,   KC_EQL,  M_DQUO, M_QUOT, KC_AMPR, KC_ASTR,  _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, _______, M_TILD, KC_LBRC, KC_RBRC, _______,                      RALT(KC_5), KC_HASH, _______, _______, _______, _______,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______,  _______,     _______, _______, _______
                                      //`--------------------------'  `--------------------------'
  ),

  [3] = LAYOUT_split_3x6_3_ex2(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      _______, _______, _______, _______, KC_PGUP, _______,  _______, _______,  LGUI(KC_LEFT), LALT(KC_LEFT), LALT(KC_RGHT), LGUI(KC_RGHT), _______, _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, _______, _______, _______, KC_PGDN, _______,  _______, _______,  KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, _______, _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, LGUI(KC_Z), LGUI(KC_X), LGUI(KC_C), LGUI(KC_V), _______,                     _______, KC_HOME, KC_END, _______, _______, _______,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______,  _______,     _______, _______, _______
                                      //`--------------------------'  `--------------------------'
  ),

  [4] = LAYOUT_split_3x6_3_ex2(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      _______, _______, KC_MUTE, KC_VOLU, KC_MSTP, _______,  _______, _______,  KC_F10, KC_F7, KC_F8, KC_F9, _______, _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, _______, KC_MPRV, KC_MPLY, KC_MNXT, _______,  _______, _______,  KC_F11, KC_F4, KC_F5, KC_F6, _______, _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, _______, _______, KC_VOLD, _______, _______,                     KC_F12, KC_F1, KC_F2, KC_F3, _______, _______,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI, KC_LCTL,  KC_LALT,     _______, _______, _______
                                      //`--------------------------'  `--------------------------'
  ),

  [5] = LAYOUT_split_3x6_3_ex2(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      _______, _______, KC_BTN1, KC_MS_U, KC_BTN2, KC_WH_U,  _______, _______,  _______, _______, _______, _______, _______, _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, _______, KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_D,  _______, _______,  _______, KC_BTN1, KC_BTN2, _______, _______, _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, _______, _______, KC_BTN3, _______, _______,                     _______, _______, _______, _______, _______, _______,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, KC_BRID,  KC_BRIU,     _______, _______, _______
                                      //`--------------------------'  `--------------------------'
  ),

  [6] = LAYOUT_split_3x6_3_ex2(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_TAB, _______, _______, _______, _______, _______,  _______, _______,  _______, _______, _______, _______, _______, _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_ESC, KC_A, KC_S, KC_D, KC_F, _______,  _______, _______, _______, KC_J, KC_K, KC_L, KC_SCLN, _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT, _______, _______, _______, _______, _______,                     _______, _______, _______, _______, _______, TO(0),
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_SPC, KC_LCTL,  KC_LALT,     _______, _______, _______
                                      //`--------------------------'  `--------------------------'
  ),

  [7] = LAYOUT_split_3x6_3_ex2(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
        QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, XXXXXXX, XXXXXXX,   _______, _______,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI, _______,  KC_SPC,     KC_ENT, _______, KC_RALT
                                      //`--------------------------'  `--------------------------'
  ),
};

#ifdef OLED_ENABLE
#include <stdio.h>

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master()) {
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  }
  return rotation;
}

#define L_BASE 0
#define L_LOWER 2
#define L_RAISE 4
#define L_ADJUST 8

void oled_render_layer_state(void) {
    oled_write_P(PSTR("Layer: "), false);
    switch (layer_state) {
        case L_BASE:
            oled_write_ln_P(PSTR("Default"), false);
            break;
        case L_LOWER:
            oled_write_ln_P(PSTR("Lower"), false);
            break;
        case L_RAISE:
            oled_write_ln_P(PSTR("Raise"), false);
            break;
        case L_ADJUST:
        case L_ADJUST|L_LOWER:
        case L_ADJUST|L_RAISE:
        case L_ADJUST|L_LOWER|L_RAISE:
            oled_write_ln_P(PSTR("Adjust"), false);
            break;
    }
}


char keylog_str[24] = {};

const char code_to_name[60] = {
    ' ', ' ', ' ', ' ', 'a', 'b', 'c', 'd', 'e', 'f',
    'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p',
    'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
    '1', '2', '3', '4', '5', '6', '7', '8', '9', '0',
    'R', 'E', 'B', 'T', '_', '-', '=', '[', ']', '\\',
    '#', ';', '\'', '`', ',', '.', '/', ' ', ' ', ' '};

void set_keylog(uint16_t keycode, keyrecord_t *record) {
  char name = ' ';
    if ((keycode >= QK_MOD_TAP && keycode <= QK_MOD_TAP_MAX) ||
        (keycode >= QK_LAYER_TAP && keycode <= QK_LAYER_TAP_MAX)) { keycode = keycode & 0xFF; }
  if (keycode < 60) {
    name = code_to_name[keycode];
  }

  // update keylog
  snprintf(keylog_str, sizeof(keylog_str), "%dx%d, k%2d : %c",
           record->event.key.row, record->event.key.col,
           keycode, name);
}

void oled_render_keylog(void) {
    oled_write(keylog_str, false);
}

void render_bootmagic_status(bool status) {
    /* Show Ctrl-Gui Swap options */
    static const char PROGMEM logo[][2][3] = {
        {{0x97, 0x98, 0}, {0xb7, 0xb8, 0}},
        {{0x95, 0x96, 0}, {0xb5, 0xb6, 0}},
    };
    if (status) {
        oled_write_ln_P(logo[0][0], false);
        oled_write_ln_P(logo[0][1], false);
    } else {
        oled_write_ln_P(logo[1][0], false);
        oled_write_ln_P(logo[1][1], false);
    }
}

void oled_render_logo(void) {
    static const char PROGMEM crkbd_logo[] = {
        0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x8d, 0x8e, 0x8f, 0x90, 0x91, 0x92, 0x93, 0x94,
        0xa0, 0xa1, 0xa2, 0xa3, 0xa4, 0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 0xaa, 0xab, 0xac, 0xad, 0xae, 0xaf, 0xb0, 0xb1, 0xb2, 0xb3, 0xb4,
        0xc0, 0xc1, 0xc2, 0xc3, 0xc4, 0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0xca, 0xcb, 0xcc, 0xcd, 0xce, 0xcf, 0xd0, 0xd1, 0xd2, 0xd3, 0xd4,
        0};
    oled_write_P(crkbd_logo, false);
}

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        oled_render_layer_state();
        oled_render_keylog();
    } else {
        oled_render_logo();
    }
    return false;
}
#endif // OLED_ENABLE

#ifdef RGB_MATRIX_ENABLE
layer_state_t layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
        case 0:
            rgb_matrix_sethsv(HSV_RED);     // Base layer = rot
            break;
        case 1:
            rgb_matrix_sethsv(HSV_GREEN);   // Layer 1 = grün
            break;
        case 2:
            rgb_matrix_sethsv(HSV_BLUE);    // Layer 2 = blau
            break;
        case 3:
            rgb_matrix_sethsv(HSV_YELLOW);  // Layer 3 = gelb
            break;
        case 4:
            rgb_matrix_sethsv(HSV_CYAN);    // Layer 4 = cyan
            break;
        case 5:
            rgb_matrix_sethsv(HSV_MAGENTA); // Layer 5 = magenta
            break;
        case 6:
            rgb_matrix_sethsv(HSV_WHITE);   // Layer 6 = weiß
            break;
        default:
            rgb_matrix_sethsv(HSV_OFF);
            break;
    }
    return state;
}
#endif

// Process custom keycodes
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  // Debugging or logging key presses
  #ifdef OLED_ENABLE
  if (record->event.pressed) {
    set_keylog(keycode, record);
  }
  #endif

  switch (keycode) {
    case M_BKTK:
      if (record->event.pressed) {
        SEND_STRING("` ");
      }
      return false;
    case M_TILD:
      if (record->event.pressed) {
        SEND_STRING(SS_LSFT("`") " ");
      }
      return false;
    case M_CARET:
      if (record->event.pressed) {
        SEND_STRING(SS_LSFT("6") " ");
      }
      return false;
    case M_DQUO:
      if (record->event.pressed) {
        SEND_STRING(SS_LSFT("'") " ");
      }
      return false;
    case M_QUOT:
      if (record->event.pressed) {
        SEND_STRING("'" " ");
      }
      return false;
  }

  return true;
}
