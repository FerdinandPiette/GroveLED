#include "GroveLED.h"

GroveLED::GroveLED(GrovePin pins) {
	this->_pinLED = pins.pin2;
	this->_state = false;
}

void GroveLED::_refresh() {
	digitalWrite(this->_pinLED, this->_state);
}

void GroveLED::initialize() {	
	pinMode(this->_pinLED, OUTPUT);
	this->_refresh();
}

void GroveLED::turnOn() {
	this->_state = true;
	this->_refresh();
}

void GroveLED::turnOff() {
	this->_state = false;
	this->_refresh();
}

void GroveLED::toggle() {
	this->_state ^= true;
	this->_refresh();
}
