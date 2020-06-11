/* A standard layout for the Dactyl Manuform 5x6 Keyboard */ 

#include QMK_KEYBOARD_H


#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2

#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT_5x6(
     KC_GRAVE , KC_1  , KC_2  , KC_3  , KC_4  , KC_5  ,                         KC_6  , KC_7  , KC_8  , KC_9  , KC_0  ,KC_MINUS,
     KC_TAB , KC_Q  , KC_W  , KC_E  , KC_R  , KC_T  ,                         KC_Y  , KC_U  , KC_I  , KC_O  , KC_P  ,KC_BSLASH,
     KC_ESCAPE, KC_A  , KC_S  , KC_D  , KC_F  , KC_G  ,                         KC_H  , KC_J  , KC_K  , KC_L  ,KC_SCLN,KC_QUOT,
     KC_LSHIFT, KC_Z  , KC_X  , KC_C  , KC_V  , KC_B  ,                         KC_N  , KC_M  ,KC_COMM,KC_DOT ,KC_SLSH,KC_RSHIFT,
                      KC_CAPSLOCK,KC_LBRACKET,                                                       KC_RBRACKET, KC_EQL,
                                      KC_LALT,KC_SPC,                        KC_BSPACE, KC_ENTER,
                                      KC_LCTRL,KC_PGUP,                         KC_AUDIO_VOL_UP,  DF(1),
                                      KC_LGUI, KC_PGDOWN,                        KC_AUDIO_VOL_DOWN, DF(2)
  ),

  [_LOWER] = LAYOUT_5x6(

     XXXXXXX,XXXXXXX, XXXXXXX ,XXXXXXX,XXXXXXX ,XXXXXXX,                        XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,
     XXXXXXX,KC_HOME,KC_W,KC_UP,XXXXXXX,KC_PGUP,                        XXXXXXX, KC_P7 , KC_P8 , KC_P9 ,XXXXXXX,XXXXXXX,
     XXXXXXX,KC_END,KC_LEFT,KC_DOWN,KC_RIGHT ,KC_PGDOWN,                        XXXXXXX, KC_P4 , KC_P5 , KC_P6 ,XXXXXXX,XXXXXXX,
     KC_LSHIFT,XXXXXXX,KC_X,KC_C,KC_V,XXXXXXX,                        XXXXXXX, KC_P1 , KC_P2 , KC_P3 ,XXXXXXX ,KC_RSHIFT,
                                             XXXXXXX,XXXXXXX,            XXXXXXX, KC_P0,
                                             KC_LALT,XXXXXXX,            XXXXXXX,XXXXXXX,
                                             DF(0),XXXXXXX,            XXXXXXX,DF(0),
                                             XXXXXXX,XXXXXXX,            XXXXXXX,XXXXXXX

  ),

  [_RAISE] = LAYOUT_5x6(
       XXXXXXX , XXXXXXX , XXXXXXX , KC_KP_SLASH , KC_KP_ASTERISK , KC_KP_MINUS ,                        XXXXXXX  , XXXXXXX , XXXXXXX , XXXXXXX ,XXXXXXX ,XXXXXXX ,
       XXXXXXX,XXXXXXX,KC_KP_7,KC_KP_8,KC_KP_9,KC_KP_PLUS,                        XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX ,XXXXXXX,XXXXXXX,
       XXXXXXX,XXXXXXX,KC_KP_4  ,KC_KP_5,KC_KP_6,KC_KP_PLUS,                        XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,
       XXXXXXX,XXXXXXX,KC_KP_1,KC_KP_2,KC_KP_3,KC_KP_ENTER,                        XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,
                                               KC_KP_0,KC_KP_DOT,            XXXXXXX ,XXXXXXX,
                                               KC_KP_0,KC_KP_DOT,            XXXXXXX,XXXXXXX,
                                               DF(0),XXXXXXX,            XXXXXXX,DF(0),
                                               XXXXXXX,XXXXXXX,            XXXXXXX,XXXXXXX
  ),
};
