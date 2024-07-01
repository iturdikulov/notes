// This config inspired by https://github.com/qmk/qmk_firmware/tree/user-keymaps-still-present/users/callum

#include QMK_KEYBOARD_H

#define LA_SYM MO(SYM)
#define LA_NAV MO(NAV)
#define LA_QWE DF(QWE)

#define OLGUI OSM(MOD_LGUI)
#define OLALT OSM(MOD_LALT)
#define OLCTL OSM(MOD_LCTL)
#define OLSHT OSM(MOD_LSFT)


#define ORGUI OSM(MOD_RGUI)
#define ORALT OSM(MOD_RALT)
#define ORCTL OSM(MOD_RCTL)
#define ORSHT OSM(MOD_RSFT)

#define LSF KC_LSFT
#define APP KC_APP
#define KCOM KC_COMM
#define ____ KC_TRNS

#define _NAV 1
#define _SYM 2
#define _NUM 3
#define _QWE 4

enum layers {
    DEF,
    NAV,
    SYM,
    NUM,
    QWE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [DEF] = LAYOUT(
    ____,    KC_F1, KC_F2, KC_F3, KC_F4, KC_F5,  KC_F6, KC_F7, KC_F8, KC_F9,  KC_F10,   KC_F11,  KC_F12,   KC_PSCR, KC_SCRL, KC_PAUS,
    KC_GRV,  KC_1,  KC_2,  KC_3,  KC_4,  KC_5,   KC_6,  KC_7,  KC_8,  KC_9,   KC_0,     KC_MINS, KC_EQL,   KC_BSPC, KC_BSPC, KC_DEL,
    KC_TAB,   KC_Q,  KC_W,  KC_E,  KC_R,  KC_T,   KC_Y,  KC_U,  KC_I,  KC_O,   KC_P,     KC_LBRC, KC_RBRC, KC_BSLS /******/, ____,
    KC_LCTL,   KC_A,  KC_S,  KC_D,  KC_F,  KC_G,   KC_H,  KC_J,  KC_K,  KC_L,   KC_SCLN,  KC_QUOT,  KC_ENT /**************/, ____,
    LSF, LSF,   KC_Z,  KC_X,  KC_C,  KC_V,  KC_B,   KC_N,  KC_M,  KCOM,  KC_DOT, KC_SLSH,         KC_RSFT, KC_RSFT /******/, LA_QWE,
    APP,KC_LGUI, LA_NAV, KC_SPC, KC_SPC, KC_SPC /***************/, LA_SYM, KC_LALT, KC_RCTL,         KC_RALT,     KC_F13,    KC_RGUI
  ),

  [SYM] = LAYOUT(
    ____,    ____,    ____,    ____,    ____,    ____,      ____,    ____,    ____,    ____,    ____, ____, ____, ____, ____, ____,
    ____,    ____,    ____,    ____,    ____,    ____,      ____,    ____,    ____,    ____,    ____, ____, ____, ____, ____, ____,
    ____,     KC_ESC,  KC_LBRC, KC_LCBR, KC_LPRN, KC_TILD,   KC_CIRC, KC_RPRN, KC_RCBR, KC_RBRC, KC_GRV,    ____, ____, ____, ____,
    ____,      KC_MINS, KC_ASTR, KC_EQL,  KC_UNDS, KC_DLR,    KC_HASH, OLGUI,   OLALT,   OLCTL,   OLSHT,    ____,       ____, ____,
    ____, ____, KC_PLUS, KC_PIPE, KC_AT,   KC_SLSH, KC_PERC,   KC_BSLS, KC_AMPR, KC_QUES, KC_EXLM, KC_DQUO, ____, ____,       ____,
    ____, ____,  ____,    ____, ____, ____,                                                ____, ____, ____, ____, ____,      ____
  ),

  [NAV] = LAYOUT(
    ____,     ____,    ____,   ____,   ____,    ____,      ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
    ____,     ____,    ____,   ____,   ____,    ____,      ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
    ____,      KC_TAB, KC_MS_L, KC_MS_D,   KC_MS_U, KC_MS_R,    KC_BTN1, KC_HOME, KC_UP, KC_END, KC_DEL, ____, ____, ____, ____,
    ____,       OLSHT,   OLCTL,  OLALT,  OLGUI,   KC_VOLU,    KC_BTN2,   KC_LEFT, KC_DOWN, KC_RIGHT, KC_BSPC, ____, ____,          ____,
    ____, ____,  RGB_TOG, ____,   KC_MPRV,  KC_MNXT,  KC_VOLD,  KC_MPLY, KC_PGDN, KC_PGUP, APP,      KC_ENT, ____, ____, ____,
    ____, ____, ____, ____, ____,  ____, ____, ____, ____, ____, ____, ____
  ),

  [NUM] = LAYOUT(
    ____,      ____,   ____,   ____,   ____,  ____, ____, ____,  ____,    ____,   ____,   ____, ____, ____, ____, ____,
    ____,      ____,   ____,   ____,   ____,  ____, ____, ____,  ____,    ____,   ____,   ____, ____, ____, ____, ____,
    ____,       KC_7,   KC_5,   KC_3,   KC_1,  KC_9,       KC_8,  KC_0,    KC_2,   KC_4,   KC_6, ____, ____, ____, ____, // dvorak-like layout
    ____,        OLSHT,  OLCTL,  OLALT,  OLGUI, KC_F11,     KC_F10, ORGUI,  ORALT,  ORCTL,  ORSHT, ____, ____,          ____,
    ____, ____,   KC_F7,  KC_F5,  KC_F3,  KC_F1, KC_F9,      KC_F8,  KC_F12, KC_F2,  KC_F4,  KC_F6, ____, ____, ____,
    ____, ____, ____, ____, ____,  ____, ____, ____, ____, ____, ____, ____
  ),

  [QWE] = LAYOUT(
    KC_ESC, ____, ____, ____, ____, ____, ____,    ____,    ____,    ____,    ____,    ____,    ____,         ____, ____, ____,
    ____, ____, ____, ____, ____, ____, ____,    ____,    ____,    ____,    ____,    ____,    ____,         ____, ____, ____,
    ____, ____, ____, KC_F,    KC_P,    KC_B,    KC_J,       KC_L,       KC_U,       KC_Y,       KC_SCLN,    ____,    ____,         ____,          DF(DEF),
    ____, ____, KC_R,    KC_S,    KC_T,    KC_G,    KC_M,       KC_N,       KC_E,       KC_I,       KC_O,       ____,    ____,         ____,
    ____, ____, KC_X,    KC_C,    KC_D,    KC_V,    KC_Z,       KC_K,       KC_H,       ____,    ____,    ____,    ____,         ____, ____,
    ____, ____, KC_LALT, ____, ____, ____, ____,    ____,    KC_RCTL,    ____,    ____,    ____
  ),
};

bool caps_word_press_user(uint16_t keycode) {
    switch (keycode) {
        // Keycodes that continue Caps Word, with shift applied.
        case KC_A ... KC_Z:
        case KC_SCLN:
        case KC_MINS:
            add_weak_mods(MOD_BIT(KC_LSFT));  // Apply shift to next key.
            return true;

        // Keycodes that continue Caps Word, without shifting.
        case KC_1 ... KC_0:
        case KC_BSPC:
        case KC_DEL:
        case KC_UNDS:
            return true;

        default:
            return false;  // Deactivate Caps Word.
    }
}

layer_state_t layer_state_set_user(layer_state_t state) {
    // Hold SYM and NAV to activate NUM layer
    return update_tri_layer_state(state, SYM, NAV, NUM);
}
