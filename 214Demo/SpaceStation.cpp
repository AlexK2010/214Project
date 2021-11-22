#include "SpaceStation.h"

SpaceStation::SpaceStation()
{

}

SpaceStation::SpaceStation(SpaceShuttle *f_shuttle)
{
    this->shuttle=f_shuttle;
}

SpaceStation::~SpaceStation()
{
    cout<<"SpaceStation destroyed "<<endl;
    shuttle=NULL;
}


SpaceShuttle * SpaceStation::getShuttle()
{
    return shuttle;
}

void SpaceStation::registerVesselArriving(SpaceShuttle* f_shuttle)
{
    this->shuttle=f_shuttle;
}