#ifndef CARWIPER_H
#define CARWIPER_H
#include<Arduino.h>
#include <LiquidCrystal.h>
#include <Servo.h>

 
int pos = 0; 
int sensorValue = 0;

void wipe(int Speed);

#endif