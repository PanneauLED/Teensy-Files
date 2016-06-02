
#include "Arduino.h"
#include <FastLED.h>
#include "Letter.h"

Letter::A(CRGB ledPanel[6][256], Panel connection)
{
    
    _red = 0;
    _green = 0;
    _blue = 20;
    _row = 0;
    _col = 0;
    _shapeArray[0][0] = 0;
    _shapeArray[0][1] = 2;
    
    _shapeArray[1][0] = 0;
    _shapeArray[1][1] = 3;
    
    _shapeArray[2][0] = 0;
    _shapeArray[2][1] = 4;
    
    _shapeArray[3][0] = 1;
    _shapeArray[3][1] = 1;
    
    _shapeArray[4][0] = 1;
    _shapeArray[4][1] = 3;
    
    _shapeArray[5][0] = 2;
    _shapeArray[5][1] = 0;
    
    _shapeArray[6][0] = 2;
    _shapeArray[6][1] = 3;
    
    _shapeArray[7][0] = 3;
    _shapeArray[7][1] = 1;
    
    _shapeArray[8][0] = 3;
    _shapeArray[8][1] = 3;
    
    _shapeArray[9][0] = 4;
    _shapeArray[9][1] = 2;
    
    _shapeArray[10][0] = 4;
    _shapeArray[10][1] = 3;
    
    _shapeArray[11][0] = 4;
    _shapeArray[11][1] = 4;
}

Letter::B(CRGB ledPanel[6][256], Panel connection)
{
    
    _red = 0;
    _green = 0;
    _blue = 20;
    _row = 0;
    _col = 0;
    
    // Set points for letter
    _shapeArray[0][0] = 0;
    _shapeArray[0][1] = 0;
    
    _shapeArray[1][0] = 0;
    _shapeArray[1][1] = 1;
    
    _shapeArray[2][0] = 0;
    _shapeArray[2][1] = 2;
    
    _shapeArray[3][0] = 0;
    _shapeArray[3][1] = 3;
    
    _shapeArray[4][0] = 0;
    _shapeArray[4][1] = 4;
    
    _shapeArray[5][0] = 1;
    _shapeArray[5][1] = 0;
    
    _shapeArray[6][0] = 1;
    _shapeArray[6][1] = 2;
    
    _shapeArray[7][0] = 1;
    _shapeArray[7][1] = 4;
    
    _shapeArray[8][0] = 2;
    _shapeArray[8][1] = 0;
    
    _shapeArray[9][0] = 2;
    _shapeArray[9][1] = 2;
    
    _shapeArray[10][0] = 2;
    _shapeArray[10][1] = 4;
    
    _shapeArray[11][0] = 3;
    _shapeArray[11][1] = 0;
    
    _shapeArray[12][0] = 3;
    _shapeArray[12][1] = 2;
    
    _shapeArray[13][0] = 3;
    _shapeArray[13][1] = 4;
    
    _shapeArray[14][0] = 4;
    _shapeArray[14][1] = 1;
    
    _shapeArray[15][0] = 4;
    _shapeArray[15][1] = 4;
    
    
    
    // Turn on LED's
    
    int i=0;
    int x;
    int y;
    while(_shapeArray[i][0] >= 0){
        x = _shapeArray[i][0];
        y = _shapeArray[i][1];
        
        connection.ledOn(x, y, ledPanel);
        
        i += 1;
    }
    FastLED.show();
    
}


Letter::C(CRGB ledPanel[6][256], Panel connection)
{
    
    _red = 0;
    _green = 0;
    _blue = 20;
    _row = 0;
    _col = 0;
    
    // Set points for letter
    _shapeArray[0][0] = 0;
    _shapeArray[0][1] = 1;
    
    _shapeArray[1][0] = 0;
    _shapeArray[1][1] = 2;
    
    _shapeArray[2][0] = 0;
    _shapeArray[2][1] = 3;
    
    _shapeArray[3][0] = 1;
    _shapeArray[3][1] = 0;
    
    _shapeArray[4][0] = 1;
    _shapeArray[4][1] = 4;
    
    _shapeArray[5][0] = 2;
    _shapeArray[5][1] = 0;
    
    _shapeArray[6][0] = 2;
    _shapeArray[6][1] = 4;
    
    _shapeArray[7][0] = 3;
    _shapeArray[7][1] = 0;
    
    _shapeArray[8][0] = 3;
    _shapeArray[8][1] = 4;
    
    _shapeArray[9][0] = 4;
    _shapeArray[9][1] = 0;
    
    _shapeArray[10][0] = 4;
    _shapeArray[10][1] = 4;
    
    
    
    
    // Turn on LED's
    
    int i=0;
    int x;
    int y;
    while(_shapeArray[i][0] >= 0){
        x = _shapeArray[i][0];
        y = _shapeArray[i][1];
        
        connection.ledOn(x, y, ledPanel);
        
        i += 1;
    }
    FastLED.show();
    
}

