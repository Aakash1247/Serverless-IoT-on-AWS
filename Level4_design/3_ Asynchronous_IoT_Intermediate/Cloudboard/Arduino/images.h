//https://javl.github.io/image2cpp/

//#include <Wire.h>
//#include <Adafruit_GFX.h>
//#include <Adafruit_SSD1306.h>

//#define SCREEN_WIDTH 128 // OLED display width, in pixels
//#define SCREEN_HEIGHT 64 // OLED display height, in pixels
//#define OLED_RESET    -1 // Reset pin # (or -1 if sharing Arduino reset pin)

//Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

// Bitmap of cb_by_sdb Image
const unsigned char cb_by_sdb [] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0xff, 0xf0, 0x00, 0x00, 
  0x00, 0x00, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 
  0x00, 0x00, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x00, 
  0x00, 0x00, 0x07, 0xfb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x0f, 0xf0, 0x00, 
  0x00, 0x00, 0x07, 0xc0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x03, 0xf8, 0x00, 
  0x00, 0x00, 0x07, 0x18, 0x8f, 0xff, 0xff, 0x31, 0xff, 0xff, 0xff, 0xf3, 0xff, 0xe3, 0xfc, 0x00, 
  0x00, 0x00, 0x07, 0x1d, 0x9f, 0xff, 0xfe, 0x33, 0xff, 0xff, 0x3f, 0xe3, 0xfc, 0x63, 0xfe, 0x00, 
  0x00, 0x00, 0x06, 0x3f, 0x18, 0x00, 0x38, 0x60, 0x00, 0x01, 0x07, 0x83, 0xfc, 0x8c, 0x9f, 0x00, 
  0x00, 0x00, 0x06, 0x3f, 0x10, 0x70, 0x60, 0x60, 0x49, 0x93, 0x06, 0x27, 0xf8, 0x88, 0x1f, 0x80, 
  0x00, 0x00, 0x06, 0x1f, 0x32, 0x20, 0x60, 0x60, 0x01, 0x03, 0x06, 0x07, 0xf9, 0x88, 0x1f, 0x80, 
  0x00, 0x03, 0xff, 0x80, 0x00, 0x60, 0x00, 0x00, 0xc3, 0x00, 0x42, 0x03, 0xf0, 0x18, 0x0f, 0x80, 
  0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x3f, 0xc0, 
  0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x7f, 0xc0, 
  0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xff, 0xc0, 
  0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 
  0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 
  0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 
  0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 
  0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 
  0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 
  0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 
  0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 
  0x3c, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0x78, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 
  0x71, 0xe8, 0x04, 0x04, 0x02, 0x79, 0x80, 0xc7, 0x3e, 0x3c, 0xe0, 0x60, 0x18, 0x1e, 0x31, 0x88, 
  0x70, 0x1f, 0x1c, 0x7c, 0x72, 0x78, 0x8f, 0xc7, 0x3e, 0x00, 0xc6, 0x23, 0x13, 0x9c, 0x38, 0x9c, 
  0x78, 0x0f, 0x3c, 0x1c, 0x02, 0x00, 0x83, 0xc1, 0x3e, 0x00, 0x8f, 0x20, 0x10, 0x7c, 0x1c, 0x3c, 
  0x7f, 0x07, 0x3c, 0x1c, 0x06, 0x00, 0x83, 0xc8, 0x3e, 0x3c, 0x0f, 0x20, 0x38, 0x18, 0x1e, 0x3e, 
  0x3b, 0xc7, 0x3c, 0xfc, 0x7e, 0x78, 0x9f, 0xcc, 0x3e, 0x3c, 0x0e, 0x22, 0x3f, 0x88, 0x0e, 0x7e, 
  0x30, 0x0f, 0x3c, 0x04, 0x7e, 0x78, 0x80, 0xce, 0x3e, 0x00, 0xc0, 0x63, 0x10, 0x11, 0xc6, 0x7e, 
  0x3c, 0x1f, 0x3c, 0x06, 0x7e, 0x79, 0x80, 0xcf, 0x3e, 0x01, 0xf0, 0xe3, 0x98, 0x33, 0xc6, 0x7e, 
  0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 
  0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 
  0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 
  0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 
  0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 
  0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 
  0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 
  0x00, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x00, 
  0x00, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

