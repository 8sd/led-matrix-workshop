#ifndef __phathd_h__
#define __phathd_h__

#include <Arduino.h>
#include <Adafruit_GFX.h>
#include <Adafruit_IS31FL3731.h>

bool init_led ();
bool init_led (uint8_t _brightness);

void setPixel (uint8_t x, uint8_t y, uint8_t val);
void displayFrame ();

void scroll (uint8_t steps = 1);

void setFrame (bool* frame [17]);
void setScrollingFrame (bool *_scrollingFrame [], uint8_t _frameLength);
void setBrightness (uint8_t _brightness);
#endif