# GroveLED
LED Library for Arduino + Grove shield

## Example
```c++
#include <GroveLED.h>

GroveLED led;

void setup() {
  led.initialize(GROVE_D8);
  led.turnOff();
}

void loop() {
  led.toggle();
  delay(1000);
}
```

## Documentation
Inherit from GroveOnOffActuator

###`void initialize(GrovePin pins)`
Initialize the sensor before using it.

Parameters:
- `pins`: Must be a digital socket (GROVE_D2 to GROVE_D8)

###`void turnOn()`
Turn the LED on

###`void turnOff()`
Turn the LED off

###`void toggle()`
Change the LED state (on to off or off to on)