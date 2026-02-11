/*
    - Author: Mawin CK
    - Date: 2025
*/
// Link to project:
// https://wokwi.com/projects/455671768800581633

#include "HCSR04.h"

const byte ECHO = 12;
const byte TRIG = 13;


UltraSonicDistanceSensor distanceSensor(TRIG, ECHO);

void setup() {
  Serial.begin(9600);
}

void loop() {
  float distance = distanceSensor.measureDistanceCm();
  Serial.println(distance);

  delay(500);
}
