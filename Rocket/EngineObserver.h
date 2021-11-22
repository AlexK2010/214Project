#ifndef ENGINEOBSERVER_H
#define ENGINEOBSERVER_H

#include "RocketObserver.h"
#include "Engine.h"

using namespace std;

class EngineObserver : public RocketObserver
{
    private:
        bool state;                     //Shows whether or not the engine has failed: Running-F/Failed-T
    public:
        EngineObserver();               //Constructor
        void update();                  //Called when engine failed
        bool getState();                //Returns the state of the engine
};
#endif
