#ifndef GroveLED_H
#define GroveLED_H

#include <Arduino.h>
#include <GroveOnOffActuator.h>

class GroveLED : public GroveOnOffActuator {		
	public:
		GroveLED();
		virtual ~GroveLED() {};
};

#endif