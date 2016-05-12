#ifndef Visor_h
#define Visor_h
#include "Arduino.h"
#include "Digito.h"

#define VISOR_NUMBER_OF_DIGITS 2
#define VISOR_DATA_PIN 8
#define VISOR_LATCH_PIN 9
#define VISOR_CLOCK_PIN 10


class Visor
{
  public:
    Visor();
    void loop();
    void setNumero(int i);

  private:
    static byte digit2segmentByte[];
    Digito digitos[VISOR_NUMBER_OF_DIGITS];

};

#endif
