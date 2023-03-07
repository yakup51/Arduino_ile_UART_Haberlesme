// C++ code
//
//ALICI ARDUINO KODLARI
#include <Adafruit_LiquidCrystal.h>
int seconds = 0;
Adafruit_LiquidCrystal lcd_1(0);

#include <Servo.h>
Servo servo1;
int led=3;
int alinan=0;
int ledParlaklik=0;
void setup()
{
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  servo1.attach(9);
  
  /*lcd_1.begin(16, 2);
  lcd_1.print("hello world");*/
  
}

void loop()
{
  if(Serial.available()>0)
  {
    alinan=Serial.read();
    servo1.write(alinan);
    delay(1);
    ledParlaklik=map(alinan,0,90,0,255);
    analogWrite(led,ledParlaklik);
    /*lcd_1.setCursor(0, 1);
    lcd_1.print(ledParlaklik);*/
    
    
  }
}
