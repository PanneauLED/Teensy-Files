#ifndef LETTERU_H
#define LETTERU_H
 
#include "Arduino.h"
#include "Shape.h"
#include "Panel.h"
 
class LetterU : public Shape {
  public:
      LetterU(CRGB ledPanel[6][256], Panel connection);
      void place(CRGB ledPanel[6][256]);
};
 
#endif
