#include "Arduino.h"
#include <FastLED.h>
#include "LetterA.h"



LetterA::LetterA(CRGB ledPanel[6][256], Panel connection)
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
   
   
//_shapeArray[0][1] = 0;
//_shapeArray[1][0] = 0;
//_shapeArray[1][1] = 1;
//_shapeArray[2][0] = 1;
//_shapeArray[2][1] = 1;
//_shapeArray[3][0] = 1;
//_shapeArray[3][1] = 2;
//_shapeArray[4][0] = 2;
//_shapeArray[4][1] = 2;
//_shapeArray[5][0] = 2;
//_shapeArray[5][1] = 3;
//_shapeArray[6][0] = 3;
//_shapeArray[6][1] = 3;
//_shapeArray[7][0] = 3;
//_shapeArray[7][1] = 4;
//_shapeArray[8][0] = 4;
//_shapeArray[8][1] = 5;
//_shapeArray[9][0] = 4;
//_shapeArray[9][1] = 4;
//_shapeArray[10][0] = 5;
//_shapeArray[10][1] = 5;
//_shapeArray[11][0] = 5;
//_shapeArray[11][1] = 6;
//_shapeArray[12][0] = 6;
//_shapeArray[12][1] = 6;
//_shapeArray[13][0] = 6;
//_shapeArray[13][1] = 7;
//_shapeArray[14][0] = 7;
//_shapeArray[14][1] = 7;
//_shapeArray[15][0] = 7;
//_shapeArray[15][1] = 8;
//_shapeArray[16][0] = 8;
//_shapeArray[16][1] = 8;
//_shapeArray[17][0] = 8;
//_shapeArray[17][1] = 9;
//_shapeArray[18][0] = 9;
//_shapeArray[18][1] = 9;
//_shapeArray[19][0] = 9;
//_shapeArray[19][1] = 10;
//_shapeArray[20][0] = 10;
//_shapeArray[20][1] = 10;
//_shapeArray[21][0] = 10;
//_shapeArray[21][1] = 11;
//_shapeArray[22][0] = 11;
//_shapeArray[22][1] = 11;
//_shapeArray[23][0] = 11;
//_shapeArray[23][1] = 12;
//_shapeArray[24][0] = 12;
//_shapeArray[24][1] = 12;
//_shapeArray[25][0] = 12;
//_shapeArray[25][1] = 13;
//_shapeArray[26][0] = 13;
//_shapeArray[26][1] = 13;
//_shapeArray[27][0] = 13;
//_shapeArray[27][1] = 14;
//_shapeArray[28][0] = 14;
//_shapeArray[28][1] = 14;
//_shapeArray[29][0] = 14;
//_shapeArray[29][1] = 15;
//_shapeArray[30][0] = 15;
//_shapeArray[30][1] = 15;
//_shapeArray[31][0] = 15;
//_shapeArray[31][1] = 16;
//_shapeArray[32][0] = 16;
//_shapeArray[32][1] = 16;
//_shapeArray[33][0] = 16;
//_shapeArray[33][1] = 17;
//_shapeArray[34][0] = 17;
//_shapeArray[34][1] = 17;
//_shapeArray[35][0] = 17;
//_shapeArray[35][1] = 18;
//_shapeArray[36][0] = 18;
//_shapeArray[36][1] = 18;
//_shapeArray[37][0] = 18;
//_shapeArray[37][1] = 19;
//_shapeArray[38][0] = 19;
//_shapeArray[38][1] = 19;
//_shapeArray[39][0] = 19;
//_shapeArray[39][1] = 20;
//_shapeArray[40][0] = 20;
//_shapeArray[40][1] = 20;
//_shapeArray[41][0] = 20;
//_shapeArray[41][1] = 21;
//_shapeArray[42][0] = 21;
//_shapeArray[42][1] = 21;
//_shapeArray[43][0] = 21;
//_shapeArray[43][1] = 22;
//_shapeArray[44][0] = 22;
//_shapeArray[44][1] = 22;
//_shapeArray[45][0] = 22;
//_shapeArray[45][1] = 23;
//_shapeArray[46][0] = 23;
//_shapeArray[46][1] = 23;
//_shapeArray[47][0] = 23;
//_shapeArray[47][1] = 22;
//_shapeArray[48][0] = 24;
//_shapeArray[48][1] = 22;
//_shapeArray[49][0] = 24;
//_shapeArray[49][1] = 21;
//_shapeArray[50][0] = 25;
//_shapeArray[50][1] = 21;
//_shapeArray[51][0] = 25;
//_shapeArray[51][1] = 20;
//_shapeArray[52][0] = 26;
//_shapeArray[52][1] = 20;
//_shapeArray[53][0] = 26;
//_shapeArray[53][1] = 19;
//_shapeArray[54][0] = 27;
//_shapeArray[54][1] = 19;
//_shapeArray[55][0] = 27;
//_shapeArray[55][1] = 18;
//_shapeArray[56][0] = 28;
//_shapeArray[56][1] = 18;
//_shapeArray[57][0] = 28;
//_shapeArray[57][1] = 17;
//_shapeArray[58][0] = 29;
//_shapeArray[58][1] = 17;
//_shapeArray[59][0] = 29;
//_shapeArray[59][1] = 16;
//_shapeArray[60][0] = 30;
//_shapeArray[60][1] = 16;
//_shapeArray[61][0] = 30;
//_shapeArray[61][1] = 15;
//_shapeArray[62][0] = 31;
//_shapeArray[62][1] = 15;
//_shapeArray[63][0] = 31;
//_shapeArray[63][1] = 14;
//_shapeArray[64][0] = 32;
//_shapeArray[64][1] = 14;
//_shapeArray[65][0] = 32;
//_shapeArray[65][1] = 13;
//_shapeArray[66][0] = 33;
//_shapeArray[66][1] = 13;

   
//  // Set points for letter
//  _shapeArray[0][0] = 0;
//  _shapeArray[0][1] = 0;
//  
//  _shapeArray[1][0] = 0;
//  _shapeArray[1][1] = 1;
//  
//  _shapeArray[2][0] = 0;
//  _shapeArray[2][1] = 2;
//  
//  _shapeArray[3][0] = 0;
//  _shapeArray[3][1] = 3;
//  
//  _shapeArray[4][0] = 0;
//  _shapeArray[4][1] = 4;
//  
//  _shapeArray[5][0] = 0;
//  _shapeArray[5][1] = 5;
//  
//  _shapeArray[6][0] = 0;
//  _shapeArray[6][1] = 6;
//  
//  _shapeArray[7][0] = 1;
//  _shapeArray[7][1] = 0;
//  
//  _shapeArray[8][0] = 2;
//  _shapeArray[8][1] = 0;
//  
//  _shapeArray[9][0] = 3;
//  _shapeArray[9][1] = 0;
//  
//  _shapeArray[10][0] = 3;
//  _shapeArray[10][1] = 1;
//  
//  _shapeArray[11][0] = 3;
//  _shapeArray[11][1] = 2;
//  
//  _shapeArray[12][0] = 3;
//  _shapeArray[12][1] = 3;
//  
//  _shapeArray[13][0] = 3;
//  _shapeArray[13][1] = 4;
// 
//  _shapeArray[14][0] = 3;
//  _shapeArray[14][1] = 5;
//  
//  _shapeArray[15][0] = 3;
//  _shapeArray[15][1] = 6;
//  
//  _shapeArray[16][0] = 1;
//  _shapeArray[16][1] = 3;
//  
//  _shapeArray[17][0] = 2;
//  _shapeArray[17][1] = 3;
//  
//  _shapeArray[18][0] = 0;
//  _shapeArray[18][1] = 0;
   
   
  
  
}

void LetterA::place(CRGB ledPanel[6][256], Panel connection){
  
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
  
  
//  // Turn on LED's
// 
//  int i=0;
//  int x;
//  int y;
//  while(_shapeArray[i][0] >= 0){
//      x = _shapeArray[i][0];
//      y = _shapeArray[i][1];
//    
//      ledPanel[x][y].red=15;
//      ledPanel[x][y].green=15;
//      ledPanel[x][y].blue=15;
//  }
}



