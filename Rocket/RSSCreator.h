#ifndef RSSCREATOR_H
#define RSSCREATOR_H

#include "StageCreator.h"

using namespace std;

class RSSCreator : public StageCreator
{
    public:
        RocketStage* createRSS();     //Creates the rocket's second stage and returns it
};
#endif