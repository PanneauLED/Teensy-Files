/*
  Shape.cpp - Library for abstract shapes.
 Created by Nick Anthony, March 1st, 2016.
 */

#include "Arduino.h"
#include "LEDShape.h"

LEDShape::LEDShape()
{
  _red = 10;
  _green = 10;
  _blue = 10;
  _row = 0;
  _col = 0;
   
  // Instantiate array with negatives (negative = off led):
  for (int i=0; i<200; i++){
      _shapeArray[i][0] = -1;
      _shapeArray[i][1] = -1;
  } 
  
}


void LEDShape::setShapeColor(int r, int g, int b)
{
  _red = r;
  _green = g;
  _blue = b;
}

void LEDShape::setLocation(int row, int col)
{
  _row = row;
  _col = col;
  
  // Move shape by adjusting shape array:
  for (int i=0; i<100; i++){
    _shapeArray[i][0] += row;
    _shapeArray[i][1] += col; 
  }
   
  
}