Letter::D(CRGB ledPanel[6][256], Panel connection)
{
    
    _red = 0;
    _green = 0;
    _blue = 20;
    _row = 0;
    _col = 0;
    
    // Set points for letter
    _shapeArray[0][0] = 0;
    _shapeArray[0][1] = 0;
    
    _shapeArray[1][0] = 0;
    _shapeArray[1][1] = 1;
    
    _shapeArray[2][0] = 0;
    _shapeArray[2][1] = 2;
    
    _shapeArray[3][0] = 0;
    _shapeArray[3][1] = 3;
    
    _shapeArray[4][0] = 0;
    _shapeArray[4][1] = 4;
    
    _shapeArray[5][0] = 1;
    _shapeArray[5][1] = 0;
    
    _shapeArray[6][0] = 1;
    _shapeArray[6][1] = 4;
    
    _shapeArray[7][0] = 2;
    _shapeArray[7][1] = 0;
    
    _shapeArray[8][0] = 2;
    _shapeArray[8][1] = 4;
    
    _shapeArray[9][0] = 3;
    _shapeArray[9][1] = 0;
    
    _shapeArray[10][0] = 3;
    _shapeArray[10][1] = 4;
    
    _shapeArray[11][0] = 4;
    _shapeArray[11][1] = 1;
    
    _shapeArray[12][0] = 4;
    _shapeArray[12][1] = 2;
    
    _shapeArray[13][0] = 4;
    _shapeArray[13][1] = 3;
    
    
    // Turn on LED's
    
    int i=0;
    int x;
    int y;
    while(_shapeArray[i][0] >= 0){
        x = _shapeArray[i][0];
        y = _shapeArray[i][1];
        
        connection.ledOn(x, y, ledPanel);
        
        i += 1;
    }
    FastLED.show();
    
}
Letter::E(CRGB ledPanel[6][256], Panel connection)
{
    
    _red = 0;
    _green = 0;
    _blue = 20;
    _row = 0;
    _col = 0;
    
    // Set points for letter
    _shapeArray[0][0] = 0;
    _shapeArray[0][1] = 0;
    
    _shapeArray[1][0] = 0;
    _shapeArray[1][1] = 1;
    
    _shapeArray[2][0] = 0;
    _shapeArray[2][1] = 2;
    
    _shapeArray[3][0] = 0;
    _shapeArray[3][1] = 3;
    
    _shapeArray[4][0] = 0;
    _shapeArray[4][1] = 4;
    
    _shapeArray[5][0] = 1;
    _shapeArray[5][1] = 0;
    
    _shapeArray[6][0] = 1;
    _shapeArray[6][1] = 2;
    
    _shapeArray[7][0] = 1;
    _shapeArray[7][1] = 4;
    
    _shapeArray[8][0] = 2;
    _shapeArray[8][1] = 0;
    
    _shapeArray[9][0] = 2;
    _shapeArray[9][1] = 2;
    
    _shapeArray[10][0] = 2;
    _shapeArray[10][1] = 4;
    
    _shapeArray[11][0] = 3;
    _shapeArray[11][1] = 0;
    
    _shapeArray[12][0] = 3;
    _shapeArray[12][1] = 4;
    
    _shapeArray[13][0] = 4;
    _shapeArray[13][1] = 0;
    
    _shapeArray[14][0] = 4;
    _shapeArray[14][1] = 4;
    
    
    // Turn on LED's
    
    int i=0;
    int x;
    int y;
    while(_shapeArray[i][0] >= 0){
        x = _shapeArray[i][0];
        y = _shapeArray[i][1];
        
        connection.ledOn(x, y, ledPanel);
        
        i += 1;
    }
    FastLED.show();
    
}

Letter::F(CRGB ledPanel[6][256], Panel connection)
{
    
    _red = 0;
    _green = 0;
    _blue = 20;
    _row = 0;
    _col = 0;
    
    // Set points for letter
    _shapeArray[0][0] = 0;
    _shapeArray[0][1] = 0;
    
    _shapeArray[1][0] = 0;
    _shapeArray[1][1] = 1;
    
    _shapeArray[2][0] = 0;
    _shapeArray[2][1] = 2;
    
    _shapeArray[3][0] = 0;
    _shapeArray[3][1] = 3;
    
    _shapeArray[4][0] = 0;
    _shapeArray[4][1] = 4;
    
    _shapeArray[5][0] = 1;
    _shapeArray[5][1] = 0;
    
    _shapeArray[6][0] = 1;
    _shapeArray[6][1] = 2;
    
    _shapeArray[7][0] = 2;
    _shapeArray[7][1] = 0;
    
    _shapeArray[8][0] = 2;
    _shapeArray[8][1] = 2;
    
    _shapeArray[9][0] = 3;
    _shapeArray[9][1] = 0;
    
    _shapeArray[10][0] = 4;
    _shapeArray[10][1] = 2;
    
    
    
    // Turn on LED's
    
    int i=0;
    int x;
    int y;
    while(_shapeArray[i][0] >= 0){
        x = _shapeArray[i][0];
        y = _shapeArray[i][1];
        
        connection.ledOn(x, y, ledPanel);
        
        i += 1;
    }
    FastLED.show();
    
}

