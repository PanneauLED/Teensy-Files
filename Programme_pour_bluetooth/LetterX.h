#ifndef LETTERX_H
#define LETTERX_H
 
#include "Arduino.h"
#include "Shape.h"
 
class LetterX : public Shape {
  public:
      LetterX(CRGB ledPanel[6][256], Panel connection);
      void place(CRGB ledPanel[6][256]);
};
 
#endif
