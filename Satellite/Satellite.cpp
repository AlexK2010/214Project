#include "Satellite.h"

Satellite::Satellite(double c)
{
    this->cost=c;
}

Satellite::~Satellite(){};

void Satellite::doFunctionality(){
    strategy->execute();
} 

//getters 

double Satellite::getCost()
{
    return this->cost;
}

bool Satellite::getAttached()
{
    return this->attached;
}

int Satellite::getX()
{
    return this->xPos;
}

int Satellite::getY()
{
    return this->yPos;
}

int Satellite::getZ()
{
    return this->zPos;
}

//setters

void Satellite::setCost(double newcost)
{
    this->cost = newcost;
}

void Satellite::setAttached(bool newb)
{
    this->attached = newb;
}

void Satellite::setX(int newx)
{
    this->xPos = newx;
}

void Satellite::setY(int newy)
{
    this->yPos = newy;
}

void Satellite::setZ(int newz)
{
    this->zPos = newz;
}