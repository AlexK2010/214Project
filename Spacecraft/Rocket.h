#ifndef ROCKET_H
#define ROCKET_H

#include <iostream>
#include "SpaceShuttle.h"

using namespace std;

class SpaceShuttle; //forward declaration of spaceSchuttle

class Rocket
{
    private:
        SpaceShuttle * spaceShuttle;

        /*
            I don't what you Rocket guys named it, buti'm just gonna name it
            RocketStage2
        */

        bool RocketStage2; 
    public:
        Rocket();
        ~Rocket();

        void attatch(SpaceShuttle * spaceShuttle);
        void detatch(); //only one observer. I see no need to accept an argument.

        void notify();

        void setRocketStage2(bool);
        bool getRocketStage2();
};

#endif