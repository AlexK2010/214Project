#ifndef THRUST_H
#define THRUST_H

#include "SpaceCraftCommand.h"
#include "SpaceShuttle.h"

class Thrust : public SpaceCraftCommand{
    private:
        SpaceShuttle* receiver;
    public:
        void execute();
        void setReceiver(SpaceShuttle* s);
};
#endif