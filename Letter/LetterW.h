#ifndef LETTERW_H
#define LETTERW_H
 
class LetterW : public Shape {
  public:
      LetterW(CRGB ledPanel[6][256], Panel connection);
      void place(CRGB ledPanel[6][256]);
};

#endif
