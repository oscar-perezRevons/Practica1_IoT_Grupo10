#include <Arduino.h>
#include "UltrasonicSensor.h"
#include "LEDController.h"

UltrasonicSensor sensor(16, 17);
LEDController ledController(18, 19, 21);

void setup() {
    Serial.begin(9600);
}

void loop() {
    long cm = sensor.readDistanceCM();
    long inches = sensor.readDistanceInches();
    
    Serial.print(inches);
    Serial.print("in, ");
    Serial.print(cm);
    Serial.println("cm");
    
    ledController.updateLEDs(cm);
    
    delay(10);
}
