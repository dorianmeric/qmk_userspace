#pragma once

#define xxxx  KC_NO // present but not available for use
#define Y_KEY MT(MOD_RCTL | MOD_RALT | MOD_RSFT,KC_Y)
#define J_KEY MT(MOD_RCTL | MOD_RALT | MOD_RSFT,KC_J)


#define MIRYOKU_ALTERNATIVES_BASE_COLEMAKDH \
KC_Q,              KC_W,              KC_F,              KC_P,              KC_B,                       J_KEY,             KC_L,              KC_U,             KC_Y,              KC_SLSH,           \
LGUI_T(KC_A),      LALT_T(KC_R),      LCTL_T(KC_S),      LSFT_T(KC_T),      KC_G,                       KC_M,              RSFT_T(KC_N),      RCTL_T(KC_E),      LALT_T(KC_I),      RGUI_T(KC_O),      \
KC_Z,              ALGR_T(KC_X),      KC_C,              KC_D,              KC_V,                       KC_K,              KC_H,              KC_COMM,           ALGR_T(KC_DOT),    KC_QUOT,             \
U_NP,              U_NP,              LT(U_MEDIA,KC_ESC),LT(U_MOUSE,KC_TAB), LT(U_NAV,KC_SPC),          LT(U_NUM,KC_BSPC), LT(U_SYM,KC_ENT), LT(U_FUN,KC_DEL),   U_NP,              U_NP


#define MIRYOKU_ALTERNATIVES_BASE_QWERTY \
KC_Q,              KC_W,              KC_E,              KC_R,              KC_T,                       Y_KEY,             KC_U,              KC_I,              KC_O,              KC_P,              \
LWIN_T(KC_A),      LALT_T(KC_S),      LCTL_T(KC_D),      LSFT_T(KC_F),      KC_G,                       KC_H,              LSFT_T(KC_J),      LCTL_T(KC_K),      LALT_T(KC_L),      LWIN_T(KC_QUOT),   \
KC_Z,              ALGR_T(KC_X),      KC_C,              KC_V,              KC_B,                       KC_N,              KC_M,              KC_COMM,           ALGR_T(KC_DOT),    KC_SLSH,            \
U_NP,              U_NP,              LT(U_MEDIA,KC_ESC),LT(U_MOUSE,KC_TAB), LT(U_NAV,KC_SPC),          LT(U_NUM,KC_BSPC), LT(U_SYM,KC_ENT), LT(U_FUN,KC_DEL),  U_NP,              U_NP


// added Capslock to (NAV) Left-hand top right, and Insert just below
// Redo = Ctrl+Y
// Undo = Ctrl+Z    
#define MIRYOKU_ALTERNATIVES_NAV \
KC_HOME,           LCTL(KC_0),        KC_F5,             KC_END,            KC_PGUP,                    KC_WWW_BACK,       KC_WWW_FORWARD,    xxxx,              xxxx,              xxxx,             \
KC_LGUI,           KC_LALT,           KC_LCTL,           KC_LSFT,           KC_PGDN,                  QK_CAPS_WORD_TOGGLE, KC_LEFT,           KC_DOWN,           KC_UP,             KC_RGHT,           \
KC_END,            A(KC_F4),          KC_F2,             KC_LEFT,           KC_RGHT,                    xxxx,              KC_HOME,           KC_PGDN,           KC_PGUP,           KC_END,            \
U_NP,              U_NP,              xxxx,              xxxx,              xxxx,                       KC_BSPC,           KC_ENT,            KC_DEL,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_MOUSE \
DM_REC1,           DM_PLY1,           DM_REC2,           DM_PLY2,           DM_RSTP,                    KC_WWW_BACK,       KC_WWW_FORWARD,    xxxx,              xxxx,              JIGGLE,             \
KC_LGUI,           KC_LALT,           KC_LCTL,           C(KC_S),           LSFT(KC_F9),             QK_CAPS_WORD_TOGGLE,  KC_MS_L,           KC_MS_D,           KC_MS_U,           KC_MS_R,           \
TD(U_TD_U_MOUSE),  RSFT(KC_HOME),     RCTL(KC_BSPC),     RCTL(KC_DEL),      RSFT(KC_END),               xxxx,              KC_WH_L,           KC_WH_D,           KC_WH_U,           KC_WH_R,           \
U_NP,              U_NP,              xxxx,              xxxx,              xxxx,                       KC_BTN1,           KC_BTN2,           KC_BTN3,           U_NP,              U_NP


#define MIRYOKU_ALTERNATIVES_MEDIA \
A_GRAVE,           E_GRAVE,           I_CIRC,            U_CIRC,            I_TREMA,                   RGB_TOG,           RGB_MOD,           RGB_HUI,           RGB_SAI,           RGB_VAI,           \
A_CIRC,            E_AIGU,            O_CIRC,            KC_LSFT,           U_TREMA,                    OU_AUTO,     KC_MEDIA_PREV_TRACK,   KC_AUDIO_VOL_DOWN, KC_AUDIO_VOL_UP,   KC_MEDIA_NEXT_TRACK,           \
C_CEDILLE,         E_CIRC,            U_GRAVE,           E_TREMA,      KC_MEDIA_PLAY_PAUSE,             xxxx,             xxxx,             xxxx,              KC_CAPS_LOCK,        KC_INS,              \
U_NP,              U_NP,              xxxx,              xxxx,              xxxx,                       KC_MUTE,       KC_MEDIA_PLAY_PAUSE, KC_MEDIA_STOP,     U_NP,              U_NP




