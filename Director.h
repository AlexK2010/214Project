#ifndef DIRECTOR_H
#define DIRECTOR_H

#include "ComponentBuilder.h"
#include "RocketBuilder.h"
#include "SatelliteBuilder.h"
#include "SpacecraftBuilder.h"

#include "iostream"

using namespace std;

class Director{
    private:
        Rocket* carrier;                    //Rocket that will carry the payload
        SpaceShuttle* spaceCraft;           //Payload if SpaceShuttle is to be launched
        CollectionOfSatellites* satellites; //Payload if Satellites are to be launched
    public:
        Director(bool, int);
        Director(bool, bool, int);
        ~Director();
        Rocket* getRocket();
        SpaceShuttle* getSpaceCraft();
        CollectionOfSatellites* getSatellites();
};
#endif
