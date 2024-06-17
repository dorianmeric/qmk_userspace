// Copyright 2022 Manna Harbour
//

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

#pragma once

#include "layers.h"



#if !defined(MIRYOKU_LAYER_BASE)
  
    #if defined (MIRYOKU_ALPHAS_AZERTY)
      #define MIRYOKU_LAYER_BASE MIRYOKU_ALTERNATIVES_BASE_AZERTY
    #elif defined (MIRYOKU_ALPHAS_BEAKL15)
      #define MIRYOKU_LAYER_BASE MIRYOKU_ALTERNATIVES_BASE_BEAKL15
    #elif defined (MIRYOKU_ALPHAS_COLEMAK)
      #define MIRYOKU_LAYER_BASE MIRYOKU_ALTERNATIVES_BASE_COLEMAK
    #elif defined (MIRYOKU_ALPHAS_COLEMAKDH)
      #define MIRYOKU_LAYER_BASE MIRYOKU_ALTERNATIVES_BASE_COLEMAKDH
    #elif defined (MIRYOKU_ALPHAS_COLEMAKDHK)
      #define MIRYOKU_LAYER_BASE MIRYOKU_ALTERNATIVES_BASE_COLEMAKDHK
    #elif defined (MIRYOKU_ALPHAS_DVORAK)
      #define MIRYOKU_LAYER_BASE MIRYOKU_ALTERNATIVES_BASE_DVORAK
    #elif defined (MIRYOKU_ALPHAS_HALMAK)
      #define MIRYOKU_LAYER_BASE MIRYOKU_ALTERNATIVES_BASE_HALMAK
    #elif defined (MIRYOKU_ALPHAS_WORKMAN)
      #define MIRYOKU_LAYER_BASE MIRYOKU_ALTERNATIVES_BASE_WORKMAN
    #elif defined (MIRYOKU_ALPHAS_QWERTY)
      #define MIRYOKU_LAYER_BASE MIRYOKU_ALTERNATIVES_BASE_QWERTY
    #elif defined (MIRYOKU_ALPHAS_QWERTZ)
      #define MIRYOKU_LAYER_BASE MIRYOKU_ALTERNATIVES_BASE_QWERTZ
    #else
      #define MIRYOKU_LAYER_BASE MIRYOKU_ALTERNATIVES_BASE_COLEMAKDH
    #endif
  #endif

#if !defined(MIRYOKU_LAYERMAPPING_BASE)
  #define MIRYOKU_LAYERMAPPING_BASE MIRYOKU_MAPPING
#endif

#if !defined(MIRYOKU_LAYER_EXTRA)
    #if defined (MIRYOKU_EXTRA_AZERTY)
      #define MIRYOKU_LAYER_EXTRA MIRYOKU_ALTERNATIVES_BASE_AZERTY
    #elif defined (MIRYOKU_EXTRA_BEAKL15)
      #define MIRYOKU_LAYER_EXTRA MIRYOKU_ALTERNATIVES_BASE_BEAKL15
    #elif defined (MIRYOKU_EXTRA_COLEMAK)
      #define MIRYOKU_LAYER_EXTRA MIRYOKU_ALTERNATIVES_BASE_COLEMAK
    #elif defined (MIRYOKU_EXTRA_COLEMAKDH)
      #define MIRYOKU_LAYER_EXTRA MIRYOKU_ALTERNATIVES_BASE_COLEMAKDH
    #elif defined (MIRYOKU_EXTRA_COLEMAKDHK)
      #define MIRYOKU_LAYER_EXTRA MIRYOKU_ALTERNATIVES_BASE_COLEMAKDHK
    #elif defined (MIRYOKU_EXTRA_DVORAK)
      #define MIRYOKU_LAYER_EXTRA MIRYOKU_ALTERNATIVES_BASE_DVORAK
    #elif defined (MIRYOKU_EXTRA_HALMAK)
      #define MIRYOKU_LAYER_EXTRA MIRYOKU_ALTERNATIVES_BASE_HALMAK
    #elif defined (MIRYOKU_EXTRA_WORKMAN)
      #define MIRYOKU_LAYER_EXTRA MIRYOKU_ALTERNATIVES_BASE_WORKMAN
    #elif defined (MIRYOKU_EXTRA_QWERTY)
      #define MIRYOKU_LAYER_EXTRA MIRYOKU_ALTERNATIVES_BASE_QWERTY
    #elif defined (MIRYOKU_EXTRA_QWERTZ)
      #define MIRYOKU_LAYER_EXTRA MIRYOKU_ALTERNATIVES_BASE_QWERTZ
    #else
      #define MIRYOKU_LAYER_EXTRA MIRYOKU_ALTERNATIVES_BASE_QWERTY
    #endif
  #endif

#if !defined(MIRYOKU_LAYERMAPPING_EXTRA)
  #define MIRYOKU_LAYERMAPPING_EXTRA MIRYOKU_MAPPING
#endif

