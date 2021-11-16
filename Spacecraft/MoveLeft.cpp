#include "MoveLeft.h"
#include <iostream>

using namespace std;

MoveLeft :: MoveLeft()
{}

void MoveLeft :: execute()
{
    getReceiver()->MoveLeft();
}

MoveLeft :: ~MoveLeft()
{
    cout << "MoveLeft is destroyed." <<endl;
}