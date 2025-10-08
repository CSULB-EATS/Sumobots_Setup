# Sumobots – Setup & Overview

At **Sumobots**, we design, build, and program autonomous robots that compete head-to-head in classic robot sumo battles. Each bot is designed to detect, push, and outmaneuver its opponent inside a circular ring — using sensors, motors, and control logic.

This repository provides the foundation for setting up your environment, understanding the hardware, and getting your first bot running using the **Arduino framework**.

---

## Overview

Sumobots are a great way to learn **embedded programming**, **sensor integration**, and **mechanical design**.  
Our bots combine:
- Motor driver control (L298N or TB6612FNG)
- Ultrasonic and infrared sensors for detection and edge avoidance
- Lightweight 3D-printed frames for custom designs
- Arduino-based firmware for decision logic and movement control

The Arduino environment makes programming fast and accessible, using **C/C++** syntax with easy-to-use libraries.

---

## Development Environment

| Tool | Description | Link |
|------|--------------|------|
| ![Arduino](https://img.shields.io/badge/Arduino-00979D?style=flat&logo=arduino&logoColor=white) | Main IDE for coding and flashing firmware | [arduino.cc/en/software](https://www.arduino.cc/en/software) |
| ![C++](https://img.shields.io/badge/Language-C++-00599C?style=flat&logo=cplusplus&logoColor=white) | Programming language used for logic and control | Included with Arduino |
| ![Git](https://img.shields.io/badge/Git-F05032?style=flat&logo=git&logoColor=white) | Version control for sharing and updating code | [git-scm.com/downloads](https://git-scm.com/downloads) |

---

## Getting Started

### 1. Install Prerequisites
- Install **Arduino IDE** from [arduino.cc](https://www.arduino.cc/en/software)
- Install **Git** (optional but recommended for version control)

### 2. Clone the Repository
```bash
git clone https://github.com/CSULB-EATS/Sumobots_Setup.git
```
Then open the `.ino` file inside the folder with Arduino IDE.

### 3. Required Arduino Libraries
Inside Arduino IDE:
- Go to **Tools → Manage Libraries**
- Install the following:
  - `Adafruit Motor Shield` (or TB6612FNG library)
  - `NewPing` (for ultrasonic sensors)
  - `Servo` (if using servos or actuators)

---

## Hardware Reference

You can find detailed slides explaining the hardware, wiring, and sensors we use here:  
[Sumobot Hardware Slides](https://drive.google.com/drive/folders/1S9FP2EvXtrS5c7e565gXXx5AJh_Npgl7?usp=drive_link)

These cover:
- Ultrasonic (HC-SR04) and IR line sensors
- Motor driver pinouts and wiring
- Power supply setup
- Microcontroller connections

---

## Example and Test Code

This repository includes several test and example sketches:
- **motor_test.ino** – verifies left and right wheel control
- **sensor_test.ino** – checks ultrasonic and line sensor readings
- **basic_sumo_ai.ino** – simple behavior logic for attack and edge avoidance

Use these examples to verify your setup and learn the code structure.

---

## 3D Design and Printing

We use lightweight **3D-printed chassis** for durability and customization.  
STL files will be added soon for base frame and sensor mounts.  
You can modify these using Fusion 360 or TinkerCAD.

A short build video and printing guide will be provided later for reference.

---

## Next Steps

1. Flash the **motor_test** code and confirm motor control.  
2. Test sensors using **sensor_test**.  
3. Combine the two and fine-tune movement logic.  
4. Start competing and iterate your design.

---

## Contributing

- Fork this repository and make your own branch for testing or improvements.  
- Commit often and document hardware changes.  
- Submit pull requests for reviewed updates or new examples.
