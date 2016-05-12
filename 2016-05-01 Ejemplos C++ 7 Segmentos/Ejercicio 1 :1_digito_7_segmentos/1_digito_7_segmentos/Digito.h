#ifndef Digito_h
#define Digito_h
#include "Arduino.h"

class Digito
{
  public:
    Digito();
    Digito(int cifra);
    void setCifra(int cifra);
    int getCifra();
    byte getCifraSegmentByte();
  private:
    static byte digit2segmentByte[];
    int _cifra;
};

#endif
