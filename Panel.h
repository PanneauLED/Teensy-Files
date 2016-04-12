#ifndef PANEL_H
#define PANEL_H

#include <FastLED.h>

class Panel
{
    public:
        Panel();
        virtual ~Panel();
    protected:
    private:
    	CRGB _ledPanel;
};

#endif // PANEL_H
