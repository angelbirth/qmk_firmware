/* Copyright 2020 angelbirth
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

#include "quantum.h"

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */

#define KNO KC_NO

#define LAYOUT_all( \
      k0a0, k0b0, k0a1, k0b1, k0a2, k0b2, k0a3, k0b3, k0a4, k0b4, k0a5, k0b5, k0a6, k0b6, k0a7,       \
      k1a0, k1b0, k1a1, k1b1, k1a2, k1b2, k1a3, k1b3, k1a4, k1b4, k1a5, k1b5, k1a6, k1b6, k1a7, k1b7, \
	  k2a0, k2b0, k2a1, k2b1, k2a2, k2b2, k2a3, k2b3, k2a4, k2b4, k2a5, k2b5, k2a6, k2b6, k2a7,       \
	  k3a0, k3b0, k3a1, k3b1, k3a2, k3b2, k3a3, k3b3, k3a4, k3b4, k3a5, k3b5, k3a6, k3b6,             \
	  k4a0, k4b0, k4a1, k4b1, k4a2, k4b2, k4a3, k4b3, k4a4, k4b4, k4a5, k4b5, k4a6, k4b6,             \
	  k5a0, k5b0, k5b1, k5a1, k5a2,       k5a3,       k5a4, k5b4, k5a5,       k5a6, k5b6, k5a7        \
) \
{ \
    { k0a0, k0a1, k0a2, k0a3, k0a4, k0a5, k0a6, k0a7 }, \
    { k0b0, k0b1, k0b2, k0b3, k0b4, k0b5, k0b6, KNO  }, \
	{ k1a0, k1a1, k1a2, k1a3, k1a4, k1a5, k1a6, k1a7 }, \
    { k1b0, k1b1, k1b2, k1b3, k1b4, k1b5, k1b6, k1b7 }, \
	{ k2a0, k2a1, k2a2, k2a3, k2a4, k2a5, k2a6, k2a7 }, \
    { k2b0, k2b1, k2b2, k2b3, k2b4, k2b5, k2b6, KNO  }, \
	{ k3a0, k3a1, k3a2, k3a3, k3a4, k3a5, k3a6, KNO  }, \
    { k3b0, k3b1, k3b2, k3b3, k3b4, k3b5, k3b6, KNO  }, \
	{ k4a0, k4a1, k4a2, k4a3, k4a4, k4a5, k4a6, KNO  }, \
    { k4b0, k4b1, k4b2, k4b3, k4b4, k4b5, k4b6, KNO  }, \
	{ k5a0, k5a1, k5a2, k5a3, k5a4, k5a5, k5a6, k5a7 }, \
    { k5b0, k5b1, KNO,  KNO,  k5b4, KNO,  k5b6, KNO  }  \
}
