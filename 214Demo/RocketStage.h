#ifndef ROCKETSTAGE_H
#define ROCKETSTAGE_H

#include <iostream>

using namespace std;

class RocketStage {
    public:
        RocketStage();
        virtual ~RocketStage();
        virtual void breakEngine(long, long) = 0; //Checks if the vacuum engine breaks
};   //Generalises the two rocket stages
#endif