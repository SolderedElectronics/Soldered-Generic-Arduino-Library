/**
 **************************************************
 *
 * @file        Generic-easyC-SOLDERED.cpp
 * @brief       Example functions to overload in base class.
 *
 *
 *
 * @authors     @ soldered.com
 ***************************************************/


#include "Generic-easyC-SOLDERED.h"

/**
 * @brief                   Sensor specific native constructor.
 *
 * @param int _pin          Example parameter.
 */
Sensor::Sensor(int _pin)
{
    pin = _pin;
    native = 1;
}

/**
 * @brief                   Overloaded function for virtal in base class to initialize sensor specific.
 */
void Sensor::initializeNative()
{
    pinMode(pin, INPUT);
}