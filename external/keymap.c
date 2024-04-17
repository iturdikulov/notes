#include QMK_KEYBOARD_H

#define LA_SYM MO(SYM)
#define LA_NAV MO(NAV)
#define _SYM 1
#define _NAV 2

enum layers {
    DEF,
    SYM,
    NAV,
    NUM,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
     * │TRN│F1 │F2 │F3 │F4 │F5 │F6 │F7 │F8 │F9 │F10│F11│F12│PSc│Pse│Del│
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┴───┼───┤
     * │ ` │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ - │ = │ Backsp│Del│
     * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┼───┤
     * │ Tab │ Q │ W │ F │ P │ B │ J │ L │ U │ Y │ : │ [ │ ] │  \  │VoU│
     * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┼───┤
     * │ Caps │ A │ R │ S │ T │ G │ M │ N │ E │ I │ O │ " │  Enter │VoD│
     * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────────┼───┤
     * │ Shift  │ X │ C │ D │ V │ Z │ K │ H │ , │ . │ / │   Shift  │MPL│
     * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴──┬┴──┬┴──┬───────┼───┤
     * │Ctrl│GUI │NAV │                        │SYM│Alt│Ctl│Ral│Mo5│GUI│
     * └────┴────┴────┴────────────────────────┴───┴───┴───┴───┴───┴───┘
     */
    [DEF] = LAYOUT(
        KC_TRNS, KC_F1,   KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_PSCR, KC_SCRL, KC_PAUS,
        KC_GRV,  KC_1,    KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_BSPC, KC_DEL,
        KC_TAB,  KC_Q,    KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,          KC_TRNS,
        KC_LCTL, KC_A,    KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,                    KC_TRNS,
        KC_LSFT, SC_LSPO, KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_RSFT,          KC_TRNS,
        KC_APP,  KC_LGUI, LA_NAV, KC_SPC, KC_SPC, KC_SPC, LA_SYM, KC_LALT, KC_RCTL, KC_RALT, KC_F13,  KC_RGUI),

    /*
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
     * │TRN│TRN│TRN│TRN│TRN│TRN│TRN│TRN│TRN│TRN│TRN│TRN│TRN│TRN│TRN│TRN│
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┴───┼───┤
     * │TRN│F1 │F2 │F3 │F4 │F5 │F6 │F7 │F8 │F9 │F10│F11│F12│   TRN │TRN│
     * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┼───┤
     * │ TRN │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │TRN│TRN│ TRN │TRN│
     * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┼───┤
     * │ TRN  │ { │ } │ ( │ ) │ = │CMS│ESC│ : │ ; │TRN│TRN│  TRN   │TRN│
     * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────────┼───┤
     * │ TRN    │ < │ > │ [ │ ] │ $ │ ! │ " │ ' │ - │ + │   TRN    │TRN│
     * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴──┬┴──┬┴──┬───────┼───┤
     * │TRN │TRN │TRN │                        │TRN│TRN│TRN│TRN│TRN│TRN│
     * └────┴────┴────┴────────────────────────┴───┴───┴───┴───┴───┴───┘
     */
    [SYM] = LAYOUT(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_ESC,  KC_LBRC, KC_LCBR, KC_LPRN, KC_TILD, KC_CIRC, KC_RPRN, KC_RCBR, KC_RBRC, KC_GRV,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_MINS, KC_ASTR, KC_EQL, KC_UNDS,  KC_DLR,  KC_HASH, OSM(MOD_LGUI), OSM(MOD_RALT), OSM(MOD_RCTL), OSM(MOD_RSFT),  KC_TRNS,    KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_PLUS, KC_PIPE, KC_AT,  KC_SLSH,  KC_PERC, KC_BSLS, KC_AMPR, KC_QUES, KC_EXLM, KC_DQUO, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS, TG(1)),
    /*
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
     * │TRN│TRN│TRN│TRN│TRN│TRN│TRN│TRN│TRN│TRN│TRN│TRN│TRN│TRN│TRN│TRN│
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┴───┼───┤
     * │TRN│TRN│TRN│TRN│TRN│TRN│TRN│TRN│TRN│TRN│TRN│TRN│TRN│   TRN │TRN│
     * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┼───┤
     * │ TRN │TRN│HOM│ UP│END│TRN│PGU│BT1│MSU│BT2│TRN│TRN│TRN│ TRN │TRN│
     * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┼───┤
     * │ NEXT │LFT│DWN│RGH│TRN│PGD│MSL│MSD│MSR│TRN│TRN│      TRN   │TRN│
     * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────────┼───┤
     * │ PREV   │MAL│MCT│MST│TRN│TRN│TRN│TRN│TRN│TRN│       TRN    │TRN│
     * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴──┬┴──┬┴──┬───────┼───┤
     * │TRN │TRN │TRN │    PLAY                │V+ │V- │TRN│TRN│TRN│TRN│
     * └────┴────┴────┴────────────────────────┴───┴───┴───┴───┴───┴───┘
     */
    [NAV] = LAYOUT(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_HOME, KC_UP,   KC_END,  KC_PGUP,  KC_VOLU, KC_TRNS, KC_HOME, KC_UP, KC_BTN2, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
KC_TRNS, OSM(MOD_LSFT), OSM(MOD_LCTL), OSM(MOD_LALT), OSM(MOD_LGUI), KC_VOLD,    KC_TRNS, KC_LEFT, KC_DOWN, KC_RIGHT, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,
        KC_TRNS, KC_TRNS, RGB_TOG, KC_TRNS, KC_MPRV, KC_MNXT, KC_MPLY,  RGB_MOD, RGB_RMOD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, TG(1)),
    /*
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
     * │TRN│TRN│TRN│TRN│TRN│TRN│TRN│TRN│TRN│TRN│TRN│TRN│TRN│TRN│TRN│TRN│
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┴───┼───┤
     * │TRN│F1 │F2 │F3 │F4 │F5 │F6 │F7 │F8 │F9 │F10│F11│F12│   TRN │TRN│
     * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┼───┤
     * │ PLAY│TRN│TRN│TRN│TRN│TRN│TRN│TRN│TRN│TRN│TRN│TRN│TRN│ TRN │TRN│
     * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┼───┤
     * │ NEXT │ < │ { │ [ │ ( │ = │CMS│ESC│ : │ ; │TRN│TRN│  TRN   │TRN│
     * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────────┼───┤
     * │ TRN    │ > │ } │ ] │ ) │ $ │ ! │ " │ ' │ - │ + │   TRN    │TRN│
     * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴──┬┴──┬┴──┬───────┼───┤
     * │TRN │TRN │TRN │                        │TRN│TRN│TRN│TRN│TRN│TRN│
     * └────┴────┴────┴────────────────────────┴───┴───┴───┴───┴───┴───┘
     */
    [NUM] = LAYOUT(
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,         KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,         KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_F,    KC_P,    KC_B,    KC_J,       KC_L,       KC_U,       KC_Y,       KC_SCLN,    KC_TRNS,    KC_TRNS,         KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_R,    KC_S,    KC_T,    KC_G,    KC_M,       KC_N,       KC_E,       KC_I,       KC_O,       KC_TRNS,    KC_TRNS,         KC_TRNS,
       KC_TRNS, KC_TRNS, KC_X,    KC_C,    KC_D,    KC_V,    KC_Z,       KC_K,       KC_H,       KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,         KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS,    KC_RCTL,    KC_TRNS,    KC_TRNS,    TG(0)),
};

// layer_state_t layer_state_set_user(layer_state_t state) {
//     switch (get_highest_layer(state)) {
//         case _NAV:
//             rgblight_setrgb (0x00,  0x00, 0xFF);
//             break;
//         case _SYM:
//             rgblight_setrgb (0xFF,  0x00, 0x00);
//             break;
//         default: // for any other layers, or the default layer
//             rgblight_setrgb (0x00,  0xFF, 0xFF);
//             break;
//     }
//   return state;
// }

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
