#ifndef LETTERY_H
#define LETTERY_H
 
#include "Arduino.h"
#include "Shape.h"
 
class LetterY : public Shape {
  public:
      LetterY(CRGB ledPanel[6][256], Panel connection);
      void place(CRGB ledPanel[6][256]);
};
 
#endif
