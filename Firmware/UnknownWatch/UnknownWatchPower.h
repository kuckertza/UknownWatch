/*
 * DESCRIPTION
 */



#ifndef UnknwonWatchPower_h
#define UnknownWatchPower_h
#include <Arduino.h>

class UnknownWatchPower
{
  private:

  public:

    UnknownWatch();
    void begin();
    
    bool isCharging();
    uint16_t getBatteryVoltage();

    void enableGPS();
    void disableGPS();

    void enableMP3();
    void disableMP3();


  
};

#endif
