/*
    - Author: Mawin CK
    - Date: 2025
*/
#pragma once

class HC_SR04 {
private:
    const byte TRIG;
    const byte ECHO;

public:
    // Constructor to initialize pins HAHAHAHA
    HC_SR04(byte trigPin, byte echoPin) : TRIG(trigPin), ECHO(echoPin) {
        pinMode(TRIG, OUTPUT);
        pinMode(ECHO, INPUT);
    }

    // Function to get distance in cm
    unsigned long GetDistance() {
        digitalWrite(TRIG, LOW);
        delayMicroseconds(2);

        digitalWrite(TRIG, HIGH);
        delayMicroseconds(10);
        digitalWrite(TRIG, LOW);

        unsigned long duration = pulseIn(ECHO, HIGH);
        unsigned long distance = duration * 0.034 / 2;  // cm
        return distance;
    }
};
