#ifndef LETTERF_H
#define LETTERF_H
 
#include "Arduino.h"
#include "Shape.h"
#include "Panel.h"
 
class LetterF : public Shape {
  public:
      LetterF(CRGB ledPanel[6][256], Panel connection);
      void place(CRGB ledPanel[6][256]);
};
 
#endif
