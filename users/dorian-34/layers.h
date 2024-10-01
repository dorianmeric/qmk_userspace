#pragma once

#define xxxx  KC_NO // present but not available for use
#define Y_KEY MT(MOD_RCTL | MOD_RALT | MOD_RSFT,KC_Y)
#define J_KEY MT(MOD_RCTL | MOD_RALT | MOD_RSFT,KC_J)

// Thumb keys
#define TH1     LT(U_MOUSE, KC_TAB)
#define TH2     LT(U_NAV,   KC_SPC)          
#define TH3     LT(U_NUM,   KC_BSPC)
#define TH4     LT(U_SYM,   KC_ENT)


#define MIRYOKU_ALTERNATIVES_BASE_COLEMAKDH \
KC_Q,              KC_W,              KC_F,              KC_P,              KC_B,                       J_KEY,             KC_L,              KC_U,             KC_Y,              KC_SLSH,           \
LGUI_T(KC_A),      LALT_T(KC_R),      LCTL_T(KC_S),      LSFT_T(KC_T),      KC_G,                       KC_M,              RSFT_T(KC_N),      RCTL_T(KC_E),      LALT_T(KC_I),      RGUI_T(KC_O),      \
KC_Z,              ALGR_T(KC_X),      KC_C,              KC_D,              KC_V,                       KC_K,              KC_H,              KC_COMM,           ALGR_T(KC_DOT),    KC_QUOT,            \
U_NP,              U_NP,              LT(U_MEDIA,KC_ESC),TH1,               TH2,                        TH3,               TH4,               LT(U_FUN,KC_DEL),   U_NP,              U_NP


#define MIRYOKU_ALTERNATIVES_BASE_QWERTY \
KC_Q,              KC_W,              KC_E,              KC_R,              KC_T,                       Y_KEY,             KC_U,              KC_I,              KC_O,              KC_P,              \
LWIN_T(KC_A),      LALT_T(KC_S),      LCTL_T(KC_D),      LSFT_T(KC_F),      KC_G,                       KC_H,              LSFT_T(KC_J),      LCTL_T(KC_K),      LALT_T(KC_L),      LWIN_T(KC_QUOT),   \
KC_Z,              ALGR_T(KC_X),      KC_C,              KC_V,              KC_B,                       KC_N,              KC_M,              KC_COMM,           ALGR_T(KC_DOT),    KC_SLSH,            \
U_NP,              U_NP,              LT(U_MEDIA,KC_ESC),TH1,               TH2,                        TH3,               TH4,               LT(U_FUN,KC_DEL),  U_NP,              U_NP


// added Capslock to (NAV) Left-hand top right, and Insert just below
// Redo = Ctrl+Y
// Undo = Ctrl+Z    
#define MIRYOKU_ALTERNATIVES_NAV \
KC_HOME,           LCTL(KC_0),        KC_F5,             KC_END,            KC_PGUP,                    KC_WWW_BACK,       KC_WWW_FORWARD,    KC_TAB,            KC_SPC,            KC_BSPC,             \
KC_LGUI,           KC_LALT,           KC_LCTL,           KC_LSFT,           KC_PGDN,                    xxxx,              KC_LEFT,           KC_DOWN,           KC_UP,             KC_RGHT,           \
KC_END,            A(KC_F4),          KC_F2,             KC_LEFT,           KC_RGHT,                    xxxx,              KC_HOME,           KC_PGDN,           KC_PGUP,           KC_END,            \
U_NP,              U_NP,              xxxx,              xxxx,              xxxx,                       TH3,               KC_ENT,            KC_DEL,            U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_MOUSE \
DM_REC1,           DM_PLY1,           DM_REC2,           DM_PLY2,           DM_RSTP,                    KC_WWW_BACK,       KC_WWW_FORWARD,    xxxx,              xxxx,              JIGGLE,             \
KC_LGUI,           KC_LALT,           KC_LCTL,           C(KC_S),           LSFT(KC_F9),                xxxx,              KC_MS_L,           KC_MS_D,           KC_MS_U,           KC_MS_R,           \
TD(U_TD_U_MOUSE),  RSFT(KC_HOME),     KC_F9,        QK_CAPS_WORD_TOGGLE,    RSFT(KC_END),               xxxx,              KC_WH_L,           KC_WH_D,           KC_WH_U,           KC_WH_R,           \
U_NP,              U_NP,              xxxx,              xxxx,              TH2,                        KC_BTN1,           TH4,               KC_BTN3,           U_NP,              U_NP


#define MIRYOKU_ALTERNATIVES_MEDIA \
KC_NUM_LOCK,      E_TREMA,            I_TREMA,           U_TREMA,            xxxx,                      A_GRAVE,           E_AIGU,           E_GRAVE,           E_CIRC,           C_CEDILLE,           \
KC_INS,           xxxx,               xxxx,              KC_LSFT,           xxxx,                       A_CIRC,     KC_MEDIA_PREV_TRACK,   KC_AUDIO_VOL_DOWN, KC_AUDIO_VOL_UP,   KC_MEDIA_NEXT_TRACK,   \
KC_CAPS_LOCK,     xxxx,               A_GRAVE,            E_AIGU,      KC_MEDIA_PLAY_PAUSE,             O_CIRC,            I_CIRC,           U_CIRC,           U_GRAVE,          xxxx,              \
U_NP,               U_NP,              xxxx,              xxxx,              xxxx,                      KC_MUTE,       KC_MEDIA_PLAY_PAUSE, KC_MEDIA_STOP,     U_NP,              U_NP

