#ifndef ROCKETFIRSTSTAGE_H
#define ROCKETFIRSTSTAGE_H

#include "F9Core.h"
#include "RocketStage.h"
#include "RocketIterator.h"

using namespace std;

class RocketFirstStage : public RocketStage
{
    private:
        F9Core** coreList;              //List of F9Cores - 1 for a Falcon9, 3 for a FalconHeavy
    public:
        RocketFirstStage(bool, RocketIterator*);         //Boolean parameter determines rocket type: Falcon9-F/FalconHeavy-T
        ~RocketFirstStage();
        bool land();
};
#endif