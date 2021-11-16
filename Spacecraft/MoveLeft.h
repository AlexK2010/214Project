#ifndef MOVELEFT_H
#define MOVELEFT_H

#include "SpaceCraftCommand.h"
#include "SpaceShuttle.h"

class MoveLeft : public SpaceCraftCommand{
    public:
        MoveLeft();
        void execute();
        ~MoveLeft();
};
#endif