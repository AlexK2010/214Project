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
        virtual CollectionOfSatellites* buildSatellites(int){return nullptr;}
        virtual Rocket* buildFalcon9(StageCreator*, CollectionOfSatellites*){return nullptr;}
        virtual Rocket* buildFalconHeavy(StageCreator*, CollectionOfSatellites*){return nullptr;}
        virtual Rocket* buildFalcon9(StageCreator*){return nullptr;}
        virtual Rocket* buildFalconHeavy(StageCreator*){return nullptr;}
        virtual SpaceShuttle* buildDragon(Rocket*){return nullptr;}
        virtual SpaceShuttle* buildCrewDragon(Rocket*, int){return nullptr;}
};
#endif
