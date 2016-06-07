#ifndef LETTERG_H
#define LETTERG_H
 
class LetterG : public Shape {
  public:
      LetterG(CRGB ledPanel[6][256], Panel connection);
      void place(CRGB ledPanel[6][256]);
};

#endif
