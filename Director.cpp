#include "Director.h"


using namespace std;

Director::Director(bool rocketType, int numSat)
{
    ComponentBuilder* rocketBuilder = new RocketBuilder();
    ComponentBuilder* satBuilder = new SatelliteBuilder();
    satellites = satBuilder->buildSatellites(numSat);
    StageCreator* secondStageCreator = new RSSCreator();
    if(rocketType)
        carrier = rocketBuilder->buildFalcon9(secondStageCreator, satellites);
    else
        carrier = rocketBuilder->buildFalconHeavy(secondStageCreator, satellites);

    spaceCraft = nullptr;

    delete rocketBuilder;
    delete satBuilder;
    delete secondStageCreator;
}

Director::Director(bool rocketType, bool scType, int numPeople = 0)
{
    ComponentBuilder* rocketBuilder = new RocketBuilder();
    ComponentBuilder* spacecraftBuilder = new SpacecraftBuilder();
    StageCreator* secondStageCreator = new RSSCreator();

    if(rocketType)
        carrier = rocketBuilder->buildFalcon9(secondStageCreator);
    else
        carrier = rocketBuilder->buildFalconHeavy(secondStageCreator);

    if(scType)
        spaceCraft = spacecraftBuilder->buildDragon(carrier);
    else
        spaceCraft = spacecraftBuilder->buildCrewDragon(carrier, numPeople);

    carrier->attach(spaceCraft);

    satellites = nullptr;
    delete rocketBuilder;
    delete spacecraftBuilder;
    delete secondStageCreator;
}

Director::~Director(){
    if(spaceCraft == nullptr){
        delete carrier;
        delete satellites;
    }else{
        carrier->detach();
        delete spaceCraft;
        delete carrier;
    }
}

Rocket* Director::getRocket(){
    return carrier;
}

SpaceShuttle* Director::getSpaceCraft(){
    return spaceCraft;
}

CollectionOfSatellites* Director::getSatellites(){
    return satellites;
}