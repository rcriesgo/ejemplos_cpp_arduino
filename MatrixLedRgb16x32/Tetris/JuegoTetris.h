/*
  Morse.h - Library for flashing Morse code.
  Created by David A. Mellis, November 2, 2007.
  Released into the public domain.
*/
#ifndef JuegoTetris_h
#define JuegoTetris_h
#include "Arduino.h"

#include "Adafruit_GFX.h" 
#include "RGBmatrixPanel.h"



class JuegoTetris
{
  public:
    JuegoTetris(RGBmatrixPanel* matrix);
    void begin();
    void process();
  private:
    RGBmatrixPanel* _matrix;
};

#endif