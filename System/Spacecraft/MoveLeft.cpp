#include "MoveLeft.h"
#include <iostream>

using namespace std;

MoveLeft :: MoveLeft():SpaceCraftCommand()
{

}

void MoveLeft :: execute()
{
    getReceiver()->moveLeft();
}

MoveLeft :: ~MoveLeft()
{
    cout << "MoveLeft is destroyed." <<endl;
}