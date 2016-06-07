#ifndef LETTERF_H
#define LETTERF_H
 
class LetterF : public Shape {
  public:
      LetterF(CRGB ledPanel[6][256], Panel connection);
      void place(CRGB ledPanel[6][256]);
};

#endif