Letter::G(CRGB ledPanel[6][256], Panel connection)
{
    
    _red = 0;
    _green = 0;
    _blue = 20;
    _row = 0;
    _col = 0;
    
    // Set points for letter
    _shapeArray[0][0] = 0;
    _shapeArray[0][1] = 1;
    
    _shapeArray[1][0] = 0;
    _shapeArray[1][1] = 2;
    
    _shapeArray[2][0] = 0;
    _shapeArray[2][1] = 3;
    
    _shapeArray[3][0] = 1;
    _shapeArray[3][1] = 0;
    
    _shapeArray[4][0] = 1;
    _shapeArray[4][1] = 4;
    
    _shapeArray[5][0] = 2;
    _shapeArray[5][1] = 0;
    
    _shapeArray[6][0] = 2;
    _shapeArray[6][1] = 4;
    
    _shapeArray[7][0] = 3;
    _shapeArray[7][1] = 0;
    
    _shapeArray[8][0] = 3;
    _shapeArray[8][1] = 3;
    
    _shapeArray[9][0] = 3;
    _shapeArray[9][1] = 4;
    
    _shapeArray[10][0] = 4;
    _shapeArray[10][1] = 0;
    
    _shapeArray[11][0] = 4;
    _shapeArray[11][1] = 2;
    
    _shapeArray[12][0] = 4;
    _shapeArray[12][1] = 3;
    
    _shapeArray[13][0] = 4;
    _shapeArray[13][1] = 4;
    
    
    // Turn on LED's
    
    int i=0;
    int x;
    int y;
    while(_shapeArray[i][0] >= 0){
        x = _shapeArray[i][0];
        y = _shapeArray[i][1];
        
        connection.ledOn(x, y, ledPanel);
        
        i += 1;
    }
    FastLED.show();
    
}


Letter::H(CRGB ledPanel[6][256], Panel connection)
{
    
    _red = 0;
    _green = 0;
    _blue = 20;
    _row = 0;
    _col = 0;
    
    // Set points for letter
    _shapeArray[0][0] = 0;
    _shapeArray[0][1] = 0;
    
    _shapeArray[1][0] = 0;
    _shapeArray[1][1] = 1;
    
    _shapeArray[2][0] = 0;
    _shapeArray[2][1] = 2;
    
    _shapeArray[3][0] = 0;
    _shapeArray[3][1] = 3;
    
    _shapeArray[4][0] = 0;
    _shapeArray[4][1] = 4;
    
    _shapeArray[5][0] = 1;
    _shapeArray[5][1] = 2;
    
    _shapeArray[6][0] = 2;
    _shapeArray[6][1] = 2;
    
    _shapeArray[7][0] = 3;
    _shapeArray[7][1] = 2;
    
    _shapeArray[8][0] = 4;
    _shapeArray[8][1] = 0;
    
    _shapeArray[9][0] = 4;
    _shapeArray[9][1] = 1;
    
    _shapeArray[10][0] = 4;
    _shapeArray[10][1] = 2;
    
    _shapeArray[11][0] = 4;
    _shapeArray[11][1] = 3;
    
    _shapeArray[12][0] = 4;
    _shapeArray[12][1] = 4;
    
    
    // Turn on LED's
    
    int i=0;
    int x;
    int y;
    while(_shapeArray[i][0] >= 0){
        x = _shapeArray[i][0];
        y = _shapeArray[i][1];
        
        connection.ledOn(x, y, ledPanel);
        
        i += 1;
    }
    FastLED.show();
    
}

Letter::I(CRGB ledPanel[6][256], Panel connection)
{
    
    _red = 0;
    _green = 0;
    _blue = 20;
    _row = 0;
    _col = 0;
    
    // Set points for letter
    _shapeArray[0][0] = 0;
    _shapeArray[0][1] = 0;
    
    _shapeArray[1][0] = 0;
    _shapeArray[1][1] = 4;
    
    _shapeArray[2][0] = 1;
    _shapeArray[2][1] = 0;
    
    _shapeArray[3][0] = 1;
    _shapeArray[3][1] = 4;
    
    _shapeArray[4][0] = 2;
    _shapeArray[4][1] = 0;
    
    _shapeArray[5][0] = 2;
    _shapeArray[5][1] = 1;
    
    _shapeArray[6][0] = 2;
    _shapeArray[6][1] = 2;
    
    _shapeArray[7][0] = 2;
    _shapeArray[7][1] = 3;
    
    _shapeArray[8][0] = 2;
    _shapeArray[8][1] = 4;
    
    _shapeArray[9][0] = 3;
    _shapeArray[9][1] = 0;
    
    _shapeArray[10][0] = 3;
    _shapeArray[10][1] = 4;
    
    _shapeArray[11][0] = 4;
    _shapeArray[11][1] = 0;
    
    _shapeArray[12][0] = 4;
    _shapeArray[12][1] = 4;
    
    // Turn on LED's
    
    int i=0;
    int x;
    int y;
    while(_shapeArray[i][0] >= 0){
        x = _shapeArray[i][0];
        y = _shapeArray[i][1];
        
        connection.ledOn(x, y, ledPanel);
        
        i += 1;
    }
    FastLED.show();
    
}

