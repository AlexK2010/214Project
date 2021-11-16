#include "CrewDragon.h"

CrewDragon::CrewDragon():SpaceShuttle()
{

}

CrewDragon::CrewDragon(Rocket *rocket):SpaceShuttle(rocket)
{   
    //base class will handle initialisation for me
}

CrewDragon::~CrewDragon()
{
    //deletion of the rocket will be handled by the base class
    cout<<"DraCrewDragon Destroyed"<<endl;
}

void CrewDragon::update()
{
   this->setStage2(rocket->getRocketStage2());

   if(isStage2())
   {
        cout<<"Crew Dragon entering stage 2."<<endl;
        cout<<"Merlin Engine detaching."<<endl;
        cout<<"Upper Orbit Reached."<<endl;
        cout<<"Hold on tight crew."<<endl;
   }
   else
        cout<<"Rocket Still attatched. Stage 2 [pending....]"<<endl;
}

void CrewDragon::Thrust()
{
    cout<<"CrewDragon engaging thrust. Accelerating"<<endl;
}

void CrewDragon::MoveLeft()
{
    cout<<"CrewDragon Moving Left."<<endl;
}

void CrewDragon::MoveRight()
{
    cout<<"CrewDragon Moving Right."<<endl;
}

void CrewDragon::Deceleration()
{
    cout<<"CrewDragon reducing thrust. Decelerating."<<endl;
}

void CrewDragon::Dock()
{
    cout<<"CrewDragon Has initiated Docking sequence"<<endl;
}