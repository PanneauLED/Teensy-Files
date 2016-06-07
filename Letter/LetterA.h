#ifndef LETTERA_H
#define LETTERA_H

class LetterA;
class LetterA : public Shape {
  public:
      LetterA(CRGB ledPanel[6][256], Panel connection);
      void place(CRGB ledPanel[6][256], Panel connection);
};

#endif