Letter::J(CRGB ledPanel[6][256], Panel connection)
{
    
    _red = 0;
    _green = 0;
    _blue = 20;
    _row = 0;
    _col = 0;
    
    // Set points for letter
    _shapeArray[0][0] = 0;
    _shapeArray[0][1] = 0;
    
    _shapeArray[1][0] = 0;
    _shapeArray[1][1] = 3;
    
    _shapeArray[2][0] = 1;
    _shapeArray[2][1] = 0;
    
    _shapeArray[3][0] = 1;
    _shapeArray[3][1] = 4;
    
    _shapeArray[4][0] = 2;
    _shapeArray[4][1] = 0;
    
    _shapeArray[5][0] = 2;
    _shapeArray[5][1] = 4;
    
    _shapeArray[6][0] = 3;
    _shapeArray[6][1] = 0;
    
    _shapeArray[7][0] = 3;
    _shapeArray[7][1] = 1;
    
    _shapeArray[8][0] = 3;
    _shapeArray[8][1] = 2;
    
    _shapeArray[9][0] = 3;
    _shapeArray[9][1] = 3;
    
    _shapeArray[10][0] = 4;
    _shapeArray[10][1] = 0;
    
    
    // Turn on LED's
    
    int i=0;
    int x;
    int y;
    while(_shapeArray[i][0] >= 0){
        x = _shapeArray[i][0];
        y = _shapeArray[i][1];
        
        connection.ledOn(x, y, ledPanel);
        
        i += 1;
    }
    FastLED.show();
    
}

Letter::K(CRGB ledPanel[6][256], Panel connection)
{
    
    _red = 0;
    _green = 0;
    _blue = 20;
    _row = 0;
    _col = 0;
    
    // Set points for letter
    _shapeArray[0][0] = 0;
    _shapeArray[0][1] = 0;
    
    _shapeArray[1][0] = 0;
    _shapeArray[1][1] = 1;
    
    _shapeArray[2][0] = 0;
    _shapeArray[2][1] = 2;
    
    _shapeArray[3][0] = 0;
    _shapeArray[3][1] = 3;
    
    _shapeArray[4][0] = 0;
    _shapeArray[4][1] = 4;
    
    _shapeArray[5][0] = 1;
    _shapeArray[5][1] = 2;
    
    _shapeArray[6][0] = 2;
    _shapeArray[6][1] = 2;
    
    _shapeArray[7][0] = 3;
    _shapeArray[7][1] = 1;
    
    _shapeArray[8][0] = 3;
    _shapeArray[8][1] = 3;
    
    _shapeArray[9][0] = 4;
    _shapeArray[9][1] = 0;
    
    _shapeArray[10][0] = 4;
    _shapeArray[10][1] = 4;
    
    
    // Turn on LED's
    
    int i=0;
    int x;
    int y;
    while(_shapeArray[i][0] >= 0){
        x = _shapeArray[i][0];
        y = _shapeArray[i][1];
        
        connection.ledOn(x, y, ledPanel);
        
        i += 1;
    }
    FastLED.show();
    
}

Letter::L(CRGB ledPanel[6][256], Panel connection)
{
    
    _red = 0;
    _green = 0;
    _blue = 20;
    _row = 0;
    _col = 0;
    
    // Set points for letter
    _shapeArray[0][0] = 0;
    _shapeArray[0][1] = 0;
    
    _shapeArray[1][0] = 0;
    _shapeArray[1][1] = 1;
    
    _shapeArray[2][0] = 0;
    _shapeArray[2][1] = 2;
    
    _shapeArray[3][0] = 0;
    _shapeArray[3][1] = 3;
    
    _shapeArray[4][0] = 0;
    _shapeArray[4][1] = 4;
    
    _shapeArray[5][0] = 1;
    _shapeArray[5][1] = 4;
    
    _shapeArray[6][0] = 2;
    _shapeArray[6][1] = 4;
    
    _shapeArray[7][0] = 3;
    _shapeArray[7][1] = 4;
    
    _shapeArray[8][0] = 4;
    _shapeArray[8][1] = 4;
    
    
    
    // Turn on LED's
    
    int i=0;
    int x;
    int y;
    while(_shapeArray[i][0] >= 0){
        x = _shapeArray[i][0];
        y = _shapeArray[i][1];
        
        connection.ledOn(x, y, ledPanel);
        
        i += 1;
    }
    FastLED.show();
    
}

Letter::M(CRGB ledPanel[6][256], Panel connection)
{
    
    _red = 0;
    _green = 0;
    _blue = 20;
    _row = 0;
    _col = 0;
    
    // Set points for letter
    _shapeArray[0][0] = 0;
    _shapeArray[0][1] = 0;
    
    _shapeArray[1][0] = 0;
    _shapeArray[1][1] = 1;
    
    _shapeArray[2][0] = 0;
    _shapeArray[2][1] = 2;
    
    _shapeArray[3][0] = 0;
    _shapeArray[3][1] = 3;
    
    _shapeArray[4][0] = 0;
    _shapeArray[4][1] = 4;
    
    _shapeArray[5][0] = 1;
    _shapeArray[5][1] = 1;
    
    _shapeArray[6][0] = 2;
    _shapeArray[6][1] = 2;
    
    _shapeArray[7][0] = 3;
    _shapeArray[7][1] = 1;
    
    _shapeArray[8][0] = 4;
    _shapeArray[8][1] = 0;
    
    _shapeArray[9][0] = 4;
    _shapeArray[9][1] = 1;
    
    _shapeArray[10][0] = 4;
    _shapeArray[10][1] = 2;
    
    _shapeArray[11][0] = 4;
    _shapeArray[11][1] = 3;
    
    _shapeArray[12][0] = 4;
    _shapeArray[12][1] = 4;
    
    // Turn on LED's
    
    int i=0;
    int x;
    int y;
    while(_shapeArray[i][0] >= 0){
        x = _shapeArray[i][0];
        y = _shapeArray[i][1];
        
        connection.ledOn(x, y, ledPanel);
        
        i += 1;
    }
    FastLED.show();
    
}

