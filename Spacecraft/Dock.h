#ifndef DOCK_H
#define DOCK_H

#include "SpaceCraftCommand.h"
#include "SpaceShuttle.h"

class Dock : public SpaceCraftCommand{
    public:
        void execute();
};
#endif