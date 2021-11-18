#include "Dragon.h"

Dragon::Dragon():SpaceShuttle()
{

}

Dragon::Dragon(Rocket *rocket, double cost):SpaceShuttle(rocket,cost)
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

void Dragon::Thrust()
{
    cout<<"Dragon engaging thrust. Accelerating"<<endl;
}

void Dragon::MoveLeft()
{
    cout<<"Dragon Moving Left."<<endl;
}

void Dragon::MoveRight()
{
    cout<<"Dragon Moving Right."<<endl;
}

void Dragon::Deceleration()
{
    cout<<"Dragon reducing thrust. Decelerating."<<endl;
}

void Dragon::Dock()
{
    cout<<"Dragon Has initiated Docking sequence"<<endl;
}




