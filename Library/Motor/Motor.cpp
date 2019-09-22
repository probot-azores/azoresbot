#include <Arduino.h>
#include <Motor.h>


Motor::Motor(int enpin, int inlpin, int inrpin)
{
    pinMode(enpin, OUTPUT);
    _enpin = enpin;
    pinMode(inlpin, OUTPUT);
    _inlpin = inlpin;
    pinMode(inrpin, OUTPUT);
    _inrpin = inrpin;
}

void Motor::avancar(int vel){
  digitalWrite(_inlpin,HIGH);
  digitalWrite(_inrpin,LOW);
  analogWrite(_enpin,vel);
}

void Motor::recuar(int vel){
  digitalWrite(_inlpin,LOW);
  digitalWrite(_inrpin,HIGH);
  analogWrite(_enpin,vel);
}

void Motor::parar(){
  digitalWrite(_inlpin,HIGH);
  digitalWrite(_inrpin,HIGH);
  analogWrite(_enpin,0);
}
