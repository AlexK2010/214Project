#ifndef ROCKET_H
#define ROCKET_H

#include "EOIterator.h"
#include "RocketObserver.h"
#include "RocketStage.h"
#include "RocketFirstStage.h"
#include "StageCreator.h"

using namespace std;

class Rocket
{
    protected:
        RocketFirstStage* fs;       //First stage of the rocket
        RocketStage* ss;            //Second stage of the rocket
        RocketObserver** obsList;   //List of engine observers
        int numEnginesFailed;       //Number of engines that have failed
        int carryWeight;            //Carry weight of the rocket
        int attachedWeight;         //Weight attached to the rocket
    public:
        EOIterator* obsIter;        //Iterator for the engine Observers
        virtual bool fly() = 0;     //Causes the engines to be checked at launch and at the end of flight
        bool landed;
        ///// RSSCreator passed into constructor - RSSCreator constructed in builder
};
#endif