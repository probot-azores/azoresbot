/*
  Motor.h
*/
#ifndef Motor_h
#define Motor_h

#include "Arduino.h"

class Motor
{
  public:
    Motor(int enpin, int inlpin, int inrpin);
    void avancar(int vel);
    void recuar(int vel);
    void parar();
  private:
    int _enpin;
    int _inlpin;
    int _inrpin;
};

#endif
