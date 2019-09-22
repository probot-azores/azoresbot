#include <Arduino.h>
#include <Rgbabot.h>

void Rgbabot::mudarfrequencia(int s0, int s1, int freq){
  switch (freq){
       case 2:
       digitalWrite(s0,LOW);  
       digitalWrite(s1,HIGH);
       break;
       case 20:
       digitalWrite(s0,HIGH);  
       digitalWrite(s1,LOW);
       break;
       case 100:
       digitalWrite(s0,HIGH);  
       digitalWrite(s1,HIGH);
       break;
   }
}

Rgbabot::Rgbabot(int s0, int s1, int s2, int s3, int out, int freq){
    pinMode(s0, OUTPUT);
    pinMode(s1, OUTPUT);
    pinMode(s2, OUTPUT);
    _s2=s2;
    pinMode(s3, OUTPUT);    
    _s3=s3;
    pinMode(out, INPUT);
    _out=out;
    mudarfrequencia(s0, s1, freq);
}

bool Rgbabot::registar(int &red, int &green, int &blue){

  digitalWrite(_s2, LOW);  
  digitalWrite(_s3, LOW);   
  red = pulseIn(_out, digitalRead(_out) == HIGH ? LOW : HIGH);  
  digitalWrite(_s3, HIGH);   
  blue = pulseIn(_out, digitalRead(_out) == HIGH ? LOW : HIGH);  
  digitalWrite(_s2, HIGH);    
  green = pulseIn(_out, digitalRead(_out) == HIGH ? LOW : HIGH);

  
  return true;
}