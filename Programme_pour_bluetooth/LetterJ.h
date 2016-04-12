#ifndef LETTERJ_H
#define LETTERJ_H
 
#include "Arduino.h"
#include "Shape.h"
#include "Panel.h"
 
class LetterJ : public Shape {
  public:
      LetterJ(CRGB ledPanel[6][256], Panel connection);
      void place(CRGB ledPanel[6][256]);
};
 
#endif
