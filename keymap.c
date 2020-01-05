#include QMK_KEYBOARD_H

#define BASE 0 // default
#define SYMB 1 // symbols
#define MDIA 2 // media keys

enum {
  TD_BRACKETS = 0,
  TD_F4_CLOSE,
  TD_CAPS
};

qk_tap_dance_action_t tap_dance_actions[] = {
  [TD_BRACKETS] = ACTION_TAP_DANCE_DOUBLE(KC_LBRC, KC_RBRC),
  [TD_F4_CLOSE] = ACTION_TAP_DANCE_DOUBLE(KC_F4, LALT(KC_F4)),
  [TD_CAPS] = ACTION_TAP_DANCE_DOUBLE(KC_LSFT, KC_CAPS)
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[BASE] = LAYOUT_ergodox(  // layer 0 : default
                   // left hand
                   KC_ESC,          KC_1,        KC_2,        KC_3,        KC_4,        KC_5,        LGUI(KC_TAB),
                   KC_GRV,          KC_Q,        KC_W,        KC_E,        KC_R,        KC_T,        KC_NO,
                   LCTL_T(KC_TAB),  KC_A,        KC_S,        KC_D,        KC_F,        KC_G,
                   TD(TD_CAPS),     KC_Z,        KC_X,        KC_C,        KC_V,        KC_B,        KC_NO, 
                   KC_NO,           KC_NO,       KC_NO,       KC_LALT,     KC_NO,
                                                                                        TG(MDIA),    KC_INS,
                                                                                                     KC_MUTE,
                                                                           KC_SPC,      KC_BSPC,     KC_MPLY,
                   // right hand
                   KC_NO,           KC_6,        KC_7,        KC_8,        KC_9,        KC_0,        KC_EQL,
                   KC_MINS,         KC_Y,        KC_U,        KC_I,        KC_O,        KC_P,        KC_BSLS,
                                    KC_H,        KC_J,        KC_K,        KC_L,        KC_SCLN,     KC_QUOT,
                   TD(TD_BRACKETS), KC_N,        KC_M,        KC_COMM,     KC_DOT,      KC_SLSH,     RALT_T(KC_RGUI),
                                                 KC_LEFT,     KC_UP,       KC_DOWN,     KC_RGHT,     MO(SYMB),
                   KC_PSCR,         TG(SYMB),
                   KC_VOLU,
                   KC_VOLD,         KC_DEL,      KC_ENT
                 ),
	[SYMB] = LAYOUT_ergodox(  // layer 1: symbols
                   // left hand
                   KC_TRNS,         KC_F1,       KC_F2,       KC_F3,       TD(TD_F4_CLOSE),   KC_F5,        KC_TRNS,
                   KC_TRNS,         KC_EXLM,     KC_AT,       KC_LCBR,     KC_RCBR,           KC_PIPE,      KC_TRNS,
                   KC_TRNS,         KC_HASH,     KC_DLR,      KC_LPRN,     KC_RPRN,           KC_GRV,
                   KC_TRNS,         KC_PERC,     KC_CIRC,     KC_LBRC,     KC_RBRC,           KC_TILD,      KC_TRNS,
                   EEP_RST,         KC_TRNS,     KC_TRNS,     KC_TRNS,     KC_TRNS,
                                                                                              KC_TRNS,      KC_TRNS,
                                                                                                            KC_TRNS,
                                                                           RGB_VAD,           RGB_VAI,      KC_TRNS,
                  // right hand
                  KC_TRNS,          KC_F6,       KC_F7,       KC_F8,       KC_F9,             KC_F10,       KC_F11,
                  KC_TRNS,          KC_UP,       KC_7,        KC_8,        KC_9,              KC_ASTR,      KC_F12,
                                    KC_DOWN,     KC_4,        KC_5,        KC_6,              KC_PLUS,      KC_TRNS,
                  KC_TRNS,          KC_AMPR,     KC_1,        KC_2,        KC_3,              KC_BSLS,      KC_TRNS,
                                                 KC_TRNS,     KC_DOT,      KC_0,              KC_EQL,       KC_TRNS,
                  RGB_TOG,          KC_TRNS,
                  KC_TRNS,
                  KC_TRNS,          RGB_HUD,     RGB_HUI
                ),
	[MDIA] = LAYOUT_ergodox(  // layer 2: media keys
                   // left hand
                   KC_TRNS,         KC_TRNS,     KC_TRNS,     KC_TRNS,      KC_TRNS,    KC_TRNS,      RESET,
                   KC_TRNS,         KC_TRNS,     KC_TRNS,     KC_MS_U,      KC_TRNS,    KC_TRNS,      KC_TRNS,
                   KC_TRNS,         KC_TRNS,     KC_MS_L,     KC_MS_D,      KC_MS_R,    KC_TRNS,
                   KC_TRNS,         KC_TRNS,     KC_TRNS,     KC_TRNS,      KC_TRNS,    KC_TRNS,      KC_TRNS,
                   KC_TRNS,         KC_TRNS,     KC_TRNS,     KC_WBAK,      KC_WFWD,
                                                                                        KC_TRNS,      KC_TRNS,
                                                                                                      KC_TRNS,
                                                                            KC_BTN1,    KC_BTN2,      KC_TRNS,
                   // right hand
                   KC_TRNS,         KC_TRNS,     KC_TRNS,     KC_TRNS,      KC_TRNS,    KC_TRNS,      KC_TRNS,
                   KC_TRNS,         KC_TRNS,     KC_TRNS,     KC_TRNS,      KC_TRNS,    KC_TRNS,      KC_TRNS,
                                    KC_TRNS,     KC_TRNS,     KC_TRNS,      KC_TRNS,    KC_TRNS,      KC_MPLY,
                   KC_TRNS,         KC_TRNS,     KC_TRNS,     KC_MPRV,      KC_MNXT,    KC_TRNS,      KC_TRNS,
                                                 KC_VOLU,     KC_VOLD,      KC_MUTE,    KC_TRNS,      KC_TRNS,
                   KC_TRNS,         KC_TRNS,
                   KC_TRNS,
                   KC_TRNS,         KC_TRNS,     KC_TRNS
                 )
};
