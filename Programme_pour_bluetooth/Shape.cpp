/*
  Shape.cpp - Library for abstract shapes.
 Created by Nick Anthony, March 1st, 2016.
 */

#include "Arduino.h"
#include "Shape.h"

Shape::Shape()
{
  _red = 10;
  _green = 10;
  _blue = 10;
  _row = 0;
  _col = 0;
   
  // Instantiate array:
  for (int i=0; i<100; i++){
    for (int j=0; j<10; j++){
      _shapeArray[i][0] = (i/10)%10;
      _shapeArray[i][1] = j;
    }  
  }
}


void Shape::setShapeColor(int r, int g, int b)
{
  _red = r;
  _green = g;
  _blue = b;
}

void Shape::setLocation(int row, int col)
{
  _row = row;
  _col = col;
  
  // Move shape by adjusting shape array:
  for (int i=0; i<100; i++){
    _shapeArray[i][0] += row;
    _shapeArray[i][1] += col; 
  }
   
  
}


