#ifndef LETTERI_H
#define LETTERI_H
 
#include "Arduino.h"
#include "Shape.h"
 
class LetterI : public Shape {
  public:
      LetterI(CRGB ledPanel[6][256], Panel connection);
      void place(CRGB ledPanel[6][256]);
};
 
#endif
