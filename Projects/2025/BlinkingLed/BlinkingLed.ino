/*
  - Author : Mawin CK
  - Date : 2025
*/

// Link to Project : 
// https://wokwi.com/projects/445411336998105089

const byte LED = 13;
const int DELAY = 1;

const unsigned long RES = DELAY * 1000; // milliseconds

void setup() {
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
}

void loop() { 
  digitalWrite(LED, HIGH);
  delay(RES);
  digitalWrite(LED, LOW);
  delay(RES);
}
