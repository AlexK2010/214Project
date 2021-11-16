#ifndef EOTITERATOR_H
#define EOTITERATOR_H

#include "RocketIterator.h"

using namespace std;

class EOIterator : public RocketIterator
{
    private:
        RocketObserver** obsList;       //List of observers
    public:
        EOIterator(RocketObserver**);
        ~EOIterator();
        void first();                   //Navigates to the front of the list
        void next();                    //Navigates to the next observer in the list
        bool isDone();                  //Returns a bool if it is at the end of the list
        RocketObserver* currentItem();  //Returns the current engine observer
};
#endif