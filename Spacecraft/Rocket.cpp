#include "Rocket.h"

Rocket::Rocket()
{

}

Rocket::~Rocket()
{
    cout<<"Rocket Destroyed"<<endl;
}

/***
 * There's no need to declare these functions to the concrete classes. Just declare
 * them in the base rocket class as  these functions will be used by both
 * Falcon9 and FalconHeavy.

/*
    Attatch will assign an observer to the current private
    observer field
*/

void Rocket::attatch(SpaceShuttle* shuttle)
{
    this->spaceShuttle=shuttle;
}

/*
    Simply set to NULL to detatch
*/

void Rocket::detatch()
{
    spaceShuttle=NULL;
}

/*
    Trigger the update on the spaceShuttle side
*/

void Rocket::notify()
{
    spaceShuttle->update();
}

void Rocket::setRocketStage2(bool stage)
{
    this->RocketStage2=stage;
}

bool Rocket::getRocketStage2()
{
    return RocketStage2;
}



