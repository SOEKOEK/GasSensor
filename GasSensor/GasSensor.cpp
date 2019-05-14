#include "Arduino.h"
#include "GasSensor.h"

GasValve::GasValve(int pin)
{
  pinMode(pin, OUTPUT);
  _pin = pin;
}

int GasSensor::readPPM()
{
    return(digitalRead(_pin));
}
