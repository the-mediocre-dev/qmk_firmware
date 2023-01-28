#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_german.h"
#include "keymap_nordic.h"
#include "keymap_french.h"
#include "keymap_spanish.h"
#include "keymap_hungarian.h"
#include "keymap_swedish.h"
#include "keymap_br_abnt2.h"
#include "keymap_canadian_multilingual.h"
#include "keymap_german_ch.h"
#include "keymap_jp.h"
#include "keymap_korean.h"
#include "keymap_bepo.h"
#include "keymap_italian.h"
#include "keymap_slovenian.h"
#include "keymap_lithuanian_azerty.h"
#include "keymap_danish.h"
#include "keymap_norwegian.h"
#include "keymap_portuguese.h"
#include "keymap_contributions.h"
#include "keymap_czech.h"
#include "keymap_romanian.h"
#include "keymap_russian.h"
#include "keymap_uk.h"
#include "keymap_estonian.h"
#include "keymap_belgian.h"
#include "keymap_us_international.h"
#include "keymap_croatian.h"
#include "keymap_turkish_q.h"
#include "keymap_slovak.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL
#define LSA_T(kc) MT(MOD_LSFT | MOD_LALT, kc)
#define BP_NDSH_MAC ALGR(KC_8)
#define SE_SECT_MAC ALGR(KC_6)
#define MOON_LED_LEVEL LED_LEVEL

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  HSV_0_255_255,
  HSV_74_255_255,
  HSV_152_255_255,
};


enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_TAB,         LSFT(KC_TAB),   KC_X,           KC_Q,           OSL(4),         KC_HOME,        KC_END,                                         KC_PGUP,        KC_PGDOWN,      OSL(4),         KC_Z,           KC_J,           TD(DANCE_0),    TD(DANCE_1),    
    KC_TRANSPARENT, KC_TRANSPARENT, KC_U,           KC_F,           KC_P,           KC_TRANSPARENT, MO(6),                                          WEBUSB_PAIR,    KC_TRANSPARENT, KC_L,           KC_H,           KC_W,           KC_TRANSPARENT, KC_TRANSPARENT, 
    OSL(3),         KC_G,           KC_R,           KC_S,           KC_T,           KC_ESCAPE,      MO(5),                                                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_N,           KC_E,           KC_I,           KC_B,           OSL(3),         
    KC_TRANSPARENT, KC_K,           KC_D,           KC_O,           KC_V,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_M,           KC_A,           KC_C,           KC_Y,           KC_TRANSPARENT, 
    KC_LGUI,        KC_LALT,        KC_LSHIFT,      KC_LCTRL,       KC_SPACE,       KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_ENTER,       KC_RCTRL,       KC_RSHIFT,      KC_RALT,        KC_RGUI,        
    MO(1),          KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, TO(2)
  ),
  [1] = LAYOUT_moonlander(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_UP,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_LGUI,        KC_LALT,        KC_LSHIFT,      KC_LCTRL,       KC_NO,          KC_NO,                                                                          KC_NO,          KC_NO,          KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, 
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                                                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_TRANSPARENT, KC_NO,          KC_NO,                          KC_NO,          KC_NO,          KC_NO
  ),
  [2] = LAYOUT_moonlander(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          TO(0),                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_moonlander(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_PLUS,        KC_TILD,        KC_LABK,        KC_RABK,        KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_LBRACKET,    KC_RBRACKET,    KC_SCOLON,      KC_MINUS,       KC_NO,          
    KC_NO,          KC_EQUAL,       KC_DQUO,        KC_LPRN,        KC_RPRN,        KC_NO,          KC_NO,                                                                          KC_NO,          KC_NO,          KC_DOT,         KC_COMMA,       KC_COLN,        KC_UNDS,        KC_NO,          
    KC_NO,          KC_BSLASH,      KC_QUOTE,       KC_LCBR,        KC_RCBR,        KC_NO,                                          KC_NO,          KC_PIPE,        KC_QUOTE,       KC_GRAVE,       KC_SLASH,       KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                                                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,                          KC_NO,          KC_NO,          KC_NO
  ),
  [4] = LAYOUT_moonlander(
    KC_NO,          KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_F6,                                          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         KC_F12,         KC_NO,          
    KC_NO,          KC_NO,          KC_AMPR,        KC_ASTR,        KC_DLR,         KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_7,           KC_8,           KC_9,           KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_CIRC,        KC_QUES,        KC_EXLM,        KC_NO,          KC_NO,                                                                          KC_NO,          KC_NO,          KC_4,           KC_5,           KC_6,           KC_0,           KC_NO,          
    KC_NO,          KC_NO,          KC_HASH,        KC_PERC,        KC_AT,          KC_NO,                                          KC_NO,          KC_1,           KC_2,           KC_3,           KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                                                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,                          KC_NO,          KC_NO,          KC_NO
  ),
  [5] = LAYOUT_moonlander(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT,                                 KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT,                                                                 KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          HSV_0_255_255,  HSV_74_255_255, HSV_152_255_255,KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          RGB_MOD,                                                                                                        RGB_TOG,        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    RGB_VAD,        RGB_VAI,        TOGGLE_LAYER_COLOR,                RGB_SLD,        RGB_HUD,        RGB_HUI
  ),
  [6] = LAYOUT_moonlander(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_AUDIO_MUTE,  KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT,                                 KC_NO,          KC_NO,          KC_MEDIA_PLAY_PAUSE,KC_MEDIA_STOP,  KC_AUDIO_VOL_UP,KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                                          KC_NO,          KC_NO,          KC_MEDIA_PREV_TRACK,KC_MEDIA_NEXT_TRACK,KC_AUDIO_VOL_DOWN,KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                                                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,                          KC_NO,          KC_NO,          KC_NO
  ),
};


