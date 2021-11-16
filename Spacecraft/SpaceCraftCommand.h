#ifndef SPACECRAFTCOMMAND_H
#define SPACECRAFTCOMMAND_H

#include "SpaceShuttle.h"

class SpaceCraftCommand{
    private:
        SpaceShuttle* receiver;
    public:
        virtual void execute()=0;
        void setReceiver(SpaceShuttle* s);
        SpaceShuttle* getReceiver();
};
#endif
