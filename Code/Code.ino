#include <Arduino.h>
#include "phathd.h"
#include "text.h"
#include "owm_weather.h"

#define LED_PIN 2

uint8_t frame_len = 100;
bool* frame1 [100];

void print_2d_array (bool *arry [7], uint8_t len) {
  for (uint8_t i = 0; i < 99; i++) {
    print_array(arry[i]);
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
  init_weather();
  frame_len = 99; build_frame(frame1, frame_len, get_weather());
  Serial.printf("Frame built with length: %d\n", frame_len);Serial.flush();
  print_2d_array(frame1, frame_len);
  set_scrolling_frame(frame1, frame_len);
  blink();
}

void loop() {
  scroll();
  delay(100);
  Serial.println("Loop.");
}