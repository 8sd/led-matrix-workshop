#ifndef __owm_h__
#define __owm_h__

#include <Arduino.h>
#include <WiFi.h>
#include <ArduinoJson.h>
#include "wifi_auth.h"

bool init_weather ();
const char * get_weather ();

#endif