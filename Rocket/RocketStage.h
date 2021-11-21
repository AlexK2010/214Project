#ifndef ROCKETSTAGE_H
#define ROCKETSTAGE_H

using namespace std;

class RocketStage {
    public:
        virtual void breakEngine(long, long) = 0; //Checks if the vacuum engine breaks
};   //Generalises the two rocket stages
#endif