#ifndef LETTERV_H
#define LETTERV_H
 
#include "Arduino.h"
#include "Shape.h"
#include "Panel.h"
 
class LetterV : public Shape {
  public:
      LetterV(CRGB ledPanel[6][256], Panel connection);
      void place(CRGB ledPanel[6][256]);
};
 
#endif
