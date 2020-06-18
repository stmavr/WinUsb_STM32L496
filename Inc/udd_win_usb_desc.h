#ifndef __UDD_WIN_USB_DESC_H
#define __UDD_WIN_USB_DESC_H
#include "usbd_def.h"

extern const unsigned char WinUsbMsft100StringDesc[0x12];
extern const unsigned char WinUsbCompIDDescriptor[0x28];
extern const unsigned char WinUsbExtPropsDescriptor[0x92+42];

#define USBD_IDX_MSFT100_STR 0xEE

#endif
