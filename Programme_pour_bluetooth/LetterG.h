#ifndef LETTERG_H
#define LETTERG_H
 
#include "Arduino.h"
#include "Shape.h"
#include "Panel.h"
 
class LetterG : public Shape {
  public:
      LetterG(CRGB ledPanel[6][256], Panel connection);
      void place(CRGB ledPanel[6][256]);
};
 
#endif
