# Motion Security System using ESP32

## Overview

This project implements a Motion Security System using an ESP32 microcontroller and a PIR (Passive Infrared) sensor. The system detects motion and generates alerts using an LED and buzzer while displaying the status on a 16x2 I2C LCD. Real-time messages are also displayed on the Serial Monitor.

## Features

* Motion detection using PIR sensor
* Intrusion alert using LED and buzzer
* LCD status display
* Serial Monitor monitoring
* IF-ELSE based automation logic
* Simulated using Wokwi

## Components Used

* ESP32 Development Board
* PIR Motion Sensor
* 16x2 I2C LCD
* LED
* Buzzer
* Jumper Wires

## Working

1. The PIR sensor continuously monitors motion.
2. When motion is detected:

   * LED turns ON
   * Buzzer sounds
   * LCD displays "INTRUSION DETECTED!"
   * Serial Monitor displays an alert message
3. When no motion is detected:

   * LED turns OFF
   * Buzzer turns OFF
   * LCD displays "AREA SAFE"
   * Serial Monitor displays the safe status

## Circuit Connections

* PIR Sensor OUT → GPIO 15
* LED → GPIO 2
* Buzzer → GPIO 4
* LCD SDA → GPIO 21
* LCD SCL → GPIO 22

## Applications

* Home Security Systems
* Office Security Monitoring
* Restricted Area Protection
* Warehouse Surveillance
* Smart Building Automation

## Conclusion

The project successfully demonstrates motion detection, alert generation, and real-time monitoring using ESP32 and a PIR sensor. It provides a simple and effective security solution for various applications.

## Author

Enagandla Thrisha
B.Tech Electrical and Electronics Engineering (EEE)
