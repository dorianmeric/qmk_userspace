#include QMK_KEYBOARD_H // <keyboard>.h


// MY CUSTOM CODE //////////////////////////////////////////////////////////////////////////////////////////
enum custom_keycodes {
    CCY_POUND = SAFE_RANGE, // Alt Codes start here.
    CCY_EURO,                 // € 0128
    CCY_YEN,
    A_GRAVE,
    A_CIRC,
    C_CEDILLE,
    E_GRAVE,
    E_AIGU,
    E_CIRC,
    I_CIRC,
    O_CIRC,
    U_GRAVE,
    U_CIRC,
    JIGGLE,
};

// £ 0163
// € 0128
// ¥ 0165

// à 0224
// â 0226
// ç 0231
// è 0232
// é 0233
// ê 0234
// î 0238
// ô 0244
// ù 0249
// û 0251 

char *alt_codes[][2] = {
    {
        SS_LALT(SS_TAP(X_KP_0)SS_TAP(X_KP_1)SS_TAP(X_KP_6)SS_TAP(X_KP_3)), // Alt+0163 → £
        SS_LALT(SS_TAP(X_KP_0)SS_TAP(X_KP_1)SS_TAP(X_KP_6)SS_TAP(X_KP_3)), // Alt+0163 → £
    },
    {
        SS_LALT(SS_TAP(X_KP_0)SS_TAP(X_KP_1)SS_TAP(X_KP_2)SS_TAP(X_KP_8)), // Alt+0128 → €
        SS_LALT(SS_TAP(X_KP_0)SS_TAP(X_KP_1)SS_TAP(X_KP_2)SS_TAP(X_KP_8)), // Alt+0128 → €
    },
    {
		SS_LALT(SS_TAP(X_KP_0)SS_TAP(X_KP_1)SS_TAP(X_KP_6)SS_TAP(X_KP_5)),  // Alt+0165 → ¥
        SS_LALT(SS_TAP(X_KP_0)SS_TAP(X_KP_1)SS_TAP(X_KP_6)SS_TAP(X_KP_5)),  // Alt+0165 → ¥
    },
    {
        SS_LALT(SS_TAP(X_KP_0)SS_TAP(X_KP_2)SS_TAP(X_KP_2)SS_TAP(X_KP_4)), // Alt+0224 → à
        SS_LALT(SS_TAP(X_KP_0)SS_TAP(X_KP_1)SS_TAP(X_KP_9)SS_TAP(X_KP_2)), // Alt+0192 → À
    },
    {
        SS_LALT(SS_TAP(X_KP_0)SS_TAP(X_KP_2)SS_TAP(X_KP_2)SS_TAP(X_KP_6)), // Alt+0226 → â
        SS_LALT(SS_TAP(X_KP_0)SS_TAP(X_KP_1)SS_TAP(X_KP_9)SS_TAP(X_KP_4)), // Alt+0194 → À
    },
    {
        SS_LALT(SS_TAP(X_KP_0)SS_TAP(X_KP_2)SS_TAP(X_KP_3)SS_TAP(X_KP_1)), // Alt+0231 → ç
        SS_LALT(SS_TAP(X_KP_0)SS_TAP(X_KP_1)SS_TAP(X_KP_9)SS_TAP(X_KP_9)), // Alt+0199 → Ç
    },
    {
        SS_LALT(SS_TAP(X_KP_0)SS_TAP(X_KP_2)SS_TAP(X_KP_3)SS_TAP(X_KP_2)), // Alt+0232 → è
        SS_LALT(SS_TAP(X_KP_0)SS_TAP(X_KP_2)SS_TAP(X_KP_0)SS_TAP(X_KP_0)), // Alt+0200 → È
    },
    {
        SS_LALT(SS_TAP(X_KP_0)SS_TAP(X_KP_2)SS_TAP(X_KP_3)SS_TAP(X_KP_3)), // Alt+0233 → é
        SS_LALT(SS_TAP(X_KP_0)SS_TAP(X_KP_2)SS_TAP(X_KP_0)SS_TAP(X_KP_1)), // Alt+0201 → É
    },
    {
        SS_LALT(SS_TAP(X_KP_0)SS_TAP(X_KP_2)SS_TAP(X_KP_3)SS_TAP(X_KP_4)), // Alt+0234 → ê
        SS_LALT(SS_TAP(X_KP_0)SS_TAP(X_KP_2)SS_TAP(X_KP_0)SS_TAP(X_KP_2)), // Alt+0202 → Ê
    },
    {
        SS_LALT(SS_TAP(X_KP_0)SS_TAP(X_KP_2)SS_TAP(X_KP_3)SS_TAP(X_KP_8)), // Alt+0238 → î
        SS_LALT(SS_TAP(X_KP_0)SS_TAP(X_KP_2)SS_TAP(X_KP_0)SS_TAP(X_KP_6)), // Alt+0206 → Î
    },
    {
        SS_LALT(SS_TAP(X_KP_0)SS_TAP(X_KP_2)SS_TAP(X_KP_4)SS_TAP(X_KP_4)), // Alt+0244 → ô
        SS_LALT(SS_TAP(X_KP_0)SS_TAP(X_KP_2)SS_TAP(X_KP_0)SS_TAP(X_KP_6)), // Alt+0206 → Ô
    },
    {
        SS_LALT(SS_TAP(X_KP_0)SS_TAP(X_KP_2)SS_TAP(X_KP_4)SS_TAP(X_KP_9)), // Alt+0249 → ù
        SS_LALT(SS_TAP(X_KP_0)SS_TAP(X_KP_2)SS_TAP(X_KP_1)SS_TAP(X_KP_7)), // Alt+0217 → Ù
    },
    {
        SS_LALT(SS_TAP(X_KP_0)SS_TAP(X_KP_2)SS_TAP(X_KP_5)SS_TAP(X_KP_1)), // Alt+0251 → û
        SS_LALT(SS_TAP(X_KP_0)SS_TAP(X_KP_2)SS_TAP(X_KP_1)SS_TAP(X_KP_9)), // Alt+0219 → Û
    },
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////
#include "miryoku.h"  // needs to come after the custom keycodes
#include "keymap_combo.h" // originally from keyboards/gboards/g/

///////////////////////////////////////////////////////////////////////////////////////////////////////////



// https://github.com/qmk/qmk_firmware/blob/master/docs/custom_quantum_functions.md
// If these functions return true QMK will process the keycodes as usual. That can be handy for extending the functionality of a key rather than replacing it. If these functions return false QMK will skip the normal key handling, and it will be up to you to send any key up or down events that are required.
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch (keycode) {

                // CCY SHORTCUTS
                case CCY_POUND: 
                case CCY_EURO: 
                case CCY_YEN: 
                case A_GRAVE:
                case A_CIRC:
                case C_CEDILLE:
                case E_GRAVE:
                case E_AIGU:
                case E_CIRC:
                case I_CIRC:
                case O_CIRC:
                case U_GRAVE:
                case U_CIRC:
                {
                    uint16_t index = keycode - CCY_POUND; // MAKES A REFERENCE TO THE FIRST CCYCODE
                    uint8_t shift = get_mods() & (MOD_BIT(KC_LSFT) | MOD_BIT(KC_RSFT));

                    unregister_code(KC_LSFT);
                    unregister_code(KC_RSFT);

                    send_string(alt_codes[index][(bool)shift]);

                    if (shift & MOD_BIT(KC_LSFT)) register_code(KC_LSFT);
                    if (shift & MOD_BIT(KC_RSFT)) register_code(KC_RSFT);

                    return false; // Skip all further processing of this key
                }

        }
    }

    // MOUSE JIGGLE  
    if (record->event.pressed) {
        static deferred_token token = INVALID_DEFERRED_TOKEN;
        static report_mouse_t report = {0};
        if (token) {
            // If jiggler is currently running, stop when any key is pressed.
            cancel_deferred_exec(token);
            token = INVALID_DEFERRED_TOKEN;
            report = (report_mouse_t){};  // Clear the mouse.
            host_mouse_send(&report);
        } else if (keycode == JIGGLE) {

            uint32_t jiggler_callback(uint32_t trigger_time, void* cb_arg) {
                // Deltas to move in a circle of radius 20 pixels over 32 frames.
                static const int8_t deltas[32] = {
                    0, -1, -2, -2, -3, -3, -4, -4, -4, -4, -3, -3, -2, -2, -1, 0,
                    0, 1, 2, 2, 3, 3, 4, 4, 4, 4, 3, 3, 2, 2, 1, 0};
                static uint8_t phase = 0;
                // Get x delta from table and y delta by rotating a quarter cycle.
                report.x = deltas[phase];
                report.y = deltas[(phase + 8) & 31];
                phase = (phase + 1) & 31;
                host_mouse_send(&report);
                return 16;  // Call the callback every 16 ms.
            }

            token = defer_exec(1, jiggler_callback, NULL);  // Schedule callback.
        }
    }

    return true; // Process all other keycodes normally
}





