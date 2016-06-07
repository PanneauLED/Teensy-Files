#ifndef LETTERL_H
#define LETTERL_H
 
#include "Arduino.h"
#include "Shape.h"
 
class LetterL : public Shape {
  public:
      LetterL(CRGB ledPanel[6][256], Panel connection);
      void place(CRGB ledPanel[6][256]);
};
 
#endif
