#include "FalconHeavyFactory.h"
#include "FalconHeavy.h"

using namespace std;

FalconHeavyFactory::FalconHeavyFactory(StageCreator* sc):RocketFactory()
{
    ssCreator = sc;
}

FalconHeavyFactory::~FalconHeavyFactory(){
    ssCreator = nullptr;
}

Rocket* FalconHeavyFactory::createRocket(CollectionOfSatellites* colSat){
    return new FalconHeavy(ssCreator, colSat);
}