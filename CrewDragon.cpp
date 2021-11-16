#include "SpaceStation.h"
#include "CrewDragon.h"
#include "Human.h"

#include <string>
#include <iostream>
using namespace std;

CrewDragon :: CrewDragon(Human* crew, int crewSize)
{
    this->crew = crew;
    this->crewSize = crewSize;
}

double CrewDragon :: getWeightCapacity()
{
    return weightCapacity;
}

void CrewDragon :: setWeightCapacity(double weight)
{
    weightCapacity = weight;
}

void CrewDragon :: setCurrentWeight(double weight)
{
    currentWeight = weight;
}

double CrewDragon :: getCurrentWeight()
{
    return currentWeight;
}

bool CrewDragon :: getStage()
{
    return stage;
}

void CrewDragon :: setStage(bool s)
{
    stage = s;
}

void CrewDragon :: attach(SpaceStation* s)
{
    space = s;
}

void CrewDragon :: notify()
{
    space->update();
}
void CrewDragon :: detach()
{
    if(space!=nullptr)
    {
        delete space;
        space = nullptr;
    }
}

CrewDragon :: ~CrewDragon()
{
    if(crew!=nullptr)
    {
        delete crew;
        crew = nullptr;
    }
}

void CrewDragon :: Deceleration()
{
    cout << "CrewDragon is Decelerating." <<endl;
}
void CrewDragon :: MoveLeft()
{
    cout << "CrewDragon is Moving to the Left." <<endl;
}
void CrewDragon :: MoveRight()
{
    cout << "CrewDragon is Moving to the Right." <<endl;
}
void CrewDragon :: Dock()
{
    cout << "CrewDragon is Dock." <<endl;
}
void CrewDragon :: Thrust()
{
    cout << "CrewDragon is Thrusting" <<endl;
}

SpaceStation* CrewDragon :: getInternationalSpace()
{
    return space;
}