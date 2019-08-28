
#include QMK_KEYBOARD_H

#define G_LEDPIN F4
#define R_LEDPIN F5
#define Y_LEDPIN F6
#define B_LEDPIN F7

#define _NPAD 1
#define _MOD 2
#define _ANN 3
#define _DO 7
#define _MG 5
#define _RESEAU 6

// #define _QW 1
// #define NUM 2
// #define DIR 3

// Readability keycodes
#define _______ KC_TRNS



enum custom_keycodes {
  NUMPAD = SAFE_RANGE,
  U_,
  DC, 
  CP, 
  DP, 
  AJ,
  JO, 
  ROT, 
  MI,
  RES,
  R_,
  T_,
  P_,
  DEC, //DECOMPOS, 
  COUP, //COUPURE,  
  BLOC,
  ET,
  ECH,
  MG, // mesurergeom
  DI, 
  AI,
  A_, 
  RAYON,
  DO,
  LI, 
  CE,
  REC, 
  HA, 
  PO,
  H_,
  V_,
  CORPROP,
  CLN,
  COTLIN,
  TEXTE,
  TEXTMULT,
  LIG,
  PEDIT,
  EDITREF,
/*  , 
  COTRAYON,
  COTANGLE,
  LDP, //ligne de repere multi
  CORRESPROP
*/L0
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
//////////////////////////////////////////////////////
    case JO:
      if (record->event.pressed) {
        SEND_STRING("JO ");
      } 
      else {
        layer_clear();
      }
      break; 

    case ROT:
      if (record->event.pressed) {
        SEND_STRING("ROT ");
      } 
      else {
        layer_clear();
      }
      break; 

    case MI:
      if (record->event.pressed) {
        SEND_STRING("MI ");
      } 
      else {
        layer_clear();
      }
      break; 

    case RES:
      if (record->event.pressed) {
        SEND_STRING("RES ");
        set_oneshot_layer(_RESEAU, ONESHOT_START);
      } 
      else {
        }
      break; 

    case R_:
      if (record->event.pressed) {
        SEND_STRING("R ");
      } 
      else {
        layer_clear();
      }
      break; 
          
    case T_:
      if (record->event.pressed) {
        SEND_STRING("T ");
      } 
      else {
        layer_clear();
      }
      break; 
          
    case P_:
      if (record->event.pressed) {
        SEND_STRING("P ");
      } 
      else {
        layer_clear();
      }
      break; 

    case DEC:
      if (record->event.pressed) {
        SEND_STRING("DECOMPOS ");
      } 
      else {
        layer_clear();
      }
      break; 


    case PEDIT:
      if (record->event.pressed) {
        SEND_STRING("PEDIT ");
      } 
      else {
        layer_clear();
      }
      break; 

    case COUP:
      if (record->event.pressed) {
        SEND_STRING("COUPURE ");
      } 
      else {
        layer_clear();
      }
      break; 

    case BLOC:
      if (record->event.pressed) {
        SEND_STRING("BLOC ");
      } 
      else {
        layer_clear();
      }
      break; 

    case ET:
      if (record->event.pressed) {
        SEND_STRING("ET ");
      } 
      else {
        layer_clear();
      }
      break; 

    case ECH:
      if (record->event.pressed) {
        SEND_STRING("ECH ");
      } 
      else {
        layer_clear();
      }
      break; 
//////////////////////////////////////////////////////
    case MG:
      if (record->event.pressed) {
        SEND_STRING("MESURERGEOM ");
        set_oneshot_layer(_MG, ONESHOT_START);
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
        layer_clear();
      }
      break; 

    case A_:
      if (record->event.pressed) {
        SEND_STRING("A ");
      } 
      else {
        layer_clear();
      }
      break;      
    
    case RAYON:
      if (record->event.pressed) {
        SEND_STRING("RAYON ");
      } 
      else {
        layer_clear();
      }
      break;   
//////////////////////////////////////////////////////
    case DO:
      if (record->event.pressed) {
        SEND_STRING("DO ");
        set_oneshot_layer(_DO, ONESHOT_START);
      } 
      else {
      }
      break; 
// ----------------------------------------    
    case H_:
      if (record->event.pressed) {
        SEND_STRING("H ");
      } 
      else {
        layer_clear();
      }
      break; 

    case V_:
      if (record->event.pressed) {
        SEND_STRING("V ");
      } 
      else {
        layer_clear();
      }
      break; 
//////////////////////////////////////////////////////      

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

    case REC:
      if (record->event.pressed) {
        SEND_STRING("REC ");
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
        layer_clear();
      }
      break; 
      

    case CORPROP:
      if (record->event.pressed) {
        SEND_STRING("CORRESPROP ");
      } 
      else {
        layer_clear();
      }
      break; 

    case CLN:
      if (record->event.pressed) {
        SEND_STRING(":");
      } 
      else {
        layer_clear();
      }
      break; 


    case EDITREF:
      if (record->event.pressed) {
        SEND_STRING("EDITREF ");
      } 
      else {
        layer_clear();
      }
      break; 
//////////////////////////////////////////////////////  
    case COTLIN:
      if (record->event.pressed) {
        SEND_STRING("COTLIN ");
      } 
      else {
      }
      break; 
    case LIG:
      if (record->event.pressed){
        SEND_STRING("LIG "); 
      }
      else {
        layer_clear();
      }
      break;

