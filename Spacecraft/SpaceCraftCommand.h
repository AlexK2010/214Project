#ifndef SPACECRAFTCOMMAND_H
#define SPACECRAFTCOMMAND_H

#include "SpaceShuttle.h"

class SpaceCraftCommand{
    public:
        virtual void execute()=0;
        virtual void setReceiver(SpaceShuttle* s)=0; 
};
#endif
