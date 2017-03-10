#include "simple_actuator.h"

SimpleActuator :: SimpleActuator(int pin, boolean is_active_low) {
  _pin = pin;
  _is_active_low = is_active_low;
}

void SimpleActuator :: set(String s) {
  pinMode(_pin, OUTPUT);
  if (s == "ON") {
    digitalWrite(_pin, !_is_active_low);
  }
  else {
    digitalWrite(_pin, _is_active_low);
  }
}

ChillerCompressorTone :: ChillerCompressorTone(int pin) {
  _pin = pin;
}

void ChillerCompressorTone :: set(String s) {
  if (s == "ON") {
    unsigned int frequency = 140000; // hz
    tone(_pin, frequency);
  }
}






