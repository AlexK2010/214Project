#ifndef SPACESHUTTLE_H
#define SPACESHUTTLE_H


using namespace std;

#include <iostream>

#include "Rocket.h"
#include "SpaceStation.h"

using namespace std;

class Rocket; //forward declaration Rocket
class SpaceStation; //forward declertion SpaceSation

class SpaceShuttle{

private:
    double weightCapacity;
    bool stage2;
    double currentWeight;
    bool dockReady;

    SpaceStation * spaceStation;
public:
    
    SpaceShuttle();
    SpaceShuttle(Rocket *f_rocket);

    ~SpaceShuttle();

    Rocket *rocket; //rocket i'm watching


    double getWeightCapacity();
    bool isStage2();
    double getCurrentWeight();
    bool isDockReady();

    void setWeightCapacity(double);
    void setStage2(bool);
    void setCurrentWeight(double);
    void setDockReady(bool);

    /*
        Observer stuff
    */

    virtual void update()=0;
    void registerRocket(Rocket * f_rocket);

    /*
        Command Functions!!!
    */
    virtual void deceleration()=0;
    virtual void moveLeft()=0;
    virtual void moveRight()=0;
    virtual void dock()=0;
    virtual void thrust()=0;

    /*
        Subject stuff-SpaceStation
    */

   void attatch(SpaceStation * spaceStation);
   void detatch();
   void notify();

};

#endif