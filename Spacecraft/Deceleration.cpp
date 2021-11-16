#include "Deceleration.h"
#include "SpaceShuttle.h"

void Deceleration :: execute()
{
    receiver->Deceleration();
}

void Deceleration :: setReceiver(SpaceShuttle* s)
{
    receiver = s;
}