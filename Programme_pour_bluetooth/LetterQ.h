#ifndef LETTERQ_H
#define LETTERQ_H
 
#include "Arduino.h"
#include "Shape.h"
 
class LetterQ : public Shape {
  public:
      LetterQ(CRGB ledPanel[6][256], Panel connection);
      void place(CRGB ledPanel[6][256]);
};
 
#endif
