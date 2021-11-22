#ifndef SPACESTATION_H
#define SPACESTATION_H

#include "SpaceShuttle.h"

#include <iostream>

class SpaceShuttle; //forward decleration SpaceShuttle

using namespace std;

class SpaceStation{

    private:
        SpaceShuttle *shuttle;

    public:
        SpaceStation();
        SpaceStation(SpaceShuttle *shuttle);
        virtual ~SpaceStation();

        SpaceShuttle * getShuttle();

        virtual void update()=0;

        void registerVesselArriving(SpaceShuttle* suttle);


};

#endif