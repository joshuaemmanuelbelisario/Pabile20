#include QMK_KEYBOARD_H
#include "backlight.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_ortho(
		KC_NLCK, KC_PSLS, KC_PAST, KC_PMNS, 
		KC_P7,   KC_P8,   KC_P9,   KC_PPLS, 
		KC_P4,   KC_P5,   KC_P6,   KC_TAB, 
		KC_P1,   KC_P2,   KC_P3,   KC_PEQL, 
		KC_P0,   KC_PCMM, KC_PDOT, KC_PENT)};

void encoder_update_user(uint8_t index, bool clockwise) {
  if (index == 0) { /* First encoder */
    if (clockwise) {
      tap_code(KC_WH_U); /*mouse wheel up*/
    } else {
      tap_code(KC_WH_D); /*mouse wheel down */
    }
  } else if (index == 1) { /* Second encoder */  
    if (clockwise) {
      tap_code(KC_VOLU); /*volume up*/
    } else {
      tap_code(KC_VOLD); /*volume down*/
    }
  }
}
