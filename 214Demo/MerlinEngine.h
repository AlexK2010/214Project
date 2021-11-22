#ifndef MERLINENGINE_H
#define MERLINENGINE_H

#include "Engine.h"

using namespace std;

class MerlinEngine : public Engine
{
    public:
        MerlinEngine(RocketIterator*);  //Constructor
        ~MerlinEngine();                //Destructor
        virtual void attach();                  //Attaches the next observer to this engine
        virtual void notify();                  //Notifies observer that the engine has failed
};
#endif