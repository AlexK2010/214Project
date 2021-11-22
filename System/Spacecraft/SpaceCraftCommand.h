#ifndef SPACECRAFTCOMMAND_H
#define SPACECRAFTCOMMAND_H

#include "SpaceShuttle.h"

class SpaceCraftCommand{
    private:
        SpaceShuttle* receiver;
    public:
        SpaceCraftCommand();

        virtual ~SpaceCraftCommand();

        virtual void execute()=0;

        void setReceiver(SpaceShuttle* s);
        
        SpaceShuttle* getReceiver();
        
};
#endif
