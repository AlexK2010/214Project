#ifndef DRAGON_H
#define DRAGON_H

#include "SpaceShuttle.h"

class Dragon:public SpaceShuttle {
    
    private:


    public:    
        Dragon();
        Dragon(Rocket *rocket);

        ~Dragon();

        virtual void update(bool);

        virtual void deceleration();
        virtual void moveLeft();
        virtual void moveRight();
        virtual void dock();
        virtual void thrust();

        virtual void notify();

};

#endif