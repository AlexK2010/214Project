#ifndef CREWDRAGON_H
#define CREWDRAGON_H

#include "SpaceShuttle.h"

class CrewDragon:public SpaceShuttle {
    
    private:
        int numHuman;

    public:    
        CrewDragon();
        CrewDragon(Rocket *rocket, int numHuman, double cost);

        ~CrewDragon();
        virtual void update();

        virtual void Deceleration();
        virtual void MoveLeft();
        virtual void MoveRight();
        virtual void Dock();
        virtual void Thrust();
};

#endif