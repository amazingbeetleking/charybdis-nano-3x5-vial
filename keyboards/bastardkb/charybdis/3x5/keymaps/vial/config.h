#pragma once

#ifdef VIA_ENABLE
#    define DYNAMIC_KEYMAP_LAYER_COUNT 7

#    ifdef VIAL_ENABLE
#        define VIAL_KEYBOARD_UID \
            { 0x44, 0x9F, 0x26, 0x53, 0xD9, 0x7B, 0x72, 0x4F }
#        define VIAL_UNLOCK_COMBO_ROWS \
            { 0, 4 }
#        define VIAL_UNLOCK_COMBO_COLS \
            { 0, 0 }

#        define VIAL_TAP_DANCE_ENTRIES 32
#        define VIAL_COMBO_ENTRIES 32
#        define DYNAMIC_KEYMAP_MACRO_COUNT 32
#    endif // VIAL_ENABLE
#endif     // VIA_ENABLE

#define NO_ACTION_ONESHOT

#ifndef TAPPING_TERM
#    define TAPPING_TERM 200
#endif

#define TAPPING_FORCE_HOLD
#define PERMISSIVE_HOLD

// --- USB/Split detection ---
#define SPLIT_USB_DETECT
#define SPLIT_USB_TIMEOUT 2000
#define USB_WAIT_FOR_ENUMERATION

// --- Split serial stability fixes ---
// Lower speed for noisy/dirty TRRS connection (1=137kbps, 3=39kbps)
#define SELECT_SOFT_SERIAL_SPEED 3

// Never give up trying to reconnect to slave
#define SPLIT_MAX_CONNECTION_ERRORS 0

// Retry connection faster after dropout (default 500ms)
#define SPLIT_CONNECTION_CHECK_TIMEOUT 100

// Watchdog: reboots slave if master is silent for 2000ms
#define SPLIT_WATCHDOG_ENABLE
#define SPLIT_WATCHDOG_TIMEOUT 2000

// Larger USART timeout for RP2040 (default 20ms)
#define SERIAL_USART_TIMEOUT 50

// Force sync state more often (default 100ms)
#define FORCED_SYNC_THROTTLE_MS 50

#ifdef POINTING_DEVICE_ENABLE
// #define CHARYBDIS_AUTO_POINTER_LAYER_TRIGGER_ENABLE
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
