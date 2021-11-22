#ifndef ROCKETBUILDER_H
#define ROCKETBUILDER_H

#include "ComponentBuilder.h"
#include "Rocket/Falcon9.h"
#include "Rocket/FalconHeavy.h"
#include "Rocket/RocketFactory.h"
#include "Rocket/Falcon9Factory.h"
#include "Rocket/FalconHeavyFactory.h"

class RocketBuilder : public ComponentBuilder{
    public:
        ~RocketBuilder();
        Rocket* buildFalcon9(StageCreator*, CollectionOfSatellites*);
        Rocket* buildFalconHeavy(StageCreator*, CollectionOfSatellites*);
        Rocket* buildFalcon9(StageCreator*);
        Rocket* buildFalconHeavy(StageCreator*);
};
#endif