#ifndef ROCKET_H
#define ROCKET_H

//Rocket
#include "EOIterator.h"
#include "RocketObserver.h"
#include "RocketStage.h"
#include "RocketFirstStage.h"
#include "StageCreator.h"
#include "CollectionOfSatellites.h"
#include "SpaceShuttle.h"

//SpaceCraft
#include "../Spacecraft/SpaceShuttle.h"

//Satellites

class SpaceShuttle; //forwrad Declarations of Space Shuttle



using namespace std;

class Rocket
{
    protected:
        RocketFirstStage* fs;               //First stage of the rocket
        RocketStage* ss;                    //Second stage of the rocket
        RocketObserver** obsList;           //List of engine observers
        int numEnginesFailed;               //Number of engines that have failed
        int carryWeight;                    //Carry weight of the rocket
        int attachedWeight;                 //Weight attached to the rocket
        bool payloadType;                   //Type of payload: F-SpaceShuttle/T-Satellites
        CollectionOfSatellites* colSat;     //Satellite gets attached here
        SpaceShuttle* spaceS;               //Space craft gets attached here
        double cost;                        //Cost of the rocket
    public:
        EOIterator* obsIter;        //Iterator for the engine Observers
        virtual bool fly() = 0;     //Causes the engines to be checked at launch and at the end of flight
        void attach(SpaceShuttle * spaceShuttle);
        void detach(); 
        void notify();
        int getCost();
        void reduceCost(int);
};
#endif