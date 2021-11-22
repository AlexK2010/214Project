#include "Deceleration.h"


Deceleration :: Deceleration():SpaceCraftCommand()
{

}

void Deceleration :: execute()
{
    getReceiver()->deceleration();
}

Deceleration :: ~Deceleration()
{
    cout << "Deceleration is destroyed." <<endl;
}