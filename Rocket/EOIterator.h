#ifndef EOTITERATOR_H
#define EOTITERATOR_H

#include "RocketIterator.h"

using namespace std;

class EOIterator : public RocketIterator
{
    private:
        EngineObserver** obsList;       //List of observers
        int pos;
        int size;
    public:
        EOIterator(EngineObserver**, int);
        ~EOIterator();
        void first();                   //Navigates to the front of the list
        void next();                    //Navigates to the next observer in the list
        bool isDone();                  //Returns a bool if it is at the end of the list
        EngineObserver* currentItem();  //Returns the current engine observer
        int checkEngines();             //Returns the total broken engines
        bool checkVacEngine();          //Checks if vacuum engine broke
};
#endif