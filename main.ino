#include "config.h"
#include "sensors.h"
#include "wifi_manager.h"
#include "alerts.h"

void setup() {
    Serial.begin(115200);
    connectToWiFi();
    setupSensors();
}

void loop() {
    float temperature = readTemperature();
    float humidity = readHumidity();
    float airQuality = readAirQuality();
    float lightLevel = readLightLevel();
    bool motionDetected = detectMotion();

    sendDataToCloud(temperature, humidity, airQuality, lightLevel, motionDetected);
    checkThresholds(temperature, airQuality);

    delay(2000);
}
