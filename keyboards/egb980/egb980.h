/* Copyright 2020 Engelbert
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
      k000, k001, k002, k003, k004, k005, k006, k007, k008, k009, k00a, k00b, k00c, k00d, k00e, k00f, k010, k011, k012, \
      k100, k101, k102, k103, k104, k105, k106, k107, k108, k109, k10a, k10b, k10c, k10d, k10e, k10f, k110, k111, k112, \
      k200, k201, k202, k203, k204, k205, k206, k207, k208, k209, k20a, k20b, k20c, k20d,       k20f, k210, k211, k212, \
      k300, k301, k302, k303, k304, k305, k306, k307, k308, k309, k30a, k30b,       k30d,       k30f, k310, k311, k312, \
      k400, k401, k402, k403, k404, k405, k406, k407, k408, k409, k40a,       k40c, k40d,       k40f, k410, k411, k412, \
      k500, k501, k502, k503,       k505,       k507,       k509, k50a, k50b, k50c, k50d,       k50f, k510, k511, k512  \
) \
{ \
    { k000, k001, k002, k003, k004, k005, k006, k007, k008, k009, k00a, k00b, k00c, k00d, k00e, k00f, k010, k011, k012 }, \
    { k100, k101, k102, k103, k104, k105, k106, k107, k108, k109, k10a, k10b, k10c, k10d, k10e, k10f, k110, k111, k112 }, \
    { k200, k201, k202, k203, k204, k205, k206, k207, k208, k209, k20a, k20b, k20c, k20d, KNO,  k20f, k210, k211, k212 },\
    { k300, k301, k302, k303, k304, k305, k306, k307, k308, k309, k30a, k30b, KNO,  k30d, KNO,  k30f, k310, k311, k312 }, \
    { k400, k401, k402, k403, k404, k405, k406, k407, k408, k409, k40a, KNO,  k40c, k40d, KNO,  k40f, k410, k411, k412 }, \
    { k500, k501, k502, k503, KNO,  k505, KNO,  k507, KNO,  k509, k50a, k50b, k50c, k50d, KNO,  k50f, k510, k511, k512 }  \
}
