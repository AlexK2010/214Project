#ifndef THRUST_H
#define THRUST_H

#include "SpaceCraftCommand.h"

class Thrust : public SpaceCraftCommand{
    public:
        Thrust();
        void execute();
        ~Thrust();
};
#endif