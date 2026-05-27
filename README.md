# Obstacle Detection and Alert System using STM32

## Overview
This project detects obstacles using an HC-SR04 ultrasonic sensor and STM32 Blue Pill microcontroller.

When an obstacle comes near, the buzzer turns ON automatically.

## Components Used
- STM32 Blue Pill
- HC-SR04 Ultrasonic Sensor
- Buzzer Module
- Breadboard
- Jumper Wires

## Circuit Connections

| HC-SR04 | STM32 |
|---|---|
| VCC | 5V |
| GND | GND |
| TRIG | PB0 |
| ECHO | PB1 |

| Buzzer | STM32 |
|---|---|
| + | PB10 |
| - | GND |

## Working
The ultrasonic sensor measures distance and sends the value to STM32. If the distance is less than 20 cm, the buzzer turns ON.

## Output
- Distance displayed in Serial Monitor
- Buzzer alert for nearby obstacle

## Applications
- Obstacle avoidance robot
- Parking sensor
- Safety systems
