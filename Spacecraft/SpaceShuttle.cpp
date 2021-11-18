#include "SpaceShuttle.h"


SpaceShuttle::SpaceShuttle()
{
    stage2=false;
}

SpaceShuttle::~SpaceShuttle()
{
    stage2=false;
    cout<<"SpaceShuttle destroyed"<<endl;
    rocket=NULL;
}


SpaceShuttle::SpaceShuttle(Rocket *f_rocket,double cost=0.0)
{
    this->rocket=f_rocket;
    this->Cost = cost;
}

double SpaceShuttle::getCurrentWeight()
{
    return currentWeight;
}

double SpaceShuttle::getWeightCapacity()
{
    return weightCapacity;
}

bool SpaceShuttle::isStage2()
{
    return stage2;
}

bool SpaceShuttle::isDockReady()
{
    return dockReady;
}

void SpaceShuttle::setWeightCapacity(double weight)
{
    this->weightCapacity=weight;
}

void SpaceShuttle::setStage2(bool stage)
{
    this->stage2=stage;
}

void SpaceShuttle::setCurrentWeight(double weight)
{
    this->currentWeight=weight;
}

void SpaceShuttle::setDockReady(bool dock)
{
    this->dockReady=dock;
}

/***
 * The update() sets th isStage2 field. And tells whether the Shuttle
 * should enter stage2 or not.
 * Just remember to register the rocket before updating the shuttle
 * State
 * */

void SpaceShuttle::update()
{
   //virtual function. Should be implemented by concrete
}

void SpaceShuttle::registerRocket(Rocket * f_rocket)
{
    rocket=f_rocket;
}


void SpaceShuttle::setCost(double cost)
{
    Cost = cost;
}

double SpaceShuttle::getCost()
{
    return Cost;
}