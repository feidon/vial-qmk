#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0001
#define MANUFACTURER    Don
#define PRODUCT         Fei

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 15

/* key matrix pins */
#define MATRIX_ROW_PINS { F1, F4, F5, F6, F7 }
#define MATRIX_COL_PINS { B5, B6, C6, C7, F0, E6, B0, D1, D2, D3, D5, D4, D6, D7, B4 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

#define DEBOUNCE 5
#define LOCKING_SUPPORT_ENABLE
#define LOCKING_RESYNC_ENABLE
