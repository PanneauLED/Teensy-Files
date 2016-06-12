#include <FastLED.h>
#include "LEDLetter.h"

LEDLetter::LEDLetter()
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

void LEDLetter::change(char char_to_make){
  switch(char_to_make){
    case 'a':
      this->makeA();
      break;
    case 'b':
      this->makeB();
      break;
    case 'c':
      this->makeC();
      break;
    case 'd':
      this->makeD();
      break;
    case 'e':
      this->makeE();
      break;
    case 'f':
      this->makeF();
      break;
    case 'g':
      this->makeG();
      break;
    case 'h':
      this->makeH();
      break;
    case 'i':
      this->makeI();
      break;
    case 'j':
      this->makeJ();
      break;
    case 'k':
      this->makeK();
      break;  
    case 'l':
      this->makeL();
      break;
    case 'm':
      this->makeM();
      break;  
    case 'n':
      this->makeN();
      break;
    case 'o':
      this->makeO();
      break;
    case 'p':
      this->makeP();
      break;
    case 'q':
      this->makeQ();
      break;
    case 'r':
      this->makeR();
      break;
    case 's':
      this->makeS();
      break;
    case 't':
      this->makeT();
      break;
    case 'u':
      this->makeU();
      break;
    case 'v':
      this->makeV();
      break;
    case 'w':
      this->makeW();
      break;
    case 'x':
      this->makeX();
      break;
    case 'y':
      this->makeY();
      break;
    case 'z':
      this->makeZ();
      break;
    case '0':
      this->make0();
      break;
    case '1':
      this->make1();
      break;
    case '2':
      this->make2();
      break;
    case '3':
      this->make3();
      break;
    case '4': 
      this->make4();
      break;
    case '5':
      this->make5();
      break;
    case '6':
      this->make6();
      break;
    case '7':
      this->make7();
      break;
    case '8':
      this->make8();
      break;
    case '9':
      this->make9();
      break;
  }
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

void LEDLetter::makeScoreBoard(){
  _shapeArray[0][0] = 1; 
  _shapeArray[0][1] = 1; 
  _shapeArray[1][0] = 1; 
  _shapeArray[1][1] = 2; 
  _shapeArray[2][0] = 1; 
  _shapeArray[2][1] = 3; 
  _shapeArray[3][0] = 1; 
  _shapeArray[3][1] = 4; 
  _shapeArray[4][0] = 1; 
  _shapeArray[4][1] = 5; 
  _shapeArray[5][0] = 2; 
  _shapeArray[5][1] = 3; 
  _shapeArray[6][0] = 3; 
  _shapeArray[6][1] = 3; 
  _shapeArray[7][0] = 4; 
  _shapeArray[7][1] = 3; 
  _shapeArray[8][0] = 4; 
  _shapeArray[8][1] = 2; 
  _shapeArray[9][0] = 4; 
  _shapeArray[9][1] = 1; 
  _shapeArray[10][0] = 4; 
  _shapeArray[10][1] = 4; 
  _shapeArray[11][0] = 4; 
  _shapeArray[11][1] = 5; 
  _shapeArray[12][0] = 6; 
  _shapeArray[12][1] = 1; 
  _shapeArray[13][0] = 6; 
  _shapeArray[13][1] = 2; 
  _shapeArray[14][0] = 6; 
  _shapeArray[14][1] = 3; 
  _shapeArray[15][0] = 6; 
  _shapeArray[15][1] = 4; 
  _shapeArray[16][0] = 6; 
  _shapeArray[16][1] = 5; 
  _shapeArray[17][0] = 7; 
  _shapeArray[17][1] = 5; 
  _shapeArray[18][0] = 8; 
  _shapeArray[18][1] = 5; 
  _shapeArray[19][0] = 9; 
  _shapeArray[19][1] = 5; 
  _shapeArray[20][0] = 9; 
  _shapeArray[20][1] = 4; 
  _shapeArray[21][0] = 9; 
  _shapeArray[21][1] = 3; 
  _shapeArray[22][0] = 9; 
  _shapeArray[22][1] = 2; 
  _shapeArray[23][0] = 9; 
  _shapeArray[23][1] = 1; 
  _shapeArray[24][0] = 8; 
  _shapeArray[24][1] = 1; 
  _shapeArray[25][0] = 7; 
  _shapeArray[25][1] = 1; 
  _shapeArray[26][0] = 11; 
  _shapeArray[26][1] = 1; 
  _shapeArray[27][0] = 11; 
  _shapeArray[27][1] = 2; 
  _shapeArray[28][0] = 11; 
  _shapeArray[28][1] = 3; 
  _shapeArray[29][0] = 11; 
  _shapeArray[29][1] = 4; 
  _shapeArray[30][0] = 11; 
  _shapeArray[30][1] = 5; 
  _shapeArray[31][0] = 12; 
  _shapeArray[31][1] = 1; 
  _shapeArray[32][0] = 13; 
  _shapeArray[32][1] = 2; 
  _shapeArray[33][0] = 14; 
  _shapeArray[33][1] = 1; 
  _shapeArray[34][0] = 15; 
  _shapeArray[34][1] = 1; 
  _shapeArray[35][0] = 15; 
  _shapeArray[35][1] = 2; 
  _shapeArray[36][0] = 13; 
  _shapeArray[36][1] = 3; 
  _shapeArray[37][0] = 15; 
  _shapeArray[37][1] = 3; 
  _shapeArray[38][0] = 15; 
  _shapeArray[38][1] = 4; 
  _shapeArray[39][0] = 15; 
  _shapeArray[39][1] = 5; 
  _shapeArray[40][0] = 17; 
  _shapeArray[40][1] = 1; 
  _shapeArray[41][0] = 18; 
  _shapeArray[41][1] = 1; 
  _shapeArray[42][0] = 19; 
  _shapeArray[42][1] = 1; 
  _shapeArray[43][0] = 20; 
  _shapeArray[43][1] = 1; 
  _shapeArray[44][0] = 17; 
  _shapeArray[44][1] = 2; 
  _shapeArray[45][0] = 17; 
  _shapeArray[45][1] = 3; 
  _shapeArray[46][0] = 17; 
  _shapeArray[46][1] = 4; 
  _shapeArray[47][0] = 17; 
  _shapeArray[47][1] = 5; 
  _shapeArray[48][0] = 18; 
  _shapeArray[48][1] = 5; 
  _shapeArray[49][0] = 19; 
  _shapeArray[49][1] = 5; 
  _shapeArray[50][0] = 20; 
  _shapeArray[50][1] = 5; 
  _shapeArray[51][0] = 18; 
  _shapeArray[51][1] = 3; 
  _shapeArray[52][0] = 19; 
  _shapeArray[52][1] = 3; 
  _shapeArray[53][0] = 20; 
  _shapeArray[53][1] = 3; 
  _shapeArray[54][0] = 1; 
  _shapeArray[54][1] = 7; 
  _shapeArray[55][0] = 1; 
  _shapeArray[55][1] = 8; 
  _shapeArray[56][0] = 1; 
  _shapeArray[56][1] = 9; 
  _shapeArray[57][0] = 2; 
  _shapeArray[57][1] = 10; 
  _shapeArray[58][0] = 2; 
  _shapeArray[58][1] = 11; 
  _shapeArray[59][0] = 3; 
  _shapeArray[59][1] = 11; 
  _shapeArray[60][0] = 3; 
  _shapeArray[60][1] = 10; 
  _shapeArray[61][0] = 4; 
  _shapeArray[61][1] = 9; 
  _shapeArray[62][0] = 4; 
  _shapeArray[62][1] = 8; 
  _shapeArray[63][0] = 4; 
  _shapeArray[63][1] = 7; 
  _shapeArray[64][0] = 6; 
  _shapeArray[64][1] = 7; 
  _shapeArray[65][0] = 6; 
  _shapeArray[65][1] = 8; 
  _shapeArray[66][0] = 6; 
  _shapeArray[66][1] = 9; 
  _shapeArray[67][0] = 6; 
  _shapeArray[67][1] = 10; 
  _shapeArray[68][0] = 6; 
  _shapeArray[68][1] = 11; 
  _shapeArray[69][0] = 10; 
  _shapeArray[69][1] = 7; 
  _shapeArray[70][0] = 11; 
  _shapeArray[70][1] = 7; 
  _shapeArray[71][0] = 9; 
  _shapeArray[71][1] = 7; 
  _shapeArray[72][0] = 8; 
  _shapeArray[72][1] = 7; 
  _shapeArray[73][0] = 8; 
  _shapeArray[73][1] = 8; 
  _shapeArray[74][0] = 8; 
  _shapeArray[74][1] = 9; 
  _shapeArray[75][0] = 9; 
  _shapeArray[75][1] = 9; 
  _shapeArray[76][0] = 10; 
  _shapeArray[76][1] = 9; 
  _shapeArray[77][0] = 11; 
  _shapeArray[77][1] = 9; 
  _shapeArray[78][0] = 11; 
  _shapeArray[78][1] = 10; 
  _shapeArray[79][0] = 11; 
  _shapeArray[79][1] = 11; 
  _shapeArray[80][0] = 10; 
  _shapeArray[80][1] = 11; 
  _shapeArray[81][0] = 9; 
  _shapeArray[81][1] = 11; 
  _shapeArray[82][0] = 8; 
  _shapeArray[82][1] = 11; 
  _shapeArray[83][0] = 13; 
  _shapeArray[83][1] = 7; 
  _shapeArray[84][0] = 13; 
  _shapeArray[84][1] = 8; 
  _shapeArray[85][0] = 13; 
  _shapeArray[85][1] = 9; 
  _shapeArray[86][0] = 13; 
  _shapeArray[86][1] = 10; 
  _shapeArray[87][0] = 13; 
  _shapeArray[87][1] = 11; 
  _shapeArray[88][0] = 15; 
  _shapeArray[88][1] = 7; 
  _shapeArray[89][0] = 16; 
  _shapeArray[89][1] = 7; 
  _shapeArray[90][0] = 17; 
  _shapeArray[90][1] = 7; 
  _shapeArray[91][0] = 18; 
  _shapeArray[91][1] = 7; 
  _shapeArray[92][0] = 17; 
  _shapeArray[92][1] = 8; 
  _shapeArray[93][0] = 17; 
  _shapeArray[93][1] = 9; 
  _shapeArray[94][0] = 17; 
  _shapeArray[94][1] = 10; 
  _shapeArray[95][0] = 17; 
  _shapeArray[95][1] = 11; 
  _shapeArray[96][0] = 19; 
  _shapeArray[96][1] = 7; 
  _shapeArray[97][0] = 21; 
  _shapeArray[97][1] = 7; 
  _shapeArray[98][0] = 21; 
  _shapeArray[98][1] = 8; 
  _shapeArray[99][0] = 21; 
  _shapeArray[99][1] = 9; 
  _shapeArray[100][0] = 21; 
  _shapeArray[100][1] = 10; 
  _shapeArray[101][0] = 21; 
  _shapeArray[101][1] = 11; 
  _shapeArray[102][0] = 22; 
  _shapeArray[102][1] = 11; 
  _shapeArray[103][0] = 23; 
  _shapeArray[103][1] = 11; 
  _shapeArray[104][0] = 24; 
  _shapeArray[104][1] = 11; 
  _shapeArray[105][0] = 24; 
  _shapeArray[105][1] = 10; 
  _shapeArray[106][0] = 24; 
  _shapeArray[106][1] = 9; 
  _shapeArray[107][0] = 24; 
  _shapeArray[107][1] = 8; 
  _shapeArray[108][0] = 24; 
  _shapeArray[108][1] = 7; 
  _shapeArray[109][0] = 23; 
  _shapeArray[109][1] = 7; 
  _shapeArray[110][0] = 22; 
  _shapeArray[110][1] = 7; 
  _shapeArray[111][0] = 26; 
  _shapeArray[111][1] = 7; 
  _shapeArray[112][0] = 26; 
  _shapeArray[112][1] = 8; 
  _shapeArray[113][0] = 26; 
  _shapeArray[113][1] = 9; 
  _shapeArray[114][0] = 26; 
  _shapeArray[114][1] = 10; 
  _shapeArray[115][0] = 26; 
  _shapeArray[115][1] = 11; 
  _shapeArray[116][0] = 27; 
  _shapeArray[116][1] = 7; 
  _shapeArray[117][0] = 28; 
  _shapeArray[117][1] = 7; 
  _shapeArray[118][0] = 29; 
  _shapeArray[118][1] = 7; 
  _shapeArray[119][0] = 29; 
  _shapeArray[119][1] = 8; 
  _shapeArray[120][0] = 29; 
  _shapeArray[120][1] = 9; 
  _shapeArray[121][0] = 28; 
  _shapeArray[121][1] = 9; 
  _shapeArray[122][0] = 27; 
  _shapeArray[122][1] = 9; 
  _shapeArray[123][0] = 28; 
  _shapeArray[123][1] = 10; 
  _shapeArray[124][0] = 29; 
  _shapeArray[124][1] = 11; 
  _shapeArray[125][0] = 1; 
  _shapeArray[125][1] = 15; 
  _shapeArray[126][0] = 2; 
  _shapeArray[126][1] = 15; 
  _shapeArray[127][0] = 3; 
  _shapeArray[127][1] = 15; 
  _shapeArray[128][0] = 4; 
  _shapeArray[128][1] = 15; 
  _shapeArray[129][0] = 5; 
  _shapeArray[129][1] = 15; 
  _shapeArray[130][0] = 3; 
  _shapeArray[130][1] = 16; 
  _shapeArray[131][0] = 3; 
  _shapeArray[131][1] = 17; 
  _shapeArray[132][0] = 3; 
  _shapeArray[132][1] = 18; 
  _shapeArray[133][0] = 3; 
  _shapeArray[133][1] = 19; 
  _shapeArray[134][0] = 3; 
  _shapeArray[134][1] = 20; 
  _shapeArray[135][0] = 3; 
  _shapeArray[135][1] = 21; 
  _shapeArray[136][0] = 7; 
  _shapeArray[136][1] = 15; 
  _shapeArray[137][0] = 7; 
  _shapeArray[137][1] = 16; 
  _shapeArray[138][0] = 7; 
  _shapeArray[138][1] = 17; 
  _shapeArray[139][0] = 7; 
  _shapeArray[139][1] = 18; 
  _shapeArray[140][0] = 7; 
  _shapeArray[140][1] = 19; 
  _shapeArray[141][0] = 7; 
  _shapeArray[141][1] = 20; 
  _shapeArray[142][0] = 7; 
  _shapeArray[142][1] = 21; 
  _shapeArray[143][0] = 9; 
  _shapeArray[143][1] = 21; 
  _shapeArray[144][0] = 9; 
  _shapeArray[144][1] = 20; 
  _shapeArray[145][0] = 9; 
  _shapeArray[145][1] = 19; 
  _shapeArray[146][0] = 9; 
  _shapeArray[146][1] = 18; 
  _shapeArray[147][0] = 9; 
  _shapeArray[147][1] = 17; 
  _shapeArray[148][0] = 9; 
  _shapeArray[148][1] = 16; 
  _shapeArray[149][0] = 9; 
  _shapeArray[149][1] = 15; 
  _shapeArray[150][0] = 10; 
  _shapeArray[150][1] = 15; 
  _shapeArray[151][0] = 11; 
  _shapeArray[151][1] = 16; 
  _shapeArray[152][0] = 11; 
  _shapeArray[152][1] = 17; 
  _shapeArray[153][0] = 11; 
  _shapeArray[153][1] = 18; 
  _shapeArray[154][0] = 12; 
  _shapeArray[154][1] = 15; 
  _shapeArray[155][0] = 13; 
  _shapeArray[155][1] = 15; 
  _shapeArray[156][0] = 13; 
  _shapeArray[156][1] = 16; 
  _shapeArray[157][0] = 13; 
  _shapeArray[157][1] = 17; 
  _shapeArray[158][0] = 13; 
  _shapeArray[158][1] = 18; 
  _shapeArray[159][0] = 13; 
  _shapeArray[159][1] = 19; 
  _shapeArray[160][0] = 13; 
  _shapeArray[160][1] = 20; 
  _shapeArray[161][0] = 13; 
  _shapeArray[161][1] = 21; 
  _shapeArray[162][0] = 18; 
  _shapeArray[162][1] = 15; 
  _shapeArray[163][0] = 17; 
  _shapeArray[163][1] = 15; 
  _shapeArray[164][0] = 16; 
  _shapeArray[164][1] = 15; 
  _shapeArray[165][0] = 15; 
  _shapeArray[165][1] = 15; 
  _shapeArray[166][0] = 19; 
  _shapeArray[166][1] = 15; 
  _shapeArray[167][0] = 15; 
  _shapeArray[167][1] = 16; 
  _shapeArray[168][0] = 15; 
  _shapeArray[168][1] = 17; 
  _shapeArray[169][0] = 15; 
  _shapeArray[169][1] = 18; 
  _shapeArray[170][0] = 15; 
  _shapeArray[170][1] = 19; 
  _shapeArray[171][0] = 15; 
  _shapeArray[171][1] = 20; 
  _shapeArray[172][0] = 15; 
  _shapeArray[172][1] = 21; 
  _shapeArray[173][0] = 16; 
  _shapeArray[173][1] = 21; 
  _shapeArray[174][0] = 17; 
  _shapeArray[174][1] = 21; 
  _shapeArray[175][0] = 18; 
  _shapeArray[175][1] = 21; 
  _shapeArray[176][0] = 19; 
  _shapeArray[176][1] = 21; 
  _shapeArray[177][0] = 19; 
  _shapeArray[177][1] = 18; 
  _shapeArray[178][0] = 18; 
  _shapeArray[178][1] = 18; 
  _shapeArray[179][0] = 17; 
  _shapeArray[179][1] = 18; 
  _shapeArray[180][0] = 16; 
  _shapeArray[180][1] = 18; 
  _shapeArray[181][0] = 33; 
  _shapeArray[181][1] = 2; 
  _shapeArray[182][0] = 33; 
  _shapeArray[182][1] = 4; 
  _shapeArray[183][0] = 33; 
  _shapeArray[183][1] = 8; 
  _shapeArray[184][0] = 33; 
  _shapeArray[184][1] = 10; 
  _shapeArray[185][0] = 33; 
  _shapeArray[185][1] = 17; 
  _shapeArray[186][0] = 33; 
  _shapeArray[186][1] = 19; 
  _shapeArray[187][0] = 48; 
  _shapeArray[187][1] = 17; 
  _shapeArray[188][0] = 48; 
  _shapeArray[188][1] = 19; 
}

void LEDLetter::make0(){
  _shapeArray[0][0] = 0; 
  _shapeArray[0][1] = 0; 
  _shapeArray[1][0] = 1; 
  _shapeArray[1][1] = 0; 
  _shapeArray[2][0] = 2; 
  _shapeArray[2][1] = 0; 
  _shapeArray[3][0] = 3; 
  _shapeArray[3][1] = 0; 
  _shapeArray[4][0] = 3; 
  _shapeArray[4][1] = 3; 
  _shapeArray[5][0] = 0; 
  _shapeArray[5][1] = 3; 
  _shapeArray[6][0] = 0; 
  _shapeArray[6][1] = 6; 
  _shapeArray[7][0] = 1; 
  _shapeArray[7][1] = 6; 
  _shapeArray[8][0] = 2; 
  _shapeArray[8][1] = 6; 
  _shapeArray[9][0] = 3; 
  _shapeArray[9][1] = 6; 
  _shapeArray[10][0] = 3; 
  _shapeArray[10][1] = 4; 
  _shapeArray[11][0] = 3; 
  _shapeArray[11][1] = 5; 
  _shapeArray[12][0] = 0; 
  _shapeArray[12][1] = 1; 
  _shapeArray[13][0] = 0; 
  _shapeArray[13][1] = 2; 
  _shapeArray[14][0] = 3; 
  _shapeArray[14][1] = 1; 
  _shapeArray[15][0] = 3; 
  _shapeArray[15][1] = 2; 
  _shapeArray[16][0] = 0; 
  _shapeArray[16][1] = 4; 
  _shapeArray[17][0] = 0; 
  _shapeArray[17][1] = 5; 
}
void LEDLetter::make1(){
  _shapeArray[0][0] = 0; 
  _shapeArray[0][1] = 3; 
  _shapeArray[1][0] = 1; 
  _shapeArray[1][1] = 2; 
  _shapeArray[2][0] = 2; 
  _shapeArray[2][1] = 1; 
  _shapeArray[3][0] = 3; 
  _shapeArray[3][1] = 0; 
  _shapeArray[4][0] = 3; 
  _shapeArray[4][1] = 1; 
  _shapeArray[5][0] = 3; 
  _shapeArray[5][1] = 2; 
  _shapeArray[6][0] = 3; 
  _shapeArray[6][1] = 3; 
  _shapeArray[7][0] = 3; 
  _shapeArray[7][1] = 4; 
  _shapeArray[8][0] = 3; 
  _shapeArray[8][1] = 5; 
  _shapeArray[9][0] = 3; 
  _shapeArray[9][1] = 6; 
  _shapeArray[10][0] = 3; 
  _shapeArray[10][1] = 7; 

}
void LEDLetter::make2(){
  _shapeArray[0][0] = 0; 
  _shapeArray[0][1] = 0; 
  _shapeArray[1][0] = 1; 
  _shapeArray[1][1] = 0; 
  _shapeArray[2][0] = 2; 
  _shapeArray[2][1] = 0; 
  _shapeArray[3][0] = 3; 
  _shapeArray[3][1] = 0; 
  _shapeArray[4][0] = 3; 
  _shapeArray[4][1] = 1; 
  _shapeArray[5][0] = 3; 
  _shapeArray[5][1] = 2; 
  _shapeArray[6][0] = 3; 
  _shapeArray[6][1] = 3; 
  _shapeArray[7][0] = 2; 
  _shapeArray[7][1] = 3; 
  _shapeArray[8][0] = 1; 
  _shapeArray[8][1] = 3; 
  _shapeArray[9][0] = 0; 
  _shapeArray[9][1] = 3; 
  _shapeArray[10][0] = 0; 
  _shapeArray[10][1] = 4; 
  _shapeArray[11][0] = 0; 
  _shapeArray[11][1] = 5; 
  _shapeArray[12][0] = 0; 
  _shapeArray[12][1] = 6; 
  _shapeArray[13][0] = 1; 
  _shapeArray[13][1] = 6; 
  _shapeArray[14][0] = 2; 
  _shapeArray[14][1] = 6; 
  _shapeArray[15][0] = 3; 
  _shapeArray[15][1] = 6; 

}
void LEDLetter::make3(){
  _shapeArray[0][0] = 0; 
  _shapeArray[0][1] = 0; 
  _shapeArray[1][0] = 1; 
  _shapeArray[1][1] = 0; 
  _shapeArray[2][0] = 2; 
  _shapeArray[2][1] = 0; 
  _shapeArray[3][0] = 3; 
  _shapeArray[3][1] = 0; 
  _shapeArray[4][0] = 3; 
  _shapeArray[4][1] = 1; 
  _shapeArray[5][0] = 3; 
  _shapeArray[5][1] = 2; 
  _shapeArray[6][0] = 3; 
  _shapeArray[6][1] = 3; 
  _shapeArray[7][0] = 1; 
  _shapeArray[7][1] = 3; 
  _shapeArray[8][0] = 0; 
  _shapeArray[8][1] = 3; 
  _shapeArray[9][0] = 0; 
  _shapeArray[9][1] = 6; 
  _shapeArray[10][0] = 1; 
  _shapeArray[10][1] = 6; 
  _shapeArray[11][0] = 2; 
  _shapeArray[11][1] = 6; 
  _shapeArray[12][0] = 3; 
  _shapeArray[12][1] = 6; 
  _shapeArray[13][0] = 2; 
  _shapeArray[13][1] = 3; 
  _shapeArray[14][0] = 3; 
  _shapeArray[14][1] = 4; 
  _shapeArray[15][0] = 3; 
  _shapeArray[15][1] = 5; 

}
void LEDLetter::make4(){
  _shapeArray[0][0] = 0; 
  _shapeArray[0][1] = 0; 
  _shapeArray[1][0] = 3; 
  _shapeArray[1][1] = 3; 
  _shapeArray[2][0] = 0; 
  _shapeArray[2][1] = 3; 
  _shapeArray[3][0] = 0; 
  _shapeArray[3][1] = 1; 
  _shapeArray[4][0] = 0; 
  _shapeArray[4][1] = 2; 
  _shapeArray[5][0] = 1; 
  _shapeArray[5][1] = 3; 
  _shapeArray[6][0] = 2; 
  _shapeArray[6][1] = 3; 
  _shapeArray[7][0] = 2; 
  _shapeArray[7][1] = 2; 
  _shapeArray[8][0] = 2; 
  _shapeArray[8][1] = 4; 
  _shapeArray[9][0] = 2; 
  _shapeArray[9][1] = 5; 
  _shapeArray[10][0] = 2; 
  _shapeArray[10][1] = 6; 

}
void LEDLetter::make5(){
  _shapeArray[0][0] = 0; 
  _shapeArray[0][1] = 0; 
  _shapeArray[1][0] = 1; 
  _shapeArray[1][1] = 0; 
  _shapeArray[2][0] = 2; 
  _shapeArray[2][1] = 0; 
  _shapeArray[3][0] = 3; 
  _shapeArray[3][1] = 0; 
  _shapeArray[4][0] = 3; 
  _shapeArray[4][1] = 3; 
  _shapeArray[5][0] = 1; 
  _shapeArray[5][1] = 3; 
  _shapeArray[6][0] = 0; 
  _shapeArray[6][1] = 3; 
  _shapeArray[7][0] = 0; 
  _shapeArray[7][1] = 6; 
  _shapeArray[8][0] = 1; 
  _shapeArray[8][1] = 6; 
  _shapeArray[9][0] = 2; 
  _shapeArray[9][1] = 6; 
  _shapeArray[10][0] = 3; 
  _shapeArray[10][1] = 6; 
  _shapeArray[11][0] = 2; 
  _shapeArray[11][1] = 3; 
  _shapeArray[12][0] = 3; 
  _shapeArray[12][1] = 4; 
  _shapeArray[13][0] = 3; 
  _shapeArray[13][1] = 5; 
  _shapeArray[14][0] = 0; 
  _shapeArray[14][1] = 1; 
  _shapeArray[15][0] = 0; 
  _shapeArray[15][1] = 2; 

}
void LEDLetter::make6(){
  _shapeArray[0][0] = 0; 
  _shapeArray[0][1] = 0; 
  _shapeArray[1][0] = 1; 
  _shapeArray[1][1] = 0; 
  _shapeArray[2][0] = 2; 
  _shapeArray[2][1] = 0; 
  _shapeArray[3][0] = 3; 
  _shapeArray[3][1] = 0; 
  _shapeArray[4][0] = 3; 
  _shapeArray[4][1] = 3; 
  _shapeArray[5][0] = 1; 
  _shapeArray[5][1] = 3; 
  _shapeArray[6][0] = 0; 
  _shapeArray[6][1] = 3; 
  _shapeArray[7][0] = 0; 
  _shapeArray[7][1] = 6; 
  _shapeArray[8][0] = 1; 
  _shapeArray[8][1] = 6; 
  _shapeArray[9][0] = 2; 
  _shapeArray[9][1] = 6; 
  _shapeArray[10][0] = 3; 
  _shapeArray[10][1] = 6; 
  _shapeArray[11][0] = 2; 
  _shapeArray[11][1] = 3; 
  _shapeArray[12][0] = 3; 
  _shapeArray[12][1] = 4; 
  _shapeArray[13][0] = 3; 
  _shapeArray[13][1] = 5; 
  _shapeArray[14][0] = 0; 
  _shapeArray[14][1] = 1; 
  _shapeArray[15][0] = 0; 
  _shapeArray[15][1] = 2; 
  _shapeArray[16][0] = 0; 
  _shapeArray[16][1] = 4; 
  _shapeArray[17][0] = 0; 
  _shapeArray[17][1] = 5; 

}
void LEDLetter::make7(){
  _shapeArray[0][0] = 0; 
  _shapeArray[0][1] = 0; 
  _shapeArray[1][0] = 1; 
  _shapeArray[1][1] = 0; 
  _shapeArray[2][0] = 2; 
  _shapeArray[2][1] = 0; 
  _shapeArray[3][0] = 3; 
  _shapeArray[3][1] = 0; 
  _shapeArray[4][0] = 3; 
  _shapeArray[4][1] = 1; 
  _shapeArray[5][0] = 2; 
  _shapeArray[5][1] = 2; 
  _shapeArray[6][0] = 2; 
  _shapeArray[6][1] = 3; 
  _shapeArray[7][0] = 1; 
  _shapeArray[7][1] = 4; 
  _shapeArray[8][0] = 1; 
  _shapeArray[8][1] = 5; 
  _shapeArray[9][0] = 1; 
  _shapeArray[9][1] = 6; 
  _shapeArray[10][0] = 3; 
  _shapeArray[10][1] = 2; 
  _shapeArray[11][0] = 1; 
  _shapeArray[11][1] = 3; 

}
void LEDLetter::make8(){
  _shapeArray[0][0] = 0; 
  _shapeArray[0][1] = 0; 
  _shapeArray[1][0] = 1; 
  _shapeArray[1][1] = 0; 
  _shapeArray[2][0] = 2; 
  _shapeArray[2][1] = 0; 
  _shapeArray[3][0] = 3; 
  _shapeArray[3][1] = 0; 
  _shapeArray[4][0] = 3; 
  _shapeArray[4][1] = 1; 
  _shapeArray[5][0] = 3; 
  _shapeArray[5][1] = 2; 
  _shapeArray[6][0] = 3; 
  _shapeArray[6][1] = 3; 
  _shapeArray[7][0] = 1; 
  _shapeArray[7][1] = 3; 
  _shapeArray[8][0] = 0; 
  _shapeArray[8][1] = 3; 
  _shapeArray[9][0] = 0; 
  _shapeArray[9][1] = 6; 
  _shapeArray[10][0] = 1; 
  _shapeArray[10][1] = 6; 
  _shapeArray[11][0] = 2; 
  _shapeArray[11][1] = 6; 
  _shapeArray[12][0] = 3; 
  _shapeArray[12][1] = 6; 
  _shapeArray[13][0] = 2; 
  _shapeArray[13][1] = 3; 
  _shapeArray[14][0] = 3; 
  _shapeArray[14][1] = 4; 
  _shapeArray[15][0] = 3; 
  _shapeArray[15][1] = 5; 
  _shapeArray[16][0] = 0; 
  _shapeArray[16][1] = 1; 
  _shapeArray[17][0] = 0; 
  _shapeArray[17][1] = 2; 
  _shapeArray[18][0] = 0; 
  _shapeArray[18][1] = 4; 
  _shapeArray[19][0] = 0; 
  _shapeArray[19][1] = 5; 

}
void LEDLetter::make9(){
  _shapeArray[0][0] = 0; 
  _shapeArray[0][1] = 0; 
  _shapeArray[1][0] = 1; 
  _shapeArray[1][1] = 0; 
  _shapeArray[2][0] = 2; 
  _shapeArray[2][1] = 0; 
  _shapeArray[3][0] = 3; 
  _shapeArray[3][1] = 0; 
  _shapeArray[4][0] = 3; 
  _shapeArray[4][1] = 3; 
  _shapeArray[5][0] = 1; 
  _shapeArray[5][1] = 3; 
  _shapeArray[6][0] = 0; 
  _shapeArray[6][1] = 3; 
  _shapeArray[7][0] = 0; 
  _shapeArray[7][1] = 6; 
  _shapeArray[8][0] = 1; 
  _shapeArray[8][1] = 6; 
  _shapeArray[9][0] = 2; 
  _shapeArray[9][1] = 6; 
  _shapeArray[10][0] = 3; 
  _shapeArray[10][1] = 6; 
  _shapeArray[11][0] = 2; 
  _shapeArray[11][1] = 3; 
  _shapeArray[12][0] = 3; 
  _shapeArray[12][1] = 4; 
  _shapeArray[13][0] = 3; 
  _shapeArray[13][1] = 5; 
  _shapeArray[14][0] = 0; 
  _shapeArray[14][1] = 1; 
  _shapeArray[15][0] = 0; 
  _shapeArray[15][1] = 2; 
  _shapeArray[16][0] = 3; 
  _shapeArray[16][1] = 1; 
  _shapeArray[17][0] = 3; 
  _shapeArray[17][1] = 2; 

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
