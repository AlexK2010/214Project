#include "RocketFactory.h"

RocketFactory::RocketFactory()
{

}

RocketFactory::~RocketFactory()
{
    cout<<"RocketFactory Destroyed"<<endl;
}

Rocket * RocketFactory::createRocket(CollectionOfSatellites*)
{
    return NULL; //Becareful here! 
}