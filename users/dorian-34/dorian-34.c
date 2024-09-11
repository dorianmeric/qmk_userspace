#include QMK_KEYBOARD_H // <keyboard>.h

// MY CUSTOM CODE //////////////////////////////////////////////////////////////////////////////////////////
enum custom_keycodes {
    CCY_POUND = SAFE_RANGE, // Alt Codes start here.
    CCY_EURO,               // € 0128
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
    E_TREMA,
    I_TREMA,
    U_TREMA,
    JIGGLE,
    // SS_MUFG,
    // SS_MUSE
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

// ë 0235
// ï 0239
// ü 0252

char *alt_codes[][2] = {
    {
        SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_1) SS_TAP(X_KP_6) SS_TAP(X_KP_3)), // Alt+0163 → £
        SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_1) SS_TAP(X_KP_6) SS_TAP(X_KP_3)), // Alt+0163 → £
    },
    {
        SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_1) SS_TAP(X_KP_2) SS_TAP(X_KP_8)), // Alt+0128 → €
        SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_1) SS_TAP(X_KP_2) SS_TAP(X_KP_8)), // Alt+0128 → €
    },
    {
        SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_1) SS_TAP(X_KP_6) SS_TAP(X_KP_5)), // Alt+0165 → ¥
        SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_1) SS_TAP(X_KP_6) SS_TAP(X_KP_5)), // Alt+0165 → ¥
    },
    {
        SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_2) SS_TAP(X_KP_4)), // Alt+0224 → à
        SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_1) SS_TAP(X_KP_9) SS_TAP(X_KP_2)), // Alt+0192 → À
    },
    {
        SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_2) SS_TAP(X_KP_6)), // Alt+0226 → â
        SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_1) SS_TAP(X_KP_9) SS_TAP(X_KP_4)), // Alt+0194 → À
    },
    {
        SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_3) SS_TAP(X_KP_1)), // Alt+0231 → ç
        SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_1) SS_TAP(X_KP_9) SS_TAP(X_KP_9)), // Alt+0199 → Ç
    },
    {
        SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_3) SS_TAP(X_KP_2)), // Alt+0232 → è
        SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_0) SS_TAP(X_KP_0)), // Alt+0200 → È
    },
    {
        SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_3) SS_TAP(X_KP_3)), // Alt+0233 → é
        SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_0) SS_TAP(X_KP_1)), // Alt+0201 → É
    },
    {
        SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_3) SS_TAP(X_KP_4)), // Alt+0234 → ê
        SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_0) SS_TAP(X_KP_2)), // Alt+0202 → Ê
    },
    {
        SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_3) SS_TAP(X_KP_8)), // Alt+0238 → î
        SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_0) SS_TAP(X_KP_6)), // Alt+0206 → Î
    },
    {
        SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_4) SS_TAP(X_KP_4)), // Alt+0244 → ô
        SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_0) SS_TAP(X_KP_6)), // Alt+0206 → Ô
    },
    {
        SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_4) SS_TAP(X_KP_9)), // Alt+0249 → ù
        SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_1) SS_TAP(X_KP_7)), // Alt+0217 → Ù
    },
    {
        SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_5) SS_TAP(X_KP_1)), // Alt+0251 → û
        SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_1) SS_TAP(X_KP_9)), // Alt+0219 → Û
    },
    {
        SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_3) SS_TAP(X_KP_5)), // Alt+0235 → ë
        SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_0) SS_TAP(X_KP_3)), // Alt+0203 → Ë
    },
    {
        SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_3) SS_TAP(X_KP_9)), // Alt+0239 → ï
        SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_0) SS_TAP(X_KP_7)), // Alt+0207 → Ï
    },
    {
        SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_5) SS_TAP(X_KP_2)), // Alt+0252 → ü
        SS_LALT(SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_2) SS_TAP(X_KP_0)), // Alt+0220 → Û
    },
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////
#include "miryoku.h"      // needs to come after the custom keycodes
#include "keymap_combo.h" // originally from keyboards/gboards/g/

///////////////////////////////////////////////////////////////////////////////////////////////////////////

bool leftmod_pressed(void);
bool rightmod_pressed(void);

