#ifndef LETTERH_H
#define LETTERH_H
 
class LetterH : public Shape {
  public:
      LetterH(CRGB ledPanel[6][256], Panel connection);
      void place(CRGB ledPanel[6][256]);
};

#endif