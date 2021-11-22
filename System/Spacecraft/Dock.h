#ifndef DOCK_H
#define DOCK_H

#include "SpaceCraftCommand.h"

class Dock : public SpaceCraftCommand{
    public:
        Dock();
        void execute();
        ~Dock();
};
#endif