#include "Arduino.h"
#include <FastLED.h>
//#include "Panel.h"

#include "LetterA.h"
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
    LetterA _a(leds, ledPanel);
    _a.place(leds, ledPanel);
    
    
    
//    leds[0][70].red=20;
//    leds[0][70].green=20;
//    leds[0][70].blue=20;
//    FastLED.show();
  
}

char buffer; // stores incoming character from other device
void loop(){
  //loadImage();
  //reinitialiser();
  //ledPanel.ledOn(0, 0, leds);
  
  //fading();
  //turnRED();
  //turnOFF();
   // if text arrived in from BT serial:
  if (BLUETOOTH.available()){
     // buffer=(BLUETOOTH.read());
     //buffer = (BLUETOOTH.readString());
     letters = char[50];
     buffer.toCharArray(letters,50);
     for(int i = 0,i<=50,i++){
      if (letters[i]=='a'){
        fading();
        BLUETOOTH.println("fading");
      }
      if (letters[i]=='b'){
        turnRED();
        BLUETOOTH.println("turned red");
      }
      if (letters[i]=='c'){
        turnOFF();
        BLUETOOTH.println("turned off");
      }   
     }
    // you can add more "if" statements with other characters to add more commands
  }
  
}


