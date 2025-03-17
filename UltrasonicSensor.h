#ifndef ULTRASONICSENSOR_H
#define ULTRASONICSENSOR_H

#include <Arduino.h>

class UltrasonicSensor {
public:
    UltrasonicSensor(int triggerPin, int echoPin);
    long readDistanceCM();
    long readDistanceInches();

private:
    int triggerPin;
    int echoPin;
    long readUltrasonicDistance();
};

#endif // ULTRASONICSENSOR_H