// https://github.com/qmk/qmk_firmware/blob/master/docs/feature_combo.md
// controls the COMBO timing, to have a more relax timing for the thumb keys
uint16_t get_combo_term(uint16_t index, combo_t *combo) {

    switch (combo->keycode) {
        case thum_base_left:
        case thum_base_right:
        case thum_nav:
        case thum_mouse:
        case thum_media:
        case thum_num:
        case game_thum_base_left:
        case game_thum_base_right:
            return 200;

        default:
            return 50; // COMBO_TERM;
    }

}

// Hold or Tap?
// https://docs.qmk.fm/#/tap_hold?id=tap-hold-configuration-optionszt
uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LGUI_T(KC_A): // windows key
        case LGUI_T(KC_O): // windows key
            return 300;

        // the home row keys - Ctrl and Alt
        case LCTL_T(KC_S): // Ctrl left
        case LCTL_T(KC_E): // Ctrl right
        case LALT_T(KC_R): // alt left
        case LALT_T(KC_I): // alt right
            return 200;

        // the home row keys - Shift
        case LSFT_T(KC_T): // Shift left
        case LSFT_T(KC_N): // Shift right
            return 100;

        default:
            return 200; // TAPPING_TERM;
    }
}




bool get_combo_must_press_in_order(uint16_t index, combo_t *combo) {
    switch (index) {
        case combo_io: 
        case combo_oi: 
  //      case combo_regards:
  //      case combo_thanks:
            return true;

        default:
            return false; // TAPPING_TERM;
    }

}


// disable some combos on some layers
// https://docs.qmk.fm/features/combo
bool combo_should_trigger(uint16_t index, combo_t *combo, uint16_t keycode, keyrecord_t *record) {
    /* Disable combo `SOME_COMBO` on layer `_LAYER_A` */
    
    switch (index) {
        case game_00:
        case game_01:
        case game_02:
        case game_03:
        case game_04:
        case game_05:
        case game_p:
        case game_n:
        case game_bootloader:
        case game_thum_base_left:
        case game_thum_base_right:

            if (layer_state_is(U_TAP)) {
                return true;
            } else {
                return false;
            }

        default:

            if (layer_state_is(U_TAP)) { // if we are here the combo is not ome of the "game" ones, and therefore should not activate while gaming
                return false;
            } else {
                return true;
            }
    }


}


// https://github.com/qmk/qmk_firmware/blob/master/docs/tap_hold.md
bool get_permissive_hold(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LT(U_MOUSE,KC_TAB):
        case LT(U_NAV,KC_SPC):
        case LT(U_NUM,KC_BSPC):
        case LT(U_SYM,KC_ENT):
            // Immediately select the hold action when another key is tapped.
            return true;

        default:
            // Do not select the hold action when another key is tapped.
            return false;
    }
}
