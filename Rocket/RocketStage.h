#ifndef ROCKETSTAGE_H
#define ROCKETSTAGE_H

using namespace std;

class RocketStage {
    public:
        virtual void breakEngine(int, int) = 0;
};   //Generalises the two rocket stages
#endif