Letter::N(CRGB ledPanel[6][256], Panel connection)
{
    
    _red = 0;
    _green = 0;
    _blue = 20;
    _row = 0;
    _col = 0;
    
    // Set points for letter
    _shapeArray[0][0] = 0;
    _shapeArray[0][1] = 0;
    
    _shapeArray[1][0] = 0;
    _shapeArray[1][1] = 1;
    
    _shapeArray[2][0] = 0;
    _shapeArray[2][1] = 2;
    
    _shapeArray[3][0] = 0;
    _shapeArray[3][1] = 3;
    
    _shapeArray[4][0] = 0;
    _shapeArray[4][1] = 4;
    
    _shapeArray[5][0] = 1;
    _shapeArray[5][1] = 1;
    
    _shapeArray[6][0] = 2;
    _shapeArray[6][1] = 2;
    
    _shapeArray[7][0] = 3;
    _shapeArray[7][1] = 3;
    
    _shapeArray[8][0] = 4;
    _shapeArray[8][1] = 0;
    
    _shapeArray[9][0] = 4;
    _shapeArray[9][1] = 1;
    
    _shapeArray[10][0] = 4;
    _shapeArray[10][1] = 2;
    
    _shapeArray[11][0] = 4;
    _shapeArray[11][1] = 3;
    
    _shapeArray[12][0] = 4;
    _shapeArray[12][1] = 4;
    // Turn on LED's
    
    int i=0;
    int x;
    int y;
    while(_shapeArray[i][0] >= 0){
        x = _shapeArray[i][0];
        y = _shapeArray[i][1];
        
        connection.ledOn(x, y, ledPanel);
        
        i += 1;
    }
    FastLED.show();
    
}

Letter::O(CRGB ledPanel[6][256], Panel connection)
{
    
    _red = 0;
    _green = 0;
    _blue = 20;
    _row = 0;
    _col = 0;
    
    // Set points for letter
    _shapeArray[0][0] = 0;
    _shapeArray[0][1] = 1;
    
    _shapeArray[1][0] = 0;
    _shapeArray[1][1] = 2;
    
    _shapeArray[2][0] = 0;
    _shapeArray[2][1] = 3;
    
    _shapeArray[3][0] = 1;
    _shapeArray[3][1] = 0;
    
    _shapeArray[4][0] = 1;
    _shapeArray[4][1] = 4;
    
    _shapeArray[5][0] = 2;
    _shapeArray[5][1] = 0;
    
    _shapeArray[6][0] = 2;
    _shapeArray[6][1] = 4;
    
    _shapeArray[7][0] = 3;
    _shapeArray[7][1] = 0;
    
    _shapeArray[8][0] = 3;
    _shapeArray[8][1] = 4;
    
    _shapeArray[9][0] = 4;
    _shapeArray[9][1] = 1;
    
    _shapeArray[10][0] = 4;
    _shapeArray[10][1] = 2;
    
    _shapeArray[11][0] = 4;
    _shapeArray[11][1] = 3;
    
    
    // Turn on LED's
    
    int i=0;
    int x;
    int y;
    while(_shapeArray[i][0] >= 0){
        x = _shapeArray[i][0];
        y = _shapeArray[i][1];
        
        connection.ledOn(x, y, ledPanel);
        
        i += 1;
    }
    FastLED.show();
    
}

Letter::P(CRGB ledPanel[6][256], Panel connection)
{
    
    _red = 0;
    _green = 0;
    _blue = 20;
    _row = 0;
    _col = 0;
    
    // Set points for letter
    _shapeArray[0][0] = 0;
    _shapeArray[0][1] = 0;
    
    _shapeArray[1][0] = 0;
    _shapeArray[1][1] = 1;
    
    _shapeArray[2][0] = 0;
    _shapeArray[2][1] = 2;
    
    _shapeArray[3][0] = 0;
    _shapeArray[3][1] = 3;
    
    _shapeArray[4][0] = 0;
    _shapeArray[4][1] = 4;
    
    _shapeArray[5][0] = 1;
    _shapeArray[5][1] = 0;
    
    _shapeArray[6][0] = 1;
    _shapeArray[6][1] = 2;
    
    _shapeArray[7][0] = 2;
    _shapeArray[7][1] = 0;
    
    _shapeArray[8][0] = 2;
    _shapeArray[8][1] = 2;
    
    _shapeArray[9][0] = 3;
    _shapeArray[9][1] = 0;
    
    _shapeArray[10][0] = 3;
    _shapeArray[10][1] = 2;
    
    _shapeArray[11][0] = 4;
    _shapeArray[11][1] = 1;
    
    
    // Turn on LED's
    
    int i=0;
    int x;
    int y;
    while(_shapeArray[i][0] >= 0){
        x = _shapeArray[i][0];
        y = _shapeArray[i][1];
        
        connection.ledOn(x, y, ledPanel);
        
        i += 1;
    }
    FastLED.show();
    
}

