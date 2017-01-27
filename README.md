# GroveLED
LED Library for Arduino + Grove shield

## Example
```c++
#include <Grove.h>
#include <GroveLED.h>

GroveLED led(GROVE_D8);

void setup() {
  led.initialize();
  led.turnOff();
  Serial.begin(9200);
}

void loop() {
  led.toggle();
  delay(1000);
}
```

## Documentation
###`GroveLED(GrovePin pins)`
Parameters:
- `pins`: Must be a digital socket (GROVE_D2 to GROVE_D8)

###`void initialize()`
Initialize the sensor before using it.

###`void turnOn()`
Turn the LED on

###`void turnOff()`
Turn the LED off

###`void toggle()`
Change the LED state (on to off or off to on)