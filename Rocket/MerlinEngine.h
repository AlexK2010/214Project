#ifndef MERLINENGINE_H
#define MERLINENGINE_H

#include "Engine.h"

using namespace std;

class MerlinEngine : public Engine
{
    public:
        MerlinEngine(RocketIterator*);  //Constructor
        ~MerlinEngine();                //Destructor
        void attach();                  //Attaches the next observer to this engine
        void notify();                  //Notifies observer that the engine has failed
};
#endif