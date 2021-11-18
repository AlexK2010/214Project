#include "SignalDepartment.h"
using namespace std;

SignalDepartment::SignalDepartment(CollectionOfSatellites* newSat)
{
    this->signalSatellites = newSat;
}

void SignalDepartment::update()
{
    strategy = new ToggleSignal();
    strategy->execute(signalSatellites, 4);
}

