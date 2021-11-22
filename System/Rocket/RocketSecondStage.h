#ifndef ROCKETSECONDSTAGE_H
#define ROCKETSECONDSTAGE_H

#include "Engine.h"
#include "RocketStage.h"
#include "RocketIterator.h"

using namespace std;

class RocketSecondStage : public RocketStage
{
    private:
        Engine* vacEng;                     //Single vacuum engine in the stage
    public:
        RocketSecondStage(RocketIterator*); //Constructor
        ~RocketSecondStage();               //Destructor
        void breakEngine(long, long);         //Checks if engine breaks
};
#endif