// Bitmap of AWS Cloud Image
const unsigned char AWS_Cloud_Logo [] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x01, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0x8f, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x3f, 0xff, 0xfe, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x0f, 0xff, 0xfc, 0x1f, 0x8f, 0xc3, 0xf1, 0xf0, 0x07, 0xff, 0xff, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x1f, 0xff, 0xfc, 0x1f, 0x8f, 0xc3, 0xf1, 0xe0, 0x03, 0xff, 0xff, 0x80, 0x00, 0x00, 
  0x00, 0x00, 0x3f, 0xff, 0xfc, 0x0f, 0x8f, 0x83, 0xf1, 0xc1, 0xc3, 0xff, 0xff, 0xc0, 0x00, 0x00, 
  0x00, 0x00, 0x3f, 0xff, 0xf8, 0x8f, 0x87, 0x83, 0xe1, 0xc3, 0xe1, 0xff, 0xff, 0xc0, 0x00, 0x00, 
  0x00, 0x00, 0x7f, 0xff, 0xf8, 0x8f, 0x87, 0x83, 0xe3, 0xc7, 0xe1, 0xff, 0xff, 0xe0, 0x00, 0x00, 
  0x00, 0x00, 0xff, 0xff, 0xf8, 0x8f, 0xc7, 0x81, 0xe3, 0x87, 0xf1, 0xff, 0xff, 0xf0, 0x00, 0x00, 
  0x00, 0x00, 0xff, 0xff, 0xf8, 0xc7, 0xc7, 0x81, 0xe3, 0xc7, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 
  0x00, 0x00, 0xff, 0xff, 0xf1, 0xc7, 0xc7, 0x81, 0xe3, 0xc3, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x00, 
  0x00, 0x01, 0xff, 0xff, 0xf1, 0xc7, 0xc3, 0x91, 0xc3, 0xc1, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x00, 
  0x00, 0x01, 0xff, 0xff, 0xf1, 0xc7, 0xc3, 0x91, 0xc3, 0xe0, 0x3f, 0xff, 0xff, 0xfc, 0x00, 0x00, 
  0x00, 0x01, 0xff, 0xff, 0xe1, 0xc3, 0xc3, 0x18, 0xc7, 0xf0, 0x0f, 0xff, 0xff, 0xfc, 0x00, 0x00, 
  0x00, 0x03, 0xff, 0xff, 0xe3, 0xc3, 0xe3, 0x18, 0xc7, 0xf8, 0x03, 0xff, 0xff, 0xfc, 0x00, 0x00, 
  0x00, 0x03, 0xff, 0xff, 0xe3, 0xe3, 0xe3, 0x18, 0xc7, 0xff, 0x01, 0xff, 0xff, 0xfc, 0x00, 0x00, 
  0x00, 0x03, 0xff, 0xff, 0xc3, 0xe1, 0xe3, 0x38, 0x87, 0xff, 0xc1, 0xff, 0xff, 0xfc, 0x00, 0x00, 
  0x00, 0x03, 0xff, 0xff, 0xc0, 0x01, 0xe0, 0x3c, 0x8f, 0xff, 0xe1, 0xff, 0xff, 0xfc, 0x00, 0x00, 
  0x00, 0x03, 0xff, 0xff, 0xc0, 0x01, 0xf0, 0x3c, 0x0f, 0x87, 0xf0, 0xff, 0xff, 0xfc, 0x00, 0x00, 
  0x00, 0x03, 0xff, 0xff, 0xc0, 0x01, 0xf0, 0x3c, 0x0f, 0x87, 0xf0, 0xff, 0xff, 0xfc, 0x00, 0x00, 
  0x00, 0x01, 0xff, 0xff, 0x87, 0xf0, 0xf0, 0x3c, 0x0f, 0x87, 0xf1, 0xff, 0xff, 0xfc, 0x00, 0x00, 
  0x00, 0x01, 0xff, 0xff, 0x87, 0xf0, 0xf0, 0x7c, 0x0f, 0xc3, 0xe1, 0xff, 0xff, 0xf8, 0x00, 0x00, 
  0x00, 0x01, 0xff, 0xff, 0x8f, 0xf0, 0xf0, 0x7c, 0x1f, 0xc1, 0xc1, 0xff, 0xff, 0xf8, 0x00, 0x00, 
  0x00, 0x00, 0xff, 0xff, 0x0f, 0xf8, 0xf0, 0x7c, 0x1f, 0xe0, 0x03, 0xff, 0xff, 0xf8, 0x00, 0x00, 
  0x00, 0x00, 0xff, 0xff, 0x0f, 0xf8, 0x78, 0x7e, 0x1f, 0xf0, 0x07, 0xff, 0xff, 0xf0, 0x00, 0x00, 
  0x00, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x3f, 0xff, 0xff, 0xe0, 0x00, 0x00, 
  0x00, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 
  0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 
  0x00, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80, 0x00, 0x00, 
  0x00, 0x00, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

//void setup() {
  // initialize with the I2C addr 0x3C
 // display.begin(SSD1306_SWITCHCAPVCC, 0x3C);

  // Clear the buffer.
  //display.clearDisplay();

  // Display bitmap
  //display.drawBitmap(0, 0,  AWS_Cloud_Logo, 128, 64, WHITE);
  //display.display();
//}

//void loop() {
//}
