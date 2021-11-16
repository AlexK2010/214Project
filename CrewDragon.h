#ifndef CREWDRAGON_H
#define CREWDRAGON_H

#include "Human.h"
#include "SpaceShuttle.h"
#include <string>

#include "SpaceStation.h"

using namespace std;

class CrewDragon : public SpaceShuttle{
    private:
        Human* crew;
        int crewSize;
    public:
        CrewDragon(Human* crew,int crewSize);
        ~CrewDragon();
        double getWeightCapacity();
        void setWeightCapacity(double weight);
        void notify();
        bool getStage();
        void setStage(bool s);
        double getCurrentWeight();
        void setCurrentWeight(double weight);
        void attach(SpaceStation* s);
        void detach();
        SpaceStation* getInternationalSpace();
        void Deceleration();
        void MoveLeft();
        void MoveRight();
        void Dock();
        void Thrust();
};
#endif