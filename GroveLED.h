#ifndef GroveLED_H
#define GroveLED_H

#include <Arduino.h>
#include <GroveOnOffActuator>

class GroveLED : public GroveOnOffActuator {		
	public:
		GroveLED();
		virtual ~GroveLED() {};
};

#endif