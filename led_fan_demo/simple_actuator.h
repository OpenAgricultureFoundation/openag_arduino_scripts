#ifndef OPENAG_ATLAS_EC_H
#define OPENAG_ATLAS_EC_H

#include "Arduino.h"

class SimpleActuator {
  public:
    SimpleActuator(int pin, boolean is_active_low);
    void set(String s);

  private:
    int _pin;
    int _is_active_low;
};

class ChillerCompressorTone {
  public:
    ChillerCompressorTone(int pin);
    void set(String s);

  private:
    int _pin;
};

#endif
