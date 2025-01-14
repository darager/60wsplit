/*
Copyright 2019 Reid Schneyer <reschneyer89@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

#define VENDOR_ID      0xFEED
#define PRODUCT_ID     0x6464
#define DEVICE_VER     0x0001
#define MANUFACTIRER   Rager Florian
#define PRODUCT        60wsplit

#define MATRIX_ROWS 10 // 5 rows per split half
#define MATRIX_COLS 8

/* key matrix pins */
#define MATRIX_ROW_PINS { B5, B4, D7, C6, D4 }
#define MATRIX_COL_PINS { B6, B2, B3, B1, F7, F6, F5, F4 }
#define MATRIX_ROW_PINS_RIGHT { B5, B4, D7, C6, D4 }
#define MATRIX_COL_PINS_RIGHT { B6, B2, B3, B1, F7, F6, F5, F4 }
#define UNUSED_PINS

#define DIODE_DIRECTION COL2ROW

/* define handedness (if Pin is HIGH -> left side) */
#define SPLIT_HAND_PIN E6

/* communication pin between the 2 halves */
#define SOFT_SERIAL_PIN D3 // or D1,  D2, D3, E6
