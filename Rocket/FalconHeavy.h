#ifndef FALCONHEAVY_H
#define FALCONHEAVY_H

#include "Rocket.h"

using namespace std;

class FalconHeavy: public Rocket
{
    public:
        FalconHeavy(StageCreator*, CollectionOfSatellites*);    //Constructor
        ~FalconHeavy();                                         //Destrucor
        bool fly();                                             //Causes the engines to be checked at launch and at the end of flight
};
#endif