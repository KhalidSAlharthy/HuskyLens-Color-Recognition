# HuskyLens-Color-Recognition
A simple project using the HuskyLens AI Vision Sensor to recognize and track colors in real-time with Arduino integration.

# Project Overview
The goal of this project is to use the HuskyLens camera module in Color Recognition mode to:
- Learn specific colors (e.g. red, green, blue, etc.)
- Detect and track those colors in live view
- Send the color data to a microcontroller (e.g., Arduino) for further action

# Features
- Real-time color detection and tracking
- Easy-to-train AI using the onboard HuskyLens interface
- Serial communication with Arduino or other microcontrollers
- Expandable for robotics and automation projects

# Tools & Components Used

| Tool/Component     | Description                                   |
|--------------------|-----------------------------------------------|
| HuskyLens          | AI Vision Sensor module                       |
| Arduino Uno/Nano   | Microcontroller to interface with HuskyLens   |
| Jumper Wires       | For wiring communication (UART/I2C)           |
| Arduino IDE        | To program and upload code                    |

# How to Use
1. Setup HuskyLens
- Turn on the device and navigate to `Color Recognition` mode using the navigation button.
- Point the camera at the target color.
- Press and hold the "Learning" button to train a new color.
- You can train multiple colors (IDs) by short pressing the button before holding it to learn.

2. Connect to Arduino
- Connect TX/RX of HuskyLens to RX/TX of Arduino (crossed).
- Set the communication mode to UART in HuskyLens settings.

3. Sample Arduino Code
   
The full Arduino code is uploaded in this repository.

4. Demo Video
This video shows the implementation and results of this project.

