#ifndef DECELERATION_H
#define DECELERATION_H

#include "SpaceCraftCommand.h"
#include "SpaceShuttle.h"

class Deceleration : public SpaceCraftCommand{
    private:
        SpaceShuttle* receiver;
    public:
        void execute();
        void setReceiver(SpaceShuttle* s);
};
#endif