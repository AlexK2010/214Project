#ifndef ROCKETOBSERVER_H
#define ROCKETOBSERVER_H

using namespace std;

class RocketObserver
{
    public:
        virtual void update() = 0;
        virtual bool getState() = 0;
};
#endif