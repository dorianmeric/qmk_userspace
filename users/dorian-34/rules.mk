
MOUSEKEY_ENABLE = yes
EXTRAKEY_ENABLE = yes
AUTO_SHIFT_ENABLE = no
TAP_DANCE_ENABLE = yes
CAPS_WORD_ENABLE = yes # https://github.com/qmk/qmk_firmware/blob/master/docs/feature_caps_word.md
KEY_OVERRIDE_ENABLE = yes
MOUSE_ENABLE = yes
DEFERRED_EXEC_ENABLE = yes

DYNAMIC_MACRO_ENABLE = yes # to be able to record macros
NKRO_ENABLE = yes
COMBO_ENABLE = yes


MIRYOKU_ALPHAS=COLEMAKDH
MIRYOKU_EXTRA=QWERTY
# MIRYOKU_TAP=QWERTY # I remove the shortcut to go to the Tap layer (as getting out requires resetting the keyboard)
MIRYOKU_CLIPBOARD=WIN # sets the shortcuts to be "Ctrl+V , Ctrl+C" etc
SPLIT_KEYBOARD = yes

CONSOLE_ENABLE = no # needs to be on for the keylogger (so that the keyboard sends info to the pc)


INTROSPECTION_KEYMAP_C = dorian-34.c # keymaps. Is needed
include ~/qmk_userspace/users/dorian-34/post_rules.mk # Is needed

