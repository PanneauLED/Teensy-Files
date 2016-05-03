
#ifndef COLOR_H  //Precompiling, preventing duplicate definition of class
#define COLOR_H

class Color
{
private:    
  unsigned int rValue;
  unsigned int gValue;
  unsigned int bValue;

public:
  Color(unsigned int r=255, unsigned int g=0, unsigned int b=0); //Constructors
  //members functions
  void setRed(unsigned int value); 
  unsigned int getRed();
  void setGreen(unsigned int value);
  unsigned int getGreen();
  void setBlue(unsigned int value);
  unsigned int getBlue();

};

#endif // COLOR_H


