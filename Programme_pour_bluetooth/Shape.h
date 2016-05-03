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
    void setLocation(int x, int y);
  protected:
    int _red;
    int _green;
    int _blue;
    int _shapeArray[100][2];
    int _row;
    int _col;
    
  private:
    
};
