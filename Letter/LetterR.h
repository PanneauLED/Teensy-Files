#ifndef LETTERR_H
#define LETTERR_H
 
class LetterR : public Shape {
  public:
      LetterR(CRGB ledPanel[6][256], Panel connection);
      void place(CRGB ledPanel[6][256]);
};

#endif