// Keycodes for manipulating the RGB.
// RGB_TOG,           RGB_MOD,           RGB_HUI,           RGB_SAI,           RGB_VAI,  
// OU_AUTO // Keyb. output: auto



// LEFTMOST RIGHT THUMBf,
// Needs to be an "Excel" layer:
// parentheses (open and close), e, dot, +, -, *, /, circ, =, comma(?), f4, f2(maybe)
#define MIRYOKU_ALTERNATIVES_NUM \
KC_LPRN,           KC_7,              KC_8,              KC_9,              KC_RPRN,                    KC_E,              KC_F4,            KC_CIRC,           MO(U_NUMPAD),      xxxx,              \
KC_COMM,           KC_4,              KC_5,              KC_6,              KC_EQL,                     KC_KP_PLUS,        KC_RSFT,          KC_RCTL,           KC_LALT,           KC_RGUI,           \
KC_DOT,            KC_1,              KC_2,              KC_3,              KC_BSLS,                    KC_KP_MINUS,       KC_KP_ASTERISK,   KC_KP_SLASH,  LM(U_NUMPAD,MOD_LALT), TD(U_TD_U_NUM),              \
U_NP,              U_NP,              KC_DOT,            KC_0,              TH2,                        xxxx,              xxxx,             xxxx,              U_NP,              U_NP

// layers for symbols. RIGHTMOST RIGHT THUMB
#define MIRYOKU_ALTERNATIVES_SYM \
KC_GRAVE,          KC_AMPR,           KC_KP_ASTERISK,    KC_LPRN,           KC_RPRN,                    KC_LCBR,           KC_RCBR,           KC_LEFT_BRACKET,   KC_RIGHT_BRACKET,   KC_DEL,               \
KC_COLN,           KC_DLR,            KC_PERC,           KC_CIRC,           KC_PLUS,                    KC_DLR,            KC_RSFT,           KC_RCTL,           KC_LALT,           KC_RGUI,           \
KC_TILD,           KC_EXLM,           KC_AT,             KC_HASH,           KC_PIPE,                    CCY_EURO,          CCY_POUND,         CCY_YEN,           KC_ALGR,           TD(U_TD_U_SYM),              \
U_NP,              U_NP,              xxxx,              TH1,               TH2,                        TH3,               xxxx,              xxxx,              U_NP,              U_NP

// BOTH RIGHT

// DF(U_EXTRA)    for the QWERTY layout
// TD(U_TD_BOOT)  for the boot

#define MIRYOKU_ALTERNATIVES_FUN \
KC_F10,            KC_F7,             KC_F8,             KC_F9,             KC_PSCR,                    KC_PRINT_SCREEN,   KC_F13,            KC_F14,            KC_ALGR,           xxxx,            \
KC_F11,            KC_F4,             KC_F5,             KC_F6,             KC_SCRL,                    xxxx,              KC_RSFT,           KC_RCTL,           KC_LALT,           KC_RGUI,           \
KC_F12,            KC_F1,             KC_F2,             KC_F3,             KC_PAUS,                    xxxx,              xxxx,              xxxx,           DF(U_GAME),        DF(U_BASE),              \
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



#define MIRYOKU_LAYER_ALLCAPS \
S(KC_Q),           S(KC_W),         S(KC_F),            S(KC_P),            S(KC_B),                    S(KC_J),            S(KC_L),            S(KC_U),            S(KC_Y),            S(KC_SLSH),           \
S(KC_A),           S(KC_R),         S(KC_S),            S(KC_T),            S(KC_G),                    S(KC_M),            S(KC_N),            S(KC_E),            S(KC_I),            S(KC_O),      \
S(KC_Z),           S(KC_X),         S(KC_C),            S(KC_D),            S(KC_V),                    S(KC_K),            S(KC_H),            KC_COMM,            KC_DOT,             KC_QUOT,   \
U_NP,              U_NP,            xxxx,               xxxx,               xxxx,                       xxxx,               xxxx,               xxxx,               U_NP,               U_NP



#define MIRYOKU_LAYER_SNIPPETS \
S_Q,                S_W,            S_F,            S_P,            S_B,                    S_J,            S_L,            S_U,           S_Y,             S_SLSH,           \
S_A,                S_R,            S_S,            S_T,            S_G,                    S_M,            S_N,            S_E,           S_I,             S_O,      \
S_Z,                S_X,            S_C,            S_D,            S_V,                    S_K,            S_H,            S_COMM,        S_DOT,           S_QUOT,   \
U_NP,               U_NP,           xxxx,           xxxx,           xxxx,                  xxxx,            xxxx,           xxxx,           U_NP,           U_NP
