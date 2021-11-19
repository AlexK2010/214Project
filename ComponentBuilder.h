#ifndef COMPONENTBUILDER_H
#define COMPONENTBUILDER_H

#include "Satellite/Satellite.h"
#include "Rocket/Rocket.h"
#include "Spacecraft/Dragon.h"
#include "Spacecraft/CrewDragon.h"
#include "Rocket/StageCreator.h"

#include <iostream>

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
