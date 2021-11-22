#ifndef ROCKETFIRSTSTAGE_H
#define ROCKETFIRSTSTAGE_H

#include "F9Core.h"
#include "RocketStage.h"
#include "RocketIterator.h"

using namespace std;

class RocketFirstStage : public RocketStage
{
    private:
        F9Core** coreList;                              //List of F9Cores - 1 for a Falcon9, 3 for a FalconHeavy
        int numCores;                                   //Number of cores in the rocket
        RocketIterator* obsList;                        //The iterator
    public:
        RocketFirstStage(bool, RocketIterator*);        //Boolean parameter determines rocket type: Falcon9-F/FalconHeavy-T
        ~RocketFirstStage();                            //Destructor
        double land();                                  //Returns a value that gets returned to cost depending on how many engines broke
        void breakEngines(long, long);                    //Calls break engines in Rocket iterator
        void breakEngine(long, long){};                   //Just here because of the rocket stage virtual function
};
#endif