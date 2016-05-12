#include <Arduino.h>
#include "GestorVisor.h"
#include <MemoryFree.h>
GestorVisor* gestorVisor;

void setup(){
   Serial.begin(9600);
   Serial.print("freeMemory()=");
   Serial.println(freeMemory());
   gestorVisor = GestorVisor::getInstance();
   Serial.println("--");
}

void loop()
{
  static unsigned long lastTimeFreeMemory=0;
  gestorVisor->loop();
  if (millis()-lastTimeFreeMemory > 500){
    Serial.print("freeMemory()=");
    Serial.println(freeMemory());
    lastTimeFreeMemory= millis();
  }
}
