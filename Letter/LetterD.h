#ifndef LETTERD_H
#define LETTERD_H
 
class LetterD : public Shape {
  public:
      LetterD(CRGB ledPanel[6][256], Panel connection);
      void place(CRGB ledPanel[6][256]);
};

#endif
