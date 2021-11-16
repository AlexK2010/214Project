#ifndef CREWDRAGON_H
#define CREWDRAGON_H

#include "SpaceShuttle.h"

class CrewDragon:public SpaceShuttle {
    
    private:


    public:    
        CrewDragon();
        CrewDragon(Rocket *rocket);

        ~CrewDragon();

        virtual void update();

        virtual void Deceleration();
        virtual void MoveLeft();
        virtual void MoveRight();
        virtual void Dock();
        virtual void Thrust();
};

#endif