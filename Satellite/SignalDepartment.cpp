#include "SignalDepartment.h"
using namespace std;

SignalDepartment::SignalDepartment(CollectionOfSatellites* newSat)
{
    this->signalSatellites = newSat;
}

void SignalDepartment::update()
{
    // if(this->signalSatellite->hasSignal == true) //temp
    // {
    //     this->waving = true;
    // }
    // else
    // {
    //     this->waving = false;
    // }
    strategy = new ToggleSignal();
    strategy->execute(signalSatellites, 4);
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