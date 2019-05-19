#include <Arduino.h>
#include "phathd.h"
#include "text.h"

#define LED_PIN 2

uint8_t frame_len = 100;
bool* frame1 [100];

void print2dArray (bool *arry [7], uint8_t len) {
  for (uint8_t i = 0; i < len; i++) {
    printArray(arry[i]);
  }
  
}

void blink () {
  digitalWrite(LED_PIN, HIGH);
  delay(1000);
  digitalWrite(LED_PIN, LOW);
  delay(1000);
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED_PIN, OUTPUT);
  init_text();
  if (init_led()) {
    while (1);
  }
  frame_len = build_frame(frame1, frame_len, "hallo ");
  setScrollingFrame(frame1, frame_len);
  blink();
}

void loop() {
  scroll();
  delay(100);
  Serial.print(".");
}