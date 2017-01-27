#ifndef GroveLED_H
#define GroveLED_H

#include <Arduino.h>
#include "../Grove/Grove.h"

class GroveLED {
	private:
		unsigned int _pinLED;
		boolean _state;

	protected:
		void _refresh();
		
	public:
		GroveLED(GrovePin pins);
		virtual ~GroveLED() {};
		void initialize();
		void turnOn();
		void turnOff();
		void toggle();
};

#endif