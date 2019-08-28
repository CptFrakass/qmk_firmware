
#include QMK_KEYBOARD_H

#define _NUMPAD 1
#define _MOD 2
#define _ANN 3
#define _ENVIR 4
#define _MG 5
#define _RESEAU 6
#define _DO 7

// Readability keycodes
#define _______ KC_TRNS

enum custom_keycodes {
  NUMPAD = SAFE_RANGE,
  MODIFY,
  ANN,
  ENVIR,
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
  R_,
  P_,
  T_, 
  MG, // mesurergeom
  DEC, //DECOMPOS, 
  COUP, //COUPURE, 
  DI, 
  AI,
  A_,
  DO,
  V_,
  H_,
  LI, 
  CE, 
  HA, 
  PO,
  EDITREF,
  CORPROP,
  BLOC,
  COTLIN, 
  COTRAYON,
  COTANGLE,
  TEXTE,
  TEXTM,
  LIG, //ligne de repere multi
  TVERR,
  EP,
  EO, 
  CLN 
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

      case A_:
      if (record->event.pressed) {
        SEND_STRING("A ");
      } 
      else {
      }
      break; 

      case R_:
      if (record->event.pressed) {
        SEND_STRING("R ");
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

      case CORPROP:
      if (record->event.pressed) {
        SEND_STRING("CORRESPROP ");
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

      case COT:
      if (record->event.pressed) {
        SEND_STRING("COT ");
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
      
      case TEXTE:
      if (record->event.pressed) {
        SEND_STRING("TEXTE ");
      } 
      else {
      }
      break;

      case TEXTM:
      if (record->event.pressed) {
        SEND_STRING("TEXTMULT ");
      } 
      else {
      }
      break;

      case LIG:
      if (record->event.pressed) {
        SEND_STRING("LIG ");
      } 
      else {
      }
      break;

      case TVERR: // toggle display lock (need adequate subroutine defined in ACAD) 
      if (record->event.pressed) {
        SEND_STRING("TVERR ");
      } 
      else {
      }
      break;

      case EP:
      if (record->event.pressed) {
        SEND_STRING("EP ");
      } 
      else {
      }
      break;

      case EO:
      if (record->event.pressed) {
        SEND_STRING("EO ");
      } 
      else {
      }
      break;

      case CLN:
      if (record->event.pressed) {
        SEND_STRING(":");
      } 
      else {
      }
      break;


  }
  return true;
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* base layout
 * .-----------------------------------------------------.
 * | ESC    | MODIFY |   ANN  | ENVIR  | NUMPAD |    U_  |
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
  KC_ESC,   MODIFY, ANN,    ENVIR,    NUMPAD,    U_,
  KC_TAB,   MG,     COT,    COTLIN,   CORPROP,   EDITREF,
  KC_COMMA, AJ,     DC,     DP,       CP,        KC_ENT,
  MI,       RESEAU, CE,     DO,       LI,        KC_DEL,
  ROT,      HA,     PO,     REC,      LI,        KC_SPC
  ),


/* numpad
 * .-----------------------------------------------------.
 * |  ESC   | MODIFY |   ANN  | ENVIR | NUMPAD |    U_  |
 * |--------+--------+--------+--------+--------+--------|
 * |  TAB   |   +    |    7   |    8   |   9    |  BSPC  |
 * |--------+--------+--------+--------+--------+--------|
 * |   ,    |   -    |    4   |    5   |   6    | ENTER  |
 * |--------+--------+--------+--------+--------+--------|
 * |   MI   |   /    |    1   |    2   |   3    | SUPPR  |
 * |--------+--------+--------+--------+--------+--------|
 * | ROT    |   *    |    0   |   .    |   PO   |  SPC   |
 * '-----------------------------------------------------'
 */

  [_NUMPAD] = LAYOUT(
  _______,   _______, _______,  _______,   _______,   _______,  
  _______,   KC_PPLS,  KC_P7,   KC_P8,     KC_P9,     KC_BSPC,
  _______,   KC_PMNS,  KC_P4,   KC_P5,     KC_P6,     KC_PENT,
  _______,   KC_PSLS,  KC_P1,   KC_P2,     KC_P3,     KC_DEL,
  _______,   KC_PAST,  KC_P0,   KC_PDOT,   CLN,       _______
  ),


/* _MOD
 * .-----------------------------------------------------.
 * |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------|
 * |        |   JO   |  DEC   |  BLOC  |  COUP  |        |
 * |--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |
 * '-----------------------------------------------------'
 */

  [_MOD] = LAYOUT(
  _______,   MODIFY,   _______,  _______,  _______,  _______,
  _______,   JO,       DEC,      BLOC,     COUP,     _______,
  _______,   _______,  _______,  _______,  _______,  _______,
  _______,   _______,  _______,  _______,  _______,  _______,
  _______,   _______,  _______,  _______,  _______,  _______
  ), 

/* _ANN
 * .-----------------------------------------------------.
 * |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------|
 * |        |   JO   |  DEC   |  BLOC  |  COUP  |        |
 * |--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |
 * '-----------------------------------------------------'
 */

  [_ANN] = LAYOUT(
  _______,   _______,  _______,  _______,  _______,  _______,
  _______,   TEXTE     TEXTM,    LIG,      _______,  _______,
  _______,   _______,  _______,  _______,  _______,  _______,
  _______,   _______,  _______,  _______,  _______,  _______,
  _______,   _______,  _______,  _______,  _______,  _______
  ), 

/* _ENVIR
 * .-----------------------------------------------------.
 * |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------|
 * |        | TVERR  |   EP   |   EO   |        |        |
 * |--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |
 * '-----------------------------------------------------'
 */

  [_ENVIR] = LAYOUT(
  _______,   _______,  _______,  _______,  _______,  _______,
  _______,   TVERR,    EP,       EO,       _______,  _______,
  _______,   _______,  _______,  _______,  _______,  _______,
  _______,   _______,  _______,  _______,  _______,  _______,
  _______,   _______,  _______,  _______,  _______,  _______
  ), 

/* _MG
 * .-----------------------------------------------------.
 * |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------|
 * |        | TVERR  |   EP   |   EO   |        |        |
 * |--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |
 * '-----------------------------------------------------'
 */

  [_MG] = LAYOUT(
  _______,   _______,  _______,  _______,  _______,  _______,
  _______,   DI,       R_,       A_,       AI_,      _______,
  _______,   _______,  _______,  _______,  _______,  _______,
  _______,   _______,  _______,  _______,  _______,  _______,
  _______,   _______,  _______,  _______,  _______,  _______
  ) ,

  /* _RESEAU
 * .-----------------------------------------------------.
 * |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------|
 * |        | TVERR  |   EP   |   EO   |        |        |
 * |--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |
 * '-----------------------------------------------------'
 */

  [_RESEAU] = LAYOUT(
  _______,   _______,  _______,  _______,  _______,  _______,
  _______,   _______,  _______,  _______,  _______,  _______,
  _______,   _______,  _______,  _______,  _______,  _______,
  _______,   R_,       P_,       T_,       _______,  _______,
  _______,   _______,  _______,  _______,  _______,  _______
  ), 

  /* _DO
 * .-----------------------------------------------------.
 * |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |    V   |        |
 * |--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |    H   |        |
 * |--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |
 * '-----------------------------------------------------'
 */

  [_DO] = LAYOUT(
  _______,   _______,  _______,  _______,  _______,  _______,
  _______,   _______,  _______,  _______,  _______,  _______,
  _______,   _______,  _______,  _______,  V_,       _______,
  _______,   _______,  _______,  _______,  H_,       _______,
  _______,   _______,  _______,  _______,  _______,  _______
  )   

};

const uint16_t PROGMEM fn_actions[] = {

};

// const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
// {
//   // MACRODOWN only works in this function
//       switch(id) {
//         case 0:
//           if (record->event.pressed) {
//             register_code(KC_RSFT);
//           } else {
//             unregister_code(KC_RSFT);
//           }
//         break;
//       }
//     return MACRO_NONE;
// };


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