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
    // if(receiver!=nullptr)
    // {
    //     receiver = nullptr; //all deletion will be handled by the client
    // }
    cout << "The Commander is destroyed!" <<endl;
}