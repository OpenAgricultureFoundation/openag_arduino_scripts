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
  else if (s == "OFF") {
    digitalWrite(_pin, _is_active_low);
  }
  else {
    Serial.begin(9600);
    Serial.println("ERROR");
  }
}

