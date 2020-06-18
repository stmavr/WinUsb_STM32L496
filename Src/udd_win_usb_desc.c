#include "udd_win_usb_desc.h"

const unsigned char WinUsbMsft100StringDesc[0x12] =
{
  0x12, // bLength
	USB_DESC_TYPE_STRING,
	'M', 0,
	'S', 0,
	'F', 0,
	'T', 0,
	'1', 0,
	'0', 0,
	'0', 0,
	0x55, // Vendor code
	0x00  // bPad
};

const uint8_t WinUsbCompIDDescriptor[0x28] =
{
	0x28, 0x00, 0x00, 0x00,
	0x00, 0x01,
	0x04, 0x00,
	0x01,
	0,0,0,0,0,0,0,
	
	0,
	0,
	'W','I','N','U','S','B','\0','\0',
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,
};

const uint8_t WinUsbExtPropsDescriptor[0x92+42] =
{
	0x92+42, 0x00, 0x00, 0x00,
	0x00, 0x01,
	0x05, 0x00,
	0x02, 0x00,
	
	0x88, 0x00, 0x00, 0x00, // Size of the property section
	0x07, 0x00, 0x00, 0x00, // REG_MULTI_SZ
  
  0x2A, 0x00,             // Property name length (42 bytes)
	'D',  0,
  'e',  0,
  'v',  0,
  'i',  0,
  'c',  0,
  'e',  0,
  'I',  0,
  'n',  0,
  't',  0,
  'e',  0,
  'r',  0,
  'f',  0,
  'a',  0,
  'c',  0,
  'e',  0,
  'G',  0,
  'U',  0,
  'I',  0,
  'D',  0,
  's',  0,
  0x00, 0,
	
	80, 0x00, 0x00, 0x00, // Property data length (80 bytes)
	//{52F5619D-D8A4-42C4-B2F9-D19171C660A4}\0\0 (80 bytes)
  //DeviceIntefaceGUID = {07605B0B-4C0B-41A4-9409-42C1DC9B259F}
  '{',0,'5',0,'2',0,'F',0,'5',0,'6',0,'1',0,'9',0,'D',0,'-',0,'D',0,'8',0,'A',0,'4',0,'-',0,'4',0,'2',0,'C',0,'4',0,'-',0,'B',0,'2',0,'F',0,'9',0,'-',0,'D',0,'1',0,'9',0,'1',0,'7',0,'1',0,'C',0,'6',0,'6',0,'0',0,'A',0,'4',0,'}',0,'\0',0,'\0',0,
	
	42, 0x00, 0x00, 0x00, // Size of the property section (42 bytes)
	0x01, 0x00, 0x00, 0x00, // REG_SZ
  
	20, 0x00,             // Property name length (20 bytes)
	'C',  0,
  'l',  0,
  'a',  0,
  's',  0,
  's',  0,
  'N',  0,
  'a',  0,
  'm',  0,
  'e',  0,
  0x00, 0,
	
	8, 0x00, 0x00, 0x00, // Property data length (8 bytes)
	'S',  0,
  't',  0,
  'r',  0,
  0x00, 0,
};
