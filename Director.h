#ifndef DIRECTOR_H
#define DIRECTOR_H

//componentBuilder
#include "ComponentBuilder.h"

//Rocket Stuff
#include "RocketBuilder.h"
#include "Rocket/RSSCreator.h"

//satellite stuff
#include "SatelliteBuilder.h"

//spaceCraft stuff
#include "SpacecraftBuilder.h"


#include "iostream"

//forward decleration
class RSSCreator;


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
