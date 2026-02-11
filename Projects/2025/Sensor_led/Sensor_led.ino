/*
    - Author: Mawin CK
    - Date: 2025
*/
// Link to project:
// https://wokwi.com/projects/444971885655595009

#include "ultra_sonic.h"

const byte LED = 11;
const byte TRIG = 2;
const byte ECHO = 1;

const uint8_t MAX_DIST = 35;

HC_SR04 sensor(TRIG, ECHO);

void setup() {
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
}

void loop() {
  unsigned long distance = sensor.GetDistance();
  Serial.print("Distance: ");
  Serial.println(distance);

  if (distance < MAX_DIST) {
    digitalWrite(LED, HIGH);
  } else {
    digitalWrite(LED, LOW);
  }

  delay(500);
}
