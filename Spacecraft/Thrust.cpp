#include "Thrust.h"
#include <iostream>

using namespace std;
Thrust :: Thrust()
{}

void Thrust :: execute()
{
    getReceiver()->Thrust();
}

Thrust :: Thrust()
{
    cout << "Thrust is DONE!" <<endl;
}