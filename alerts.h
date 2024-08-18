#ifndef ALERTS_H
#define ALERTS_H

#include "config.h"

void checkThresholds(float temp, float airQuality) {
    if (temp > 30.0) {
        Serial.println("Warning: High temperature detected!");
        // Add code to send alert (e.g., via email/SMS)
    }

    if (airQuality > 100.0) {
        Serial.println("Warning: Poor air quality detected!");
        // Add code to send alert (e.g., via email/SMS)
    }
}

#endif
