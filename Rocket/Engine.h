#ifndef ENGINE_H
#define ENGINE_H

#include "RocketIterator.h"

using namespace std;

class Engine
{
    protected:
        RocketIterator* obsIter;
    public:
        virtual void attach() = 0;      //Attaches the next observer to this engine
        virtual void notify() = 0;      //Notifies observer that the engine has failed
};
#endif