#include "Deceleration.h"

#include <iostream>

using namespace std;

Deceleration :: Deceleration():SpaceCraftCommand()
{

}

void Deceleration :: execute()
{
    getReceiver()->Deceleration();
}

Deceleration :: ~Deceleration()
{
    cout << "Deceleration is destroyed." <<endl;
}