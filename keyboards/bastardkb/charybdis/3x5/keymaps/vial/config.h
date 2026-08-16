#pragma once

#ifdef VIA_ENABLE
#    define DYNAMIC_KEYMAP_LAYER_COUNT 11

#    ifdef VIAL_ENABLE
#        define VIAL_KEYBOARD_UID \
            { 0x44, 0x9F, 0x26, 0x53, 0xD9, 0x7B, 0x72, 0x4F }
#        define VIAL_UNLOCK_COMBO_ROWS \
            { 0, 4 }
#        define VIAL_UNLOCK_COMBO_COLS \
            { 0, 0 }

#        define VIAL_TAP_DANCE_ENTRIES 32
#        define VIAL_COMBO_ENTRIES 48
#        define DYNAMIC_KEYMAP_MACRO_COUNT 48
#    endif // VIAL_ENABLE
#endif     // VIA_ENABLE

#define NO_ACTION_ONESHOT

#ifndef TAPPING_TERM
#    define TAPPING_TERM 200
#endif

#define TAPPING_FORCE_HOLD
#define PERMISSIVE_HOLD

// --- Фикс "левая половина не работает после включения ПК, помогает только переподключение USB" ---
// Явно включаем режим, в котором плата определяет, кто мастер, а кто слейв, слушая реальный USB-трафик
// от компьютера, а не просто факт наличия питания на разъёме (VBUS). Пока трафика нет - роль не назначается
// и связь между половинками не стартует, то есть клавиатура как бы "ждёт" перед полным включением.
// На ARM/RP2040 это и так включено по умолчанию, но пропишем явно, чтобы не зависеть от дефолтов.
#define SPLIT_USB_DETECT
// Сколько максимум ждать этого трафика перед тем как определить роль (мс). Чем больше - тем дольше
// пауза при включении, но тем меньше шанс словить гонку, если хост (комп) медленно поднимает USB при холодном старте.
#define SPLIT_USB_TIMEOUT 10000
#define SPLIT_USB_TIMEOUT_POLL 10
#define USB_SUSPEND_WAKEUP_DELAY 1000

// Мастер (правая половина) никогда не считает связь с левой "потерянной навсегда" и продолжает
// пытаться установить её на каждом цикле сканирования матрицы (сотни раз в секунду), пока есть питание -
// а не ждёт какой-то фиксированный тайм-аут, чтобы сдаться или перезагрузиться
#define SPLIT_MAX_CONNECTION_ERRORS 0

#define TAPPING_FORCE_HOLD
#define PERMISSIVE_HOLD

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
