#include <Arduino.h>
#include "phathd.h"

#define LED_PIN 2

bool f0 [7] = {0, 0, 0, 0, 0, 0, 0};
bool f1 [7] = {1, 0, 0, 0, 0, 0, 0};
bool f2 [7] = {0, 1, 0, 0, 0, 0, 0};
bool f3 [7] = {1, 1, 0, 0, 0, 0, 0};
bool f4 [7] = {0, 0, 1, 0, 0, 0, 0};
bool f5 [7] = {1, 0, 1, 0, 0, 0, 0};
bool f6 [7] = {0, 1, 1, 0, 0, 0, 0};
bool f7 [7] = {1, 1, 1, 0, 0, 0, 0};
bool f8 [7] = {0, 0, 0, 1, 0, 0, 0};
bool f9 [7] = {1, 0, 0, 1, 0, 0, 0};

bool* frame1 [] = {f0, f1, f2, f3, f4, f5, f6, f7, f8, f9, f0, f1, f2, f3, f4, f5, f6, f7, f8, f9, f1, f2, f3, f4, f5, f6, f7, f8, f9, f0};

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
  blink();
  if (init_led()) {
    while (1);
  }
  setScrollingFrame(frame1, 30);
}

void loop() {
  scroll();
  delay(100);
  Serial.print(".");
}