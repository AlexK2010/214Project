#ifndef THRUST_H
#define THRUST_H

#include "SpaceCraftCommand.h"
#include "SpaceShuttle.h"

class Thrust : public SpaceCraftCommand{
    public:
        void execute();
};
#endif