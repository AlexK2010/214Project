#ifndef ROCKETBUILDER_H
#define ROCKETBUILDER_H

#include "ComponentBuilder.h"
#include "Falcon9.h"
#include "FalconHeavy.h"
#include "RocketFactory.h"
#include "Falcon9Factory.h"
#include "FalconHeavyFactory.h"

class RocketBuilder : public ComponentBuilder{
    public:
        Rocket* buildFalcon9(StageCreator*, CollectionOfSatellites*);
        Rocket* buildFalconHeavy(StageCreator*, CollectionOfSatellites*);
        Rocket* buildFalcon9(StageCreator*);
        Rocket* buildFalconHeavy(StageCreator*);
};
#endif
