#include "CommonColors.h"
#include "color.h"

Color cl; 
void setup()
{
  Serial.begin(9600);
  Serial.println(clRed.getRed());
  Serial.println(cl.getRed());  //测试构造函数的默认值
}

void loop()
{}
