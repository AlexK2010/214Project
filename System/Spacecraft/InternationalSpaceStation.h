#ifndef INTERNATIONALSPACESTATION
#define INTERNATIONALSPACESTATION

#include "SpaceStation.h"

class InternationalSpaceStation:public SpaceStation{
    
    private:

    public:
        InternationalSpaceStation();
        InternationalSpaceStation(SpaceShuttle *shuttle);
        ~InternationalSpaceStation();

        virtual void update();

};

#endif