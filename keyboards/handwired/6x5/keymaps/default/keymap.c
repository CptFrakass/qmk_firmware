
#include QMK_KEYBOARD_H

#define _NUMPAD 1
// #define _QW 1
// #define NUM 2
// #define DIR 3

// Readability keycodes
#define _______ KC_TRNS

enum custom_keycodes {
  _NUMPAD = SAFE_RANGE,
  _MOD,
  _ANN,
  _ENV,
  U_,
  DC,
  CP, 
  DP, 
  DC, 
  AJ,
  JO, 
  ROT, 
  MI,
  RES, 
  MG, // mesurergeom
  DEC, //DECOMPOS, 
  COUP, //COUPURE, 
  DI, 
  AI, 
  DO,
  LI, 
  CE, 
  HA, 
  PO,
  EDITREF,
  BLOC,
  COTLIN, 
  COTRAYON,
  COTANGLE,
  LRM, //ligne de repere multi
  CORRESPROP
*/
};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
      case U_:
      if (record->event.pressed) {
        SEND_STRING("U ");
      } 
      else {
      }
      break; 
    case CP:
      if (record->event.pressed) {
        SEND_STRING("CP ");
      } 
      else {
      }
      break; 

    case DP:
      if (record->event.pressed) {
        SEND_STRING("DP ");
      } 
      else {
      }
      break; 

    case DC:
      if (record->event.pressed) {
        SEND_STRING("DC ");
      } 
      else {
      }
      break; 

    case AJ:
      if (record->event.pressed) {
        SEND_STRING("AJ ");
      } 
      else {
      }
      break; 

    case JO:
      if (record->event.pressed) {
        SEND_STRING("JO ");
      } 
      else {
      }
      break; 

    case ROT:
      if (record->event.pressed) {
        SEND_STRING("ROT ");
      } 
      else {
      }
      break; 

    case MI:
      if (record->event.pressed) {
        SEND_STRING("MI ");
      } 
      else {
      }
      break; 

    case RES:
      if (record->event.pressed) {
        SEND_STRING("RES ");
      } 
      else {
      }
      break; 

    case MG:
      if (record->event.pressed) {
        SEND_STRING("MESURERGEOM ");
      } 
      else {
      }
      break; 

      case DEC:
      if (record->event.pressed) {
        SEND_STRING("DECOMPOS ");
      } 
      else {
      }
      break; 

      case COUP:
      if (record->event.pressed) {
        SEND_STRING("COUPURE ");
      } 
      else {
      }
      break; 

      case DI:
      if (record->event.pressed) {
        SEND_STRING("DI ");
      } 
      else {
      }
      break; 

      case AI:
      if (record->event.pressed) {
        SEND_STRING("AI ");
      } 
      else {
      }
      break; 

      case DO:
      if (record->event.pressed) {
        SEND_STRING("DO ");
      } 
      else {
      }
      break; 

      case LI:
      if (record->event.pressed) {
        SEND_STRING("L ");
      } 
      else {
      }
      break; 

      case CE:
      if (record->event.pressed) {
        SEND_STRING("C ");
      } 
      else {
      }
      break; 

      case HA:
      if (record->event.pressed) {
        SEND_STRING("H ");
      } 
      else {
      }
      break; 

      case PO:
      if (record->event.pressed) {
        SEND_STRING("PO ");
      } 
      else {
      }
      break;

      case REC:
      if (record->event.pressed) {
        SEND_STRING("REC ");
      } 
      else {
      }
      break;        

      case EDITREF:
      if (record->event.pressed) {
        SEND_STRING("EDITREF ");
      } 
      else {
      }
      break;

      case BLOC:
      if (record->event.pressed) {
        SEND_STRING("BLOC ");
      } 
      else {
      }
      break;

      case COTLIN:
      if (record->event.pressed) {
        SEND_STRING("COTLIN ");
      } 
      else {
      }
      break; 

     case COTRAYON:
      if (record->event.pressed) {
        SEND_STRING("COTRAYON ");
      } 
      else {
      }
      break; 

      case COTANGLE:
      if (record->event.pressed) {
        SEND_STRING("COTANGLE ");
      } 
      else {
      }
      break;

*/
  }
  return true;
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* base layout
 * .-----------------------------------------------------.
 * | ESC    |  _MOD  |   _AN  |  _ENV  | _NUMPAD|    U_  |
 * |--------+--------+--------+--------+--------+--------|
 * |  TAB   |   MG   |   COT  | COTLIN |CORPROP | EDITREF|
 * |--------+--------+--------+--------+--------+--------|
 * |   ,    |   AJ   |   DC   |   DP   |   CP   | ENTER  |
 * |--------+--------+--------+--------+--------+--------|
 * |   MI   | RESEAU |   CE   |   DO   |   LI   | SUPPR  |
 * |--------+--------+--------+--------+--------+--------|
 * | ROT    |   HA   |   PO   |   REC  |   PO   |  SPC   |
 * '-----------------------------------------------------'
 */


  [0] = LAYOUT(
  KC_ESC, _MOD,   _ANN,   _ENV,   _NUMPAD,   U_,
  KC_TAB, MG,   COT,  COTLIN,   CORPROP,       EDITREF,
  KC_COMMA,    AJ,   DC,  DP,   CP,      KC_ENT,
  MI,   RESEAU,   CE,   DO,   LI,       KC_DEL,
  ROT,   HA,   PO,   REC,   LI,       KC_SPC,
  )

