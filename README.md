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

#include "HUSKYLENS.h"
#include "SoftwareSerial.h"

HUSKYLENS huskylens;
SoftwareSerial mySerial(10, 11); // TX, RX

void setup() {
  Serial.begin(9600);
  mySerial.begin(9600);
  huskylens.begin(mySerial);
}

void loop() {
  if (huskylens.request()) {
    HUSKYLENSResult result = huskylens.read();

    if (result.ID != 0) {
      Serial.print("Detected Color: ");

      switch (result.ID) {
        case 1: Serial.println("yellow"); break;
        case 2: Serial.println("Green"); break;
        case 3: Serial.println("Blue"); break;
        default: Serial.println("Unknown"); break;
      }
    }
  }

  delay(500);
}
