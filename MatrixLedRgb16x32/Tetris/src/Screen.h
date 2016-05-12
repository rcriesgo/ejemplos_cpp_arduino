#ifndef Screen_h
#define Screen_h
//#include "new.h"
//#include "Arduino.h"

#include "Adafruit_GFX.h"
#include "RGBmatrixPanel.h"



#define CLK 11  // MUST be on PORTB! (Use pin 11 on Mega)
#define LAT A3
#define OE  9
#define A   A0
#define B   A1
#define C   A2

// Last parameter = 'true' enables double-buffering, for flicker-free,
// buttery smooth animation.  Note that NOTHING WILL SHOW ON THE DISPLAY
// until the first call to swapBuffers().  This is normal.

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
