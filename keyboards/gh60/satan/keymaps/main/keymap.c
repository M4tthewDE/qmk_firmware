#include QMK_KEYBOARD_H

#include "keymap_german.h"

#define BRIGHT_TOGGLE KC_MEDIA_REWIND

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
enum layer_names {
  _BL,
  _FL,
  _FL2
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* Keymap _BL: (Base Layer) Default Layer
   * ,-----------------------------------------------------------.
   * |Esc| 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 0 | - | = | Backsp|
   * |-----------------------------------------------------------|
   * | Tab | Q | W | E | R | T | Y | U | I | O | P | [ | ] |  \  |
   * |-----------------------------------------------------------|
   * | Caps  | A | S | D | F | G | H | J | K | L | ; | ' | Enter |
   * |-----------------------------------------------------------|
   * | Shift  | Z | X | C | V | B | N | M | , | . | / |    Shift |
   * |-----------------------------------------------------------|
   * |Ctrl|GUI |Alt |         Space         | Alt| GUI| Fn | Ctrl|
   * `-----------------------------------------------------------'
   */
[_BL] = LAYOUT_60_iso(
  KC_ESC,       KC_1,    KC_2,    KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9,    KC_0,    DE_SS,   DE_ACUT, KC_BSPC, \
  KC_TAB,       KC_Q,    KC_W,    KC_E, KC_R, KC_T, DE_Z, KC_U, KC_I, KC_O,    KC_P,    DE_UDIA,   DE_PLUS, \
  MO(_FL),      KC_A,    KC_S,    KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L,    DE_ODIA,   DE_ADIA,   DE_HASH, KC_ENT, \
  KC_LSFT,      DE_LABK, DE_Y,    KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT,  DE_MINS, KC_RSFT,  \
  KC_LCTL,      _______, KC_LALT,              KC_SPACE,                       KC_ALGR, KC_RGUI, MO(_FL2),  KC_RCTL),

  /* Keymap _FL: Function Layer
   * ,-----------------------------------------------------------.
   * | ` |   |   |   |   |   |   |   |   |   |   |   |   | Reset |
   * |-----------------------------------------------------------|
   * |     |   |   |   |   |   |   |   |   |   |   |BL-|BL+|  BL |
   * |-----------------------------------------------------------|
   * |      |   |   |   |   |   |   |   |   |   |   |   |        |
   * |-----------------------------------------------------------|
   * |        |   |   |   |   |   |   |   |   |   |   |          |
   * |-----------------------------------------------------------|
   * |    |    |    |                        |    |    |    |    |
   * `-----------------------------------------------------------'
   */
  [_FL] = LAYOUT_60_iso(
    KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_DELETE,   \
    _______, _______, _______, _______, _______, _______, _______, _______, KC_UP,   _______, _______, _______,  _______, \
    _______, _______, _______, _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_RIGHT, _______, _______, _______, KC_PSCREEN, \
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
    _______, _______, _______,                            _______,                            _______, _______, _______, _______
  ),
    [_FL2] = LAYOUT_60_iso(
    _______, KC_BRID, KC_BRIU, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, _______,   \
    _______, KC_7, KC_8, KC_9, _______, _______, _______, _______, _______, _______, _______, _______,  _______, \
    _______, KC_4, KC_5, KC_6, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
    _______, _______, KC_1, KC_2, KC_3, _______, _______, _______, _______, _______, _______, _______, _______, \
    KC_MPLY, _______, KC_0,                           BRIGHT_TOGGLE,                            _______, _______, _______, _______
  ),
};
