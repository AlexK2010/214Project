#include "Dragon.h"

Dragon::Dragon():SpaceShuttle()
{

}

Dragon::Dragon(Rocket *rocket):SpaceShuttle(rocket)
{   
    //base class will handle initialisation for me
}

Dragon::~Dragon()
{
    cout<<"Dragon Destroyed"<<endl;
}

void Dragon::update()
{
   if(isStage2())
   {
       cout<<"Dragon entering stage 2."<<endl;
       cout<<"Merlin Engine detaching."<<endl;
       cout<<"Upper Orbit Reached."<<endl;
       cout<<"Hope the cargo is strapped in."<<endl;
   }
   else
       cout<<"Rocket Still attatched. Stage 2 [pendeing....]"<<endl;
      
}