#if !defined(MIRYOKU_LAYER_TAP)
 
    #if defined (MIRYOKU_TAP_AZERTY)
      #define MIRYOKU_LAYER_TAP MIRYOKU_ALTERNATIVES_TAP_AZERTY
    #elif defined (MIRYOKU_TAP_BEAKL15)
      #define MIRYOKU_LAYER_TAP MIRYOKU_ALTERNATIVES_TAP_BEAKL15
    #elif defined (MIRYOKU_TAP_COLEMAK)
      #define MIRYOKU_LAYER_TAP MIRYOKU_ALTERNATIVES_TAP_COLEMAK
    #elif defined (MIRYOKU_TAP_COLEMAKDH)
      #define MIRYOKU_LAYER_TAP MIRYOKU_ALTERNATIVES_TAP_COLEMAKDH
    #elif defined (MIRYOKU_TAP_COLEMAKDHK)
      #define MIRYOKU_LAYER_TAP MIRYOKU_ALTERNATIVES_TAP_COLEMAKDHK
    #elif defined (MIRYOKU_TAP_DVORAK)
      #define MIRYOKU_LAYER_TAP MIRYOKU_ALTERNATIVES_TAP_DVORAK
    #elif defined (MIRYOKU_TAP_HALMAK)
      #define MIRYOKU_LAYER_TAP MIRYOKU_ALTERNATIVES_TAP_HALMAK
    #elif defined (MIRYOKU_TAP_WORKMAN)
      #define MIRYOKU_LAYER_TAP MIRYOKU_ALTERNATIVES_TAP_WORKMAN
    #elif defined (MIRYOKU_TAP_QWERTY)
      #define MIRYOKU_LAYER_TAP MIRYOKU_ALTERNATIVES_TAP_QWERTY
    #elif defined (MIRYOKU_TAP_QWERTZ)
      #define MIRYOKU_LAYER_TAP MIRYOKU_ALTERNATIVES_TAP_QWERTZ
    #else
      #define MIRYOKU_LAYER_TAP MIRYOKU_ALTERNATIVES_TAP_COLEMAKDH
    #endif
#endif

#if !defined(MIRYOKU_LAYERMAPPING_TAP)
  #define MIRYOKU_LAYERMAPPING_TAP MIRYOKU_MAPPING
#endif

#if !defined(MIRYOKU_LAYER_BUTTON)
  #define MIRYOKU_LAYER_BUTTON MIRYOKU_ALTERNATIVES_BUTTON
#endif
#if !defined(MIRYOKU_LAYERMAPPING_BUTTON)
  #define MIRYOKU_LAYERMAPPING_BUTTON MIRYOKU_MAPPING
#endif

#if !defined(MIRYOKU_LAYER_NAV)
    #if defined (MIRYOKU_NAV_INVERTEDT)
      #define MIRYOKU_LAYER_NAV MIRYOKU_ALTERNATIVES_NAV_INVERTEDT
    #elif defined (MIRYOKU_NAV_VI)
      #define MIRYOKU_LAYER_NAV MIRYOKU_ALTERNATIVES_NAV_VI
    #else
      #define MIRYOKU_LAYER_NAV MIRYOKU_ALTERNATIVES_NAV
    #endif
  #endif

#if !defined(MIRYOKU_LAYERMAPPING_NAV)
  #define MIRYOKU_LAYERMAPPING_NAV MIRYOKU_MAPPING
#endif

#if !defined(MIRYOKU_LAYER_MOUSE)
    #if defined (MIRYOKU_NAV_INVERTEDT)
      #define MIRYOKU_LAYER_MOUSE MIRYOKU_ALTERNATIVES_MOUSE_INVERTEDT
    #elif defined (MIRYOKU_NAV_VI)
      #define MIRYOKU_LAYER_MOUSE MIRYOKU_ALTERNATIVES_MOUSE_VI
    #else
      #define MIRYOKU_LAYER_MOUSE MIRYOKU_ALTERNATIVES_MOUSE
    #endif
  #endif
#if !defined(MIRYOKU_LAYERMAPPING_MOUSE)
  #define MIRYOKU_LAYERMAPPING_MOUSE MIRYOKU_MAPPING
#endif

#if !defined(MIRYOKU_LAYER_MEDIA)

    #if defined (MIRYOKU_NAV_INVERTEDT)
      #define MIRYOKU_LAYER_MEDIA MIRYOKU_ALTERNATIVES_MEDIA_INVERTEDT
    #elif defined (MIRYOKU_NAV_VI)
      #define MIRYOKU_LAYER_MEDIA MIRYOKU_ALTERNATIVES_MEDIA_VI
    #else
      #define MIRYOKU_LAYER_MEDIA MIRYOKU_ALTERNATIVES_MEDIA
    #endif
  #endif

#if !defined(MIRYOKU_LAYERMAPPING_MEDIA)
  #define MIRYOKU_LAYERMAPPING_MEDIA MIRYOKU_MAPPING
#endif

#if !defined(MIRYOKU_LAYER_NUM)
    #define MIRYOKU_LAYER_NUM MIRYOKU_ALTERNATIVES_NUM
