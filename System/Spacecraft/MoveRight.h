#ifndef MOVERIGHT_H
#define MOVERIGHT_H

#include "SpaceCraftCommand.h"

class MoveRight : public SpaceCraftCommand{
    public:
        MoveRight();
        void execute();
        ~MoveRight();
};
#endif