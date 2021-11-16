#ifndef INTERNATIONALSPACESTATION_H
#define INTERNATIONALSPACESTATION_H

#include "SpaceStation.h"
#include "SpaceShuttle.h"

class InternationalSpaceStation : SpaceStation
{
    private:
        SpaceShuttle* shuttle;
        bool isHere;
    public:
        InternationalSpaceStation(SpaceShuttle* s);
        void setIsHere(bool is);
        bool getIsHere();
        void update();
        ~InternationalSpaceStation();
};
#endif