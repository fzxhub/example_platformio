#include <Arduino.h>

void setup() 
{
  pinMode(PF9,OUTPUT);
}

void loop() 
{
  //digitalWrite(PF9,LOW);
  delay(100);
  digitalWrite(PF9,HIGH);
  delay(100);
}