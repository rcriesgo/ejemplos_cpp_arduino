#ifndef GestorVisor_h
#define GestorVisor_h
#include "Arduino.h"
#include "Visor.h"

//Clase GestorVisor
//   se encarga de la lógica de la gestión del visor
//   Utiliza el patron Singleton para crear una única instancia
//   de si misma accesible para cualquier elemento que acceda a ella
class GestorVisor
{
  public:
    GestorVisor();
    void loop();
    static GestorVisor* getInstance();
    enum Estado{parado,corriendo};
    void setEstado(GestorVisor::Estado estado);
    GestorVisor::Estado getEstado();

  private:
    static GestorVisor* _instance;

    Estado estado;
    Visor visor;

};

#endif
