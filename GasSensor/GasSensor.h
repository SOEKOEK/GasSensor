#ifndef GasSensor_h
#define GasSensor_h

#include "Arduino.h"

class GasSensor
{
  public:
    GasSensor(int pin);
    int readPPM();

  private:
    int _pin;

};

#endif
