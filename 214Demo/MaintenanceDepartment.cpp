#include "MaintenanceDepartment.h"

MaintenanceDepartment::MaintenanceDepartment(Satellite* newSat)
{
    this->signalSatellite = newSat;
}

void MaintenanceDepartment::update()
{
    signalSatellite->requireMaintenance = false;
    cout << "Maintenance has been completed on " << signalSatellite->name << ". The satellite is fully functional. " << endl;
}
