#ifndef __text_h__
#define __text_h__

#include <Arduino.h>
#include <string.h>

struct character {
  bool *matrix [5];
  uint8_t size;
};

void init_text ();
uint8_t build_frame (bool *_scrollingFrame [], uint8_t _scrollingFrameLen, char *str, uint8_t str_len = 0);

#endif