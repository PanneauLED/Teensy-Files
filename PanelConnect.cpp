#include "PanelConnect.h"
using namespace std;
PanelConnect::PanelConnect()
{
    //ctor
}

PanelConnect::~PanelConnect()
{
    //dtor
}

void convertStructure()
{
    //use rearrange and change structure

}

void rearrange(int panel [])
{
    int changed [24][64];
    for (int i = 0; i< sizeof(panel); ++i){
//        changed [i] = 5;
    }
    //changes the order of the LEDs (every second row is reversed)
    for(int i = 0; i<24 ;++i)
    {
        if (i % 2 == 1){
            for(int j = 0; j<64;++j){
    //        changed [i][j] = panel[i][63-j];
        }

        }
    }
}
