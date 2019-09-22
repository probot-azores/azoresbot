/*
  Sensorultra.h
*/
#ifndef Sensorultra_h
#define Sensorultra_h

#include "Arduino.h"

class Sensorultra
{
  public:
    Sensorultra(int tpin, int epin);
    int ultrasonico(int distancia);
    int ultradistancia();   
  private:
    int _tpin;
    int _epin;
};

#endif
