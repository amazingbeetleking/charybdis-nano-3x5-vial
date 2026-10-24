#pragma once

#ifdef VIA_ENABLE
#    define DYNAMIC_KEYMAP_LAYER_COUNT 9

#    ifdef VIAL_ENABLE
#        define VIAL_KEYBOARD_UID \
            { 0x44, 0x9F, 0x26, 0x53, 0xD9, 0x7B, 0x72, 0x4F }
#        define VIAL_UNLOCK_COMBO_ROWS \
            { 0, 4 }
#        define VIAL_UNLOCK_COMBO_COLS \
            { 0, 0 }

#        define VIAL_TAP_DANCE_ENTRIES 32
#        define VIAL_COMBO_ENTRIES 32
#        define VIAL_KEY_OVERRIDE_ENTRIES 32
#        define DYNAMIC_KEYMAP_MACRO_COUNT 32
#    endif // VIAL_ENABLE
#endif     // VIA_ENABLE

#define NO_ACTION_ONESHOT

#ifndef TAPPING_TERM
#    define TAPPING_TERM 200
#endif

#define TAPPING_FORCE_HOLD
#define PERMISSIVE_HOLD

// TT(слой): удержание — слой пока держишь, одно короткое нажатие — включить/выключить слой.
// В Vial то же самое: QMK Settings → Tap-Hold → Tapping Toggle.
#define TAPPING_TOGGLE 1

#ifdef POINTING_DEVICE_ENABLE
// #define CHARYBDIS_AUTO_POINTER_LAYER_TRIGGER_ENABLE

// Настройки скролла трекболом (раскомментируйте нужное):
// #define CHARYBDIS_DRAGSCROLL_REVERSE_Y        // инвертировать вертикальный скролл
// #define CHARYBDIS_DRAGSCROLL_REVERSE_X        // инвертировать горизонтальный скролл
// #define CHARYBDIS_DRAGSCROLL_BUFFER_SIZE 6    // больше = медленнее скролл (по умолчанию 6)
// #define CHARYBDIS_DRAGSCROLL_DPI 100          // DPI сенсора в режиме скролла (по умолчанию 100)
#endif

#ifdef RGB_MATRIX_ENABLE
#    undef RGB_MATRIX_MAXIMUM_BRIGHTNESS
#    define RGB_MATRIX_MAXIMUM_BRIGHTNESS 64
#    define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
#    define RGB_MATRIX_STARTUP_MODE RGB_MATRIX_CYCLE_LEFT_RIGHT
#    define RGB_MATRIX_STARTUP_SPD 32
#    define RGB_MATRIX_STARTUP_HUE 0
#    define RGB_MATRIX_STARTUP_SAT 255
#    define RGB_MATRIX_STARTUP_VAL RGB_MATRIX_MAXIMUM_BRIGHTNESS
#    define RGB_MATRIX_STARTUP_HSV RGB_MATRIX_STARTUP_HUE, RGB_MATRIX_STARTUP_SAT, RGB_MATRIX_STARTUP_VAL
#endif