Letter::Q(CRGB ledPanel[6][256], Panel connection)
{
    
    _red = 0;
    _green = 0;
    _blue = 20;
    _row = 0;
    _col = 0;
    
    // Set points for letter
    _shapeArray[0][0] = 0;
    _shapeArray[0][1] = 1;
    
    _shapeArray[1][0] = 0;
    _shapeArray[1][1] = 2;
    
    _shapeArray[2][0] = 0;
    _shapeArray[2][1] = 3;
    
    _shapeArray[3][0] = 1;
    _shapeArray[3][1] = 0;
    
    _shapeArray[4][0] = 1;
    _shapeArray[4][1] = 4;
    
    _shapeArray[5][0] = 2;
    _shapeArray[5][1] = 0;
    
    _shapeArray[6][0] = 2;
    _shapeArray[6][1] = 2;
    
    _shapeArray[7][0] = 2;
    _shapeArray[7][1] = 4;
    
    _shapeArray[8][0] = 3;
    _shapeArray[8][1] = 0;
    
    _shapeArray[9][0] = 3;
    _shapeArray[9][1] = 3;
    
    _shapeArray[10][0] = 4;
    _shapeArray[10][1] = 1;
    
    _shapeArray[11][0] = 4;
    _shapeArray[11][1] = 2;
    
    _shapeArray[12][0] = 4;
    _shapeArray[12][1] = 4;
    // Turn on LED's
    
    int i=0;
    int x;
    int y;
    while(_shapeArray[i][0] >= 0){
        x = _shapeArray[i][0];
        y = _shapeArray[i][1];
        
        connection.ledOn(x, y, ledPanel);
        
        i += 1;
    }
    FastLED.show();
    
}

Letter::R(CRGB ledPanel[6][256], Panel connection)
{
    
    _red = 0;
    _green = 0;
    _blue = 20;
    _row = 0;
    _col = 0;
    
    // Set points for letter
    _shapeArray[0][0] = 0;
    _shapeArray[0][1] = 0;
    
    _shapeArray[1][0] = 0;
    _shapeArray[1][1] = 1;
    
    _shapeArray[2][0] = 0;
    _shapeArray[2][1] = 2;
    
    _shapeArray[3][0] = 0;
    _shapeArray[3][1] = 3;
    
    _shapeArray[4][0] = 0;
    _shapeArray[4][1] = 4;
    
    _shapeArray[5][0] = 1;
    _shapeArray[5][1] = 0;
    
    _shapeArray[6][0] = 1;
    _shapeArray[6][1] = 2;
    
    _shapeArray[7][0] = 2;
    _shapeArray[7][1] = 0;
    
    _shapeArray[8][0] = 2;
    _shapeArray[8][1] = 2;
    
    _shapeArray[9][0] = 3;
    _shapeArray[9][1] = 0;
    
    _shapeArray[10][0] = 3;
    _shapeArray[10][1] = 2;
    
    _shapeArray[11][0] = 4;
    _shapeArray[11][1] = 1;
    
    _shapeArray[12][0] = 4;
    _shapeArray[12][1] = 3;
    
    _shapeArray[13][0] = 4;
    _shapeArray[13][1] = 4;
    
    
    // Turn on LED's
    
    int i=0;
    int x;
    int y;
    while(_shapeArray[i][0] >= 0){
        x = _shapeArray[i][0];
        y = _shapeArray[i][1];
        
        connection.ledOn(x, y, ledPanel);
        
        i += 1;
    }
    FastLED.show();
    
}

Letter::S(CRGB ledPanel[6][256], Panel connection)
{
    
    _red = 0;
    _green = 0;
    _blue = 20;
    _row = 0;
    _col = 0;
    
    // Set points for letter
    _shapeArray[0][0] = 0;
    _shapeArray[0][1] = 1;
    
    _shapeArray[1][0] = 0;
    _shapeArray[1][1] = 4;
    
    _shapeArray[2][0] = 1;
    _shapeArray[2][1] = 0;
    
    _shapeArray[3][0] = 1;
    _shapeArray[3][1] = 2;
    
    _shapeArray[4][0] = 1;
    _shapeArray[4][1] = 4;
    
    _shapeArray[5][0] = 2;
    _shapeArray[5][1] = 0;
    
    _shapeArray[6][0] = 2;
    _shapeArray[6][1] = 2;
    
    _shapeArray[7][0] = 2;
    _shapeArray[7][1] = 4;
    
    _shapeArray[8][0] = 3;
    _shapeArray[8][1] = 0;
    
    _shapeArray[9][0] = 3;
    _shapeArray[9][1] = 2;
    
    _shapeArray[10][0] = 3;
    _shapeArray[10][1] = 4;
    
    _shapeArray[11][0] = 4;
    _shapeArray[11][1] = 0;
    
    _shapeArray[11][0] = 4;
    _shapeArray[11][1] = 3;
    
    // Turn on LED's
    
    int i=0;
    int x;
    int y;
    while(_shapeArray[i][0] >= 0){
        x = _shapeArray[i][0];
        y = _shapeArray[i][1];
        
        connection.ledOn(x, y, ledPanel);
        
        i += 1;
    }
    FastLED.show();
    
}

