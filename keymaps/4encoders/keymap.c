#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_ortho_5x4(
        KC_PENT, KC_PENT, KC_PENT, KC_ENT, 
        KC_P7,   KC_P8,   KC_P9,   KC_PMNS, 
        KC_P4,   KC_P5,   KC_P6,   KC_PPLS, 
        KC_P1,   KC_P2,   KC_P3,   KC_TAB, 
        LT(2,KC_P0), KC_COMM, KC_PDOT, LT(1,KC_PENT)),
    [1] = LAYOUT_ortho_5x4(
        KC_NLCK, KC_UNDS, KC_NO,   KC_NO, 
        KC_AMPR, KC_ASTR, KC_LPRN, KC_EQL, 
        KC_DLR,  KC_PERC, KC_CIRC, KC_NO, 
        KC_EXLM, KC_AT,   KC_HASH, KC_NO, 
        KC_RPRN, KC_NO,   KC_PSLS, KC_NO),
    [2] = LAYOUT_ortho_5x4(
        KC_NLCK, KC_NO,   KC_NO,   KC_NO, 
        KC_BTN1, KC_MS_U, KC_BTN2, KC_NO, 
        KC_MS_L, KC_MS_D, KC_MS_R, KC_TAB, 
        KC_WH_U, KC_NO,   KC_WH_D, KC_NO, 
        KC_NO,   KC_NO,   KC_DEL,  KC_ESC)
};

void encoder_update_user(uint8_t index, bool clockwise) {
  if (index == 0) { /* First encoder */
    if (clockwise) {
      tap_code(KC_A); /*mouse wheel up*/
    } else {
      tap_code(KC_B); /*mouse wheel down */
    }
  } else if (index == 1) { /* Second encoder */  
    if (clockwise) {
      tap_code(KC_C); /*volume down*/
    } else { 
      tap_code(KC_D);
    }
  } else if (index == 2) { /* Second encoder */  
    if (clockwise) {
      tap_code(KC_E); /*volume down*/
    } else {
      tap_code(KC_F); /*volume up*/
    }
  } else if (index == 3) {
    if (clockwise) {
      tap_code(KC_G);
    } else {
      tap_code(KC_H);
    }
  }
}
