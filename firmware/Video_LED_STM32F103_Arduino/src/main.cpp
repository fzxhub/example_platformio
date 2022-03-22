#include <Arduino.h>

#define BLUE    PF5 
#define GREEN   PF7
#define RED     PF9


void setup() 
{
  //初始化LED管脚
  pinMode(BLUE,OUTPUT);
  pinMode(GREEN,OUTPUT);
  pinMode(RED,OUTPUT);
  //初始化串口
  Serial.begin(115200);
}

void loop() 
{
  //随机分配红绿蓝灯的状态
  digitalWrite(BLUE,rand()%2);
  digitalWrite(GREEN,rand()%2);
  digitalWrite(RED,rand()%2);
  delay(100);
  //打印收到的字符
//  Serial.print(Serial.readString());
}