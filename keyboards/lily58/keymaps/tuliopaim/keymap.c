#include QMK_KEYBOARD_H
#include <stdio.h>

// Each layer gets a name for readability. These should be in sequential order.
#define _BASE 0
#define _FN1 1
#define _FN2 2
#define _FN3 3

// Defines for layer movement and readability
#define _______ KC_TRNS
#define XXXXXXX KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_BASE] = LAYOUT(

 // ,--------------------------------------------.                        .------------------------------------------------------.
     KC_ESC   , KC_1 , KC_2 , KC_3 , KC_4 , KC_5                          , KC_6  , KC_7 , KC_8,     KC_9   ,  KC_0    , KC_GRV  ,
 // |---------+------+------+------+------+------|                        |-------+------+---------+--------+----------+---------|
     KC_TAB   , KC_Q , KC_W , KC_E , KC_R , KC_T                          , KC_Y  , KC_U , KC_I    , KC_O   , KC_P     , KC_MINS ,
 // |---------+------+------+------+------+------|                        |-------+------+---------+--------+----------+---------|
     KC_LSFT  , KC_A , KC_S , KC_D , KC_F , KC_G                          , KC_H  , KC_J , KC_K    , KC_L   , KC_SCLN  , KC_QUOT ,
 // |---------+------+------+------+------+------|---------.    ,---------|-------+------+---------+--------+----------+---------|
     KC_LCTL  , KC_Z , KC_X , KC_C , KC_V , KC_B , KC_LBRC      , KC_BSPC , KC_N  , KC_M , KC_COMM , KC_DOT ,  KC_SLSH , KC_ENT  ,
 // |---------+------+------+------+------+------|---------/    \---------|-------+------+---------+--------+----------+---------|
                      KC_LALT , KC_LGUI , MO(1) , KC_SPC       , KC_ENT  , MO(2) ,  KC_LALT , KC_PSCR
 //                 |---------+---------+-------+---------/    \---------+-------+----------+---------|

    ),

    [_FN1] = LAYOUT(

 // .----------------------------------------------------------------------.                        .------------------------------------------------------------------------.
     _______ , KC_F1        , KC_F2   , KC_F3       , KC_F4      , KC_F5                            , KC_F6   , KC_F7   , KC_F8   , KC_F9   , _______       , RSA(KC_GRV)    ,
 // |--------+--------------+---------+-------------+------------+---------|                        |---------+---------+---------+---------+---------------+----------------|
     KC_CAPS , OSM(MOD_MEH) , KC_UP   , RSA(KC_GRV) , RALT(KC_6) , _______                          , KC_F10  , KC_F11  , KC_F12  , KC_LBRC , KC_RBRC       , KC_EQL         ,
 // |--------+--------------+---------+-------------+------------+---------|                        |---------+---------+---------+---------+---------------+----------------|
     _______ , KC_LEFT      , KC_DOWN , KC_RGHT     , _______    , _______                          , KC_LEFT , KC_DOWN , KC_UP   , KC_RGHT , RALT(KC_COMM) , RALT(KC_QUOT)  ,
 // |--------+--------------+---------+-------------+------------+---------|---------.    .---------|---------+---------+---------+---------+---------------+----------------|
     _______ , _______      , _______ , _______     , _______    , _______ , _______      , KC_DEL  , KC_HOME , KC_PGDN , KC_PGUP , KC_END  , KC_BSLS       , _______        ,
 // |--------+--------------+---------+-------------+------------+---------|---------/    \---------|---------+---------+---------+---------+---------------+----------------|
                                                 _______ , _______ , TO(0) , _______      , _______ , _______ , _______ , _______
 //                                             |--------+---------+-------+---------/    \---------+---------+---------+---------|

    ),

    [_FN2] = LAYOUT(

 // .----------------------------------------------------------.                        .--------------------------------------------------------------------.
     _______ , _______ , _______ , _______ , _______ , _______                          , _______ , _______  , _______ , _______ , _______ , QK_BOOT         ,
 // |--------+---------+---------+---------+---------+---------|                        |---------+----------+---------+---------+---------+-----------------|
     _______ , _______ , KC_MS_U , _______ , KC_MPRV , KC_MNXT                          , KC_BTN1 , KC_BTN2  , _______ , _______ , _______ , QK_CLEAR_EEPROM ,
 // |--------+---------+---------+---------+---------+---------|                        |---------+----------+---------+---------+---------+-----------------|
     _______ , KC_MS_L , KC_MS_D , KC_MS_R , KC_MPLY , KC_MSTP                          , KC_WH_L , KC_WH_D  , KC_WH_U , KC_WH_R , _______ , _______         ,
 // |--------+---------+---------+---------+---------+---------|---------.    .---------|---------+----------+---------+---------+---------+-----------------|
     _______ , _______ , _______ , KC_MUTE , KC_VOLD , KC_VOLU , _______      , _______ , _______ , _______  , _______ , _______ , _______ , _______         ,
 // |--------+---------+---------+---------+---------+---------|---------/    \---------|---------+----------+---------+---------+---------+-----------------|
                                     _______ , _______ , TO(0) , _______      , _______ , _______ , _______ , _______
//                                  |--------+---------+-------+---------/    \---------+---------+---------+---------|

    )
};

