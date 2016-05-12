/*
  Morse.cpp - Library for flashing Morse code.
  Created by David A. Mellis, November 2, 2007.
  Released into the public domain.
*/

#include "Screen.h"


Screen::Screen()
{

  Serial.print("matrix:");
  Serial.println((int)matrix);
  matrix = new RGBmatrixPanel(A, B, C, CLK, LAT, OE, true);
  Serial.print("matrix:");
   Serial.println((int)matrix);

  black = matrix->Color444(0, 0, 0);
  yellow = matrix->Color444(15, 15, 0);
  darkyellow = matrix->Color444(1, 1, 0);
  red = matrix->Color444(15, 0, 0);
  white = matrix->Color444(15, 15, 15);
  pink = matrix->Color444(15, 3, 15);
  palePink = matrix->Color444(15, 8, 15);
  blue = matrix->Color444(0, 0, 10);
  cyan = matrix->Color444(0, 15, 15);
  orange = matrix->Color444(15, 5, 0);
  darkOrange = matrix->Color444(15, 1, 0);
  green = matrix->Color444(0, 15, 0);
  matrix->begin();

}

void Screen::begin(){





}
void Screen::process(){

  delay(500);

  matrix->drawPixel(0,2, black);
  matrix->drawPixel(0,1, pink);
  matrix->swapBuffers(false);
  delay(500);
  matrix->drawPixel(0,1, black);
  matrix->drawPixel(0,2, green);
  matrix->swapBuffers(true);

}
