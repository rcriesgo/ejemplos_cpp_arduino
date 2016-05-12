#include "GestorVisor.h"

GestorVisor* GestorVisor::_instance=0;



GestorVisor* GestorVisor::getInstance(){
  if (_instance==0) {
    _instance=new GestorVisor();
  }
  return _instance;
}
GestorVisor::GestorVisor() {
  estado=corriendo;
}
void GestorVisor::loop(){
  static unsigned long lastTime=0;
  static int i=0;
  if (millis()-lastTime<10) return;

  if (estado==corriendo){
    visor.setNumero(i++);
    i%=100;
  }
  visor.loop();
  lastTime=millis();
}
void GestorVisor::setEstado( GestorVisor::Estado estado){
  this->estado=estado;
}

GestorVisor::Estado GestorVisor::getEstado(){
   return this->estado;
}