Letter::T(CRGB ledPanel[6][256], Panel connection)
{
    
    _red = 0;
    _green = 0;
    _blue = 20;
    _row = 0;
    _col = 0;
    
    // Set points for letter
    _shapeArray[0][0] = 0;
    _shapeArray[0][1] = 0;
    
    _shapeArray[1][0] = 1;
    _shapeArray[1][1] = 0;
    
    _shapeArray[2][0] = 2;
    _shapeArray[2][1] = 0;
    
    _shapeArray[3][0] = 2;
    _shapeArray[3][1] = 1;
    
    _shapeArray[4][0] = 2;
    _shapeArray[4][1] = 2;
    
    _shapeArray[5][0] = 2;
    _shapeArray[5][1] = 3;
    
    _shapeArray[6][0] = 2;
    _shapeArray[6][1] = 4;
    
    _shapeArray[7][0] = 3;
    _shapeArray[7][1] = 0;
    
    _shapeArray[8][0] = 4;
    _shapeArray[8][1] = 0;
    
    
    
    // Turn on LED's
    
    int i=0;
    int x;
    int y;
    while(_shapeArray[i][0] >= 0){
        x = _shapeArray[i][0];
        y = _shapeArray[i][1];
        
        connection.ledOn(x, y, ledPanel);
        
        i += 1;
    }
    FastLED.show();
    
}

Letter::U(CRGB ledPanel[6][256], Panel connection)
{
    
    _red = 0;
    _green = 0;
    _blue = 20;
    _row = 0;
    _col = 0;
    
    // Set points for letter
    _shapeArray[0][0] = 0;
    _shapeArray[0][1] = 0;
    
    _shapeArray[1][0] = 0;
    _shapeArray[1][1] = 1;
    
    _shapeArray[2][0] = 0;
    _shapeArray[2][1] = 2;
    
    _shapeArray[3][0] = 0;
    _shapeArray[3][1] = 3;
    
    _shapeArray[4][0] = 1;
    _shapeArray[4][1] = 4;
    
    _shapeArray[5][0] = 2;
    _shapeArray[5][1] = 4;
    
    _shapeArray[6][0] = 3;
    _shapeArray[6][1] = 4;
    
    _shapeArray[7][0] = 4;
    _shapeArray[7][1] = 0;
    
    _shapeArray[8][0] = 4;
    _shapeArray[8][1] = 1;
    
    _shapeArray[9][0] = 4;
    _shapeArray[9][1] = 2;
    
    _shapeArray[10][0] = 4;
    _shapeArray[10][1] = 3;
    
    
    // Turn on LED's
    
    int i=0;
    int x;
    int y;
    while(_shapeArray[i][0] >= 0){
        x = _shapeArray[i][0];
        y = _shapeArray[i][1];
        
        connection.ledOn(x, y, ledPanel);
        
        i += 1;
    }
    FastLED.show();
    
}

Letter::V(CRGB ledPanel[6][256], Panel connection)
{
    
    _red = 0;
    _green = 0;
    _blue = 20;
    _row = 0;
    _col = 0;
    
    // Set points for letter
    _shapeArray[0][0] = 0;
    _shapeArray[0][1] = 0;
    
    _shapeArray[1][0] = 0;
    _shapeArray[1][1] = 1;
    
    _shapeArray[2][0] = 0;
    _shapeArray[2][1] = 2;
    
    _shapeArray[3][0] = 1;
    _shapeArray[3][1] = 3;
    
    _shapeArray[4][0] = 2;
    _shapeArray[4][1] = 4;
    
    _shapeArray[5][0] = 3;
    _shapeArray[5][1] = 3;
    
    _shapeArray[6][0] = 4;
    _shapeArray[6][1] = 0;
    
    _shapeArray[7][0] = 4;
    _shapeArray[7][1] = 1;
    
    _shapeArray[8][0] = 4;
    _shapeArray[8][1] = 2;
    
    
    // Turn on LED's
    
    int i=0;
    int x;
    int y;
    while(_shapeArray[i][0] >= 0){
        x = _shapeArray[i][0];
        y = _shapeArray[i][1];
        
        connection.ledOn(x, y, ledPanel);
        
        i += 1;
    }
    FastLED.show();
    
}

