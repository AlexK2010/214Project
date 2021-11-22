#ifndef SPACESHUTTLE_H
#define SPACESHUTTLE_H


using namespace std;

#include <iostream>

#include "../Rocket/Rocket.h"
#include "SpaceStation.h"

using namespace std;

class Rocket; //forward declaration Rocket
class SpaceStation; //forward declertion SpaceSation

class SpaceShuttle{

private:
    double weightCapacity; //how much the shuttle is carrying
    bool stage2;
    double currentWeight;
    bool dockReady; //ready to dock?
    double Cost;

    SpaceStation * spaceStation; //space station i'm observing
public:
    
    SpaceShuttle();
    SpaceShuttle(Rocket *f_rocket);

    ~SpaceShuttle();

    Rocket *rocket; //rocket i'm watching


    double getCost();
    void setCost(double cost);
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

    virtual void update(bool)=0;
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