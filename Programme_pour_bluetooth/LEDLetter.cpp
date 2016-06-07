#include <FastLED.h>
#include "LetterA.h"

LEDLetter::LEDLetter(CRGB ledPanel[6][256], Panel connection)
{

  _red = 0;
  _green = 0;
  _blue = 20;
  _row = 0;
  _col = 0;
  _shapeArray[0][0] = 0;
  _shapeArray[0][1] = 2;
  _shapeArray[1][0] = 0;
  _shapeArray[1][1] = 3;
  _shapeArray[2][0] = 0;
  _shapeArray[2][1] = 4;
  _shapeArray[3][0] = 1;
  _shapeArray[3][1] = 1;
  _shapeArray[4][0] = 1;
  _shapeArray[4][1] = 3;
  _shapeArray[5][0] = 2;
  _shapeArray[5][1] = 0;
  _shapeArray[6][0] = 2;
  _shapeArray[6][1] = 3;
  _shapeArray[7][0] = 3;
  _shapeArray[7][1] = 1;
  _shapeArray[8][0] = 3;
  _shapeArray[8][1] = 3;
  _shapeArray[9][0] = 4;
  _shapeArray[9][1] = 2;
  _shapeArray[10][0] = 4;
  _shapeArray[10][1] = 3;
  _shapeArray[11][0] = 4;
  _shapeArray[11][1] = 4;
}

