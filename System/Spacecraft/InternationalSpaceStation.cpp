#include "InternationalSpaceStation.h"


InternationalSpaceStation::InternationalSpaceStation():SpaceStation()
{

}

InternationalSpaceStation::InternationalSpaceStation(SpaceShuttle *shuttle):SpaceStation(shuttle)
{
    //handled by base class
}


InternationalSpaceStation::~InternationalSpaceStation()
{
    cout<<"International Space Station destroyed "<<endl;
}

void InternationalSpaceStation::update()
{
    if(this->getShuttle()->isDockReady())
    {
        cout<<"Preparing to Dock..."<<endl;
        cout<<"The SpaceShuttle has Docked"<<endl;
        cout<<"Mission successful!"<<endl;
    }
    else
        cout<<"Still waiting for Shuttle to dock. [pendeing....]"<<endl;

}