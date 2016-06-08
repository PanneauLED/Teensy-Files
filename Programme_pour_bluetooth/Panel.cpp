#include "Panel.h"


Panel::Panel()
{
    
}

Panel::~Panel()
{
    //dtor
}


void Panel::setPanel(CRGB ledPanel[6][256]){
  //_ledPanel = workingPanel;
    
}


void Panel::ledOn(int x, int y, CRGB ledPanel[6][256]){
  int line_num = y%4;
  int x_actual;
  
  // If odd:
  if (line_num == 1){
    x_actual = x + 128*line_num;
  }
  if (line_num == 3){
    x_actual = x;
  }
  
  // if even:
  if (line_num%2 == 0){
    x_actual = 255 - x - 64*line_num;
  }
 
  int y_actual = y;
  int group = 5;
  while(y_actual > 3){
    y_actual -= 4;
    group -= 1;
  }
  
  //this->allOff(ledPanel);
 
  _r = 20;
  _g = 20;
  _b = 40;
  ledPanel[group][x_actual].red=_r;
  ledPanel[group][x_actual].green=_g;
  ledPanel[group][x_actual].blue=_b;
  FastLED.show();
  return;
}
  


void Panel::allOff(CRGB ledPanel[6][256]){
  int r = 0;
  int g = 0;
  int b = 0;
  
  for(byte k=0;k<6;k++){
    for (int j=0; j<4;j++){
      for (int i =0;i<64;i++){
        ledPanel[k][j*nLEDs+i].red=r;
        ledPanel[k][j*nLEDs+i].green=g;
        ledPanel[k][j*nLEDs+i].blue=b;
      }
    } 
    FastLED.show();
  }  
  return;
}

void Panel::allOn(CRGB ledPanel[6][256]) {
  int r = 5;
  int g = 0;
  int b = 5;
  
  for(byte k=0;k<6;k++){
    for (int j=0; j<4;j++){
      for (int i =0;i<64;i++){
        ledPanel[k][j*nLEDs+i].red=r;
        ledPanel[k][j*nLEDs+i].green=g;
        ledPanel[k][j*nLEDs+i].blue=b;
      }
    } 
    FastLED.show();
  }  
  return;
}
