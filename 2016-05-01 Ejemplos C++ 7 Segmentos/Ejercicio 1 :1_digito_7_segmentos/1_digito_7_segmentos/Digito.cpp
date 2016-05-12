#include "Digito.h"

byte Digito::digit2segmentByte[]= {
                0b00111111,
                0b00000110,
                0b01011011,
                0b01001111,
                0b01100110,
                0b01101101,
                0b01111101,
                0b00000111,
                0b01111111,
                0b01101111
                };
Digito::Digito() {
  _cifra=0;
}
Digito::Digito(int cifra) {
  _cifra=cifra;

}
void Digito::setCifra(int cifra){
  _cifra=cifra;
}
int Digito::getCifra(){
  return _cifra;
}

byte Digito::getCifraSegmentByte(){
  return digit2segmentByte[_cifra%10];
}
