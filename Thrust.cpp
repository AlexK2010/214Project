#include "THRUST.h"
#include "SpaceShuttle.h"

void Thrust :: execute()
{
    receiver->Thrust();
}

void Thrust :: setReceiver(SpaceShuttle* s)
{
    receiver = s;
}