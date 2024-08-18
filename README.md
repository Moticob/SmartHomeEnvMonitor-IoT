# SmartHomeEnvMonitor-IoT

## Project Overview
SmartHomeEnvMonitor-IoT is a home environment monitoring system that leverages the Internet of Things (IoT) to track temperature, humidity, air quality, light levels, and motion detection. The data is collected using various sensors and transmitted to a cloud platform for real-time monitoring and analysis.

## Features
- **Real-time Monitoring**: Continuously monitor temperature, humidity, air quality, light levels, and motion.
- **Cloud Connectivity**: Data is sent to a cloud service (e.g., ThingSpeak) for storage and visualization.
- **Alerts**: Trigger alerts if environmental conditions exceed predefined thresholds.
- **Dashboard**: View data on a web-based dashboard for easy access and analysis.

## Hardware Required
- **ESP8266/ESP32 Microcontroller**
- **DHT22 Sensor** (for temperature and humidity)
- **MQ-135 Sensor** (for air quality)
- **LDR Sensor** (for light levels)
- **PIR Sensor** (for motion detection)
- **Breadboard and Jumper Wires**

## Software Requirements
- **Arduino IDE** (for programming the ESP8266/ESP32)
- **ThingSpeak Account** (or any other IoT platform)
- **Wi-Fi Connectivity**

## Installation
1. Clone the repository:
    ```bash
    git clone https://github.com/yourusername/SmartHomeEnvMonitor-IoT.git
    cd SmartHomeEnvMonitor-IoT
    ```

2. Open `main.ino` in the Arduino IDE.

3. Replace the placeholders in `config.h` with your Wi-Fi credentials and API key.

4. Upload the code to your ESP8266/ESP32.

5. Open `dashboard.html` in a web browser to view the data.

## Usage
- The system will automatically start monitoring environmental conditions once powered on.
- Data will be sent to the configured IoT platform every 2 seconds.
- Alerts will be logged in the serial monitor if thresholds are exceeded.

## License
This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
