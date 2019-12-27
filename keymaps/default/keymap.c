#include QMK_KEYBOARD_H
#include "backlight.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(KC_PSLS, KC_PMNS, KC_PAST, KC_MPLY, KC_P7, KC_P8, KC_P9, KC_PLUS, KC_P4, KC_P5, KC_P6, KC_MINS, KC_P1, KC_P2, KC_P3, LT(1,KC_PENT), LT(2,KC_P0), KC_PCMM, KC_PDOT, KC_TAB),
	[1] = LAYOUT(KC_NLCK, KC_UNDS, KC_NO, KC_NO, KC_AMPR, KC_ASTR, KC_LPRN, KC_EQL, KC_DLR, KC_PERC, KC_CIRC, KC_NO, KC_EXLM, KC_AT, KC_HASH, KC_NO, KC_RPRN, KC_NO, KC_PSLS, KC_NO),
	[2] = LAYOUT(KC_NLCK, KC_NO, KC_NO, KC_NO, KC_BTN1, KC_MS_U, KC_BTN2, KC_TAB, KC_MS_L, KC_MS_D, KC_MS_R, KC_NO, KC_WH_U, KC_NO, KC_WH_D, KC_ESC, KC_NO, KC_NO, KC_DEL, KC_NO)
};

void encoder_update_user(uint8_t index, bool clockwise) {
  if (index == 0) { /* First encoder */
    if (clockwise) {
      tap_code(KC_WH_D); /*mouse wheel down */
    } else {
      tap_code(KC_WH_U); /*mouse wheel up*/
    }
  } else if (index == 1) { /* Second encoder */  
    if (clockwise) {
      tap_code(KC_VOLD); /*volume down*/
    } else {
      tap_code(KC_VOLU); /*volume up*/
    }
  }
}
