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

};

#endif