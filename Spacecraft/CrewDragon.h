#ifndef CREWDRAGON_H
#define CREWDRAGON_H

#include "SpaceShuttle.h"

class CrewDragon:public SpaceShuttle {
    
    private:
        int numHuman;

    public:    
        CrewDragon();
        CrewDragon(Rocket *rocket, int numHuman);

        ~CrewDragon();
        virtual void update(bool);

        virtual void deceleration();
        virtual void moveLeft();
        virtual void moveRight();
        virtual void dock();
        virtual void thrust();

        virtual void notify();

};

#endif