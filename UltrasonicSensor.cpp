#include "UltrasonicSensor.h"

UltrasonicSensor::UltrasonicSensor(int triggerPin, int echoPin) {
    this->triggerPin = triggerPin;
    this->echoPin = echoPin;
    pinMode(triggerPin, OUTPUT);
    pinMode(echoPin, INPUT);
}

long UltrasonicSensor::readUltrasonicDistance() {
    digitalWrite(triggerPin, LOW);
    delayMicroseconds(2);
    digitalWrite(triggerPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(triggerPin, LOW);
    return pulseIn(echoPin, HIGH);
}

long UltrasonicSensor::readDistanceCM() {
    return 0.01723 * readUltrasonicDistance();
}

long UltrasonicSensor::readDistanceInches() {
    return readDistanceCM() / 2.54;
}