// returns whether or not some nods are being held on the right nahd (or left hand)
bool leftmod_pressed() {
    // return ((get_mods() & MOD_BIT(KC_LGUI)) == MOD_BIT(KC_LGUI)) || ((get_mods() & MOD_BIT(KC_LALT)) == MOD_BIT(KC_LALT)) || ((get_mods() & MOD_BIT(KC_LCTL)) == MOD_BIT(KC_LCTL)) || ((get_mods() & MOD_BIT(KC_LSFT)) == MOD_BIT(KC_LSFT));
    return ((get_mods() & MOD_BIT(KC_LGUI)) == MOD_BIT(KC_LGUI)) || ((get_mods() & MOD_BIT(KC_LCTL)) == MOD_BIT(KC_LCTL)) || ((get_mods() & MOD_BIT(KC_LSFT)) == MOD_BIT(KC_LSFT)); // removed Alt as it's the same on both sides so I don't want to disable anything with just alt
}
bool rightmod_pressed() {
    // return ((get_mods() & MOD_BIT(KC_RGUI)) == MOD_BIT(KC_RGUI)) || ((get_mods() & MOD_BIT(KC_RALT)) == MOD_BIT(KC_RALT)) || ((get_mods() & MOD_BIT(KC_RCTL)) == MOD_BIT(KC_RCTL)) || ((get_mods() & MOD_BIT(KC_RSFT)) == MOD_BIT(KC_RSFT));
    return ((get_mods() & MOD_BIT(KC_RGUI)) == MOD_BIT(KC_RGUI)) || ((get_mods() & MOD_BIT(KC_RCTL)) == MOD_BIT(KC_RCTL)) || ((get_mods() & MOD_BIT(KC_RSFT)) == MOD_BIT(KC_RSFT)); // removed Alt as it's the same on both sides so I don't want to disable anything with just alt
}

// https://github.com/qmk/qmk_firmware/blob/master/docs/custom_quantum_functions.md
// If these functions return true QMK will process the keycodes as usual. That can be handy for extending the functionality of a key rather than replacing it. If these functions return false QMK will skip the normal key handling, and it will be up to you to send any key up or down events that are required.
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    // if (!process_achordion(keycode, record)) {
    //     return false;
    // }

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
            case E_TREMA:
            case I_TREMA:
            case U_TREMA: {
                uint16_t index = keycode - CCY_POUND; // MAKES A REFERENCE TO THE FIRST CCYCODE
                uint8_t  shift = get_mods() & (MOD_BIT(KC_LSFT) | MOD_BIT(KC_RSFT));

                unregister_code(KC_LSFT);
                unregister_code(KC_RSFT);

                send_string(alt_codes[index][(bool)shift]);

                if (shift & MOD_BIT(KC_LSFT)) register_code(KC_LSFT);
                if (shift & MOD_BIT(KC_RSFT)) register_code(KC_RSFT);

                return false; // Skip all further processing of this key
            }


            // case SS_MUFG:
            //     if (record->event.pressed) {
            //         SEND_STRING("MUBK");
            //     }
            //     return false;
            // case SS_MUSE:
            //     if (record->event.pressed) {
            //         SEND_STRING("MUSE");
            //     }
            //     return false;

        }
    }

    switch (keycode) {
        // disables the mod keys on the other side of the keyboard when Ctrl or Shift is held.
        case LSFT_T(KC_T): {
            if (rightmod_pressed()) {
                if (record->event.pressed) {
                    tap_code(KC_T);
                } 
                return false;
            } else {
                return true;
            }
        }

        case LGUI_T(KC_A): {
            if (rightmod_pressed()) {
                if (record->event.pressed) {
                    tap_code(KC_A);
                } 
                return false;
            } else {
                return true;
            }
        }

        case LALT_T(KC_R): {
            if (rightmod_pressed()) {
                if (record->event.pressed) {
                    tap_code(KC_R);
                } 
                return false;
            } else {
                return true;
            }
        }

        case LCTL_T(KC_S): {
            if (rightmod_pressed()) {
                if (record->event.pressed) {
                    tap_code(KC_S);
                } 
                return false;
            } else {
                return true;
            }
        }

        case RSFT_T(KC_N): {
            if (leftmod_pressed()) {
                if (record->event.pressed) {
                    tap_code(KC_N);
                } 
                return false;
            } else {
                return true;
            }
        }

        case RCTL_T(KC_E): {
            if (leftmod_pressed()) {
                if (record->event.pressed) {
                    tap_code(KC_E);
                }
                return false;
            } else {
                return true;
            }
        }

        case LALT_T(KC_I): {
            if (leftmod_pressed()) {
                if (record->event.pressed) {
                    tap_code(KC_I);
                } 
                return false;
            } else {
                return true;
            }
        }

        case RGUI_T(KC_O): {
            if (leftmod_pressed()) {
                if (record->event.pressed) {
                    tap_code(KC_O);
                } 
                return false;
            } else {
                return true;
            }
        }
    }

    // MOUSE JIGGLE
    if (record->event.pressed) {
        static deferred_token token  = INVALID_DEFERRED_TOKEN;
        static report_mouse_t report = {0};
        if (token) {
            // If jiggler is currently running, stop when any key is pressed.
            cancel_deferred_exec(token);
            token  = INVALID_DEFERRED_TOKEN;
            report = (report_mouse_t){}; // Clear the mouse.
            host_mouse_send(&report);
        } else if (keycode == JIGGLE) {
            uint32_t jiggler_callback(uint32_t trigger_time, void *cb_arg) {
                // Deltas to move in a circle of radius 20 pixels over 32 frames.
                static const int8_t deltas[32] = {0, -1, -2, -2, -3, -3, -4, -4, -4, -4, -3, -3, -2, -2, -1, 0, 0, 1, 2, 2, 3, 3, 4, 4, 4, 4, 3, 3, 2, 2, 1, 0};
                static uint8_t      phase      = 0;
                // Get x delta from table and y delta by rotating a quarter cycle.
                report.x = deltas[phase];
                report.y = deltas[(phase + 8) & 31];
                phase    = (phase + 1) & 31;
                host_mouse_send(&report);
                return 16; // Call the callback every 16 ms.
            }

            token = defer_exec(1, jiggler_callback, NULL); // Schedule callback.
        }
    }

    return true; // Process all other keycodes normally
}

