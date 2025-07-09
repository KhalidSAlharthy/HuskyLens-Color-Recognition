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