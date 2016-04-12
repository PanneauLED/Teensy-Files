#ifndef LETTERS_H
#define LETTERS_H
 
#include "Arduino.h"
#include "Shape.h"
#include "Panel.h"
 
class LetterS : public Shape {
  public:
      LetterS(CRGB ledPanel[6][256], Panel connection);
      void place(CRGB ledPanel[6][256]);
};
 
#endif
