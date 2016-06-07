#ifndef LETTERN_H
#define LETTERN_H
 
#include "Arduino.h"
#include "Shape.h"
 
class LetterN : public Shape {
  public:
      LetterN(CRGB ledPanel[6][256], Panel connection);
      void place(CRGB ledPanel[6][256]);
};
 
#endif
