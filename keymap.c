/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

#define KEYMAP LAYOUT
//home rows configuration

// Left-hand home row mods
#define HOME_Z LGUI_T(KC_Z)
#define HOME_R LALT_T(KC_R)
#define HOME_S LSFT_T(KC_S)
#define HOME_T LCTL_T(KC_T)

// Right-hand home row mods
#define HOME_N RCTL_T(KC_N)
#define HOME_E RSFT_T(KC_E)
#define HOME_I LALT_T(KC_I)
#define HOME_O RGUI_T(KC_O)

enum layers {
  _COLEMAK,
  _NUM,
  _SYM,
  _EDIT,
  _NAV,
  _FN,
  _QWERTY
};

enum custom_keycodes {
  COLEMAK = SAFE_RANGE,
  NUM,
  SYM,
  EDIT,
  NAV,
  FN,
  QWERTY,
  DOFUS
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

#include "base_layout.h"

};

//oled configuration
#ifdef OLED_DRIVER_ENABLE

static void render_logo(void) {
    static const char PROGMEM hell_logo[] = {
    0x00, 0x80, 0xc0, 0xc0, 0x60, 0x60, 0x30, 0x30, 0x18, 0x1c, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x80,
    0xe0, 0x78, 0x1e, 0x06, 0x00, 0x0c, 0x1c, 0x18, 0x30, 0x30, 0x60, 0x60, 0xc0, 0xc0, 0x80, 0x00,
    0x01, 0x03, 0x07, 0x06, 0x0c, 0x0c, 0x18, 0x18, 0x30, 0x70, 0x60, 0x00, 0xc0, 0xf0, 0x3c, 0x0f,
    0x03, 0x00, 0x00, 0x00, 0x00, 0x60, 0x70, 0x30, 0x18, 0x18, 0x0c, 0x0c, 0x06, 0x07, 0x03, 0x01,
    0x00, 0xf8, 0xf8, 0x80, 0x80, 0x80, 0xf8, 0xf8, 0x00, 0x80, 0xc0, 0xc0, 0x40, 0xc0, 0xc0, 0x80,
    0x00, 0xf8, 0xf8, 0x00, 0xf8, 0xf8, 0x00, 0x08, 0x38, 0x08, 0x00, 0x38, 0x08, 0x30, 0x08, 0x38,
    0x00, 0x1f, 0x1f, 0x01, 0x01, 0x01, 0x1f, 0x1f, 0x00, 0x0f, 0x1f, 0x1a, 0x12, 0x1a, 0x1b, 0x0b,
    0x00, 0x1f, 0x1f, 0x00, 0x1f, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	};
    oled_write_raw_P(hell_logo, sizeof(hell_logo));
}

/* 32 * 14 os logos */
static const char PROGMEM windows_logo[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbc, 0xbc, 0xbe, 0xbe, 0x00,
    0xbe, 0xbe, 0xbf, 0xbf, 0xbf, 0xbf, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x0f, 0x0f, 0x00,
    0x0f, 0x0f, 0x1f, 0x1f, 0x1f, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

static void print_logo_narrow(void) {
    render_logo();
    oled_set_cursor(0,15);
}

static void print_status_narrow(void) {
   
    switch (get_highest_layer(default_layer_state)) {
        case _COLEMAK:
            oled_write("CLMAK", false);
            break;
        case _NUM:
            oled_write("NUM", false);
            break;
        case _SYM:
            oled_write("SYM", false);
            break;
        case _EDIT:
            oled_write("EDIT", false);
            break;
        case _NAV:
            oled_write("NAV", false);
            break;
        case _FN:
            oled_write("FUN", false);
            break;
        case _QWERTY:
            oled_write("QWRTY", false);
            break;
        default:
            oled_write("UNDEF", false);
    }

    oled_set_cursor(0,5);

    /* Print current layer */
    oled_write("LAYER", false);

    oled_set_cursor(0,6);

    switch (get_highest_layer(layer_state)) {
        case _COLEMAK:
            oled_write("COL", false);
            break;
        case _NUM:
            oled_write("NUM", false);
            break;
        case _SYM:
            oled_write("SYM", false);
            break;
        case _EDIT:
            oled_write("EDT", false);
            break;
        case _NAV:
            oled_write("NAV", false);
            break;
        case _FN:
            oled_write("FN", false);
            break;
        case _QWERTY:
            oled_write("QWR", false);
            break;
        default:
            oled_write("Undef", false);
    }
}

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    return OLED_ROTATION_270;
}

void oled_task_user(void) {
    if (is_keyboard_master()) {
        print_status_narrow();
    } else {
        print_logo_narrow();
    }
}
#endif

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case COLEMAK:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_COLEMAK);
            }
            return false;
        case NUM:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_NUM);
            }
            return false;
        case SYM:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_SYM);
            }
            return false;
        case EDIT:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_EDIT);
            }
            return false;
        case NAV:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_NAV);
            }
            return false;
        case FN:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_FN);
            }
            return false;
        case QWERTY:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_QWERTY);
            }
            return false;

            case DOFUS:
            if (record->event.pressed){
                // when keycode QMKBEST is pressed
                SEND_STRING("perrox99" SS_TAP(X_TAB) "055629505");
            } else {
                // when keycode QMKBEST is released
            }
            break;
    }
    return true;
}

//underglow configuration
layer_state_t layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
    case _NUM: //calipso
        rgblight_setrgb (0x1A,  0xD5, 0xD6);
        break;
    case _SYM: //verde fuerte
        rgblight_setrgb (0x0B,  0xD6, 0x48);
        break;
    case _EDIT: //azul
        rgblight_setrgb (0x0F,  0x22, 0x8E);
        break;
    case _NAV: //rosa
        rgblight_setrgb (0xEC,  0x0E, 0xC7);
        break;
    case _FN: //purpura
        rgblight_setrgb (0x50,  0x12, 0x91);
        break;   
    default: //  for any other layers, or the default layer Blanco
        rgblight_setrgb (0xAC,  0xE9, 0xCB);
        break;
    }
  return state;
}
