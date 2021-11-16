#include "Dock.h"
#include "Spaceshuttle.h"

void Dock :: execute()
{
    receiver->Dock();
}

void Dock :: setReceiver(SpaceShuttle* s)
{
    receiver = s;
}