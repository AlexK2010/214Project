#ifndef MOVELEFT_H
#define MOVELEFT_H

#include "SpaceCraftCommand.h"

class MoveLeft : public SpaceCraftCommand{
    public:
        MoveLeft();
        void execute();
        ~MoveLeft();
};
#endif