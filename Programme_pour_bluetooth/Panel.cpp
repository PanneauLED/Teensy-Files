#include "Panel.h"

Panel::Panel()
{
    //ctor
}

Panel::~Panel()
{
    //dtor
}




// nb de ligne par groupe
#define nbLine 4
// nb de led par ligne
#define nLEDs  64
// nb of groups in Panel
#define nbGroupe 6

#define NUM_LEDS nbLine*nLEDs
#define totLED NUM_LEDS*nbGroupe
void ledOn(int x, int y){
  int y_actual = y%4;
  int x_actual;
  // If odd:
  if (y_actual == 1){
    x_actual = x + 128*y_actual;
  }
  if (y_actual == 3){
    x_actual = x;
  }
  
  // if even:
  if (y_actual%2 == 0){
    x_actual = 255 - x - 64*y_actual;
  }
  
  // Reverse y-actual
  y_actual = 3-y_actual;
  
  
  // NOTE: This part does not work - no connection panel
  r = 10;
  b = 10;
  g = 10;
  leds[y_actual][x_actual].red=r;
  leds[y_actual][x_actual].green=g;
  leds[y_actual][x_actual].blue=b;
  FastLED.show();
  
  return;
}
  


void allOff(){
  r = 0;
  b = 0;
  g = 0;
 
  for(byte k=0;k<6;k++){
    for (int j=0; j<4;j++){
      for (int i =0;i<64;i++){
        leds[k][j*nLEDs+i].red=r;
        leds[k][j*nLEDs+i].green=g;
        leds[k][j*nLEDs+i].blue=b;
      }
    } 
    FastLED.show();
  }  
  return;
}

void allOn() {
  void allOff(){
  r = 5;
  b = 5;
  g = 5;
 
  for(byte k=0;k<6;k++){
    for (int j=0; j<4;j++){
      for (int i =0;i<64;i++){
        leds[k][j*nLEDs+i].red=r;
        leds[k][j*nLEDs+i].green=g;
        leds[k][j*nLEDs+i].blue=b;
      }
    } 
    FastLED.show();
  }  
  return;
}
