#ifndef LETTERS_H
#define LETTERS_H
 
class LetterS : public Shape {
  public:
      LetterS(CRGB ledPanel[6][256], Panel connection);
      void place(CRGB ledPanel[6][256]);
};

#endif
