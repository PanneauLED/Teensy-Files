/*
  Shape.h - Library for abstract shapes.
  Created by Nick Anthony, March 1st, 2016.
*/

#include "Arduino.h"

class Shape
{
  public:
    Shape();
    void setShapeColor(int r, int g, int b);
    void setLocation(int row, int col);
    
  private:
    int _red;
    int _green;
    int _blue;
    int _shapeArray[50][2];
    int _row;
    int _col;
};
