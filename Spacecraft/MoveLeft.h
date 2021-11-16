#ifndef MOVELEFT_H
#define MOVELEFT_H

#include "SpaceCraftCommand.h"
#include "SpaceShuttle.h"

class MoveLeft : public SpaceCraftCommand{
    private:
        SpaceShuttle* receiver;
    public:
        void execute();
        void setReceiver(SpaceShuttle* s);
};
#endif