#include "Thrust.h"
#include <iostream>

using namespace std;

Thrust :: Thrust():SpaceCraftCommand()
{

}

void Thrust :: execute()
{
    getReceiver()->Thrust();
}

Thrust :: Thrust()
{
    cout << "Thrust is DONE!" <<endl;
}

Thrust::~Thrust()
{
    cout<<"Thrust Destroyed"<<endl;   
}