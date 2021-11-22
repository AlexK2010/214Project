#ifndef COMPONENTBUILDER_H
#define COMPONENTBUILDER_H

//rocket
#include "StageCreator.h"
#include "Rocket.h"

//satellites
#include "Satellite.h"
#include "CollectionOfSatellites.h"

//spaceCraft
#include "Dragon.h"
#include "CrewDragon.h"
#include "SpaceShuttle.h"

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
