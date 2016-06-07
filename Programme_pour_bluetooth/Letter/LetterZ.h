#ifndef LETTERZ_H
#define LETTERZ_H
 
#include "Arduino.h"
#include "Shape.h"
#include "Panel.h"
 
class LetterZ : public Shape {
  public:
      LetterZ(CRGB ledPanel[6][256], Panel connection);
      void place(CRGB ledPanel[6][256]);
};
 
#endif
