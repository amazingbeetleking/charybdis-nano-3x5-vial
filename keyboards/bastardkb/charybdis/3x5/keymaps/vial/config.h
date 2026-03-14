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

#ifdef POINTING_DEVICE_ENABLE
// #define CHARYBDIS_AUTO_POINTER_LAYER_TRIGGER_ENABLE
#endif
