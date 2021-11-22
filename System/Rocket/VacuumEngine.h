#ifndef VACUUMENGINE_H
#define VACUUMENGINE_H

#include "Engine.h"

using namespace std;

class VacuumEngine : public Engine
{
    public:
    	VacuumEngine();
        VacuumEngine(RocketIterator*);  //Constructor
        ~VacuumEngine();                //Destructor
        void attach();                  //Attaches the next observer to this engine
        void notify();                  //Notifies observer that the engine has failed
};
#endif
