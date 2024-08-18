#ifndef WIFI_MANAGER_H
#define WIFI_MANAGER_H

#include <WiFi.h>
#include <HTTPClient.h>
#include "config.h"

void connectToWiFi() {
    WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
    while (WiFi.status() != WL_CONNECTED) {
        delay(1000);
        Serial.println("Connecting to WiFi...");
    }
    Serial.println("Connected to WiFi");
}

void sendDataToCloud(float temp, float humidity, float airQuality, float lightLevel, bool motionDetected) {
    if (WiFi.status() == WL_CONNECTED) {
        HTTPClient http;
        String url = String(SERVER_URL) + "?api_key=" + API_KEY + "&field1=" + temp + "&field2=" + humidity + "&field3=" + airQuality + "&field4=" + lightLevel + "&field5=" + motionDetected;
        http.begin(url);
        int httpCode = http.GET();
        if (httpCode > 0) {
            String payload = http.getString();
            Serial.println("Data sent: " + payload);
        } else {
            Serial.println("Error sending data");
        }
        http.end();
    } else {
        Serial.println("WiFi not connected");
    }
}

#endif
