#include <iostream>
#include "MoveRight.h"

using namespace std;

MoveRight :: MoveRight():SpaceCraftCommand()
{

}

void MoveRight :: execute()
{
    getReceiver()->MoveRight();
}

MoveRight :: ~MoveRight()
{
    cout << "MoveRight is destroyed." <<endl;
}