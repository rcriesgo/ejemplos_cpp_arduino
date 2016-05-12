#ifndef Screen_h
#define Screen_h
//#include "new.h"
//#include "Arduino.h"
#include "cppfix.h"
#include "Adafruit_GFX.h" 
#include "RGBmatrixPanel.h"



#define CLK 8  // MUST be on PORTB! (Use pin 11 on Mega)
#define LAT 17
#define OE  9
#define A   14
#define B   15
#define C   16


class Screen
{
  public:
    Screen();
    void begin();
    void process();
  private:
    RGBmatrixPanel *matrix;

    uint16_t black,yellow, darkyellow,red,white, pink,
            palePink, blue, cyan, orange, darkOrange, green;
  
};

#endif