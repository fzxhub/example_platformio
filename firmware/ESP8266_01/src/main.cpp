#include <Arduino.h>



void setup() 
{
  //初始化串口
  Serial.begin(115200);
}

void loop() 
{
  delay(10);
  //打印收到的字符
  Serial.print(Serial.readString());
}