const uint16_t PROGMEM lsym_1[] = { KC_LCTRL, OSL(3), COMBO_END};
const uint16_t PROGMEM lsym_2[] = { KC_LSHIFT, OSL(3), COMBO_END};
const uint16_t PROGMEM lsym_3[] = { KC_LSHIFT, KC_LCTRL, OSL(3), COMBO_END};
const uint16_t PROGMEM lsym_4[] = { KC_LALT, OSL(3), COMBO_END};
const uint16_t PROGMEM lsym_5[] = { KC_LALT, KC_LCTRL, OSL(3), COMBO_END};
const uint16_t PROGMEM lsym_6[] = { KC_LALT, KC_LSHIFT, OSL(3), COMBO_END};
const uint16_t PROGMEM lsym_7[] = { KC_LALT, KC_LSHIFT, KC_LCTRL, OSL(3), COMBO_END};
const uint16_t PROGMEM lsym_8[] = { KC_LGUI, OSL(3), COMBO_END};
const uint16_t PROGMEM lsym_9[] = { KC_LGUI, KC_LCTRL, OSL(3), COMBO_END};
const uint16_t PROGMEM lsym_10[] = { KC_LGUI, KC_LSHIFT, OSL(3), COMBO_END};
const uint16_t PROGMEM lsym_11[] = { KC_LGUI, KC_LSHIFT, KC_LCTRL, OSL(3), COMBO_END};
const uint16_t PROGMEM lsym_12[] = { KC_LGUI, KC_LALT, OSL(3), COMBO_END};
const uint16_t PROGMEM lsym_13[] = { KC_LGUI, KC_LALT, KC_LCTRL, OSL(3), COMBO_END};
const uint16_t PROGMEM lsym_14[] = { KC_LGUI, KC_LALT, KC_LSHIFT, OSL(3), COMBO_END};
const uint16_t PROGMEM lsym_15[] = { KC_LGUI, KC_LALT, KC_LSHIFT, KC_LCTRL, OSL(3), COMBO_END};

