#ifndef ENGINE_H
#define ENGINE_H

#include "RocketIterator.h"
#include "EngineObserver.h"

using namespace std;

class RocketIterator;
class EngineObserver;

class Engine
{
    protected:
        RocketIterator* obsIter;        //Iterator of all the engines
        EngineObserver* obs;            //Observer that gets iterated
        bool status;                    //Status of the engine F-running/T-broken
    public:
        virtual void attach() = 0;      //Attaches the next observer to this engine
        virtual void notify() = 0;      //Notifies observer that the engine has failed
};
#endif