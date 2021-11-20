#ifndef FALCON9_H
#define FALCON9_H

#include "Rocket.h"

using namespace std;

class Falcon9: public Rocket
{
    public:
        Falcon9(StageCreator*, CollectionOfSatellites*);    //Constructor
        ~Falcon9();                                         //Destructor
        bool fly();                                         //Causes the engines to be checked at launch and at the end of flight
};
#endif