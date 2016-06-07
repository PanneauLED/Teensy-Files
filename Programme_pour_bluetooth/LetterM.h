#ifndef LETTERM_H
#define LETTERM_H
 
#include "Arduino.h"
#include "Shape.h"
 
class LetterM : public Shape {
  public:
      LetterM(CRGB ledPanel[6][256], Panel connection);
      void place(CRGB ledPanel[6][256]);
};
 
#endif
