#ifndef ROCKETITERATOR_H
#define ROCKETITERATOR_H

#include "RocketObserver.h"

using namespace std;

class RocketIterator
{
    public:
        virtual void first() = 0;                   //Navigates to the front of the list
        virtual void next() = 0;                    //Navigates to the next observer in the list
        virtual bool isDone() = 0;                  //Returns a bool if it is at the end of the list
        virtual RocketObserver* currentItem() = 0;  //Returns the current engine observer
        virtual int checkEngines() = 0;
        virtual bool checkVacEngine() = 0;
};
#endif