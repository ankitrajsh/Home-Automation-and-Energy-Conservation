# Home Automation and Energy Conservation Using Arduino

## Table of Contents
- [Introduction](#introduction)
- [Components](#components)
- [Code Overview](#code-overview)
- [How to Use](#how-to-use)
- [License](#license)

## Introduction
This project implements a home automation system using an Arduino Uno, enabling energy conservation by controlling a light bulb and a fan based on sensor readings. The system uses various sensors including an LDR (Light Dependent Resistor), IR (Infrared) sensor, PIR (Passive Infrared) sensor, and an LM35 temperature sensor to automate household appliances.

## Components
- **Arduino Uno**
- **LDR (Light Dependent Resistor)**
- **LM35 Temperature Sensor**
- **PIR Motion Sensor**
- **IR Sensor**
- **Relay Module (for light and fan control)**
- **Breadboard and Jumper Wires**


## Code Overview
The provided Arduino code reads values from the various sensors and controls the light and fan based on the following conditions:
- The light turns on when the LDR detects low light levels.
- The fan activates when the temperature exceeds a defined threshold.

### Key Functions
- **setup()**: Initializes the pin modes and serial communication for debugging.
- **loop()**: Reads sensor values, calculates temperature, and controls the light and fan based on sensor inputs.

## How to Use
1. **Setup the Hardware**: Connect all components as per the circuit diagram.
2. **Upload the Code**: Open the Arduino IDE, copy the provided code, and upload it to your Arduino Uno.
3. **Monitor Serial Output**: Open the Serial Monitor to view the sensor readings and statuses.
4. **Adjust Thresholds**: Modify the `tempThreshold` and `ldrThreshold` constants in the code to suit your environment.

## License
This project is open-source and can be modified for personal use. Feel free to contribute or make enhancements.

---

For any questions or contributions, please feel free to contact me!
