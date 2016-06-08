
#include "LEDLetter.h"
#include "Arduino.h"
#include <FastLED.h>

// nb de ligne par groupe
#define nbLine 4
// nb de led par ligne
#define nLEDs  64

#define NUM_LEDS nbLine*nLEDs
#define nbGroupe 6
#define totLED NUM_LEDS*nbGroupe

//definition des pin correspondant aux rubans
#define CLOCKPIN_0 11
#define CLOCKPIN_1 9
#define CLOCKPIN_2 7
#define CLOCKPIN_3 17
#define CLOCKPIN_4 15
#define CLOCKPIN_5 13

#define DATAPIN_0 12
#define DATAPIN_1 10
#define DATAPIN_2 8
#define DATAPIN_3 18
#define DATAPIN_4 16
#define DATAPIN_5 14

// Bluetooth Connection:
#include <SoftwareSerial.h>
SoftwareSerial BLUETOOTH(0, 1); 
// creates a "virtual" serial port/UART
// connect BT module TX to D0
// connect BT module RX to D1
// connect BT Vcc to 3.3V, GND to GND

//Sortie bluetooth Serial
//#define BLUETOOTH Serial1
// tableau des couleurs des leds
CRGB leds[nbGroupe][NUM_LEDS];

// Instantiate panel
Panel ledPanel;

// numéro de la Led 
uint16_t i=0;
// numéro du groupe courant
int groupenum=0;
//temps du dernier pixel reçu
unsigned long lastUpdateTime=millis();
void reinitialiser(){
 
 if (millis()-lastUpdateTime>1000){
   groupenum=0;
   i=0;
 }
  
}

LEDLetter _h(leds, ledPanel);
LEDLetter _o(leds, ledPanel);
LEDLetter _m(leds, ledPanel);
LEDLetter _e(leds, ledPanel);

LEDLetter _t(leds, ledPanel);
LEDLetter _i(leds, ledPanel);
LEDLetter _m2(leds, ledPanel);
LEDLetter _e2(leds, ledPanel);

LEDLetter _v(leds, ledPanel);
LEDLetter _i2(leds, ledPanel);
LEDLetter _s(leds, ledPanel);
LEDLetter _i3(leds, ledPanel);
LEDLetter _o2(leds, ledPanel);
LEDLetter _r(leds, ledPanel);

LEDLetter _0(leds, ledPanel);
LEDLetter _1(leds, ledPanel);
LEDLetter _2(leds, ledPanel);
LEDLetter _3(leds, ledPanel);

LEDLetter _4(leds, ledPanel);
LEDLetter _5(leds, ledPanel);
LEDLetter _6(leds, ledPanel);
LEDLetter _7(leds, ledPanel);

void loadImage(){
   /* chaque groupe de trois octets représente 
      les couleurs d'un pixel dans l'ordre RGB.
      On charge le pixels dans le tableau à son
      emplacement correspondant                */
   if (BLUETOOTH.available()>2){
     lastUpdateTime=millis();
     
     leds[groupenum][i].red=BLUETOOTH.read();
     leds[groupenum][i].green=BLUETOOTH.read();
     leds[groupenum][i].blue=BLUETOOTH.read();
     i++;
     /* On remet le numéro de la led du compteur 
        a zéro quand on arrive au bout          */
     if (i>NUM_LEDS-1){
       groupenum++;
       /* si on a mis à jour tout les pixels
          on affiche le résultat            */
       if (groupenum==nbGroupe){
         groupenum=0;
         FastLED.show();
       } 
       i=0;
     }
  }
}

