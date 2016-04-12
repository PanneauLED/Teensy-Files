#include "Arduino.h"
#include <FastLED.h>
#include "LetterZ.h"



LetterZ::LetterZ(CRGB ledPanel[6][256], Panel connection)
{
  
  _red = 0;
  _green = 0;
  _blue = 20;
  _row = 0;
  _col = 0;
   
  // Set points for letter
  _shapeArray[0][0] = 0;
  _shapeArray[0][1] = 0;
  
  _shapeArray[1][0] = 0;
  _shapeArray[1][1] = 4;
  
  _shapeArray[2][0] = 1;
  _shapeArray[2][1] = 0;
  
  _shapeArray[3][0] = 1;
  _shapeArray[3][1] = 3;
  
  _shapeArray[4][0] = 1;
  _shapeArray[4][1] = 4;
  
  _shapeArray[5][0] = 2;
  _shapeArray[5][1] = 0;
  
  _shapeArray[6][0] = 2;
  _shapeArray[6][1] = 2;
  
  _shapeArray[7][0] = 2;
  _shapeArray[7][1] = 4;
  
  _shapeArray[8][0] = 3;
  _shapeArray[8][1] = 0;
  
  _shapeArray[9][0] = 3;
  _shapeArray[9][1] = 1;
  
  _shapeArray[10][0] = 3;
  _shapeArray[10][1] = 4;
  
  _shapeArray[11][0] = 4;
  _shapeArray[11][1] = 0;
   
  _shapeArray[12][0] = 4;
  _shapeArray[12][1] = 4;
  // Turn on LED's
 
  int i=0;
  int x;
  int y;
  while(_shapeArray[i][0] >= 0){
      x = _shapeArray[i][0];
      y = _shapeArray[i][1];
      
      connection.ledOn(x, y, ledPanel);
   
      i += 1;
  }
  FastLED.show();
  
}

void LetterZ::place(CRGB ledPanel[6][256]){
  // Turn on LED's
 
  int i=0;
  int x;
  int y;
  while(_shapeArray[i][0] >= 0){
      x = _shapeArray[i][0];
      y = _shapeArray[i][1];
    
      ledPanel[x][y].red=15;
      ledPanel[x][y].green=15;
      ledPanel[x][y].blue=15;
  }
}