    case TEXTE:
      if (record->event.pressed){
        SEND_STRING("TEXTE "); 
      }
      else {
        layer_clear();
      }
      break;

    case TEXTMULT:
      if (record->event.pressed){
        SEND_STRING("TEXTMULT "); 
      }
      else {
        layer_clear();
      }
      break;

//////////////////////////////////////////////////////  


    case L0:
      if (record->event.pressed) {
        layer_clear();
      } 
      else {

      }
      break; 
      


/* 
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

/* default layout
 * .-----------------------------------------------------.
 * | ESC    |   MOD  |  ANN   |   MG   | NUMPAD |    U   |
 * |--------+--------+--------+--------+--------+--------|
 * |  TAB   |   AJ   |   DC   |   DP   |   CP   | ENTER  |
 * |--------+--------+--------+--------+--------+--------|
 * |    ,   |   CE   |   REC  |   LI   |   DO   | SUPPR  |
 * |--------+--------+--------+--------+--------+--------|
 * | CORPROP|   DI   | COTLIN | EDITREF|   L0   |  SPC   |
 * '-----------------------------------------------------'
 */


  [0] = LAYOUT(
  KC_ESC,   OSL(_MOD), OSL(_ANN), MG,   TG(_NPAD),  U_,
  KC_TAB,   AJ,         DC,       DP,       CP,         KC_ENT,
  KC_COMM,  CE,         REC,      LI,       DO,         KC_DEL,
  CORPROP,  DI,         COTLIN,   EDITREF,  L0,         KC_SPC
  ),




  [_NPAD] = LAYOUT(
  _______, KC_PPLS,  KC_P7,   KC_P8,     KC_P9,     KC_BSPC,
  _______, KC_PMNS,  KC_P4,   KC_P5,     KC_P6,     _______,
  _______, KC_PSLS,  KC_P1,   KC_P2,     KC_P3,     _______,
  CLN,     KC_PAST,  KC_P0,   KC_PDOT,   _______,   _______
  ),


/* MOD layout
 * .-----------------------------------------------------.
 * |        |   MOD  |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------|
 * |        |   JO   |   DEC  |  COUP  |  BLOC  |        |
 * |--------+--------+--------+--------+--------+--------|
 * |        | RESEAU |  PEDIT |   ROT  |   MI   |        |
 * |--------+--------+--------+--------+--------+--------|
 * |        |   ET   |   ECH  |        |        |        |
 * '-----------------------------------------------------'
 */
  [_MOD] = LAYOUT(
  _______, _______,   _______,  _______,   _______,   _______,
  _______, JO,        DEC,      COUP,      BLOC,      _______,
  _______, RES,       PEDIT,   ROT,       MI,        _______,
  _______, ET,        ECH,      _______,   _______,   _______
  ),



  [_RESEAU] = LAYOUT(
  _______, _______,   _______,  _______,   _______,   _______,
  _______, _______,   _______,  _______,   _______,   _______,
  _______, _______,   R_,       T_,         P_,       _______,
  _______, _______,   _______,  _______,   _______,   _______
  ),


/* ANN layout
 * .-----------------------------------------------------.
 * |        |        |   ANN  |        |        |        |
 * |--------+--------+--------+--------+--------+--------|
 * |        | TEXTE  |TEXTMULT|   LIG  |        |        |
 * |--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |
 * '-----------------------------------------------------'
  */
  [_ANN] = LAYOUT(
  _______, _______,   _______,  _______,   _______,   _______,
  _______, TEXTE,     TEXTMULT,  LIG,      _______,       _______,
  _______, _______,   _______,  _______,   _______,   _______,
  _______, _______,   _______,  _______,   _______,   _______
  ),



  [_DO] = LAYOUT(
  _______, _______,   _______,  _______,   _______,   _______,
  _______, _______,   _______,  V_,         H_,       _______,
  _______, _______,   _______,  _______,   _______,   _______,
  _______, _______,   _______,  _______,   _______,   _______
  ),



  [_MG] = LAYOUT(
  _______, _______,   _______,  _______,   _______,   _______,
  _______, DI,        RAYON,   A_,        AI,       _______,
  _______, _______,   _______,  _______,   _______,   _______,
  _______, _______,   _______,  _______,   _______,   _______
  ),


};


void keyboard_pre_init_user(void) {
  // Call the keyboard pre init code.

  // Set our LED pins as output
  setPinOutput(G_LEDPIN);
  setPinOutput(R_LEDPIN);
  setPinOutput(B_LEDPIN);
  setPinOutput(Y_LEDPIN);
  
};

layer_state_t layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
      case _MOD:
        writePinHigh(G_LEDPIN);
        break;

      case _ANN:
        writePinHigh(R_LEDPIN);
        break;

      case _MG:
        writePinHigh(B_LEDPIN);
        break;

      case _NPAD: 
        writePinHigh(Y_LEDPIN); 
        break;

      default:
        writePinLow(G_LEDPIN); 
        writePinLow(R_LEDPIN); 
        writePinLow(B_LEDPIN); 
        writePinLow(Y_LEDPIN); 
        break;

    }

}
void matrix_init_user(void) {

};

void matrix_scan_user(void) {

};

/*
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}
*/

/*
void led_set_user(uint8_t usb_led) {

}
*/