uint16_t state = 0;
byte r,g ,b;
/**************************************************
 * Change la couleur des Led de manière continue  *
 * Permet de tester si elle fonctionne toute      *
 *                                                *
 **************************************************/
 void fading(){
    switch(state / 128)
  {
    case 0:
      r = 127 - state % 128; // red down
      g = state % 128;       // green up
      b = 0;                    // blue off
      break;
    case 1:
      g = 127 - state % 128; // green down
      b = state % 128;       // blue up
      r = 0;                    // red off
      break;
    case 2:
      b = 127 - state % 128; // blue down
      r = state % 128;       // red up
      g = 0;                    // green off
      break;
  }

  for(byte k=0;k<nbGroupe;k++){
    for (int j=0; j<nbLine;j++){
      for (int i =0;i<nLEDs;i++){
        leds[k][j*nLEDs+i].red=r;
        leds[k][j*nLEDs+i].green=g;
        leds[k][j*nLEDs+i].blue=b;
      }
      
    } 
    
    FastLED.show();
  }  
    state++;
    if (state==384){state=0;}
  }
  
  
void turnRED(){
    
    r = 10;
    b = 0;
    g = 0;
 
  for(byte k=0;k<nbGroupe;k++){
    for (int j=0; j<nbLine;j++){
      for (int i =0;i<nLEDs;i++){
        leds[k][j*nLEDs+i].red=r;
        leds[k][j*nLEDs+i].green=g;
        leds[k][j*nLEDs+i].blue=b;
      }
    } 
    FastLED.show();
  }  
}

void turnOFF(){
   
    r = 0;
    b = 0;
    g = 0;
 
  for(byte k=0;k<nbGroupe;k++){
    for (int j=0; j<nbLine;j++){
      for (int i =0;i<nLEDs;i++){
        leds[k][j*nLEDs+i].red=r;
        leds[k][j*nLEDs+i].green=g;
        leds[k][j*nLEDs+i].blue=b;
      }
    } 
    FastLED.show();
  }  
}


void setup(){
  // on initialise la connexion serial
    Serial.begin(9600);
    BLUETOOTH.begin(9600);
    delay(200);
    BLUETOOTH.println("Hello from Arduino");
    // on ajoute tout les rubans de led un par un
    FastLED.addLeds<LPD8806, DATAPIN_0,CLOCKPIN_0>(leds[0], NUM_LEDS);
    FastLED.addLeds<LPD8806, DATAPIN_1,CLOCKPIN_1>(leds[1], NUM_LEDS);    
    FastLED.addLeds<LPD8806, DATAPIN_2,CLOCKPIN_2>(leds[2], NUM_LEDS);    
    FastLED.addLeds<LPD8806, DATAPIN_3,CLOCKPIN_3>(leds[3], NUM_LEDS);    
    FastLED.addLeds<LPD8806, DATAPIN_4,CLOCKPIN_4>(leds[4], NUM_LEDS);
    FastLED.addLeds<LPD8806, DATAPIN_5,CLOCKPIN_5>(leds[5], NUM_LEDS);
    //fading();
    ledPanel.allOff(leds);
    
    LEDLetter _h(leds, ledPanel);
    _h.makeH();
    LEDLetter _o(leds, ledPanel);
    _o.makeO();
    LEDLetter _m(leds, ledPanel);
    _m.makeM();
    LEDLetter _e(leds, ledPanel);
    _e.makeE();
    
    
    LEDLetter _t(leds, ledPanel);
    _t.makeT();
    LEDLetter _i(leds, ledPanel);
    _i.makeI();
    LEDLetter _m2(leds, ledPanel);
    _m2.makeM();
    LEDLetter _e2(leds, ledPanel);
    _e2.makeE();
    
    _t.setLocation(1, 1);
    _i.setLocation(5, 1);
    _m2.setLocation(10, 1);
    _e2.setLocation(5, 1);
    
    _t.place(leds, ledPanel);
    _i.place(leds, ledPanel);
    _m2.place(leds, ledPanel);
    _e2.place(leds, ledPanel);
    
    
    
    
    
    LEDLetter _v(leds, ledPanel);
    _v.makeV();
    LEDLetter _i2(leds, ledPanel);
    _i2.makeI();
    LEDLetter _s(leds, ledPanel);
    _s.makeS();
    LEDLetter _i3(leds, ledPanel);
    _i3.makeI();
    LEDLetter _o2(leds, ledPanel);
    _o2.makeO();
    LEDLetter _r(leds, ledPanel);
    _r.makeR();
    
    LEDLetter _0(leds, ledPanel);
    _0.make0();
    LEDLetter _1(leds, ledPanel);
    _1.make0();
    LEDLetter _2(leds, ledPanel);
    _2.make0();
    LEDLetter _3(leds, ledPanel);
    _3.make0();
    
    LEDLetter _4(leds, ledPanel);
    _4.make0();
    LEDLetter _5(leds, ledPanel);
    _5.make0();
    LEDLetter _6(leds, ledPanel);
    _6.make0();
    LEDLetter _7(leds, ledPanel);
    _7.make0();
    
    
    
    
    _4.setLocation(1, 30);
    _5.setLocation(1, 35);
    _6.setLocation(1, 40);
    _7.setLocation(1, 45);
    
    _h.setLocation(20, 1);
    _o.setLocation(20, 5);
    _m.setLocation(20, 10);
    _e.setLocation(20, 15);
    _0.setLocation(40, 1);
    _1.setLocation(40, 5);
    
    _v.setLocation(20, 30);
    _i2.setLocation(20, 35);
    _s.setLocation(20, 40);
    _i3.setLocation(20, 45);
    _o2.setLocation(20, 50);
    _r.setLocation(20, 55);
    
    
    _2.setLocation(40, 30);
    _3.setLocation(40, 35);
    
    
    
    _h.place(leds, ledPanel);
    _o.place(leds, ledPanel);
    _m.place(leds, ledPanel);
    _e.place(leds, ledPanel);
    

    
    _v.place(leds, ledPanel);
    _i2.place(leds, ledPanel);
    _s.place(leds, ledPanel);
    _i3.place(leds, ledPanel);
    _o2.place(leds, ledPanel);
    _r.place(leds, ledPanel);
    
    _0.place(leds, ledPanel);
    _1.place(leds, ledPanel);
    _2.place(leds, ledPanel);
    _3.place(leds, ledPanel);
    
    _4.place(leds, ledPanel);
    _5.place(leds, ledPanel);
    _6.place(leds, ledPanel);
    _7.place(leds, ledPanel);
}