Letter::W(CRGB ledPanel[6][256], Panel connection)
{
    
    _red = 0;
    _green = 0;
    _blue = 20;
    _row = 0;
    _col = 0;
    
    // Set points for letter
    _shapeArray[0][0] = 0;
    _shapeArray[0][1] = 0;
    
    _shapeArray[1][0] = 0;
    _shapeArray[1][1] = 1;
    
    _shapeArray[2][0] = 0;
    _shapeArray[2][1] = 2;
    
    _shapeArray[3][0] = 0;
    _shapeArray[3][1] = 3;
    
    _shapeArray[4][0] = 0;
    _shapeArray[4][1] = 4;
    
    _shapeArray[5][0] = 1;
    _shapeArray[5][1] = 3;
    
    _shapeArray[6][0] = 2;
    _shapeArray[6][1] = 2;
    
    _shapeArray[7][0] = 3;
    _shapeArray[7][1] = 3;
    
    _shapeArray[8][0] = 4;
    _shapeArray[8][1] = 0;
    
    _shapeArray[9][0] = 4;
    _shapeArray[9][1] = 1;
    
    _shapeArray[10][0] = 4;
    _shapeArray[10][1] = 2;
    
    _shapeArray[11][0] = 4;
    _shapeArray[11][1] = 3;
    
    _shapeArray[12][0] = 4;
    _shapeArray[12][1] = 4;
    
    // Turn on LED's
    
    int i=0;
    int x;
    int y;
    while(_shapeArray[i][0] >= 0){
        x = _shapeArray[i][0];
        y = _shapeArray[i][1];
        
        connection.ledOn(x, y, ledPanel);
        
        i += 1;
    }
    FastLED.show();
    
}

Letter::X(CRGB ledPanel[6][256], Panel connection)
{
    
    _red = 0;
    _green = 0;
    _blue = 20;
    _row = 0;
    _col = 0;
    
    // Set points for letter
    _shapeArray[0][0] = 0;
    _shapeArray[0][1] = 0;
    
    _shapeArray[1][0] = 0;
    _shapeArray[1][1] = 4;
    
    _shapeArray[2][0] = 1;
    _shapeArray[2][1] = 1;
    
    _shapeArray[3][0] = 1;
    _shapeArray[3][1] = 3;
    
    _shapeArray[4][0] = 2;
    _shapeArray[4][1] = 2;
    
    _shapeArray[5][0] = 3;
    _shapeArray[5][1] = 1;
    
    _shapeArray[6][0] = 3;
    _shapeArray[6][1] = 3;
    
    _shapeArray[7][0] = 4;
    _shapeArray[7][1] = 0;
    
    _shapeArray[8][0] = 4;
    _shapeArray[8][1] = 4;
    
    
    // Turn on LED's
    
    int i=0;
    int x;
    int y;
    while(_shapeArray[i][0] >= 0){
        x = _shapeArray[i][0];
        y = _shapeArray[i][1];
        
        connection.ledOn(x, y, ledPanel);
        
        i += 1;
    }
    FastLED.show();
    
}

Letter::Y(CRGB ledPanel[6][256], Panel connection)
{
    
    _red = 0;
    _green = 0;
    _blue = 20;
    _row = 0;
    _col = 0;
    
    // Set points for letter
    _shapeArray[0][0] = 0;
    _shapeArray[0][1] = 0;
    
    _shapeArray[1][0] = 1;
    _shapeArray[1][1] = 1;
    
    _shapeArray[2][0] = 2;
    _shapeArray[2][1] = 2;
    
    _shapeArray[3][0] = 2;
    _shapeArray[3][1] = 3;
    
    _shapeArray[4][0] = 2;
    _shapeArray[4][1] = 4;
    
    _shapeArray[5][0] = 3;
    _shapeArray[5][1] = 1;
    
    _shapeArray[6][0] = 4;
    _shapeArray[6][1] = 0;
    
    
    // Turn on LED's
    
    int i=0;
    int x;
    int y;
    while(_shapeArray[i][0] >= 0){
        x = _shapeArray[i][0];
        y = _shapeArray[i][1];
        
        connection.ledOn(x, y, ledPanel);
        
        i += 1;
    }
    FastLED.show();
    
}

Letter::Z(CRGB ledPanel[6][256], Panel connection)
{
    
    _red = 0;
    _green = 0;
    _blue = 20;
    _row = 0;
    _col = 0;
    
    // Set points for letter
    _shapeArray[0][0] = 0;
    _shapeArray[0][1] = 0;
    
    _shapeArray[1][0] = 0;
    _shapeArray[1][1] = 4;
    
    _shapeArray[2][0] = 1;
    _shapeArray[2][1] = 0;
    
    _shapeArray[3][0] = 1;
    _shapeArray[3][1] = 3;
    
    _shapeArray[4][0] = 1;
    _shapeArray[4][1] = 4;
    
    _shapeArray[5][0] = 2;
    _shapeArray[5][1] = 0;
    
    _shapeArray[6][0] = 2;
    _shapeArray[6][1] = 2;
    
    _shapeArray[7][0] = 2;
    _shapeArray[7][1] = 4;
    
    _shapeArray[8][0] = 3;
    _shapeArray[8][1] = 0;
    
    _shapeArray[9][0] = 3;
    _shapeArray[9][1] = 1;
    
    _shapeArray[10][0] = 3;
    _shapeArray[10][1] = 4;
    
    _shapeArray[11][0] = 4;
    _shapeArray[11][1] = 0;
    
    _shapeArray[12][0] = 4;
    _shapeArray[12][1] = 4;
    // Turn on LED's
    
    int i=0;
    int x;
    int y;
    while(_shapeArray[i][0] >= 0){
        x = _shapeArray[i][0];
        y = _shapeArray[i][1];
        
        connection.ledOn(x, y, ledPanel);
        
        i += 1;
    }
    FastLED.show();
    
}