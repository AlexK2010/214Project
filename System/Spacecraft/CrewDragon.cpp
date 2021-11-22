#include "CrewDragon.h"

CrewDragon::CrewDragon():SpaceShuttle()
{

}

CrewDragon::CrewDragon(Rocket *rocket,int f_numHuman):SpaceShuttle(rocket)
{   
    this->numHuman = f_numHuman;
    this->setCost(55000000*numHuman); //55 million per head
}

CrewDragon::~CrewDragon()
{
    //deletion of the rocket will be handled by the base class
    cout<<"DraCrewDragon Destroyed"<<endl;
}

void CrewDragon::update(bool stage2)
{

   if(stage2)
   {
        cout<<"Crew Dragon entering stage 2."<<endl;
        cout<<"Merlin Engine detaching."<<endl;
        cout<<"Upper Orbit Reached."<<endl;
        cout<<"Hold on tight crew."<<endl;
   }
   else
        cout<<"Rocket Still attatched. Stage 2 [pending....]"<<endl;
}

void CrewDragon::thrust()
{
    cout<<"CrewDragon engaging thrust. Accelerating"<<endl;
}

void CrewDragon::moveLeft()
{
    cout<<"CrewDragon Moving Left."<<endl;
}

void CrewDragon::moveRight()
{
    cout<<"CrewDragon Moving Right."<<endl;
}

void CrewDragon::deceleration()
{
    cout<<"CrewDragon reducing thrust. Decelerating."<<endl;
}

void CrewDragon::dock()
{
    cout<<"CrewDragon Has initiated Docking sequence"<<endl;
    this->setDockReady(true);
    notify();
}

void CrewDragon::notify()
{
    SpaceShuttle::notify();
}