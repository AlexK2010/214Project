#ifndef ROCKETOBSERVER_H
#define ROCKETOBSERVER_H

using namespace std;

#include <iostream>

class RocketObserver
{
    public:
        RocketObserver();
        virtual ~RocketObserver();

        virtual void update() = 0;      //Changes the state of an engine
        virtual bool getState() = 0;    //Returns the state of an engine
};
#endif