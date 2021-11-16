#ifndef DOCK_H
#define DOCK_H

#include "SpaceCraftCommand.h"
#include "SpaceShuttle.h"

class Dock : public SpaceCraftCommand{
    private:
        SpaceShuttle* receiver;
    public:
        void execute();
        void setReceiver(SpaceShuttle* s);
};
#endif