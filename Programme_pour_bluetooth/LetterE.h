#ifndef LETTERE_H
#define LETTERE_H
 
#include "Arduino.h"
#include "Shape.h"
 
class LetterE : public Shape {
  public:
      LetterE(CRGB ledPanel[6][256], Panel connection);
      void place(CRGB ledPanel[6][256]);
};
 
#endif