const uint16_t PROGMEM rsym_1[] = { KC_RCTRL, OSL(3), COMBO_END};
const uint16_t PROGMEM rsym_2[] = { KC_RSHIFT, OSL(3), COMBO_END};
const uint16_t PROGMEM rsym_3[] = { KC_RSHIFT, KC_RCTRL, OSL(3), COMBO_END};
const uint16_t PROGMEM rsym_4[] = { KC_RALT, OSL(3), COMBO_END};
const uint16_t PROGMEM rsym_5[] = { KC_RALT, KC_RCTRL, OSL(3), COMBO_END};
const uint16_t PROGMEM rsym_6[] = { KC_RALT, KC_RSHIFT, OSL(3), COMBO_END};
const uint16_t PROGMEM rsym_7[] = { KC_RALT, KC_RSHIFT, KC_RCTRL, OSL(3), COMBO_END};
const uint16_t PROGMEM rsym_8[] = { KC_RGUI, OSL(3), COMBO_END};
const uint16_t PROGMEM rsym_9[] = { KC_RGUI, KC_RCTRL, OSL(3), COMBO_END};
const uint16_t PROGMEM rsym_10[] = { KC_RGUI, KC_RSHIFT, OSL(3), COMBO_END};
const uint16_t PROGMEM rsym_11[] = { KC_RGUI, KC_RSHIFT, KC_RCTRL, OSL(3), COMBO_END};
const uint16_t PROGMEM rsym_12[] = { KC_RGUI, KC_RALT, OSL(3), COMBO_END};
const uint16_t PROGMEM rsym_13[] = { KC_RGUI, KC_RALT, KC_RCTRL, OSL(3), COMBO_END};
const uint16_t PROGMEM rsym_14[] = { KC_RGUI, KC_RALT, KC_RSHIFT, OSL(3), COMBO_END};
const uint16_t PROGMEM rsym_15[] = { KC_RGUI, KC_RALT, KC_RSHIFT, KC_RCTRL, OSL(3), COMBO_END};

const uint16_t PROGMEM lnum_1[] = { KC_LCTRL, OSL(4), COMBO_END};
const uint16_t PROGMEM lnum_2[] = { KC_LSHIFT, OSL(4), COMBO_END};
const uint16_t PROGMEM lnum_3[] = { KC_LSHIFT, KC_LCTRL, OSL(4), COMBO_END};
const uint16_t PROGMEM lnum_4[] = { KC_LALT, OSL(4), COMBO_END};
const uint16_t PROGMEM lnum_5[] = { KC_LALT, KC_LCTRL, OSL(4), COMBO_END};
const uint16_t PROGMEM lnum_6[] = { KC_LALT, KC_LSHIFT, OSL(4), COMBO_END};
const uint16_t PROGMEM lnum_7[] = { KC_LALT, KC_LSHIFT, KC_LCTRL, OSL(4), COMBO_END};
const uint16_t PROGMEM lnum_8[] = { KC_LGUI, OSL(4), COMBO_END};
const uint16_t PROGMEM lnum_9[] = { KC_LGUI, KC_LCTRL, OSL(4), COMBO_END};
const uint16_t PROGMEM lnum_10[] = { KC_LGUI, KC_LSHIFT, OSL(4), COMBO_END};
const uint16_t PROGMEM lnum_11[] = { KC_LGUI, KC_LSHIFT, KC_LCTRL, OSL(4), COMBO_END};
const uint16_t PROGMEM lnum_12[] = { KC_LGUI, KC_LALT, OSL(4), COMBO_END};
const uint16_t PROGMEM lnum_13[] = { KC_LGUI, KC_LALT, KC_LCTRL, OSL(4), COMBO_END};
const uint16_t PROGMEM lnum_14[] = { KC_LGUI, KC_LALT, KC_LSHIFT, OSL(4), COMBO_END};
const uint16_t PROGMEM lnum_15[] = { KC_LGUI, KC_LALT, KC_LSHIFT, KC_LCTRL, OSL(4), COMBO_END};

