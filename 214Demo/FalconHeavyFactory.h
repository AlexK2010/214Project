#ifndef FALCONHEAVYFACTORY_H
#define FALCONHEAVYFACTORY_H

#include "Rocket.h"
#include "RocketFactory.h"

using namespace std;

class FalconHeavyFactory: public RocketFactory
{
    public:
        FalconHeavyFactory(StageCreator*);          //Factory constructed with RSSCreator passed in
        ~FalconHeavyFactory();                      //Destructor nullifies the RSSCreator within this class
        Rocket* createRocket(CollectionOfSatellites*);                  //Creates the rocket and returns it
};
#endif