String buffer; // stores incoming character from other device
void loop(){
   // if text arrived in from BT serial:
  if (BLUETOOTH.available()){
     // buffer=(BLUETOOTH.read());
     char indicator = (BLUETOOTH.read()); //indicates the purpose of the following String
//     int firstNumber = (BLUETOOTH.read());
//     int secondNumber = (BLUETOOTH.read());
//     Serial.println(indicator + ' ' + firstNumber + ' ' + secondNumber);
     buffer = (BLUETOOTH.readString());
     char letters [50];
     buffer.toCharArray(letters,50);
     
     switch(indicator) {
       case 'h':
         _h.makeH();
          _h.place(leds, ledPanel);
         Serial.println("home score");
         Serial.println(buffer);
         Serial.println(buffer.toInt());
         break;
       case 'v':
         _h.makeV();
         _h.place(leds, ledPanel);
         Serial.println("visitor score");
         Serial.println(buffer);
         Serial.println("as int:" + buffer.toInt());
         break;
       case 'm':
         _h.makeM();
         _h.place(leds, ledPanel);
         Serial.println("minutes:");
         Serial.println(buffer);
         Serial.println("as int:" + buffer.toInt());
         break;
       case 's': 
         Serial.println("seconds:");
         Serial.println(buffer);
         Serial.println("as int: " + buffer.toInt());
         break;
       case 'e': 
         Serial.println("stop timer");
         Serial.println(buffer);
         Serial.println("as int:" + buffer.toInt());
         break;
       case 'b': 
         Serial.println("begin timer");
         Serial.println(buffer);
         Serial.println("as int:" + buffer.toInt());
         break;
       case 'i': 
         Serial.println("visitor score");
         Serial.println(buffer);
         Serial.println("as int:" + buffer.toInt());
         break;
       case 'f': 
         Serial.println("all off");
         ledPanel.allOff(leds);
         break;
       case 'a': 
         Serial.println("all on");
         ledPanel.allOn(leds);
         break;
     }
  }
  
}





