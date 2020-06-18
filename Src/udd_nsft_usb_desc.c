#include "udd_nsft_usb_desc.h"

#define USBD_VID     0xACCA
#define USBD_PID     0x8931

const unsigned char NsftDeviceDesc[0x12] =
{
  0x12,                      // bLength
  USB_DESC_TYPE_DEVICE,      // bDescriptorType
  0x00,                      // bcdUSB lsb
  0x02,                      // bcdUSB msb
  0xFF,                      // bDeviceClass: vendor specific
  0xFF,                      // bDeviceSubClass: vendor specific
  0xFF,                      // bDeviceProtocol: vendor specific
  USB_MAX_EP0_SIZE,          // bMaxPacketSize
  LOBYTE(USBD_VID),          // VID lsb
  HIBYTE(USBD_VID),          // VID msb
  LOBYTE(USBD_PID),          // PID lsb
  HIBYTE(USBD_PID),          // PID msb
  0x02,                      // bcdDevice lsb
  0x01,                      // bcdDevice msb
  USBD_IDX_MFC_STR,          // Index of manufacturer string
  USBD_IDX_PRODUCT_STR,      // Index of product string
  USBD_IDX_SERIAL_STR,       // Index of serial number string
  1                          // bNumConfigurations
};

const unsigned char NsftConfDesc[0x20] =
{
  // Configuration Descriptor
  0x09,                    // bLength
  USB_DESC_TYPE_CONFIGURATION,  // bDescriptorType = Configuration
  0x20,                    // wTotalLength low
  0x00,                    // wTotalLength high
  0x01,                    // bNumInterfaces
  0x01,                    // bConfigurationValue
  0x00,                    // iConfiguration
  0x80,                    // bmAttributes: bus powered, no remote wakeup
  0xFA,                    // bMaxPower = 500 mA 
  
  // Interface Descriptor
  0x09,                    // bLength
  USB_DESC_TYPE_INTERFACE, // bDescriptorType = Interface
  0x00,                    // bInterfaceNumber: Number of Interface
  0x00,                    // bAlternateSetting: Alternate setting
  0x02,                    // bNumEndpoints: Two endpoints used
  0xFF,                    // bInterfaceClass: vendor specific
  0xFF,                    // bInterfaceSubClass: vendor specific
  0xFF,                    // bInterfaceProtocol: vendor specific
  0x00,                    // iInterface
  
  // Endpoint Descriptor (OUT)
  0x07,                    // bLength: Endpoint Descriptor size
  USB_DESC_TYPE_ENDPOINT,  // bDescriptorType: Endpoint
  0x01,         			     // bEndpointAddress
  0x02,                    // bmAttributes: Bulk
  0x40,                    // wMaxPacketSize low
  0x00,                    // wMaxPacketSize high
  0x00,                    // bInterval
  
  // Endpoint Descriptor (IN)
  0x07,                    // bLength: Endpoint Descriptor size
  USB_DESC_TYPE_ENDPOINT,  // bDescriptorType: Endpoint
  0x81,               		 // bEndpointAddress
  0x02,                    // bmAttributes: Bulk
  0x40,                    // wMaxPacketSize low
  0x00,                    // wMaxPacketSize high
  0x00,                    // bInterval
};

const unsigned char NsftManufacturerStringDesc[0x1E] =
{
  0x1E, // bLength
	USB_DESC_TYPE_STRING,
	'N',  0,
	'e',  0,
	'u',  0,
	'r',  0,
	'o',  0,
	's',  0,
	'o',  0,
  'f',  0,
  't',  0,
	' ',  0,
	'L',  0,
	't',  0,
  'd',  0,
  '.',  0,
};

const unsigned char NsftLangIDStringDesc[0x04] =
{
  0x04, // bLength
  USB_DESC_TYPE_STRING,       
  LOBYTE(1033),
  HIBYTE(1033), 
};

const unsigned char NsftProductStringDesc[16] =
{
  16, // bLength
	USB_DESC_TYPE_STRING, // UroDynamicsDevice
	'S',  0,
	'n',  0,
	'o',  0,
	'r',  0,
	'l',  0,
	'e',  0,
	'x',  0,
};

const unsigned char NsftSerialStringDesc[18] =
{
	18,
  USB_DESC_TYPE_STRING,
  '1',  0,
  '2',  0,
  '3',  0,
  '4',  0,
  '5',  0,
  '6',  0,
  '7',  0,
  '8',  0,
};
