#ifndef COMPONENTBUILDER_H
#define COMPONENTBUILDER_H

//rocket
#include "Rocket/StageCreator.h"
#include "Rocket/Rocket.h"

//satellites
#include "Satellite/Satellite.h"
#include "Satellite/CollectionOfSatellites.h"

//spaceCraft
#include "Spacecraft/Dragon.h"
#include "Spacecraft/CrewDragon.h"
#include "Spacecraft/SpaceShuttle.h"

#include <iostream>

//forward declaring section

class CollectionOfSatellites;



using namespace std;

class ComponentBuilder{
    public:
        virtual CollectionOfSatellites* buildSatellites(int){};
        virtual Rocket* buildFalcon9(StageCreator*, CollectionOfSatellites*){};
        virtual Rocket* buildFalconHeavy(StageCreator*, CollectionOfSatellites*){};
        virtual Rocket* buildFalcon9(StageCreator*){};
        virtual Rocket* buildFalconHeavy(StageCreator*){};
        virtual SpaceShuttle* buildDragon(Rocket*){};
        virtual SpaceShuttle* buildCrewDragon(Rocket*, int){};
};
#endif
