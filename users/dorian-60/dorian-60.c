
#include QMK_KEYBOARD_H


// MY CUSTOM CODE //////////////////////////////////////////////////////////////////////////////////////////


enum custom_keycodes {
    CCY_POUND = SAFE_RANGE, // Alt Codes start here.
    CCY_EURO,                 // € 0128
    CCY_YEN,
    FR_A_GRAVE,
    FR_A_CIRC,
    FR_C_CEDILLE,
    FR_E_GRAVE,
    FR_E_AIGU,
    FR_E_CIRC,
    FR_U_CIRC,
    JIGGLE,
};

// £ 0163
// € 0128
// ¥ 0165

// à 0244
// â 0226
// ç 0231
// è 0232
// é 0233
// ê 0234
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
        SS_LALT(SS_TAP(X_KP_0)SS_TAP(X_KP_2)SS_TAP(X_KP_4)SS_TAP(X_KP_6)), // Alt+0246 → ö
        SS_LALT(SS_TAP(X_KP_0)SS_TAP(X_KP_2)SS_TAP(X_KP_1)SS_TAP(X_KP_4)), // Alt+0214 → Ö
    },
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////
#include "miryoku.h"
#include "keymap_combo.h" // originally from keyboards/gboards/g/




// https://github.com/qmk/qmk_firmware/blob/master/docs/custom_quantum_functions.md
// If these functions return true QMK will process the keycodes as usual. That can be handy for extending the functionality of a key rather than replacing it. If these functions return false QMK will skip the normal key handling, and it will be up to you to send any key up or down events that are required.
bool process_record_user(uint16_t keycode, keyrecord_t *record) {

    if (record->event.pressed) {
        switch (keycode) {

                // CCY SHORTCUTS
                case CCY_POUND: 
                case CCY_EURO: 
                case CCY_YEN: {
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



    // JIGGLE 
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

    if (index  <= 5) { // - &thum_base_right
        return 300;
    }

    return 50; //COMBO_TERM; 
}

// https://docs.qmk.fm/#/tap_hold?id=tap-hold-configuration-optionszt
uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        // case SFT_T(KC_SPC):
        //     return TAPPING_TERM + 1250;
        // case LT(1, KC_GRV):
        //     return 130;
        default:
            return 300; // TAPPING_TERM;
    }
}