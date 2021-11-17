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

        virtual void deceleration();
        virtual void moveLeft();
        virtual void moveRight();
        virtual void dock();
        virtual void thrust();

        virtual void notify();

};

#endif