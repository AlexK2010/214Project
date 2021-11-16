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

        

};

#endif