/* numpad
 * .-----------------------------------------------------.
 * | ESC    |   MOD  |   AN   |   ENV  | NUMPAD |    U_  |
 * |--------+--------+--------+--------+--------+--------|
 * |  TAB   |   MG   |   COT  | COTLIN |CORPROP | EDITREF|
 * |--------+--------+--------+--------+--------+--------|
 * |   ,    |   AJ   |   DC   |   DP   |   CP   | ENTER  |
 * |--------+--------+--------+--------+--------+--------|
 * |   MI   | RESEAU |   CE   |   HA   |   LI   | SUPPR  |
 * |--------+--------+--------+--------+--------+--------|
 * | ROT    |   HA   |   PO   |   REC  |   PO   |  SPC   |
 * '-----------------------------------------------------'
 */


  [0] = LAYOUT(
  KC_ESC, MG,   AI,   DI,   NUMPAD,   U_,
  KC_TAB, CP,   DP,   DC,   AJ,       DO,
  DEC,    JO,   ROT,  MI,   RES,      KC_ENT,
  COUP,   LI,   CE,   HA,   PO,       KC_SPC,

  )
/* QWERTY
 * .--------------------------------------------------------------------------------------------------------------------------------------.
 * |        | 1      | 2      | 3      | 4      | 5      | 6      | 7      | 8      | 9      | 0      |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * | ESC    | Q      | W      | E      | R      | T      | Y      | U      | I      | O      | P      | BACKSP |   7    |   8    |   9    |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * | TAB    | A      | S      | D      | F      | G      | H      | J      | K      | L      | ;      | '      |   4    |   5    |   6    |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * | SHIFT  | Z      | X      | C      | V      | B      | N      | M      | ,      | .      | /      | ENT/SFT|   1    |   2    |   3    |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * | LCTRL  | LGUI   | ALT    | ALT    | NUM    | SHIFT  | SPACE  | DIR    | RGUI   | RALT   | DEL    | CTRL   |   0    |   0    |   .    |
 * '--------------------------------------------------------------------------------------------------------------------------------------'
 */

  // [_QW] = LAYOUT_ortho_5x15(
  // _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______, _______, _______, _______,
  // KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC, KC_KP_7, KC_KP_8, KC_KP_9,
  // KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_KP_4, KC_KP_5, KC_KP_6,
  // KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, SFT_T(KC_ENT), KC_KP_1, KC_KP_2, KC_KP_3,
  // KC_LCTL, KC_LGUI, KC_LALT, KC_LALT, MO(NUM), KC_LSFT, KC_SPC,  MO(DIR), KC_RGUI, KC_RALT, KC_DEL,  KC_RCTL, KC_KP_0, KC_KP_0, KC_KP_DOT
  // ),

/* NUMBERS
 * .--------------------------------------------------------------------------------------------------------------------------------------.
 * |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        | F1     | F2     | F3     | F4     | F5     | F6     | F7     | F8     | F9     | F10    | NUMLOCK|   /    |   *    |   -    |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |    `   | 1      | 2      | 3      | 4      | 5      | 6      | 7      | 8      | 9      | 0      |        |        |        |   +    |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        | F11    | F12    |        |        |        | ENTER  | SHIFT  | RGUI   | ./ALT  | BKSC   |        |        |        | ENTER  |
 * |        |        |        |        |        |        |        |        |        |        |CTRLhold|		     |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        | ENTER  | SHIFT  |        |        |        |        |        |        |        |
 * '--------------------------------------------------------------------------------------------------------------------------------------'
 */

  // [NUM] = LAYOUT_ortho_5x15(
  // _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______, _______,
  // _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_NLCK, KC_PSLS, KC_PAST, KC_PMNS,
  // KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,     _______, _______, _______, KC_PPLS,
  // _______, KC_F11,  KC_F12,  KC_TRNS, KC_TRNS, KC_TRNS, KC_ENT,  KC_RSFT, KC_RGUI, ALT_T(KC_DOT), CTL_T(KC_BSPC), _______, _______, _______, KC_PENT,
  // _______, _______, _______, _______, _______, _______, KC_ENT,  KC_RSFT, _______, _______, _______,  _______, _______, _______, _______
  // ),

/* DIRECTIONS
 * .--------------------------------------------------------------------------------------------------------------------------------------.
 * |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * | RESET  | TAB    |   up   |        | INS    | CTRL   | SHIFT  | PgUp   | Home   |   -    |   =    |  DEL   |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * | CAPSLK | left   |  down  | right  | PrScr  | SHIFT  | CTRL   | PgDn   | End    |   [    |   ]    |   \    |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        | P-Brk  |        |        |        |        |        |        | RGUI   | ALT    |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * | KEYPAD |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
 * '--------------------------------------------------------------------------------------------------------------------------------------'
 */

  // [DIR] = LAYOUT_ortho_5x15(
  // _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  // RESET,   KC_TAB,  KC_UP,   _______, KC_INS,  KC_LCTL, KC_LSFT, KC_PGUP, KC_HOME, KC_MINS, KC_EQL,  KC_DEL,  _______, _______, _______,
  // KC_CAPS, KC_LEFT, KC_DOWN, KC_RGHT, KC_PSCR, KC_LSFT, KC_LCTL, KC_PGDN, KC_END,  KC_LBRC, KC_RBRC, KC_BSLS, _______, _______, _______,
  // _______, KC_PAUS, _______, _______, _______, _______, _______, _______, KC_RGUI, KC_RALT, _______, _______, _______, _______, _______,
  // DF(PAD), _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
  // ),

};

const uint16_t PROGMEM fn_actions[] = {

};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  // MACRODOWN only works in this function
      switch(id) {
        case 0:
          if (record->event.pressed) {
            register_code(KC_RSFT);
          } else {
            unregister_code(KC_RSFT);
          }
        break;
      }
    return MACRO_NONE;
};


void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

/*
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}
*/

/*
void led_set_user(uint8_t usb_led) {

}
*/