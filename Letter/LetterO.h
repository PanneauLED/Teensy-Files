#ifndef LETTERO_H
#define LETTERO_H
 
class LetterO : public Shape {
  public:
      LetterO(CRGB ledPanel[6][256], Panel connection);
      void place(CRGB ledPanel[6][256]);
};

#endif
