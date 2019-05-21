#include <Arduino.h>
#include "phathd.h"
#include "text.h"
#include "owm_weather.h"

#define LED_PIN 2

uint8_t frame_len = 100;
bool* frame1 [100];

void print_2d_array (bool *arry [7], uint8_t len) {

  for (uint8_t i = 0; i < len; i++) {
    Serial.printf("%02d", i);Serial.flush();
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
  pinMode(LED_PIN, OUTPUT);
  blink();
  Serial.begin(9600);
  Serial.println("Setup...");
  init_text();
  if (init_led()) {
    while (1);
  }
  set_brightness(5);
  init_weather();
  const char *weather = get_weather();
  Serial.println(weather);
  frame_len = build_frame(frame1, frame_len, weather);
  Serial.printf("Frame built with length: %d\n", frame_len);Serial.flush();
  print_2d_array(frame1, frame_len);
  set_scrolling_frame(frame1, frame_len);
  blink();
}

void loop() {
  scroll();
  //delay(1000);
  Serial.println("Loop.");
}