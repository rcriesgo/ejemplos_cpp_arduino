#include <Adafruit_GFX.h>   // Core graphics library
#include <RGBmatrixPanel.h>
#include <MemoryFree.h>
//#include <JuegoTetris.h>
#include "Screen.h"


//JuegoTetris* tetris;

Screen* screen;

void setup() {
  //screen_setup();
  Serial.begin(9600);
  //tetris=new JuegoTetris(getMatrix());

  Serial.print("setup:1:freeMemory()=");
  Serial.println(freeMemory());
  screen = new Screen();
  Serial.print("setup:2:freeMemory()=");
  Serial.println(freeMemory());
  screen->begin();
  //tetris.begin(screen);
}


void loop() {

  //tetris->process();
  screen->process();
  Serial.print("loop:freeMemory()=");
  Serial.println(freeMemory());
}
