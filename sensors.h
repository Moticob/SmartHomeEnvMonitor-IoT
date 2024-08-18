#ifndef SENSORS_H
#define SENSORS_H

#include <DHT.h>
#include <MQ135.h>
#include <Adafruit_Sensor.h>

#define DHTPIN 2
#define DHTTYPE DHT22
#define MQ135PIN A0
#define LDRPIN A1
#define PIRPIN 3

DHT dht(DHTPIN, DHTTYPE);
MQ135 airSensor(MQ135PIN);

void setupSensors() {
    dht.begin();
    pinMode(LDRPIN, INPUT);
    pinMode(PIRPIN, INPUT);
}

float readTemperature() {
    return dht.readTemperature();
}

float readHumidity() {
    return dht.readHumidity();
}

float readAirQuality() {
    return airSensor.getPPM();
}

float readLightLevel() {
    return analogRead(LDRPIN);
}

bool detectMotion() {
    return digitalRead(PIRPIN) == HIGH;
}

#endif
