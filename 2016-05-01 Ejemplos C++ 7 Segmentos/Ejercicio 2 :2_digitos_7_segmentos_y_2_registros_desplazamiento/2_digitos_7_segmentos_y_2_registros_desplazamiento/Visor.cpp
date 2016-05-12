#include "Visor.h"

Visor::Visor() {
  pinMode(VISOR_LATCH_PIN, OUTPUT);
  pinMode(VISOR_CLOCK_PIN, OUTPUT);
  pinMode(VISOR_DATA_PIN, OUTPUT);
}
void Visor::loop(){
      //visualizar digitos
      digitalWrite(VISOR_LATCH_PIN, LOW);
      shiftOut(VISOR_DATA_PIN, VISOR_CLOCK_PIN, MSBFIRST, digitos[0].getCifraSegmentByte());
      shiftOut(VISOR_DATA_PIN, VISOR_CLOCK_PIN, MSBFIRST, digitos[1].getCifraSegmentByte());
      digitalWrite(VISOR_LATCH_PIN, HIGH);
}

void Visor::setNumero(int i){
  digitos[0].setCifra(i%10);
  digitos[1].setCifra((i/10)%10);
}
