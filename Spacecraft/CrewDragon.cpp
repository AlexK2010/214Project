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
   if(isStage2)
   {
        cout<<"Crew Dragon entering stage 2."<<endl;
        cout<<"Merlin Engine detaching."<<endl;
        cout<<"Upper Orbit Reached."<<endl;
        cout<<"Hold on tight crew."<<endl;
   }
   else
        cout<<"Rocket Still attatched. Stage 2 [pendeing....]"<<endl;
}