// // https://github.com/qmk/qmk_firmware/blob/0c8109a1acd1cf390c9088256e2b269d6a10d39c/quantum/keymap_common.c#L150-L153
// uint16_t keymap_key_to_keycode(uint8_t layer, keypos_t key) {

//     uint16_t keycode = pgm_read_word(&keymaps[layer][key.row][key.col]);

//     // if the opposite-hand shift is pressed, treat the home-row key like a letter (ie. disable the hold action)
//     if (rightmod_pressed()) {
//         switch (keycode) {
//             case LSFT_T(KC_T): return KC_T;
//             case LGUI_T(KC_A): return KC_A;
//             case LALT_T(KC_R): return KC_R;
//             case LCTL_T(KC_S): return KC_S;
//         }
//     }

//     if (leftmod_pressed()) {
//         switch (keycode) {
//             case RSFT_T(KC_N): return KC_N;
//             case RCTL_T(KC_E): return KC_E;
//             case LALT_T(KC_I): return KC_I;
//             case RGUI_T(KC_O): return KC_O;
//         }
//     }

//   return keycode;
// }

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
        case game_thumb_base_left:
        case game_thumb_base_right:
            return 200;

        default:
            return 30; // COMBO_TERM;
    }
}

// Hold or Tap?
// https://docs.qmk.fm/#/tap_hold?id=tap-hold-configuration-optionszt
uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LGUI_T(KC_A): // windows key
        case RGUI_T(KC_O): // windows key
            return 350;

        case LCTL_T(KC_S): // Ctrl left
        case RCTL_T(KC_E): // Ctrl right
        case LALT_T(KC_R): // alt left
        case LALT_T(KC_I): // alt right
            return 200;

        case LSFT_T(KC_T): // Shift left
        case RSFT_T(KC_N): // Shift right
            return 150;

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
        // Note: because these heycodes are defined in the COMBO layer, the layer of the keycode returns (via layer_state_is() ) is 0 all the time
        case game_01:
        case game_02:
        case game_03:
        case game_04:
        case game_05:
        case game_p:
        case game_n:
        case game_bootloader:
        case game_thumb_base_left:
        case game_thumb_base_right:

            if (default_layer_state == (1 << U_GAME)) { // default_layer_state is defined in    qmk_firmware\quantum\action_layer.c   l between 1 shifted to the power 9 is 2^9, which is 512
                return true;
            } else {
                return false;
            }

        default:

            if (default_layer_state == (1 << U_GAME)) { // if we are here the combo is not ome of the "game" ones, and therefore should not activate while gaming
                return false;
            } else {
                return true;
            }
    }
}

// https://github.com/qmk/qmk_firmware/blob/master/docs/tap_hold.md
bool get_permissive_hold(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LT(U_MOUSE, KC_TAB):
        case LT(U_NAV, KC_SPC):
        case LT(U_NUM, KC_BSPC):
        case LT(U_SYM, KC_ENT):
            // Immediately select the hold action when another key is tapped.
            return true;

        default:
            // Do not select the hold action when another key is tapped.
            return false;
    }
}

// // https://docs.qmk.fm/tap_hold#tap-or-hold-decision-modes
// bool get_retro_tapping(uint16_t keycode, keyrecord_t *record) {
//     switch (keycode) {
//         // these keys may be held by themselves and the mouse, and should be trated as the modifier (eg. shift mwheel)
//         case LGUI_T(KC_A): // windows key
//         case LALT_T(KC_R): // alt left
//         case LCTL_T(KC_S): // Ctrl left
//         case LSFT_T(KC_T): // Shift left
//             return false;

//         default:
//             return true; // otherwise the keys should tap
//     }
// }


/*
 * Key overrides allow you to send a different key-modifier combination or perform a custom action when a certain modifier-key combination is pressed.
 * For example, you may configure a key override to send the delete key when shift + backspace are pressed together, or that your volume keys become screen brightness keys when holding ctrl. The possibilities are quite vast and the documentation contains a few examples for inspiration.
 *
 * See the documentation and examples here: https://docs.qmk.fm/#/feature_key_overrides
*/
// can disable by removing KEY_OVERRIDE_ENABLE
// const key_override_t delete_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_BSPC, KC_DEL);

// // This globally defines all key overrides to be used
// const key_override_t **key_overrides = (const key_override_t *[]){
// 	&delete_key_override,
// 	NULL // Null terminate the array of overrides!
// };