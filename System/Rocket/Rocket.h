#ifndef ROCKET_H
#define ROCKET_H

//Rocket
#include "EOIterator.h"
#include "RocketObserver.h"
#include "RocketStage.h"
#include "RocketFirstStage.h"
#include "StageCreator.h"
#include "../Satellite/CollectionOfSatellites.h"
#include "../Spacecraft/SpaceShuttle.h"
#include "EngineObserver.h"

using namespace std;

class SpaceShuttle;

class Rocket
{
    protected:
        RocketFirstStage* fs;               //First stage of the rocket
        RocketStage* ss;                    //Second stage of the rocket
        EngineObserver** obsList;           //List of engine observers
        int numEnginesFailed;               //Number of engines that have failed
        long carryWeight;                    //Carry weight of the rocket
        long attachedWeight;                 //Weight attached to the rocket
        bool payloadType;                   //Type of payload: F-SpaceShuttle/T-Satellites
        CollectionOfSatellites* colSat;     //Satellite gets attached here
        SpaceShuttle* spaceS;               //Space craft gets attached here
        double cost;                        //Cost of the rocket
    public:
        Rocket();
        virtual ~Rocket();                   //Added a virtual destructor for my sanity's sake
        EOIterator* obsIter;                //Iterator for the engine Observers
        virtual bool fly() = 0;             //Causes the engines to be checked at launch and at the end of flight
        void attach(SpaceShuttle * spaceShuttle);   //Attaches a space shuttle to the rocket
        void detach();                              //Deataches the space shuttle
        void notify(bool);                              //Notifies the space shuttle stage 2 has been detached
        int getCost();                              //Reeturns the cost of the rocket
};
#endif
