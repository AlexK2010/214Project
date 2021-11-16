#include "MoveRight.h"
#include "SpaceShuttle.h"

void MoveRight :: execute()
{
    receiver->MoveRight();
}

void MoveRight :: setReceiver(SpaceShuttle* s)
{
    receiver = s;
}