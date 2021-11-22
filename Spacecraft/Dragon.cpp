#include "Dragon.h"

Dragon::Dragon():SpaceShuttle()
{

}

Dragon::Dragon(Rocket *rocket):SpaceShuttle(rocket)
{   
    this->setCost(25000000);
    
}

Dragon::~Dragon()
{
    cout<<"Dragon Destroyed"<<endl;
}

void Dragon::update(bool stage2)
{
   
    if(stage2) //if no failure occured
   {
       cout<<"Dragon entering stage 2."<<endl;
       cout<<"Merlin Engine detaching."<<endl;
       cout<<"Upper Orbit Reached."<<endl;
       cout<<"Hope the cargo is strapped in."<<endl;
   }
   else
       cout<<"Rocket Still attatched. Stage 2 [pendeing....]"<<endl;
      
}

void Dragon::thrust()
{
    cout<<"Dragon engaging thrust. Accelerating"<<endl;
}

void Dragon::moveLeft()
{
    cout<<"Dragon Moving Left."<<endl;
}

void Dragon::moveRight()
{
    cout<<"Dragon Moving Right."<<endl;
}

void Dragon::deceleration()
{
    cout<<"Dragon reducing thrust. Decelerating."<<endl;
}

void Dragon::dock()
{
    cout<<"Dragon Has initiated Docking sequence"<<endl;
    this->setDockReady(true);
    this->notify();
}

void Dragon::notify()
{
    SpaceShuttle::notify();
}




