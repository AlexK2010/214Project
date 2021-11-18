#ifndef ROCKET_H
#define ROCKET_H

//Rocket
#include "EOIterator.h"
#include "RocketObserver.h"
#include "RocketStage.h"
#include "RocketFirstStage.h"
#include "StageCreator.h"

//SpaceCraft
#include "../Spacecraft/SpaceShuttle.h"

//Satellites

class SpaceShuttle; //forwrad Declarations of Space Shuttle



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

        /*
            THIS STUFF IS GOING TO BE USED BY THE SPACECRAFT. PLEASE CONSULT BEFORE TOUCHING
        */

        bool RocketStage2; //variable constantly monitored by spaceShuttle
        SpaceShuttle * spaceShuttle; //the spaceShuttle observer

    public:
        EOIterator* obsIter;        //Iterator for the engine Observers
        virtual bool fly() = 0;     //Causes the engines to be checked at launch and at the end of flight
        bool landed;
        ///// RSSCreator passed into constructor - RSSCreator constructed in builder

        /*
            THIS STUFF IS GOING TO BE USED BY THE SPACECRAFT. PLEASE CONSULT BEFORE TOUCHING
        */
        
        void attatch(SpaceShuttle * spaceShuttle);
        void detatch(); //only one observer. I see no need to accept an argument.

        void notify();

        void setRocketStage2(bool);
        bool getRocketStage2();


};
#endif