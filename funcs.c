enum {
  TD_BRACKETS = 0,
  TD_F4_CLOSE,
  TD_CAPS
};

tap_dance_action_t tap_dance_actions[] = {
  [TD_BRACKETS] = ACTION_TAP_DANCE_DOUBLE(KC_LBRC, KC_RBRC),
  [TD_F4_CLOSE] = ACTION_TAP_DANCE_DOUBLE(KC_F4, LALT(KC_F4))
};

// customizing shorter tapping term for mod-tap keys (normal one for tap dance keys)
uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LCTL_T(KC_TAB):
            return TAPPING_TERM - 50;
        case RALT_T(KC_RGUI):
            return TAPPING_TERM - 100;
        default:
            return TAPPING_TERM;
    }
}
