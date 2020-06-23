/* A standard layout for the Dactyl Manuform 5x6 Keyboard */ 

#include QMK_KEYBOARD_H


#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2

#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)

enum custom_keycodes {
    LAYER_CLEAR = SAFE_RANGE,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case LAYER_CLEAR:
        if (record->event.pressed) {
            // when keycode LAYER_CLEAR is pressed
            layer_clear();
        } else {
            // when keycode LAYER_CLEAR is released
        }
        break;
    }
    return true;
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT_5x6(
     KC_GRAVE , KC_1  , KC_2  , KC_3  , KC_4  , KC_5  ,                         KC_6  , KC_7  , KC_8  , KC_9  , KC_0  ,KC_MINUS,
     KC_TAB , KC_Q  , KC_W  , KC_E  , KC_R  , KC_T  ,                         KC_Y  , KC_U  , KC_I  , KC_O  , KC_P  ,KC_BSLASH,
     KC_ESCAPE, KC_A  , KC_S  , KC_D  , KC_F  , KC_G  ,                         KC_H  , KC_J  , KC_K  , KC_L  ,KC_SCLN,KC_QUOT,
     OSM(MOD_LSFT), KC_Z  , KC_X  , KC_C  , KC_V  , KC_B  ,                         KC_N  , KC_M  ,KC_COMM,KC_DOT ,KC_SLSH,OSM(MOD_RSFT),
                      KC_PAUSE,KC_LBRACKET,                                                       KC_RBRACKET, KC_EQL,
                                      KC_LALT,KC_SPC,                        KC_BSPACE, KC_ENTER,
                                      KC_LGUI,KC_LCTRL,                         KC_CAPSLOCK,  LAYER_CLEAR,
                                      TO(1), OSL(3),                        OSL(3), TO(2)
  ),

  [_LOWER] = LAYOUT_5x6(

     KC_TRANSPARENT,KC_TRANSPARENT, KC_TRANSPARENT ,KC_TRANSPARENT,KC_TRANSPARENT ,KC_TRANSPARENT,                        KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,
     KC_TRANSPARENT,KC_HOME,KC_TRANSPARENT,KC_UP,KC_TRANSPARENT,KC_PGUP,                        KC_TRANSPARENT, KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT ,KC_TRANSPARENT,KC_TRANSPARENT,
     KC_TRANSPARENT,KC_END,KC_LEFT,KC_DOWN,KC_RIGHT ,KC_PGDOWN,                        KC_TRANSPARENT, KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT ,KC_TRANSPARENT,KC_TRANSPARENT,
     KC_TRANSPARENT,KC_Z,KC_X,KC_C,KC_V,KC_TRANSPARENT,                        KC_TRANSPARENT, KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT ,KC_TRANSPARENT ,KC_TRANSPARENT,
                                             KC_TRANSPARENT,KC_TRANSPARENT,            KC_TRANSPARENT, KC_TRANSPARENT,
                                             KC_TRANSPARENT,KC_TRANSPARENT,            KC_TRANSPARENT,KC_TRANSPARENT,
                                             KC_TRANSPARENT,KC_TRANSPARENT,            KC_TRANSPARENT,KC_TRANSPARENT,
                                             KC_TRANSPARENT,KC_TRANSPARENT,            KC_TRANSPARENT,KC_TRANSPARENT

  ),

  [_RAISE] = LAYOUT_5x6(
       KC_TRANSPARENT , KC_TRANSPARENT , KC_TRANSPARENT , KC_KP_SLASH , KC_KP_ASTERISK , KC_KP_MINUS ,                        KC_TRANSPARENT  , KC_TRANSPARENT , KC_KP_SLASH , KC_KP_ASTERISK ,KC_KP_MINUS ,KC_TRANSPARENT ,
       KC_TRANSPARENT,KC_TRANSPARENT,KC_KP_7,KC_KP_8,KC_KP_9,KC_KP_PLUS,                        KC_TRANSPARENT,KC_KP_7,KC_KP_8,KC_KP_9 ,KC_KP_PLUS,KC_TRANSPARENT,
       KC_TRANSPARENT,KC_TRANSPARENT,KC_KP_4  ,KC_KP_5,KC_KP_6,KC_KP_PLUS,                        KC_TRANSPARENT,KC_KP_4,KC_KP_5,KC_KP_6,KC_KP_PLUS,KC_TRANSPARENT,
       KC_TRANSPARENT,KC_TRANSPARENT,KC_KP_1,KC_KP_2,KC_KP_3,KC_KP_ENTER,                        KC_TRANSPARENT,KC_KP_1,KC_KP_2,KC_KP_3,KC_KP_ENTER,KC_TRANSPARENT,
                                               KC_KP_0,KC_KP_DOT,            KC_KP_0 ,KC_KP_DOT,
                                               KC_KP_ENTER,KC_KP_ENTER,            KC_TRANSPARENT,KC_KP_0,
                                               KC_TRANSPARENT,KC_TRANSPARENT,            KC_TRANSPARENT,KC_TRANSPARENT,
                                               KC_TRANSPARENT,KC_TRANSPARENT,            KC_TRANSPARENT,KC_TRANSPARENT
  ),
 [3] = LAYOUT_5x6(KC_TRANSPARENT,KC_F1,KC_F2,KC_F3,KC_F4,KC_F5,KC_F7,KC_F8,KC_F9,KC_F10,KC_F11,KC_F12,KC_TRANSPARENT,KC_F1,KC_F2,KC_F3,KC_F4,KC_F5,KC_F7,KC_F8,KC_F9,KC_F10,KC_F11,KC_F12,KC_TRANSPARENT,KC_1,KC_2,KC_3,KC_4,KC_5,KC_6,KC_7,KC_8,KC_9,KC_0,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_GRAVE,KC_TRANSPARENT,KC_TRANSPARENT,KC_MINUS,KC_LBRACKET,KC_RBRACKET,KC_EQUAL,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT),
};