#endif
#if !defined(MIRYOKU_LAYERMAPPING_NUM)
  #define MIRYOKU_LAYERMAPPING_NUM MIRYOKU_MAPPING
#endif

#if !defined(MIRYOKU_LAYER_SYM)
    #define MIRYOKU_LAYER_SYM MIRYOKU_ALTERNATIVES_SYM
#endif
#if !defined(MIRYOKU_LAYERMAPPING_SYM)
  #define MIRYOKU_LAYERMAPPING_SYM MIRYOKU_MAPPING
#endif

#if !defined(MIRYOKU_LAYER_FUN)
    #define MIRYOKU_LAYER_FUN MIRYOKU_ALTERNATIVES_FUN
#endif
#if !defined(MIRYOKU_LAYERMAPPING_FUN)
  #define MIRYOKU_LAYERMAPPING_FUN MIRYOKU_MAPPING
#endif

#if !defined(MIRYOKU_LAYERMAPPING_NUMPAD)
  #define MIRYOKU_LAYERMAPPING_NUMPAD MIRYOKU_MAPPING
#endif
///////////////////////////////////////////////////////


#if !defined (MIRYOKU_LAYER_LIST)

#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,   "Base") \
MIRYOKU_X(EXTRA,  "Extra") \
MIRYOKU_X(NAV,    "Nav") \
MIRYOKU_X(MOUSE,  "Mouse") \
MIRYOKU_X(MEDIA,  "Media") \
MIRYOKU_X(NUM,    "Num") \
MIRYOKU_X(SYM,    "Sym") \
MIRYOKU_X(TAP,    "Tap") \
MIRYOKU_X(FUN,    "Fun") \
MIRYOKU_X(NUMPAD,  "Numpad") 
#endif


///////////////////////////////////////////////////////

enum miryoku_layers {
#define MIRYOKU_X(LAYER, STRING) U_##LAYER,
MIRYOKU_LAYER_LIST
#undef MIRYOKU_X
};

#define U_MACRO_VA_ARGS(macro, ...) macro(__VA_ARGS__)

#if !defined (MIRYOKU_MAPPING)
  #define MIRYOKU_MAPPING LAYOUT_miryoku
#endif

#define U_NP KC_NO // key is not present
#define U_NA KC_NO // present but not available for use
#define U_NU KC_NO // available but not used


#if defined (MIRYOKU_CLIPBOARD_FUN)
  #define U_RDO KC_AGIN
  #define U_PST KC_PSTE
  #define U_CPY KC_COPY
  #define U_CUT KC_CUT
  #define U_UND KC_UNDO
#elif defined (MIRYOKU_CLIPBOARD_MAC)
  #define U_RDO SCMD(KC_Z)
  #define U_PST LCMD(KC_V)
  #define U_CPY LCMD(KC_C)
  #define U_CUT LCMD(KC_X)
  #define U_UND LCMD(KC_Z)
#elif defined (MIRYOKU_CLIPBOARD_WIN)
  #define U_RDO C(KC_Y)
  #define U_PST C(KC_V)
  #define U_CPY C(KC_C)
  #define U_CUT C(KC_X)
  #define U_UND C(KC_Z)
#else
  #define U_RDO KC_AGIN
  #define U_PST S(KC_INS)
  #define U_CPY C(KC_INS)
  #define U_CUT S(KC_DEL)
  #define U_UND KC_UNDO
#endif




///////////////////////////////////////////////////////



// Additional Features double tap guard

enum {
    U_TD_BOOT,
#define MIRYOKU_X(LAYER, STRING) U_TD_U_##LAYER,
MIRYOKU_LAYER_LIST
#undef MIRYOKU_X
};

void u_td_fn_boot(tap_dance_state_t *state, void *user_data) {
  // if (state->count == 2) { // activate this if you want to only trigger on a double-tap
    reset_keyboard();  // Reset to bootloader
  // }
}

#define MIRYOKU_X(LAYER, STRING) \
void u_td_fn_U_##LAYER(tap_dance_state_t *state, void *user_data) { \
    switch (state->count) { \
        case 1: \
            default_layer_set((layer_state_t)1 << U_BASE); \
            break; \
        case 2: \
            default_layer_set((layer_state_t)1 << U_##LAYER); \
            break; \
  } \
}
MIRYOKU_LAYER_LIST
#undef MIRYOKU_X

tap_dance_action_t tap_dance_actions[] = {
    [U_TD_BOOT] = ACTION_TAP_DANCE_FN(u_td_fn_boot),
#define MIRYOKU_X(LAYER, STRING) [U_TD_U_##LAYER] = ACTION_TAP_DANCE_FN(u_td_fn_U_##LAYER),
MIRYOKU_LAYER_LIST
#undef MIRYOKU_X
};


// keymap

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
#define MIRYOKU_X(LAYER, STRING) [U_##LAYER] = U_MACRO_VA_ARGS(MIRYOKU_LAYERMAPPING_##LAYER, MIRYOKU_LAYER_##LAYER),
MIRYOKU_LAYER_LIST
#undef MIRYOKU_X
};


