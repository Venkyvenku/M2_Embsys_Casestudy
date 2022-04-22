#include <Arduino.h>
#line 1 "E:\\carwiper_code\\rain_car_wiper_arduino\\rain_car_wiper_arduino.ino"

#include"carwiper.h"
LiquidCrystal lcd(11,10,7,6,5,4);
Servo myservo;
#line 5 "E:\\carwiper_code\\rain_car_wiper_arduino\\rain_car_wiper_arduino.ino"
void setup();
#line 22 "E:\\carwiper_code\\rain_car_wiper_arduino\\rain_car_wiper_arduino.ino"
void wipe(int Speed);
#line 38 "E:\\carwiper_code\\rain_car_wiper_arduino\\rain_car_wiper_arduino.ino"
void loop();
#line 5 "E:\\carwiper_code\\rain_car_wiper_arduino\\rain_car_wiper_arduino.ino"
void setup() {
  Serial.begin(9600);
  lcd.begin(16,2);
  myservo.attach(9);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("car wiper"); 
  lcd.setCursor(0,1);
  lcd.print("Sensing device");
  delay(3000); 
  lcd.clear();
  lcd.setCursor(5,0);
  lcd.print("Rainfall");
  lcd.setCursor(0,1);
  lcd.print("Intensity-");
}

void wipe(int Speed)
{

  if(Speed>400){Speed=5000;lcd.print("  LOW ");}
  if(Speed>350&&Speed<=400){Speed=3000;lcd.print("MEDIUM");}
  if(Speed<=350){Speed=500;lcd.print(" HIGH ");}
  for (pos = 180; pos >= 0; pos--) {
    myservo.write(pos);            
    delay(3);                    
  }
  for (pos = 0; pos <= 180; pos++) { 
    myservo.write(pos);             
    delay(3);                       
  }
  delay(Speed);
}
void loop() 
{
lcd.setCursor(10,1);
sensorValue = analogRead(A0);
Serial.println(sensorValue);
if(sensorValue>600){myservo.write(180);lcd.print(" NIL  ");delay(1000);}
if(sensorValue<=600){lcd.setCursor(10,1);wipe(sensorValue);}
}

