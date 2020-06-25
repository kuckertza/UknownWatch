#include "UnknownWatchPower.h"

UnknownWatchPower pwr;
void setup() 
{
  pwr.begin();

}

void loop() 
{
  pwr.isCharging();

  //print info to watch screen

}

//.h -declaration - variables, functions
//.cpp definitions C++ (what functions do)
