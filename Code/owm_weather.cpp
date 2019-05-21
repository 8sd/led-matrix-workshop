#include "owm_weather.h"

const char* ssid     = SSID;
const char* password = PASSWORD;

const char* host     = "api.openweathermap.org";
const char* url      = "http://api.openweathermap.org/data/2.5/weather?id=2929567&appid=32e66d9b409187b049d5d051e387990a";

bool init_weather () {
    Serial.println();
    Serial.println();
    Serial.print("Connecting to ");
    Serial.println(ssid);

    WiFi.begin(ssid, password);

    while (WiFi.status() != WL_CONNECTED) {
        delay(500);
        Serial.print(".");
    }

    Serial.println("");
    Serial.println("WiFi connected");
    Serial.println("IP address: ");
    Serial.println(WiFi.localIP());
    return true;
}

const char * get_weather () {
    WiFiClient client;
    const int httpPort = 80;
    if (!client.connect(host, httpPort)) {
        Serial.println("connection failed");
        return "Error! ";
    }

    client.print(String("GET ") + url + " HTTP/1.1\r\n" +
                  "Host: " + host + "\r\n" +
                  "Connection: close\r\n\r\n");

    unsigned long timeout = millis();
    while (client.available() == 0) {
        if (millis() - timeout > 5000) {
            Serial.println(">>> Client Timeout !");
            client.stop();
            return "Error! ";
        }
    }

    // Read all the lines of the reply from server and print them to Serial
    String line = "";
    while(client.available()) {
        line = client.readStringUntil('\r');
    }
    Serial.println(line);
    DynamicJsonDocument doc(4096);
    DeserializationError error = deserializeJson(doc, line);
    if (error) {
      Serial.print(F("deserializeJson() failed: "));
      Serial.println(error.c_str());
      return "Error! ";
    }
    JsonObject obj = doc.as<JsonObject>();

    String weather = doc["weather"][0]["description"].as<char*>();
    Serial.println(weather);
    void* res = malloc(sizeof(char) * (weather.length() + 2));
    memcpy(res, weather.c_str(), sizeof(char) * (weather.length() + 2));
    ((char*)res)[weather.length()] = ' ';
    return (const char*) res;
}