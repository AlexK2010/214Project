#include "Dragon.h"
#include "Cargo.h"
#include "SpaceStation.h"

#include <iostream>
using namespace std;

Dragon :: Dragon(Cargo* cargo, int cargoSize)
{
    this->cargo = cargo;
    this->cargoSize = cargoSize;
}

double Dragon :: getWeightCapacity()
{
    return weightCapacity;
}

void Dragon :: setWeightCapacity(double weight)
{
    weightCapacity = weight;
}

void Dragon :: setCurrentWeight(double weight)
{
    currentWeight = weight;
}

double Dragon :: getCurrentWeight()
{
    return currentWeight;
}

bool Dragon :: getStage()
{
    return stage;
}

void Dragon :: setStage(bool s)
{
    stage = s;
}

void Dragon :: attach(SpaceStation* s)
{
    space = s;
}

void Dragon :: detach()
{
    if(space!=nullptr)
    {
        delete space;
        space = nullptr;
    }
}

void Dragon :: notify()
{
    space->update();
}

Dragon :: ~Dragon()
{
    if(cargo!=nullptr)
    {
        delete cargo;
        cargo = nullptr;
    }
}

void Dragon :: Deceleration()
{
    cout << "Dragon is Decelerating." <<endl;
}
void Dragon :: MoveLeft()
{
    cout << "Dragon is Moving to the Left." <<endl;
}
void Dragon :: MoveRight()
{
    cout << "Dragon is Moving to the Right." <<endl;
}
void Dragon :: Dock()
{
    cout << "Dragon is Dock." <<endl;
}
void Dragon :: Thrust()
{
    cout << "Dragon is Thrusting" <<endl;
}

SpaceStation* Dragon :: getInternationalSpace()
{
    return space;
}