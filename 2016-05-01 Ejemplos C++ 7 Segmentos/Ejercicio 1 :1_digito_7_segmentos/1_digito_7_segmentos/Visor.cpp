#include "Visor.h"


byte Visor::digitosPin[]={9,8,7,6,5,4,3,2};

Visor::Visor() {
  for (int i=0;i<8;i++){
    pinMode(digitosPin[i], OUTPUT);
  }
}
void Visor::loop(){
      //visualizar digito
      byte digito= digitos[0].getCifraSegmentByte();
      for (int i=0;i<8;i++){
        digitalWrite(digitosPin[i], (digito & (1<<i))>>i);
      }
}

void Visor::setNumero(int i){
  digitos[0].setCifra(i%10);
}
