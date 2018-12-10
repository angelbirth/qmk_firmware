#pragma once

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0xE050
#define DEVICE_VER      0x0001
/* in python2: list(u"whatever".encode('utf-16-le')) */
/*   at most 32 characters or the ugly hack in usb_main.c works */

//  Modified by Xydane
#define MANUFACTURER "angelbirth"
//#define USBSTR_MANUFACTURER    'T', '\x00', 'M', '\x00', 'K', '\x00', ' ', '\x00', '\xc6', '\x00'
#define PRODUCT "egb50"
//#define USBSTR_PRODUCT         'C', '\x00', 'h', '\x00', 'i', '\x00', 'b', '\x00', 'i', '\x00', 'O', '\x00', 'S', '\x00', ' ', '\x00', 'Q', '\x00', 'M', '\x00', 'K', '\x00'
#define DESCRIPTION "QMK keyboard firmware with ChibiOS"

/* key matrix size */
//  Modified by Xydane
#define MATRIX_ROWS 4
#define MATRIX_COLS 13
#define MATRIX_COL_PINS { A5, A4, A3, B1, A2, B10, B11, B5, B12, B4, B13, A15, B14 }
#define MATRIX_ROW_PINS { A8, B15, A7, B0 }

#define DIODE_DIRECTION COL2ROW

// Iso fix for Space Cadet, comment for ANSI layouts
//#define LSPO_KEY KC_8
//#define RSPC_KEY KC_9
