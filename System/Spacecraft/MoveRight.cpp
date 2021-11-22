#include <iostream>
#include "MoveRight.h"

using namespace std;

MoveRight :: MoveRight():SpaceCraftCommand()
{

}

void MoveRight :: execute()
{
    getReceiver()->moveRight();
}

MoveRight :: ~MoveRight()
{
    cout << "MoveRight is destroyed." <<endl;
}