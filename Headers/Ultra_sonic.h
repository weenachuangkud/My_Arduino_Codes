#pragma once

class HC_SR04 {
private:
    const byte TRIG;
    const byte ECHO;

public:
    HC_SR04(byte trigPin, byte echoPin);

    // Returns distance in cm
    // Returns 0 if no echo or timeout
    unsigned ulong GetDistance();
};

