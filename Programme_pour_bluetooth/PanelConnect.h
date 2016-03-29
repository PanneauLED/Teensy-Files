#ifndef PANELCONNECT_H
#define PANELCONNECT_H

//#include <FastLED.h>

class PanelConnect
{
    public:
        PanelConnect();
        virtual ~PanelConnect();
    protected:
    private:
        int panel [24][64];
       // int rearranged[24][64];
       // int changed [6][256];


};

#endif // PANELCONNECT_H
