#ifndef LETTERU_H
#define LETTERU_H

class LetterU : public Shape {
  public:
      LetterU(CRGB ledPanel[6][256], Panel connection);
      void place(CRGB ledPanel[6][256]);
};

#endif
