#include "Ultra_sonic.h"
#define TIME_OUT_GET_DISTANCE 30000

HC_SR04::HC_SR04(byte trigPin, byte echoPin)
    : TRIG(trigPin), ECHO(echoPin)
{
    pinMode(TRIG, OUTPUT);
    pinMode(ECHO, INPUT);
}

unsigned long HC_SR04::GetDistance()
{
    digitalWrite(TRIG, LOW);
    delayMicroseconds(2);

    digitalWrite(TRIG, HIGH);
    delayMicroseconds(10);
    digitalWrite(TRIG, LOW);

    unsigned long duration = pulseIn(ECHO, HIGH, TIME_OUT_GET_DISTANCE); 

    if (duration == 0) {
        return 0;
    }

    // Speed of sound ≈ 343 m/s → 0.0343 cm/μs
    unsigned long distance = duration * 0.034 / 2;

    return distance;
}
