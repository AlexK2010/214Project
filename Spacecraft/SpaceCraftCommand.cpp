#include "SpaceShuttle.h"
#include "SpaceCraftCommand.h"

#include <iostream>

using namespace std;

SpaceCraftCommand :: SpaceCraftCommand()
{

}

void SpaceCraftCommand :: setReceiver(SpaceShuttle* r)
{
    receiver = r;
}

SpaceShuttle* SpaceCraftCommand :: getReceiver()
{
    return receiver;
}

SpaceCraftCommand :: ~SpaceCraftCommand()
{
    if(receiver!=nullptr)
    {
        delete receiver;
        receiver = nullptr;
    }
    cout << "The Commander is destroyed!" <<endl;
}