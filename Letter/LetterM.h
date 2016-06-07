#ifndef LETTERM_H
#define LETTERM_H
 
class LetterM : public Shape {
  public:
      LetterM(CRGB ledPanel[6][256], Panel connection);
      void place(CRGB ledPanel[6][256]);
};

#endif
