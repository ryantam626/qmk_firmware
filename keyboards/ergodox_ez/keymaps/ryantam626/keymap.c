#include QMK_KEYBOARD_H
#include "version.h"

//enum custom_keycodes {
//  RGB_SLD = EZ_SAFE_RANGE,
//};

#define KC_LCAG LALT(LCTL(KC_LEFT_GUI))

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {


    /*
     * ,--------------------------------------------------.    ,--------------------------------------------------.
     * |    0   |   1  |   2  |   3  |   4  |   5  |  6   |    |  38  |  39  |  40  |  41  |  42  |  43  |   44   |
     * |--------+------+------+------+------+------+------|    |------+------+------+------+------+------+--------|
     * |    7   |   8  |   9  |  10  |  11  |  12  |  13  |    |  45  |  46  |  47  |  48  |  49  |  50  |   51   |
     * |--------+------+------+------+------+------|      |    |      |------+------+------+------+------+--------|
     * |   14   |  15  |  16  |  17  |  18  |  19  |------|    |------|  52  |  53  |  54  |  55  |  56  |   57   |
     * |--------+------+------+------+------+------|  26  |    |  58  |------+------+------+------+------+--------|
     * |   20   |  21  |  22  |  23  |  24  |  25  |      |    |      |  59  |  60  |  61  |  62  |  63  |   64   |
     * `--------+------+------+------+------+-------------'    `-------------+------+------+------+------+--------'
     *   |  27  |  28  |  29  |  30  |  31  |                                |  65  |  66  |  67  |  68  |  69  |
     *   `----------------------------------'                                `----------------------------------'
     *                                       ,-------------.  ,-------------.
     *                                       |  32  |  33  |  |  70  |  71  |
     *                                ,------+------+------|  |------+------+------.
     *                                |      |      |  34  |  |  72  |      |      |
     *                                |  35  |  36  |------|  |------|  74  |  75  |
     *                                |      |      |  37  |  |  73  |      |      |
     *                                `--------------------'  `--------------------'
     */

[0] = LAYOUT_ergodox_pretty(
       KC_GRAVE,    KC_1,        KC_2,        KC_3,         KC_4,    KC_5, KC_LCBR,      KC_RCBR   , KC_6   , KC_7    , KC_8    , KC_9   , KC_0    , KC_BSPC       ,
         KC_TAB,    KC_Q,        KC_W,        KC_E,         KC_R,    KC_T, KC_LPRN,      KC_RPRN   , KC_Y   , KC_U    , KC_I    , KC_O   , KC_P    , LT(1,KC_BSLS) ,
LT(1,KC_ESCAPE),    KC_A,        KC_S,        KC_D,         KC_F,    KC_G,                           KC_H   , KC_J    , KC_K    , KC_L   , KC_SCLN , KC_QUOTE      ,
  KC_LEFT_SHIFT,    KC_Z,        KC_X,        KC_C,         KC_V,    KC_B, KC_LBRC,      KC_RBRC   , KC_N   , KC_M    , KC_COMMA, KC_DOT , KC_SLASH, KC_RIGHT_SHIFT,
          MO(2), _______, KC_LEFT_GUI, KC_LEFT_ALT, KC_LEFT_CTRL,                                             KC_MINUS, KC_EQUAL, _______, _______ , _______       ,

                                                                  _______, _______,      _______   , _______,
                                                                           KC_HOME,      KC_PAGE_UP,
                                                        KC_SPACE, KC_LCAG,  KC_END,      KC_PGDN   , KC_LBRC, KC_ENTER
),

[1] = LAYOUT_ergodox_pretty(
_______,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5, _______,      _______, KC_F6    , KC_F7  , KC_F8     , KC_F9   , KC_F10 , KC_DELETE,
_______, _______, _______, _______, _______, _______, _______,      _______, KC_INSERT, KC_PGDN, KC_PAGE_UP, _______ , _______, _______  ,
_______, _______, _______, _______, _______, _______,                        KC_LEFT  , KC_DOWN, KC_UP     , KC_RIGHT, _______, _______  ,
_______, _______, _______, _______, _______, _______, KC_HOME,      KC_END , _______  , _______, _______   , _______ , _______, _______  ,
_______, _______, _______, _______, _______,                                            KC_F11 , KC_F12    , _______ , _______, _______  ,

                                             _______, _______,      _______, _______  ,
                                                      _______,      _______,
                                    _______, _______, _______,      _______, _______  , _______
),
[2] = LAYOUT_ergodox_pretty(
_______, _______, _______, _______, _______, _______, _______,      _______, _______  , KC_NUM , KC_PSLS , KC_PAST , KC_PMNS, _______  ,
_______, _______, _______, _______, _______, _______, _______,      _______, _______  , KC_KP_7, KC_KP_8 , KC_KP_9 , KC_PPLS, _______  ,
_______, _______, _______, _______, _______, _______,                        _______  , KC_KP_4, KC_KP_5 , KC_KP_6 , KC_PPLS, _______  ,
_______, _______, _______, _______, _______, _______, _______,      _______, _______  , KC_KP_1, KC_KP_2 , KC_KP_3 , KC_PENT, _______  ,
_______, _______, _______, _______, _______,                                            KC_KP_0, KC_KP_0 , KC_PDOT , KC_PENT, _______  ,

                                             _______, _______,      _______, _______  ,
                                                      _______,      _______,
                                    _______, _______, _______,      _______, _______  , _______
)
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}
