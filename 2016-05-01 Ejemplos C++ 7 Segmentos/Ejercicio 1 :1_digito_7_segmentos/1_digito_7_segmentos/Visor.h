#ifndef Visor_h
#define Visor_h
#include "Arduino.h"
#include "Digito.h"

#define VISOR_NUMBER_OF_DIGITS 1


class Visor
{
  public:
    Visor();
    void loop();
    void setNumero(int i);

  private:
    static byte digit2segmentByte[];
    Digito digitos[VISOR_NUMBER_OF_DIGITS];
    static byte digitosPin[8];
};

#endif
