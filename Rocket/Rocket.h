#ifndef ROCKET_H
#define ROCKET_H

#include "EOIterator.h"
#include "RocketObserver.h"
#include "RocketStage.h"
#include "StageCreator.h"

using namespace std;

class Rocket
{
    protected:
        RocketStage* fs;            //First stage of the rocket
        RocketStage* ss;            //Second stage of the rocket
        RocketObserver** obsList;   //List of engine observers
    public:
        EOIterator* ObsIter;        //Iterator for the engine Observers
        virtual bool fly() = 0;     //Causes the engines to be checked at launch and at the end of flight
        ///// RSSCreator passed into constructor - RSSCreator constructed in builder
};
#endif