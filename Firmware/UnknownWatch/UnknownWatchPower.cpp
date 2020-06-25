#include "UnknownWatchPower.h"
/*
 * int - most arduino boards define 2-bytes but some actually 20 4bytes
 * float - decimal; less precise than double; use with microcontrollers cause they take up less space
 * double - decimal
 * 
 * uint8_t - unsigned 8 bit integer [0, 255]
 * uint16_t - unsigned 16 bit integer [0, 65355] //negative numbers wrap around
 * 
 * int8_t - signed 8 bit integer [-127, 127]
 * int16_t - signed 16 bit integer [-32768, 32767]
 * 
 */

const uint8_t chrgPin=27;
const uint8_t batPin = A4;
const uint16_t VDD = 3300;
const uint16_t adcResolution = 1023;

UnknownWatchPower::UnknownWatch() //:: tells you that the function is related to the class
{
      
}

void UnknownWatchPower::begin()
{
      pinMode(chrgPin, INPUT);
}

//Returns whether or not the battery is charging
bool UnknownWatchPower::isCharging()
{
   return !digitalRead(chrgPin); //returns 1 if charging, 0 if not charging
}

uint16_t UnknownWatchPower::getBatteryVoltage()
{
     // uint16_t val = analogRead(batPin); //10-bit ADC, will return a number between 0 and 1023(3.3V)
     // uint16_t voltage = VDD * (val/adcResolution);

      return 2*VDD*(analogRead(batPin)/(float)adcResolution);
}

void UnknownWatchPower::enableGPS()
{
      
}
void UnknownWatchPower::disableGPS()
 {
      
}

void UnknownWatchPower::enableMP3()
{
      
}
void UnknownWatchPower::disableMP3()
{
      
}
  
