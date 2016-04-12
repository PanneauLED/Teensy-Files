#ifndef LETTERT_H
#define LETTERT_H
 
#include "Arduino.h"
#include "Shape.h"
#include "Panel.h"
 
class LetterT : public Shape {
  public:
      LetterT(CRGB ledPanel[6][256], Panel connection);
      void place(CRGB ledPanel[6][256]);
};
 
#endif
