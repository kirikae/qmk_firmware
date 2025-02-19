#include QMK_KEYBOARD_H
#define _QWERTY 0
#define _FN 1
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* ,-----------------------------------------------------------------------------------------.
   * | Esc | 1   | 2   | 3   | 4   | 5   | 6   | 7   | 8   | 9   | 0   | -   | =   | \   | DEL |
   * |-----------------------------------------------------------------------------------------+
   * | Tab    | Q   | W   | E   | R   | T   | Y   | U   | I   | O   | P   | [   | ]   | BSpace |
   * |-----------------------------------------------------------------------------------------+
   * | CAPSLOCK | A   | S   | D   | F   | G   | H   | J   | K   | L   | ;   | '   | Enter      |
   * |-----------------------------------------------------------------------------------------+
   * | Shift     | Z   | X   | C   | V   | B   | N   | M   | ,   | .   | /   | Shift | Up | L1 |
   * |-----------------------------------------------------------------------------------------+
   * | Ctrl | Gui  | Alt  |                Space                | MO1 | Gui | Left| Down| Right|
   * `-----------------------------------------------------------------------------------------'
   */
  [_QWERTY] = LAYOUT_directional(
    KC_GESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSLS, KC_DEL,\
    KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSPC,\
    CTL_T(KC_CAPS), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,\
    KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_UP, TT(2),\
    KC_LCTL, KC_LGUI, KC_LALT, KC_SPC, KC_SPC, KC_SPC, MO(1), LT(1, KC_RGUI), KC_LEFT, KC_DOWN, KC_RGHT
  ),
  /* ,-----------------------------------------------------------------------------------------.
   * | Esc | F1  | F2  | F3  | F4  | F5   | F6  | F7  | F8  | F9  | F10 | -  | =   | \   | DEL |
   * |-----------------------------------------------------------------------------------------+
   * | Caps    | Q   | W   | E   | R   | T   | Y   | U   | I   | O   | P   | [   | ]   | RESET  |
   * |-----------------------------------------------------------------------------------------+
   * | CAPSLOCK | VOL+| VOL-|Eject| F   | G   | H   | J   | K   | L   | ;   | '   | Enter      |
   * |-----------------------------------------------------------------------------------------+
   * | Shift     | Z   | X   | C   | V   | BTgl| BL+ | BL- | ,   | .   | /   | Shift |PgUp| L1 |
   * |-----------------------------------------------------------------------------------------+
   * | Ctrl | Gui  | Alt  |                Space                | MO1 | Gui | Home|PgDwn|  End |
   * `-----------------------------------------------------------------------------------------'
   */
  [_FN] = LAYOUT_directional(
    KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_INS, KC_TRNS,\
    KC_CAPS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PSCR, KC_SLCK, KC_PAUS, KC_UP, KC_TRNS, RESET,\
    KC_TRNS, KC__VOLUP, KC__VOLDOWN, KC_MUTE, KC_EJCT, KC_TRNS, KC_PAST, KC_PSLS, KC_HOME, KC_PGUP, KC_LEFT, KC_RGHT, KC_TRNS,\
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, BL_DEC, BL_TOGG, BL_INC, BL_DEC, KC_END, KC_PGDN, KC_DOWN, KC_TRNS, KC_PGUP, KC_TRNS,\
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, LT(0, KC_RGUI), KC_HOME, KC_PGDN, KC_END
  ),
  };

