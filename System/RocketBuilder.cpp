#include "RocketBuilder.h"

RocketBuilder::~RocketBuilder(){}

Rocket* RocketBuilder::buildFalcon9(StageCreator* sc, CollectionOfSatellites* colSat){
    RocketFactory* factory = new Falcon9Factory(sc);
    return factory->createRocket(colSat);
}

Rocket* RocketBuilder::buildFalconHeavy(StageCreator* sc, CollectionOfSatellites* colSat){
    RocketFactory* factory = new FalconHeavyFactory(sc);
    return factory->createRocket(colSat);
}

Rocket* RocketBuilder::buildFalcon9(StageCreator* sc){
    RocketFactory* factory = new Falcon9Factory(sc);
    return factory->createRocket(nullptr);
}

Rocket* RocketBuilder::buildFalconHeavy(StageCreator* sc){
    RocketFactory* factory = new FalconHeavyFactory(sc);
    return factory->createRocket(nullptr);
}