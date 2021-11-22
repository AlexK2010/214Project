#ifndef ROCKETOBSERVER_H
#define ROCKETOBSERVER_H

using namespace std;

class RocketObserver
{
    public:
        virtual void update() = 0;      //Changes the state of an engine
        virtual bool getState() = 0;    //Returns the state of an engine
};
#endif