#include "LEDController.h"

LEDController::LEDController(int onePin, int twoPin, int threePin) {
    this->onePin = onePin;
    this->twoPin = twoPin;
    this->threePin = threePin;
    pinMode(onePin, OUTPUT);
    pinMode(twoPin, OUTPUT);
    pinMode(threePin, OUTPUT);
}

void LEDController::updateLEDs(int distance) {
    if (distance <= 19) {
        digitalWrite(onePin, HIGH);
        digitalWrite(twoPin, HIGH);
        digitalWrite(threePin, HIGH);
    } else if (distance >= 20 && distance <= 29) {
        digitalWrite(onePin, HIGH);
        digitalWrite(twoPin, HIGH);
        digitalWrite(threePin, LOW);
    } else if (distance >= 30) {
        digitalWrite(onePin, LOW);
        digitalWrite(twoPin, LOW);
        digitalWrite(threePin, HIGH);
    }
}