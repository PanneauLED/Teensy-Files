#ifndef LETTERC_H
#define LETTERC_H
 
#include "Arduino.h"
#include "Shape.h"
#include "Panel.h"
 
class LetterC : public Shape {
  public:
      LetterC(CRGB ledPanel[6][256], Panel connection);
      void place(CRGB ledPanel[6][256]);
};
 
#endif
