#include "SpaceShuttle.h"
#include "SpaceCraftCommand.h"

void SpaceCraftCommand :: setReceiver(SpaceShuttle* r)
{
    receiver = r;
}

SpaceShuttle* SpaceCraftCommand :: getReceiver()
{
    return receiver;
}