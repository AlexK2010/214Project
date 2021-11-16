#ifndef SPACECRAFTCOMMAND_H
#define SPACECRAFTCOMMAND_H

#include "SpaceShuttle.h"

class SpaceCraftCommand{
    private:
        SpaceShuttle* receiver;
    public:
        virtual void execute()=0;
<<<<<<< HEAD
        void setReceiver(SpaceShuttle* s);
        SpaceShuttle* getReceiver();
=======
        virtual void setReceiver(SpaceShuttle* s); 
>>>>>>> 55f4f42d342e1358b9f87a027780b759fe4db8b0
};
#endif
