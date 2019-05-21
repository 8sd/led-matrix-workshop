#include "phathd.h"

Adafruit_IS31FL3731 ledmatrix = Adafruit_IS31FL3731(16,9);
uint8_t brightness = 5;

bool* frame [17];
bool scrollingFrameSet = false;
uint8_t frameLength = 0;
uint8_t scrollingStep = 0;
bool* scrollingFrame [100];


void print_array (bool arry [7]){
  char str [32];
  uint8_t arr [7];//={0};
  for (size_t i = 0; i < 7; i++)
  {
    arr[i]=arry[i]?1:0;
  }
  
  sprintf(str, "{%d, %d, %d, %d, %d, %d, %d}", arr[0], arr[1], arr[2], arr[3], arr[4], arr[5], arr[6]);
  Serial.print(str);
  Serial.print('\n');
  Serial.flush();
}

bool init_led () {
  return !ledmatrix.begin();
}

bool init_led (uint8_t _brightness) {
  brightness = _brightness;
  return !ledmatrix.begin();
}

void set_brightness (uint8_t _brightness) {
  brightness = _brightness;
}

void set_pixel (uint8_t x, uint8_t y, uint8_t val) {
  if (x > 16 || y > 6) {
    return;
  }
  if (x == 2 && y == 6)
    return;
    
  if (x <= 8) {
    x = 8 - x;
  } else {
    x = x - 9;
    y = 14 - y;
  }

  ledmatrix.drawPixel(y, x, val);
}

void set_frame (bool* _frame [17]) {
  for (size_t i = 0; i < 17; i++) {
    frame[i] = _frame[i];
  }
  display_frame();
}

void display_frame () {
  ledmatrix.clear();
  for (size_t i = 0; i < 17; i++) {
    for (size_t j = 0; j < 7; j++) {
      if (frame [i][j]) {
        set_pixel(i, j, brightness);
      } else {
        set_pixel(i, j, 0);
      }
    }
  }
}

void set_scrolling_frame (bool *_scrollingFrame [], uint8_t _frameLength){
  scrollingFrameSet = true;
  for (size_t i = 0; i < _frameLength; i++) {
    scrollingFrame[i] = _scrollingFrame[i];
  }
  frameLength = _frameLength;
}

void scroll (uint8_t steps) {
  if(!scrollingFrameSet)
    return;
  
  scrollingStep += steps;

  for (size_t i = 0; i < 17; i++) {
    frame [i] = scrollingFrame [(i + scrollingStep) % frameLength];
  }

  /*if (scrollingStep % 32 == 0) {
    ledmatrix.begin();
    Serial.print(";");
  }*/

  display_frame();
}
