
#include "config_common.h"
#pragma once
//home rows
// Configure the global tapping term (default: 200ms)
#define TAPPING_TERM 300

// Prevent normal rollover on alphas from accidentally triggering mods.
#define IGNORE_MOD_TAP_INTERRUPT

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
#define TAPPING_FORCE_HOLD

// Apply the modifier on keys that are tapped during a short hold of a modtap
#define PERMISSIVE_HOLD

//RGB MODIFICACION POR MI
#define RGBLIGHT_LAYERS




//#define USE_MATRIX_I2C

/* Select hand configuration (ahora el master es la izquierda)*/

#define MASTER_LEFT
// #define MASTER_RIGHT
// #define EE_HANDS

#define USE_SERIAL_PD2


#ifdef RGBLIGHT_ENABLE
    #undef RGBLED_NUM
    #define RGBLIGHT_ANIMATIONS
    #define RGBLED_NUM 27
    #define RGBLIGHT_LIMIT_VAL 120
    #define RGBLIGHT_HUE_STEP 10
    #define RGBLIGHT_SAT_STEP 17
    #define RGBLIGHT_VAL_STEP 17
#endif


//animacion
#ifdef OLED_DRIVER_ENABLE
  //#define OLED_DISPLAY_128X64
  #define OLED_TIMEOUT 300000
#endif

#define SPLIT_USB_DETECT

#define USB_SUSPEND_WAKEUP_DELAY_200

#define OLED_FONT_H "keyboards/crkbd/lib/glcdfont.c"

	#define NO_ACTION_ONESHOT