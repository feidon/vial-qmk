/* Copyright 2021 qpockets
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "config_common.h"

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 12

#define MATRIX_ROW_PINS \
    { E6, B0, F4, F1 }
#define MATRIX_COL_PINS \
    { F0, D4, F5, B1, B2, B3, B7, D0, D1, D2, D3, B6 }


/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION COL2ROW

#define RGB_DI_PIN D5
#ifdef RGB_DI_PIN
#    define RGBLIGHT_ANIMATIONS
#    define RGBLED_NUM 13
#    define RGBLIGHT_HUE_STEP 8
#    define RGBLIGHT_SAT_STEP 8
#    define RGBLIGHT_VAL_STEP 8
#    define RGBLIGHT_SLEEP
#endif

#define DEBOUNCE 5

#define LOCKING_SUPPORT_ENABLE