const uint16_t PROGMEM rnum_1[] = { KC_RCTRL, OSL(4), COMBO_END};
const uint16_t PROGMEM rnum_2[] = { KC_RSHIFT, OSL(4), COMBO_END};
const uint16_t PROGMEM rnum_3[] = { KC_RSHIFT, KC_RCTRL, OSL(4), COMBO_END};
const uint16_t PROGMEM rnum_4[] = { KC_RALT, OSL(4), COMBO_END};
const uint16_t PROGMEM rnum_5[] = { KC_RALT, KC_RCTRL, OSL(4), COMBO_END};
const uint16_t PROGMEM rnum_6[] = { KC_RALT, KC_RSHIFT, OSL(4), COMBO_END};
const uint16_t PROGMEM rnum_7[] = { KC_RALT, KC_RSHIFT, KC_RCTRL, OSL(4), COMBO_END};
const uint16_t PROGMEM rnum_8[] = { KC_RGUI, OSL(4), COMBO_END};
const uint16_t PROGMEM rnum_9[] = { KC_RGUI, KC_RCTRL, OSL(4), COMBO_END};
const uint16_t PROGMEM rnum_10[] = { KC_RGUI, KC_RSHIFT, OSL(4), COMBO_END};
const uint16_t PROGMEM rnum_11[] = { KC_RGUI, KC_RSHIFT, KC_RCTRL, OSL(4), COMBO_END};
const uint16_t PROGMEM rnum_12[] = { KC_RGUI, KC_RALT, OSL(4), COMBO_END};
const uint16_t PROGMEM rnum_13[] = { KC_RGUI, KC_RALT, KC_RCTRL, OSL(4), COMBO_END};
const uint16_t PROGMEM rnum_14[] = { KC_RGUI, KC_RALT, KC_RSHIFT, OSL(4), COMBO_END};
const uint16_t PROGMEM rnum_15[] = { KC_RGUI, KC_RALT, KC_RSHIFT, KC_RCTRL, OSL(4), COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(lsym_1, LM(3, MOD_LCTL)),
    COMBO(lsym_2, LM(3, MOD_LSFT)),
    COMBO(lsym_3, LM(3, MOD_LSFT | MOD_LCTL)),
    COMBO(lsym_4, LM(3, MOD_LALT)),
    COMBO(lsym_5, LM(3, MOD_LALT | MOD_LCTL)),
    COMBO(lsym_6, LM(3, MOD_LALT | MOD_LSFT)),
    COMBO(lsym_7, LM(3, MOD_LALT | MOD_LSFT | MOD_LCTL)),
    COMBO(lsym_8, LM(3, MOD_LGUI)),
    COMBO(lsym_9, LM(3, MOD_LGUI | MOD_LCTL)),
    COMBO(lsym_10, LM(3, MOD_LGUI | MOD_LSFT)),
    COMBO(lsym_11, LM(3, MOD_LGUI |  MOD_LSFT | MOD_LCTL)),
    COMBO(lsym_12, LM(3, MOD_LGUI | MOD_LALT)),
    COMBO(lsym_13, LM(3, MOD_LGUI |  MOD_LALT | MOD_LCTL)),
    COMBO(lsym_14, LM(3, MOD_LGUI | MOD_LALT | MOD_LSFT)),
    COMBO(lsym_15, LM(3, MOD_LGUI | MOD_LALT | MOD_LSFT | MOD_LCTL)),
    COMBO(rsym_1, LM(3, MOD_RCTL)),
    COMBO(rsym_2, LM(3, MOD_RSFT)),
    COMBO(rsym_3, LM(3, MOD_RSFT | MOD_RCTL)),
    COMBO(rsym_4, LM(3, MOD_RALT)),
    COMBO(rsym_5, LM(3, MOD_RALT | MOD_RCTL)),
    COMBO(rsym_6, LM(3, MOD_RALT | MOD_RSFT)),
    COMBO(rsym_7, LM(3, MOD_RALT | MOD_RSFT | MOD_RCTL)),
    COMBO(rsym_8, LM(3, MOD_RGUI)),
    COMBO(rsym_9, LM(3, MOD_RGUI | MOD_RCTL)),
    COMBO(rsym_10, LM(3, MOD_RGUI | MOD_RSFT)),
    COMBO(rsym_11, LM(3, MOD_RGUI |  MOD_RSFT | MOD_RCTL)),
    COMBO(rsym_12, LM(3, MOD_RGUI | MOD_RALT)),
    COMBO(rsym_13, LM(3, MOD_RGUI |  MOD_RALT | MOD_RCTL)),
    COMBO(rsym_14, LM(3, MOD_RGUI | MOD_RALT | MOD_RSFT)),
    COMBO(rsym_15, LM(3, MOD_RGUI | MOD_RALT | MOD_RSFT | MOD_RCTL)),
    COMBO(lnum_1, LM(4, MOD_LCTL)),
    COMBO(lnum_2, LM(4, MOD_LSFT)),
    COMBO(lnum_3, LM(4, MOD_LSFT | MOD_LCTL)),
    COMBO(lnum_4, LM(4, MOD_LALT)),
    COMBO(lnum_5, LM(4, MOD_LALT | MOD_LCTL)),
    COMBO(lnum_6, LM(4, MOD_LALT | MOD_LSFT)),
    COMBO(lnum_7, LM(4, MOD_LALT | MOD_LSFT | MOD_LCTL)),
    COMBO(lnum_8, LM(4, MOD_LGUI)),
    COMBO(lnum_9, LM(4, MOD_LGUI | MOD_LCTL)),
    COMBO(lnum_10, LM(4, MOD_LGUI | MOD_LSFT)),
    COMBO(lnum_11, LM(4, MOD_LGUI |  MOD_LSFT | MOD_LCTL)),
    COMBO(lnum_12, LM(4, MOD_LGUI | MOD_LALT)),
    COMBO(lnum_13, LM(4, MOD_LGUI |  MOD_LALT | MOD_LCTL)),
    COMBO(lnum_14, LM(4, MOD_LGUI | MOD_LALT | MOD_LSFT)),
    COMBO(lnum_15, LM(4, MOD_LGUI | MOD_LALT | MOD_LSFT | MOD_LCTL)),
    COMBO(rnum_1, LM(4, MOD_RCTL)),
    COMBO(rnum_2, LM(4, MOD_RSFT)),
    COMBO(rnum_3, LM(4, MOD_RSFT | MOD_RCTL)),
    COMBO(rnum_4, LM(4, MOD_RALT)),
    COMBO(rnum_5, LM(4, MOD_RALT | MOD_RCTL)),
    COMBO(rnum_6, LM(4, MOD_RALT | MOD_RSFT)),
    COMBO(rnum_7, LM(4, MOD_RALT | MOD_RSFT | MOD_RCTL)),
    COMBO(rnum_8, LM(4, MOD_RGUI)),
    COMBO(rnum_9, LM(4, MOD_RGUI | MOD_RCTL)),
    COMBO(rnum_10, LM(4, MOD_RGUI | MOD_RSFT)),
    COMBO(rnum_11, LM(4, MOD_RGUI |  MOD_RSFT | MOD_RCTL)),
    COMBO(rnum_12, LM(4, MOD_RGUI | MOD_RALT)),
    COMBO(rnum_13, LM(4, MOD_RGUI |  MOD_RALT | MOD_RCTL)),
    COMBO(rnum_14, LM(4, MOD_RGUI | MOD_RALT | MOD_RSFT)),
    COMBO(rnum_15, LM(4, MOD_RGUI | MOD_RALT | MOD_RSFT | MOD_RCTL))
};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {

    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
    case HSV_0_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(0,255,255);
      }
      return false;
    case HSV_74_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(74,255,255);
      }
      return false;
    case HSV_152_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(152,255,255);
      }
      return false;
  }
  return true;
}

typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[2];

uint8_t dance_step(qk_tap_dance_state_t *state);

uint8_t dance_step(qk_tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(qk_tap_dance_state_t *state, void *user_data);
void dance_0_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_0_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_0(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_DELETE);
        tap_code16(KC_DELETE);
        tap_code16(KC_DELETE);
    }
    if(state->count > 3) {
        tap_code16(KC_DELETE);
    }
}

void dance_0_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(KC_DELETE); break;
        case SINGLE_HOLD: register_code16(LALT(KC_DELETE)); break;
        case DOUBLE_TAP: register_code16(KC_DELETE); register_code16(KC_DELETE); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_DELETE); register_code16(KC_DELETE);
    }
}

void dance_0_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(KC_DELETE); break;
        case SINGLE_HOLD: unregister_code16(LALT(KC_DELETE)); break;
        case DOUBLE_TAP: unregister_code16(KC_DELETE); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_DELETE); break;
    }
    dance_state[0].step = 0;
}
void on_dance_1(qk_tap_dance_state_t *state, void *user_data);
void dance_1_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_1_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_1(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_BSPACE);
        tap_code16(KC_BSPACE);
        tap_code16(KC_BSPACE);
    }
    if(state->count > 3) {
        tap_code16(KC_BSPACE);
    }
}

void dance_1_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(KC_BSPACE); break;
        case SINGLE_HOLD: register_code16(LALT(KC_BSPACE)); break;
        case DOUBLE_TAP: register_code16(KC_BSPACE); register_code16(KC_BSPACE); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_BSPACE); register_code16(KC_BSPACE);
    }
}

void dance_1_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(KC_BSPACE); break;
        case SINGLE_HOLD: unregister_code16(LALT(KC_BSPACE)); break;
        case DOUBLE_TAP: unregister_code16(KC_BSPACE); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_BSPACE); break;
    }
    dance_state[1].step = 0;
}

qk_tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
};
