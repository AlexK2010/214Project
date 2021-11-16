#include "MoveLeft.h"
#include "SpaceShuttle.h"

void MoveLeft :: execute()
{
    receiver->MoveLeft();
}

void MoveLeft :: setReceiver(SpaceShuttle* s)
{
    receiver = s;
}