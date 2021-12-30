[_COLEMAK] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX , TD(TD_Q_TAB),   KC_W,   KC_F,   KC_P,   KC_G,                   KC_J,    KC_L,    KC_U,    KC_Y,   KC_QUOT,  XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX,  KC_A,           HOME_R, HOME_S, HOME_T, KC_D,                   KC_H,    HOME_N,  HOME_E,  HOME_I, HOME_O,   XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX,  HOME_Z,         KC_X,   KC_C,   KC_V,   KC_B,                   KC_K,    KC_M,    TD(TD_COMM_SCLN), KC_DOT, TD(TD_SLSH_ESC),  XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
            XXXXXXX,   LT(_NUM, KC_LGUI),  ALGR_T(KC_BSPC),            LT(_SYM, KC_ENT),   LT(_NAV, KC_SPC), XXXXXXX
                                      //`--------------------------'  `--------------------------'
  ),

    //Work in process
  [_NUM] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, KC_MPRV, KC_MPLY, KC_MNXT, XXXXXXX, KC_PSCR,                      XXXXXXX, KC_7,    KC_8,    KC_9,    XXXXXXX,  XXXXXXX, 
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_VOLD, KC_MUTE, KC_VOLU, XXXXXXX, XXXXXXX,                      S(KC_8), KC_4,    KC_5,    KC_6,    KC_PMNS, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, RESET, XXXXXXX, XXXXXXX, KC_CALC,LGUI(KC_E),                      S(KC_6), KC_1,    KC_2,    KC_3,    KC_PPLS, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                    XXXXXXX, XXXXXXX, XXXXXXX,         KC_0,   LT(_FN, KC_EQL), XXXXXXX
                                      //`--------------------------'  `--------------------------'
  ),

  //Work in process                
  [_NAV] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                     KC_WH_U, XXXXXXX, KC_UP,   XXXXXXX, XXXXXXX, XXXXXXX, 
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_DEL,  XXXXXXX,                      KC_WH_D, KC_LEFT, KC_DOWN, KC_RGHT, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                     KC_WH_L, KC_WH_R, XXXXXXX, XXXXXXX, RESET,   XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                            XXXXXXX, LT(_FN, XXXXXXX), KC_BSPC,        XXXXXXX, XXXXXXX, XXXXXXX
                                      //`--------------------------'  `--------------------------'
  ),

    //Work in process
  [_SYM] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, KC_EXLM, KC_UNDS, KC_AT,   XXXXXXX, XXXXXXX,                     KC_ASTR, KC_LBRC, KC_CIRC, KC_RBRC, KC_GRV, XXXXXXX, 
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, S(KC_5), S(KC_7), XXXXXXX, XXXXXXX,                     KC_NUBS, KC_LPRN, KC_DLR,  KC_RPRN, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, DM_REC1, DM_PLY1, XXXXXXX, XXXXXXX, XXXXXXX,                     KC_PIPE, KC_LCBR, KC_HASH, KC_RCBR, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                    XXXXXXX, XXXXXXX, XXXXXXX,         XXXXXXX, XXXXXXX, XXXXXXX
                                      //`--------------------------'  `--------------------------'
  ),

    //Work in process
  [_EDIT] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, XXXXXXX, XXXXXXX, C(KC_F), XXXXXXX, XXXXXXX,                     KC_PSCR, XXXXXXX,      C(KC_UP),     RCS(KC_UP),   XXXXXXX, XXXXXXX, 
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, C(KC_Z), C(KC_X), C(KC_C), C(KC_V), XXXXXXX,                     XXXXXXX, C(KC_LEFT),   C(KC_DOWN),   C(KC_RGHT),   XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                     XXXXXXX, RCS(KC_LEFT), RCS(KC_DOWN), RCS(KC_RGHT), XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                    XXXXXXX, XXXXXXX, XXXXXXX,         XXXXXXX, XXXXXXX, XXXXXXX
                                      //`--------------------------'  `--------------------------'
  ),

  

    //Work in process
  [_FN] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, KC_TAB, XXXXXXX, XXXXXXX, XXXXXXX, KC_ESC,                       XXXXXXX, KC_F7, KC_F8, KC_F9, KC_F10, XXXXXXX, 
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_DEL, KC_LALT, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, KC_F4, KC_F5, KC_F6, KC_F11, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_CAPS, XXXXXXX, XXXXXXX, XXXXXXX, KC_SLEP,                     XXXXXXX, KC_F1, KC_F2, KC_F3, KC_F12, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                    XXXXXXX, XXXXXXX, XXXXXXX,         XXXXXXX, XXXXXXX, XXXXXXX
                                      //`--------------------------'  `--------------------------'
  ),