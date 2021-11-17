#ifndef DECELERATION_H
#define DECELERATION_H

#include "SpaceCraftCommand.h"

class Deceleration : public SpaceCraftCommand{
    public:
        Deceleration();
        void execute();
        ~Deceleration();
};
#endif