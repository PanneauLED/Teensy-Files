#ifndef LETTERK_H
#define LETTERK_H
 
#include "Arduino.h"
#include "Shape.h"
#include "Panel.h"
 
class LetterK : public Shape {
  public:
      LetterK(CRGB ledPanel[6][256], Panel connection);
      void place(CRGB ledPanel[6][256]);
};
 
#endif
