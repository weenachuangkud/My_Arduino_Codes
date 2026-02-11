#pragma once

class HC_SR04 {
private:
    const byte TRIG;
    const byte ECHO;

public:
    HC_SR04(byte trigPin, byte echoPin);

    // Returns distance in cm
    // Returns 0 if no echo or timeout
    unsigned int GetDistance(float roundTripFactor = 0.01715f);
};

