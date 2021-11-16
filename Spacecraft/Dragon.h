#ifndef DRAGON_H
#define DRAGON_H

#include "SpaceShuttle.h"

class Dragon:public SpaceShuttle {
    
    private:


    public:    
        Dragon();
        Dragon(Rocket *rocket);

        ~Dragon();

        virtual void update();

        virtual void Deceleration();
        virtual void MoveLeft();
        virtual void MoveRight();
        virtual void Dock();
        virtual void Thrust();

};

#endif