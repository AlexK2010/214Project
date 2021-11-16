#include "Satellite.h"

Satellite::Satellite(double c)
{
    this->cost=c;
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

