#ifndef LEDCONTROLLER_H
#define LEDCONTROLLER_H

#include <Arduino.h>

class LEDController {
public:
    LEDController(int onePin, int twoPin, int threePin);
    void updateLEDs(int distance);

private:
    int onePin;
    int twoPin;
    int threePin;
};

#endif // LEDCONTROLLER_H