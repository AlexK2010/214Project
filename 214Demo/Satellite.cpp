#include "Satellite.h"


Satellite::Satellite(){}

Satellite::Satellite(double c, string s)
{
    next = nullptr;
    this->cost=c;
    name = s;
}

Satellite::~Satellite(){};

void Satellite::doFunctionality(){
    //strategy->execute();
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

Satellite* Satellite::getNext()
{
    return next;
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

void Satellite::setNext(Satellite* next)
{
    this->next = next;
}

//Observer stuff
void Satellite::attach(GroundControl* newOb)
{
     l.push_back(newOb);
}

void Satellite::detach(GroundControl* newOb)
{
    vector<GroundControl*>::iterator it = l.begin();
	for (it = l.begin(); it != l.end(); ++it)
    {
        if(*it == newOb)
        {
            l.erase(it);
        }
    }
}

void Satellite::notify()
{
    vector<GroundControl*>::iterator it = l.begin();
	for (it = l.begin(); it != l.end(); ++it)
		(*it)->update();
}

Path Satellite::getPath(){
    return currPath;
}

void Satellite::setPath(int i){
    currPath.setID(i);
}

void Satellite::detachFromRocket(int t){
    timeReleased = t;
    currPath.setID(rand() % 4 + 1);
    hasSignal=true;
    attached=false;
}

