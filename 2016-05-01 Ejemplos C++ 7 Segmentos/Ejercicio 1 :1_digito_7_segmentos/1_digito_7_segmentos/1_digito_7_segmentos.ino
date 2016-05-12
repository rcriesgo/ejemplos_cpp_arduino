#include <Arduino.h>
#include "GestorVisor.h"

GestorVisor* gestorVisor;

void setup(){
   gestorVisor = GestorVisor::getInstance();
}

void loop()
{
  gestorVisor->loop();
  if (gestorVisor->getEstado()==GestorVisor::wewe){

  }
}
