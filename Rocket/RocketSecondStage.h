#ifndef ROCKETSECONDSTAGE_H
#define ROCKETSECONDSTAGE_H

#include "Engine.h"
#include "RocketStage.h"
#include "RocketIterator.h"

using namespace std;

class RocketSecondStage : public RocketStage
{
    private:
        Engine* vacEng;
    public:
        RocketSecondStage(RocketIterator*);
        ~RocketSecondStage();
};
#endif