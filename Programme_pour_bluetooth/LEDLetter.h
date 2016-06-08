#ifndef LEDLETTER_H
#define LEDLETTER_H

#include "LEDShape.h"

class LEDLetter;
class LEDLetter : public LEDShape {
  public:
      LEDLetter(CRGB ledPanel[6][256], Panel connection);
      void place(CRGB ledPanel[6][256], Panel connection);
      void change(char char_to_make);
      void makeA();
      void makeB();
      void makeC();
      void makeD();
      void makeE();
      void makeF();
      void makeG();
      void makeH();
      void makeI();
      void makeJ();
      void makeK();
      void makeL();
      void makeM();
      void makeN();
      void makeO();
      void makeP();
      void makeQ();
      void makeR();
      void makeS();
      void makeT();
      void makeU();
      void makeV();
      void makeW();
      void makeX();
      void makeY();
      void makeZ();

      void make0();
      void make1();
      void make2();
      void make3();
      void make4();
      void make5();
      void make6();
      void make7();
      void make8();
      void make9();
};

#endif
