#ifndef LETTERA_H
#define LETTERA_H
 
#include "Arduino.h"
#include "Shape.h"
#include "Panel.h"
 
class LetterA : public Shape {
  public:
      LetterA(CRGB ledPanel[6][256], Panel connection);
      void place(CRGB ledPanel[6][256], Panel connection);
};
 
#endif
