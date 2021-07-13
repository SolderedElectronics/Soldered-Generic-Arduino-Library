/**
 **************************************************
 *
 * @file        Generic-easyC-SOLDERED.h
 * @brief       Header file for sensor specific code.
 *
 *
 *
 * @authors     @ soldered.com
 ***************************************************/

#ifndef __SENSOR__
#define __SENSOR__

#include "../lib/Generic-easyC/easyC.h"
#include "Arduino.h"

class Sensor : EasyC
{
  public:
    Sensor(int _pin);

  protected:
    void initializeNative();

  private:
    int pin;
};

#endif
