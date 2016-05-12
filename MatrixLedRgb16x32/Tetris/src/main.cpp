#include <Adafruit_GFX.h>   // Core graphics library
#include <RGBmatrixPanel.h>
//#include <JuegoTetris.h>
#include "Screen.h"


//JuegoTetris* tetris;

Screen* screen;

void setup() {
  //screen_setup();
  Serial.begin(9600);
  //tetris=new JuegoTetris(getMatrix());
  Serial.print("screen:");
  Serial.println((int)screen);
  screen = new Screen();
  Serial.print("screen:");
  Serial.println((int)screen);

  screen->begin();
  //tetris.begin(screen);
}


void loop() {

  //tetris->process();
  screen->process();
}
