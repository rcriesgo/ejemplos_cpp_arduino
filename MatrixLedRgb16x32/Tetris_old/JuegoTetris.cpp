/*
  Morse.cpp - Library for flashing Morse code.
  Created by David A. Mellis, November 2, 2007.
  Released into the public domain.
*/

#include "JuegoTetris.h"

JuegoTetris::JuegoTetris(RGBmatrixPanel* matrix)
{
  _matrix=matrix;
}       

void JuegoTetris::begin(){
 
  
  
}
void JuegoTetris::process(){
  _matrix->drawPixel(10,10, _matrix->Color444(15, 15, 0));
  _matrix->swapBuffers(false);
  
}

