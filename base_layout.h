[_COLEMAK] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_TAB ,    KC_Q,    KC_W,    KC_F,    KC_P,    KC_G,                        KC_J,    KC_L,    KC_U,    KC_Y,   KC_QUOT,  TO(_NAV),
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_DEL,     HOME_A,  HOME_R,  HOME_S,  HOME_T,  KC_D,                        KC_H,    HOME_N,  HOME_E,  HOME_I, HOME_O,   KC_SCLN,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_CAPS,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                        KC_K,    KC_M,    KC_COMM, KC_DOT, KC_SLSH,  KC_ESC,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
           LT(_SYM, KC_LBRC),   LT(_NUM, KC_LGUI),  ALGR_T(KC_BSPC),   LT(_FN, KC_ENT),   LT(_NAV, KC_SPC), LT(_EDIT, KC_ESC)
                                      //`--------------------------'  `--------------------------'

  ),

    //Work in process
  [_NUM] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, KC_MPRV, KC_MPLY, KC_MNXT, XXXXXXX, KC_SLEP,                      KC_PSLS, KC_7,    KC_8,    KC_9,    KC_PAST, KC_BSPC, 
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL, XXXXXXX, XXXXXXX, XXXXXXX, KC_SPC, KC_BSPC,                      KC_PDOT,  KC_4,    KC_5,    KC_6,    KC_PMNS, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT, DOFUS, XXXXXXX, XXXXXXX, XXXXXXX,LGUI(KC_E),                      KC_PCMM, KC_1,    KC_2,    KC_3,    KC_PPLS, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          XXXXXXX, XXXXXXX, XXXXXXX,     KC_NUBS,   KC_PEQL, KC_0
                                      //`--------------------------'  `--------------------------'
  ),

    //Work in process
  [_SYM] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, KC_EXLM, KC_UNDS, KC_AT,   KC_QUES, KC_TILD,                     KC_ASTR, KC_LBRC, KC_CIRC, KC_RBRC, KC_TILD, XXXXXXX, 
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, KC_LOPT, KC_LSFT, KC_LCTL, XXXXXXX,                     KC_QUES, KC_LPRN, KC_DLR,  KC_RPRN, KC_QUOT, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      RESET, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                       KC_PIPE, KC_LCBR, KC_HASH, KC_RCBR, KC_UNDS, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                         XXXXXXX, XXXXXXX, XXXXXXX,     KC_ENT, KC_SPC, KC_BSPC
                                      //`--------------------------'  `--------------------------'
  ),

    //Work in process
  [_EDIT] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, XXXXXXX, XXXXXXX, C(KC_F), XXXXXXX, XXXXXXX,                     KC_PSCR, XXXXXXX,      C(KC_UP),     RCS(KC_UP),   XXXXXXX, XXXXXXX, 
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, C(KC_Z), C(KC_X), C(KC_C), C(KC_V), XXXXXXX,                     XXXXXXX, C(KC_LEFT),   C(KC_DOWN),   C(KC_RGHT),   XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                     XXXXXXX, RCS(KC_LEFT), RCS(KC_DOWN), RCS(KC_RGHT), XXXXXXX, RESET,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                         XXXXXXX, XXXXXXX, KC_LGUI,     XXXXXXX, XXXXXXX, XXXXXXX
                                      //`--------------------------'  `--------------------------'
  ),

    //Work in process                   
  [_NAV] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_TAB,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                     KC_WH_U, XXXXXXX, KC_UP,   XXXXXXX, XXXXXXX, TO(_COLEMAK), 
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_LGUI, XXXXXXX,                     KC_WH_D, KC_LEFT, KC_DOWN, KC_RGHT, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                     KC_WH_L, KC_WH_R, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX
                                      //`--------------------------'  `--------------------------'
  ),

    //Work in process
  [_FN] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, XXXXXXX, XXXXXXX,  KC_TAB,   XXXXXXX, XXXXXXX,                  XXXXXXX, KC_F7, KC_F8, KC_F9, KC_F12, XXXXXXX, 
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_LGUI, KC_LCTRL, KC_LSHIFT, KC_LALT, XXXXXXX,                  XXXXXXX, KC_F4, KC_F5, KC_F6, KC_F11, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX,   XXXXXXX, XXXXXXX,                  XXXXXXX, KC_F1, KC_F2, KC_F2, KC_F10, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX
                                      //`--------------------------'  `--------------------------'
  ),

      //Work in process
  [_QWERTY] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                        KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,       TO(_COLEMAK), 
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_DEL,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                        KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,    S(KC_MINS),
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_CAPS, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                        KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,    KC_ESC,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
           LT(_SYM, KC_LBRC),   LT(_NUM, KC_LGUI),  ALGR_T(KC_BSPC),   LT(_FN, KC_ENT),   LT(_NAV, KC_SPC), LT(_EDIT, KC_ESC)
                                      //`--------------------------'  `--------------------------'
  ),

