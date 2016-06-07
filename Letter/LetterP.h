#ifndef LETTERP_H
#define LETTERP_H
 
class LetterP : public Shape {
  public:
      LetterP(CRGB ledPanel[6][256], Panel connection);
      void place(CRGB ledPanel[6][256]);
};

#endif