// RIGHTMOST RIGHT THUMBf,
// Needs to be an "Excel" layer:
// parentheses (open and close), e, dot, +, -, *, /, circ, =, comma(?), f4, f2(maybe)
#define MIRYOKU_ALTERNATIVES_NUM \
KC_LPRN,           KC_7,              KC_8,              KC_9,              KC_RPRN,                    KC_CIRC,           KC_KP_PLUS,        KC_KP_MINUS,       KC_KP_ASTERISK,    KC_KP_SLASH,              \
KC_COMM,           KC_4,              KC_5,              KC_6,              KC_EQL,                     KC_E,              KC_RSFT,           KC_RCTL,           KC_LALT,           KC_RGUI,           \
KC_DOT,            KC_1,              KC_2,              KC_3,              KC_BSLS,                    KC_F4,             KC_DOT,            MO(U_NUMPAD),  LM(U_NUMPAD,MOD_RALT), TD(U_TD_U_NUM),              \
U_NP,              U_NP,              KC_DOT,            KC_0,              KC_MINS,                    KC_BSPC,           xxxx,              xxxx,              U_NP,              U_NP

// layers for symbols. LEFTMOST RIGHT THUMB
// remove:  equal/+,  parentheses(?)
#define MIRYOKU_ALTERNATIVES_SYM \
KC_GRAVE,          KC_AMPR,           KC_KP_ASTERISK,    KC_LPRN,           KC_RPRN,                    KC_LEFT_BRACKET,   KC_LCBR,           KC_RCBR,          KC_RIGHT_BRACKET,   KC_DEL,               \
KC_COLN,           KC_DLR,            KC_PERC,           KC_CIRC,           KC_PLUS,                    KC_DLR,            KC_RSFT,           KC_RCTL,           KC_LALT,           KC_RGUI,           \
KC_TILD,           KC_EXLM,           KC_AT,             KC_HASH,           KC_PIPE,                    CCY_POUND,         CCY_EURO,          CCY_YEN,           KC_ALGR,           TD(U_TD_U_SYM),              \
U_NP,              U_NP,              xxxx,              KC_RPRN,           KC_UNDS,                    KC_BSPC,           xxxx,              xxxx,              U_NP,              U_NP

// BOTH RIGHT
#define MIRYOKU_ALTERNATIVES_FUN \
KC_F10,            KC_F7,             KC_F8,             KC_F9,             KC_PSCR,                    xxxx,              xxxx,              xxxx,             DF(U_EXTRA),        TD(U_TD_BOOT),            \
KC_F11,            KC_F4,             KC_F5,             KC_F6,             KC_SCRL,                    xxxx,              KC_RSFT,           KC_RCTL,           KC_LALT,           KC_RGUI,           \
KC_F12,            KC_F1,             KC_F2,             KC_F3,             KC_PAUS,                    KC_F2,             TD(U_TD_U_FUN),    KC_ALGR,           DF(U_GAME),         DF(U_BASE),              \
U_NP,              U_NP,              xxxx,              KC_TAB,            KC_SPC,                     xxxx,              xxxx,              xxxx,              U_NP,              U_NP



#define MIRYOKU_LAYER_GAME \
KC_TAB,            KC_Q,              KC_W,              KC_E,              KC_R,                       KC_T,               KC_Y,              KC_U,              KC_I,              KC_O,                         \
KC_LSFT,           KC_A,              KC_S,              KC_D,              KC_F,                       KC_G,               KC_H,              KC_J,              KC_K,              A(KC_TAB),                       \
KC_LCTL,           KC_Z,              KC_X,              KC_C,              KC_V,                       KC_B,               KC_N,              KC_M,              DF(U_GAME),        DF(U_BASE),            \
U_NP,              U_NP,              KC_ESC,            KC_LALT,           KC_SPC,                     KC_BSPC,            KC_ENT,            KC_DEL,            U_NP,              U_NP





#define MIRYOKU_LAYER_NUMPAD \
KC_KP_SLASH,      KC_KP_7,           KC_KP_8,           KC_KP_9,            KC_KP_ASTERISK,             xxxx,               xxxx,               xxxx,               xxxx,               xxxx,             \
xxxx,             KC_KP_4,           KC_KP_5,           KC_KP_6,            KC_KP_PLUS,                 xxxx,               KC_RSFT,           KC_RCTL,             KC_LALT,           KC_RGUI,           \
KC_KP_DOT,        KC_KP_1,           KC_KP_2,           KC_KP_3,            KC_KP_MINUS,                xxxx,               xxxx,               xxxx,               KC_ALGR,           DF(U_BASE),         \
U_NP,              U_NP,           xxxx,                KC_KP_0,            KC_KP_ENTER,                KC_BSPC,            xxxx,               xxxx,               U_NP,              U_NP


