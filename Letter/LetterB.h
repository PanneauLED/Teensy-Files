#ifndef LETTERB_H
#define LETTERB_H

class LetterB : public Shape {
  public:
      LetterB(CRGB ledPanel[6][256], Panel connection);
      void place(CRGB ledPanel[6][256]);
};

#endif
