#include "Falcon9Factory.h"
#include "Falcon9.h"

using namespace std;

Falcon9Factory::Falcon9Factory(StageCreator* sc){
    ssCreator = sc;
}

Falcon9Factory::~Falcon9Factory(){
    ssCreator = nullptr;
}

Rocket* Falcon9Factory::createRocket(CollectionOfSatellites* colSat){
    return new Falcon9(ssCreator, colSat);
}