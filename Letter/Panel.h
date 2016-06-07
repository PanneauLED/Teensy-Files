/*
  Panel.h - Library for Panel class.
*/

// nb de ligne par groupe
#define nbLine 4
// nb de led par ligne
#define nLEDs  64
// nb of groups in Panel
#define nbGroupe 6

#define NUM_LEDS nbLine*nLEDs
#define totLED NUM_LEDS*nbGroupe

class Panel
{
    public:
        Panel();
        virtual ~Panel();
        void allOn();
        void allOff(CRGB ledPanel[6][256]);
        void ledOn(int x, int y, CRGB ledPanel[6][256]);
        void setPanel(CRGB ledPanel[6][256]);

    protected:

    private:
        CRGB _ledPanel[6][256];
        int _r;
        int _g;
        int _b;

};
