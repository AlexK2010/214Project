#include "MaintenanceDepartment.h"

MaintenanceDepartment::MaintenanceDepartment(Satellite* newSat)
{
    this->signalSatellite = newSat;
}

void MaintenanceDepartment::update()
{
    if(this->signalSatellite->requireMaintenance == true)
    {
        this->waving = true;
    }
    else
    {
        this->waving = false;
    }
    
}


void MaintenanceDepartment::print()
{
    if(waving == true)
    {
        cout << "Requires Maintenance!" << endl;
    }
    else
    {
        cout << "Requires Maintenance!" << endl;
    }
}