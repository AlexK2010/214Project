#ifndef F9CORE_H
#define F9CORE_H

#include "Engine.h"
#include "RocketIterator.h"

using namespace std;

class F9Core
{
    private:
        Engine** engList;               //List of Engines - always 9
    public:
        F9Core(RocketIterator*);        //Constructor
        ~F9Core();                      //Destructo
        void breakEngines(long, long);    //Function that iterates through all the engines and check if it breaks
};
#endif