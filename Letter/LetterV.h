#ifndef LETTERV_H
#define LETTERV_H
 
class LetterV : public Shape {
  public:
      LetterV(CRGB ledPanel[6][256], Panel connection);
      void place(CRGB ledPanel[6][256]);
};

#endif
