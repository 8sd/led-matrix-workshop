#ifndef __phathd_h__
#define __phathd_h__

#include <Arduino.h>
#include <Adafruit_GFX.h>
#include <Adafruit_IS31FL3731.h>

bool init_led ();
bool init_led (uint8_t _brightness);

void set_pixel (uint8_t x, uint8_t y, uint8_t val);
void display_frame ();

void scroll (uint8_t steps = 1);

void set_frame (bool* frame [17]);
void set_scrolling_frame (bool *_scrollingFrame [], uint8_t _frameLength);
void set_brightness (uint8_t _brightness);

void print_array (bool arry [7]);
#endif