void LEDLetter::place(CRGB ledPanel[6][256], Panel connection){

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

void LEDLetter::makeA(){
  _shapeArray[0][0] = 0;
  _shapeArray[0][1] = 2;
  _shapeArray[1][0] = 0;
  _shapeArray[1][1] = 3;
  _shapeArray[2][0] = 0;
  _shapeArray[2][1] = 4;
  _shapeArray[3][0] = 1;
  _shapeArray[3][1] = 1;
  _shapeArray[4][0] = 1;
  _shapeArray[4][1] = 3;
  _shapeArray[5][0] = 2;
  _shapeArray[5][1] = 0;
  _shapeArray[6][0] = 2;
  _shapeArray[6][1] = 3;
  _shapeArray[7][0] = 3;
  _shapeArray[7][1] = 1;
  _shapeArray[8][0] = 3;
  _shapeArray[8][1] = 3;
  _shapeArray[9][0] = 4;
  _shapeArray[9][1] = 2;
  _shapeArray[10][0] = 4;
  _shapeArray[10][1] = 3;
  _shapeArray[11][0] = 4;
  _shapeArray[11][1] = 4;
}

void LEDLetter::makeB(){
  // Set points for letter
  _shapeArray[0][0] = 0;
  _shapeArray[0][1] = 0;  
  _shapeArray[1][0] = 0;
  _shapeArray[1][1] = 1;  
  _shapeArray[2][0] = 0;
  _shapeArray[2][1] = 2;  
  _shapeArray[3][0] = 0;
  _shapeArray[3][1] = 3;  
  _shapeArray[4][0] = 0;
  _shapeArray[4][1] = 4;  
  _shapeArray[5][0] = 1;
  _shapeArray[5][1] = 0;  
  _shapeArray[6][0] = 1;
  _shapeArray[6][1] = 2;  
  _shapeArray[7][0] = 1;
  _shapeArray[7][1] = 4;  
  _shapeArray[8][0] = 2;
  _shapeArray[8][1] = 0;  
  _shapeArray[9][0] = 2;
  _shapeArray[9][1] = 2;  
  _shapeArray[10][0] = 2;
  _shapeArray[10][1] = 4;  
  _shapeArray[11][0] = 3;
  _shapeArray[11][1] = 0;  
  _shapeArray[12][0] = 3;
  _shapeArray[12][1] = 2;
  _shapeArray[13][0] = 3;
  _shapeArray[13][1] = 4;
  _shapeArray[14][0] = 4;
  _shapeArray[14][1] = 1;
  _shapeArray[15][0] = 4;
  _shapeArray[15][1] = 4;
}
void LEDLetter::makeC(){
  // Set points for letter
  _shapeArray[0][0] = 0;
  _shapeArray[0][1] = 1;  
  _shapeArray[1][0] = 0;
  _shapeArray[1][1] = 2;  
  _shapeArray[2][0] = 0;
  _shapeArray[2][1] = 3;  
  _shapeArray[3][0] = 1;
  _shapeArray[3][1] = 0;  
  _shapeArray[4][0] = 1;
  _shapeArray[4][1] = 4;  
  _shapeArray[5][0] = 2;
  _shapeArray[5][1] = 0;  
  _shapeArray[6][0] = 2;
  _shapeArray[6][1] = 4;  
  _shapeArray[7][0] = 3;
  _shapeArray[7][1] = 0;  
  _shapeArray[8][0] = 3;
  _shapeArray[8][1] = 4;  
  _shapeArray[9][0] = 4;
  _shapeArray[9][1] = 0;  
  _shapeArray[10][0] = 4;
  _shapeArray[10][1] = 4;
}
void LEDLetter::makeD(){
  // Set points for letter
  _shapeArray[0][0] = 0;
  _shapeArray[0][1] = 0;  
  _shapeArray[1][0] = 0;
  _shapeArray[1][1] = 1;  
  _shapeArray[2][0] = 0;
  _shapeArray[2][1] = 2;  
  _shapeArray[3][0] = 0;
  _shapeArray[3][1] = 3;  
  _shapeArray[4][0] = 0;
  _shapeArray[4][1] = 4;  
  _shapeArray[5][0] = 1;
  _shapeArray[5][1] = 0;  
  _shapeArray[6][0] = 1;
  _shapeArray[6][1] = 4;  
  _shapeArray[7][0] = 2;
  _shapeArray[7][1] = 0;
 
  _shapeArray[8][0] = 2;
  _shapeArray[8][1] = 4;  
  _shapeArray[9][0] = 3;
  _shapeArray[9][1] = 0;  
  _shapeArray[10][0] = 3;
  _shapeArray[10][1] = 4;  
  _shapeArray[11][0] = 4;
  _shapeArray[11][1] = 1;
  _shapeArray[12][0] = 4;
  _shapeArray[12][1] = 2;
  _shapeArray[13][0] = 4;
  _shapeArray[13][1] = 3;
}
void LEDLetter::makeE(){
  // Set points for letter
  _shapeArray[0][0] = 0;
  _shapeArray[0][1] = 0;  
  _shapeArray[1][0] = 0;
  _shapeArray[1][1] = 1;  
  _shapeArray[2][0] = 0;
  _shapeArray[2][1] = 2;  
  _shapeArray[3][0] = 0;
  _shapeArray[3][1] = 3;  
  _shapeArray[4][0] = 0;
  _shapeArray[4][1] = 4;  
  _shapeArray[5][0] = 1;
  _shapeArray[5][1] = 0;  
  _shapeArray[6][0] = 1;
  _shapeArray[6][1] = 2;  
  _shapeArray[7][0] = 1;
  _shapeArray[7][1] = 4;  
  _shapeArray[8][0] = 2;
  _shapeArray[8][1] = 0;  
  _shapeArray[9][0] = 2;
  _shapeArray[9][1] = 2;  
  _shapeArray[10][0] = 2;
  _shapeArray[10][1] = 4;  
  _shapeArray[11][0] = 3;
  _shapeArray[11][1] = 0;
  _shapeArray[12][0] = 3;
  _shapeArray[12][1] = 4;
  _shapeArray[13][0] = 4;
  _shapeArray[13][1] = 0;
  _shapeArray[14][0] = 4;
  _shapeArray[14][1] = 4;
}
void LEDLetter::makeF(){
  // Set points for letter
  _shapeArray[0][0] = 0;
  _shapeArray[0][1] = 0;  
  _shapeArray[1][0] = 0;
  _shapeArray[1][1] = 1;  
  _shapeArray[2][0] = 0;
  _shapeArray[2][1] = 2;  
  _shapeArray[3][0] = 0;
  _shapeArray[3][1] = 3;  
  _shapeArray[4][0] = 0;
  _shapeArray[4][1] = 4;  
  _shapeArray[5][0] = 1;
  _shapeArray[5][1] = 0;  
  _shapeArray[6][0] = 1;
  _shapeArray[6][1] = 2;  
  _shapeArray[7][0] = 2;
  _shapeArray[7][1] = 0;
 
  _shapeArray[8][0] = 2;
  _shapeArray[8][1] = 2;  
  _shapeArray[9][0] = 3;
  _shapeArray[9][1] = 0;  
  _shapeArray[10][0] = 4;
  _shapeArray[10][1] = 2;
}
void LEDLetter::makeG(){
  // Set points for letter
  _shapeArray[0][0] = 0;
  _shapeArray[0][1] = 1;  
  _shapeArray[1][0] = 0;
  _shapeArray[1][1] = 2;  
  _shapeArray[2][0] = 0;
  _shapeArray[2][1] = 3;  
  _shapeArray[3][0] = 1;
  _shapeArray[3][1] = 0;  
  _shapeArray[4][0] = 1;
  _shapeArray[4][1] = 4;  
  _shapeArray[5][0] = 2;
  _shapeArray[5][1] = 0;  
  _shapeArray[6][0] = 2;
  _shapeArray[6][1] = 4;  
  _shapeArray[7][0] = 3;
  _shapeArray[7][1] = 0;  
  _shapeArray[8][0] = 3;
  _shapeArray[8][1] = 3;  
  _shapeArray[9][0] = 3;
  _shapeArray[9][1] = 4;  
  _shapeArray[10][0] = 4;
  _shapeArray[10][1] = 0;  
  _shapeArray[11][0] = 4;
  _shapeArray[11][1] = 2;
   
  _shapeArray[12][0] = 4;
  _shapeArray[12][1] = 3;  
  _shapeArray[13][0] = 4;
  _shapeArray[13][1] = 4;
}
void LEDLetter::makeH(){
  // Set points for letter
  _shapeArray[0][0] = 0;
  _shapeArray[0][1] = 0;  
  _shapeArray[1][0] = 0;
  _shapeArray[1][1] = 1;  
  _shapeArray[2][0] = 0;
  _shapeArray[2][1] = 2;  
  _shapeArray[3][0] = 0;
  _shapeArray[3][1] = 3;  
  _shapeArray[4][0] = 0;
  _shapeArray[4][1] = 4;  
  _shapeArray[5][0] = 1;
  _shapeArray[5][1] = 2;  
  _shapeArray[6][0] = 2;
  _shapeArray[6][1] = 2;  
  _shapeArray[7][0] = 3;
  _shapeArray[7][1] = 2;  
  _shapeArray[8][0] = 4;
  _shapeArray[8][1] = 0;  
  _shapeArray[9][0] = 4;
  _shapeArray[9][1] = 1;  
  _shapeArray[10][0] = 4;
  _shapeArray[10][1] = 2;  
  _shapeArray[11][0] = 4;
  _shapeArray[11][1] = 3;  
  _shapeArray[12][0] = 4;
  _shapeArray[12][1] = 4;
}
void LEDLetter::makeI(){
  // Set points for letter
  _shapeArray[0][0] = 0;
  _shapeArray[0][1] = 0;  
  _shapeArray[1][0] = 0;
  _shapeArray[1][1] = 4;  
  _shapeArray[2][0] = 1;
  _shapeArray[2][1] = 0;  
  _shapeArray[3][0] = 1;
  _shapeArray[3][1] = 4;  
  _shapeArray[4][0] = 2;
  _shapeArray[4][1] = 0;  
  _shapeArray[5][0] = 2;
  _shapeArray[5][1] = 1;  
  _shapeArray[6][0] = 2;
  _shapeArray[6][1] = 2;  
  _shapeArray[7][0] = 2;
  _shapeArray[7][1] = 3;  
  _shapeArray[8][0] = 2;
  _shapeArray[8][1] = 4;  
  _shapeArray[9][0] = 3;
  _shapeArray[9][1] = 0;  
  _shapeArray[10][0] = 3;
  _shapeArray[10][1] = 4;  
  _shapeArray[11][0] = 4;
  _shapeArray[11][1] = 0;
   
  _shapeArray[12][0] = 4;
  _shapeArray[12][1] = 4;
}
void LEDLetter::makeJ(){
  // Set points for letter
  _shapeArray[0][0] = 0;
  _shapeArray[0][1] = 0;  
  _shapeArray[1][0] = 0;
  _shapeArray[1][1] = 3;  
  _shapeArray[2][0] = 1;
  _shapeArray[2][1] = 0;  
  _shapeArray[3][0] = 1;
  _shapeArray[3][1] = 4;  
  _shapeArray[4][0] = 2;
  _shapeArray[4][1] = 0;  
  _shapeArray[5][0] = 2;
  _shapeArray[5][1] = 4;  
  _shapeArray[6][0] = 3;
  _shapeArray[6][1] = 0;  
  _shapeArray[7][0] = 3;
  _shapeArray[7][1] = 1;  
  _shapeArray[8][0] = 3;
  _shapeArray[8][1] = 2;  
  _shapeArray[9][0] = 3;
  _shapeArray[9][1] = 3;  
  _shapeArray[10][0] = 4;
  _shapeArray[10][1] = 0;
}
void LEDLetter::makeK(){
  // Set points for letter
  _shapeArray[0][0] = 0;
  _shapeArray[0][1] = 0;  
  _shapeArray[1][0] = 0;
  _shapeArray[1][1] = 1;  
  _shapeArray[2][0] = 0;
  _shapeArray[2][1] = 2;  
  _shapeArray[3][0] = 0;
  _shapeArray[3][1] = 3;  
  _shapeArray[4][0] = 0;
  _shapeArray[4][1] = 4;  
  _shapeArray[5][0] = 1;
  _shapeArray[5][1] = 2;  
  _shapeArray[6][0] = 2;
  _shapeArray[6][1] = 2;  
  _shapeArray[7][0] = 3;
  _shapeArray[7][1] = 1;  
  _shapeArray[8][0] = 3;
  _shapeArray[8][1] = 3;  
  _shapeArray[9][0] = 4;
  _shapeArray[9][1] = 0;  
  _shapeArray[10][0] = 4;
  _shapeArray[10][1] = 4;
}
void LEDLetter::makeL(){
  // Set points for letter
  _shapeArray[0][0] = 0;
  _shapeArray[0][1] = 0;  
  _shapeArray[1][0] = 0;
  _shapeArray[1][1] = 1;  
  _shapeArray[2][0] = 0;
  _shapeArray[2][1] = 2;  
  _shapeArray[3][0] = 0;
  _shapeArray[3][1] = 3;  
  _shapeArray[4][0] = 0;
  _shapeArray[4][1] = 4;  
  _shapeArray[5][0] = 1;
  _shapeArray[5][1] = 4;  
  _shapeArray[6][0] = 2;
  _shapeArray[6][1] = 4;  
  _shapeArray[7][0] = 3;
  _shapeArray[7][1] = 4;  
  _shapeArray[8][0] = 4;
  _shapeArray[8][1] = 4;
}
void LEDLetter::makeM(){
  // Set points for letter
  _shapeArray[0][0] = 0;
  _shapeArray[0][1] = 0;  
  _shapeArray[1][0] = 0;
  _shapeArray[1][1] = 1;  
  _shapeArray[2][0] = 0;
  _shapeArray[2][1] = 2;  
  _shapeArray[3][0] = 0;
  _shapeArray[3][1] = 3;  
  _shapeArray[4][0] = 0;
  _shapeArray[4][1] = 4;  
  _shapeArray[5][0] = 1;
  _shapeArray[5][1] = 1;  
  _shapeArray[6][0] = 2;
  _shapeArray[6][1] = 2;  
  _shapeArray[7][0] = 3;
  _shapeArray[7][1] = 1;  
  _shapeArray[8][0] = 4;
  _shapeArray[8][1] = 0;  
  _shapeArray[9][0] = 4;
  _shapeArray[9][1] = 1;  
  _shapeArray[10][0] = 4;
  _shapeArray[10][1] = 2;  
  _shapeArray[11][0] = 4;
  _shapeArray[11][1] = 3;
  _shapeArray[12][0] = 4;
  _shapeArray[12][1] = 4;
}
void LEDLetter::makeN(){
  // Set points for letter
  _shapeArray[0][0] = 0;
  _shapeArray[0][1] = 0;  
  _shapeArray[1][0] = 0;
  _shapeArray[1][1] = 1;  
  _shapeArray[2][0] = 0;
  _shapeArray[2][1] = 2;  
  _shapeArray[3][0] = 0;
  _shapeArray[3][1] = 3;  
  _shapeArray[4][0] = 0;
  _shapeArray[4][1] = 4;  
  _shapeArray[5][0] = 1;
  _shapeArray[5][1] = 1;  
  _shapeArray[6][0] = 2;
  _shapeArray[6][1] = 2;  
  _shapeArray[7][0] = 3;
  _shapeArray[7][1] = 3;  
  _shapeArray[8][0] = 4;
  _shapeArray[8][1] = 0;  
  _shapeArray[9][0] = 4;
  _shapeArray[9][1] = 1;  
  _shapeArray[10][0] = 4;
  _shapeArray[10][1] = 2;  
  _shapeArray[11][0] = 4;
  _shapeArray[11][1] = 3;
   
  _shapeArray[12][0] = 4;
  _shapeArray[12][1] = 4;
}
void LEDLetter::makeO(){
  // Set points for letter
  _shapeArray[0][0] = 0;
  _shapeArray[0][1] = 1;  
  _shapeArray[1][0] = 0;
  _shapeArray[1][1] = 2;  
  _shapeArray[2][0] = 0;
  _shapeArray[2][1] = 3;  
  _shapeArray[3][0] = 1;
  _shapeArray[3][1] = 0;  
  _shapeArray[4][0] = 1;
  _shapeArray[4][1] = 4;  
  _shapeArray[5][0] = 2;
  _shapeArray[5][1] = 0;  
  _shapeArray[6][0] = 2;
  _shapeArray[6][1] = 4;  
  _shapeArray[7][0] = 3;
  _shapeArray[7][1] = 0;  
  _shapeArray[8][0] = 3;
  _shapeArray[8][1] = 4;  
  _shapeArray[9][0] = 4;
  _shapeArray[9][1] = 1;  
  _shapeArray[10][0] = 4;
  _shapeArray[10][1] = 2;  
  _shapeArray[11][0] = 4;
  _shapeArray[11][1] = 3;
}
void LEDLetter::makeP(){
  // Set points for letter
  _shapeArray[0][0] = 0;
  _shapeArray[0][1] = 0;  
  _shapeArray[1][0] = 0;
  _shapeArray[1][1] = 1;  
  _shapeArray[2][0] = 0;
  _shapeArray[2][1] = 2;  
  _shapeArray[3][0] = 0;
  _shapeArray[3][1] = 3;  
  _shapeArray[4][0] = 0;
  _shapeArray[4][1] = 4;  
  _shapeArray[5][0] = 1;
  _shapeArray[5][1] = 0;  
  _shapeArray[6][0] = 1;
  _shapeArray[6][1] = 2;  
  _shapeArray[7][0] = 2;
  _shapeArray[7][1] = 0;  
  _shapeArray[8][0] = 2;
  _shapeArray[8][1] = 2;  
  _shapeArray[9][0] = 3;
  _shapeArray[9][1] = 0;  
  _shapeArray[10][0] = 3;
  _shapeArray[10][1] = 2;  
  _shapeArray[11][0] = 4;
  _shapeArray[11][1] = 1;
}
void LEDLetter::makeQ(){
  // Set points for letter
  _shapeArray[0][0] = 0;
  _shapeArray[0][1] = 1;  
  _shapeArray[1][0] = 0;
  _shapeArray[1][1] = 2;  
  _shapeArray[2][0] = 0;
  _shapeArray[2][1] = 3;  
  _shapeArray[3][0] = 1;
  _shapeArray[3][1] = 0;  
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
  _shapeArray[9][1] = 3;  
  _shapeArray[10][0] = 4;
  _shapeArray[10][1] = 1;  
  _shapeArray[11][0] = 4;
  _shapeArray[11][1] = 2;
   
  _shapeArray[12][0] = 4;
  _shapeArray[12][1] = 4;
}
void LEDLetter::makeR(){
  // Set points for letter
  _shapeArray[0][0] = 0;
  _shapeArray[0][1] = 0;  
  _shapeArray[1][0] = 0;
  _shapeArray[1][1] = 1;  
  _shapeArray[2][0] = 0;
  _shapeArray[2][1] = 2;  
  _shapeArray[3][0] = 0;
  _shapeArray[3][1] = 3;  
  _shapeArray[4][0] = 0;
  _shapeArray[4][1] = 4;  
  _shapeArray[5][0] = 1;
  _shapeArray[5][1] = 0;  
  _shapeArray[6][0] = 1;
  _shapeArray[6][1] = 2;  
  _shapeArray[7][0] = 2;
  _shapeArray[7][1] = 0;  
  _shapeArray[8][0] = 2;
  _shapeArray[8][1] = 2;  
  _shapeArray[9][0] = 3;
  _shapeArray[9][1] = 0;  
  _shapeArray[10][0] = 3;
  _shapeArray[10][1] = 2;  
  _shapeArray[11][0] = 4;
  _shapeArray[11][1] = 1;
  _shapeArray[12][0] = 4;
  _shapeArray[12][1] = 3;  
  _shapeArray[13][0] = 4;
  _shapeArray[13][1] = 4;
}
void LEDLetter::makeS(){
  // Set points for letter
  _shapeArray[0][0] = 0;
  _shapeArray[0][1] = 1;  
  _shapeArray[1][0] = 0;
  _shapeArray[1][1] = 4;  
  _shapeArray[2][0] = 1;
  _shapeArray[2][1] = 0;  
  _shapeArray[3][0] = 1;
  _shapeArray[3][1] = 2;  
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
  _shapeArray[9][1] = 2;  
  _shapeArray[10][0] = 3;
  _shapeArray[10][1] = 4;  
  _shapeArray[11][0] = 4;
  _shapeArray[11][1] = 0;
   
  _shapeArray[11][0] = 4;
  _shapeArray[11][1] = 3;
}
void LEDLetter::makeT(){
  // Set points for letter
  _shapeArray[0][0] = 0;
  _shapeArray[0][1] = 0;  
  _shapeArray[1][0] = 1;
  _shapeArray[1][1] = 0;  
  _shapeArray[2][0] = 2;
  _shapeArray[2][1] = 0;  
  _shapeArray[3][0] = 2;
  _shapeArray[3][1] = 1;  
  _shapeArray[4][0] = 2;
  _shapeArray[4][1] = 2;  
  _shapeArray[5][0] = 2;
  _shapeArray[5][1] = 3;  
  _shapeArray[6][0] = 2;
  _shapeArray[6][1] = 4;  
  _shapeArray[7][0] = 3;
  _shapeArray[7][1] = 0;  
  _shapeArray[8][0] = 4;
  _shapeArray[8][1] = 0;
}
void LEDLetter::makeU(){
  // Set points for letter
  _shapeArray[0][0] = 0;
  _shapeArray[0][1] = 0;  
  _shapeArray[1][0] = 0;
  _shapeArray[1][1] = 1;  
  _shapeArray[2][0] = 0;
  _shapeArray[2][1] = 2;  
  _shapeArray[3][0] = 0;
  _shapeArray[3][1] = 3;  
  _shapeArray[4][0] = 1;
  _shapeArray[4][1] = 4;  
  _shapeArray[5][0] = 2;
  _shapeArray[5][1] = 4;  
  _shapeArray[6][0] = 3;
  _shapeArray[6][1] = 4;  
  _shapeArray[7][0] = 4;
  _shapeArray[7][1] = 0;  
  _shapeArray[8][0] = 4;
  _shapeArray[8][1] = 1;  
  _shapeArray[9][0] = 4;
  _shapeArray[9][1] = 2;  
  _shapeArray[10][0] = 4;
  _shapeArray[10][1] = 3;
}
void LEDLetter::makeV(){
  // Set points for letter
  _shapeArray[0][0] = 0;
  _shapeArray[0][1] = 0;  
  _shapeArray[1][0] = 0;
  _shapeArray[1][1] = 1;  
  _shapeArray[2][0] = 0;
  _shapeArray[2][1] = 2;  
  _shapeArray[3][0] = 1;
  _shapeArray[3][1] = 3;  
  _shapeArray[4][0] = 2;
  _shapeArray[4][1] = 4;  
  _shapeArray[5][0] = 3;
  _shapeArray[5][1] = 3;  
  _shapeArray[6][0] = 4;
  _shapeArray[6][1] = 0;  
  _shapeArray[7][0] = 4;
  _shapeArray[7][1] = 1;  
  _shapeArray[8][0] = 4;
  _shapeArray[8][1] = 2;
}
void LEDLetter::makeW(){
  // Set points for letter
  _shapeArray[0][0] = 0;
  _shapeArray[0][1] = 0;  
  _shapeArray[1][0] = 0;
  _shapeArray[1][1] = 1;  
  _shapeArray[2][0] = 0;
  _shapeArray[2][1] = 2;  
  _shapeArray[3][0] = 0;
  _shapeArray[3][1] = 3;  
  _shapeArray[4][0] = 0;
  _shapeArray[4][1] = 4;  
  _shapeArray[5][0] = 1;
  _shapeArray[5][1] = 3;  
  _shapeArray[6][0] = 2;
  _shapeArray[6][1] = 2;  
  _shapeArray[7][0] = 3;
  _shapeArray[7][1] = 3;  
  _shapeArray[8][0] = 4;
  _shapeArray[8][1] = 0;  
  _shapeArray[9][0] = 4;
  _shapeArray[9][1] = 1;  
  _shapeArray[10][0] = 4;
  _shapeArray[10][1] = 2;  
  _shapeArray[11][0] = 4;
  _shapeArray[11][1] = 3;
  _shapeArray[12][0] = 4;
  _shapeArray[12][1] = 4;
}
void LEDLetter::makeX(){
  // Set points for letter
  _shapeArray[0][0] = 0;
  _shapeArray[0][1] = 0;  
  _shapeArray[1][0] = 0;
  _shapeArray[1][1] = 4;  
  _shapeArray[2][0] = 1;
  _shapeArray[2][1] = 1;  
  _shapeArray[3][0] = 1;
  _shapeArray[3][1] = 3;  
  _shapeArray[4][0] = 2;
  _shapeArray[4][1] = 2;  
  _shapeArray[5][0] = 3;
  _shapeArray[5][1] = 1;  
  _shapeArray[6][0] = 3;
  _shapeArray[6][1] = 3;  
  _shapeArray[7][0] = 4;
  _shapeArray[7][1] = 0;  
  _shapeArray[8][0] = 4;
  _shapeArray[8][1] = 4;
}
void LEDLetter::makeY(){
  // Set points for letter
  _shapeArray[0][0] = 0;
  _shapeArray[0][1] = 0;  
  _shapeArray[1][0] = 1;
  _shapeArray[1][1] = 1;  
  _shapeArray[2][0] = 2;
  _shapeArray[2][1] = 2;  
  _shapeArray[3][0] = 2;
  _shapeArray[3][1] = 3;  
  _shapeArray[4][0] = 2;
  _shapeArray[4][1] = 4;  
  _shapeArray[5][0] = 3;
  _shapeArray[5][1] = 1;  
  _shapeArray[6][0] = 4;
  _shapeArray[6][1] = 0;
}
void LEDLetter::makeZ(){
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
}
