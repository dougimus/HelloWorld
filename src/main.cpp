#include <Arduino.h>

// I, Douglas Ward, 000333587, certify that all code submitted is my own work; 
// that I have not copied it from any other source. I also certify that I have not allowed my work to be copied by others.

void setup() {
  // Set serial output speed
  Serial.begin(115200);

  // Hello World
  Serial.println("Hello World!");

  // My name and student #
  Serial.println("Douglas Ward (000333587)");

  // print blank line
  Serial.println();

  // Chip and Flash Info
  Serial.println("ESP8266 Chip ID: " + (String)ESP.getChipId());
  Serial.println("Flash Chip ID: " + (String)ESP.getFlashChipId());
}

void loop() { 
  // print uptime in milliseconds
  Serial.println("Uptime: " + (String)millis());

  // wait 2 seconds
  delay(2000);
}