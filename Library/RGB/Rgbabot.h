/*
  Rgbabot.h
*/
#ifndef Rgbabot_h
#define Rgbabot_h

#include "Arduino.h"

class Rgbabot
{
  public:
    Rgbabot(int s0, int s1, int s2, int s3, int out, int freq);   
    bool registar(int &red, int &green, int &blue);
    bool calibrar();
  private:
    void mudarfrequencia(int s0, int s1, int freq);
    int _s0;
    int _s1;
    int _s2;
    int _s3;
    int _out;
};

#endif