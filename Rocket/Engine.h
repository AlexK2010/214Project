#ifndef ENGINE_H
#define ENGINE_H

#include "RocketIterator.h"
#include "RocketObserver.h"

using namespace std;

class Engine
{
    protected:
        RocketIterator* obsIter;
        RocketObserver* obs;
        bool status;
    public:
        virtual void attach() = 0;      //Attaches the next observer to this engine
        virtual void notify() = 0;      //Notifies observer that the engine has failed
};
#endif