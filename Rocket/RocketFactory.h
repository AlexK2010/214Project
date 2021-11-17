#ifndef ROCKETFACTORY_H
#define ROCKETFACTORY_H

#include "Rocket.h"
#include "StageCreator.h"

using namespace std;

class RocketFactory
{
    protected:
        StageCreator* ssCreator;                  //Factory for Rocket second stage
    public:
        virtual Rocket* createRocket(int) = 0;    //Creates the rocket and returns it
};
#endif