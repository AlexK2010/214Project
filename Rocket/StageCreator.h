#ifndef STAGECREATOR_H
#define STAGECREATOR_H

#include "RocketStage.h"

using namespace std;

class StageCreator
{
    public:
        virtual RocketStage* createRSS() = 0;     //Creates the rocket's second stage and returns it
};
#endif