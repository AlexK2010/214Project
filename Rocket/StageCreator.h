#ifndef STAGECREATOR_H
#define STAGECREATOR_H

#include "RocketStage.h"
#include "RocketIterator.h"

using namespace std;

class StageCreator
{
    public:
        virtual RocketStage* createRSS(RocketIterator*) = 0;     //Creates the rocket's second stage and returns it
};
#endif