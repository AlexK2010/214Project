#ifndef MOVERIGHT_H
#define MOVERIGHT_H

#include "SpaceCraftCommand.h"
#include "SpaceShuttle.h"

class MoveRight : public SpaceCraftCommand{
    private:
        SpaceShuttle* receiver;
    public:
        void execute();
        void setReceiver(SpaceShuttle* s);
};
#endif