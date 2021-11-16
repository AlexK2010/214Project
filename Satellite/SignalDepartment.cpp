#include "SignalDepartment.h"
using namespace std;

SignalDepartment::SignalDepartment(Satellite* newSat)
{
    this->signalSatellite = newSat;
}

void SignalDepartment::update()
{
    if(this->signalSatellite->hasSignal == true) //temp
    {
        this->waving = true;
    }
    else
    {
        this->waving = false;
    }
    
}


void SignalDepartment::print()
{
    if(waving == true)  //temp
    {
        cout << "There is a signal!" << endl;
    }
    else
    {
        cout << "No signal!" << endl;
    }
}