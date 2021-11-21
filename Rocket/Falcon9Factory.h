#ifndef FALCON9FACTORY_H
#define FALCON9FACTORY_H

#include "Rocket.h"
#include "RocketFactory.h"

using namespace std;

class Falcon9Factory: public RocketFactory
{
    public:
        Falcon9Factory(StageCreator*);          //Factory constructed with RSSCreator passed in
        ~Falcon9Factory();                      //Destructor nullifies the RSSCreator within this class
        Rocket* createRocket(CollectionOfSatellites*);              //Creates the rocket and returns it
};
#endif