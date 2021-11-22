#include "Thrust.h"
#include <iostream>

using namespace std;

Thrust :: Thrust():SpaceCraftCommand()
{

}

void Thrust :: execute()
{
    getReceiver()->thrust();
}

Thrust::~Thrust()
{
    cout<<"Thrust Destroyed"<<endl;   
}