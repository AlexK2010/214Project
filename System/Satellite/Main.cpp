#include "string"
#include <iostream>
#include <ctime>
#include <cstdlib>

#include "Satellite.h"
#include "Satellite.cpp"
//Mediator
#include "Department.h"
#include "TrajectoryDepartment.h"
#include "TrajectoryDepartment.cpp"
#include "RiskAnalysis.h"
#include "RiskAnalysis.cpp"
//Strategy
#include "SatelliteFunctionality.h"
#include "ChangeTrajectory.h"
#include "ChangeTrajectory.cpp"
#include "ToggleSignal.h"
#include "ToggleSignal.cpp"
//Iterator
#include "SatelliteIterator.h"
#include "SatelliteIterator.cpp"
#include "CollectionOfSatellites.h"
#include "CollectionOfSatellites.cpp"
//Observer
#include "GroundControl.h"
#include "MaintenanceDepartment.h"
#include "SignalDepartment.h"
#include "MaintenanceDepartment.cpp"
#include "SignalDepartment.cpp"
//Route or Path
#include "Path.h"
#include "Path.cpp"


using namespace std;

int main() {
    //create satellites

    Satellite* sat1 = new Satellite(250000, "sat1");
    Satellite* sat2 = new Satellite(250000, "sat2");
    Satellite* sat3 = new Satellite(250000, "sat3");
    Satellite* sat4 = new Satellite(250000, "sat4");
    Satellite* sat5 = new Satellite(250000, "sat5");
    sat1->detachFromRocket(1);
    sat2->detachFromRocket(2);
    sat3->detachFromRocket(3);
    sat4->detachFromRocket(4);
    sat5->detachFromRocket(5);

    //make them in a collection of satellites
    CollectionOfSatellites* arr = new CollectionOfSatellites();
    arr->addSatellite(sat1);
    arr->addSatellite(sat2);
    arr->addSatellite(sat3);
    arr->addSatellite(sat4);
    arr->addSatellite(sat5);

    //signal department
    SignalDepartment* signalDep = new SignalDepartment(arr);
    signalDep->update();
    
    //trajectory department
    /*sat1->currPath.setID(1);
    sat2->currPath.setID(1);
    sat3->currPath.setID(2);
    sat4->currPath.setID(3);
    sat5->currPath.setID(4);*/

    /*cout << sat1->currPath.getID();
    cout << sat2->currPath.getID();
    cout << sat3->currPath.getID();
    cout << sat4->currPath.getID();
    cout << sat5->currPath.getID();*/

    TrajectoryDepartment* trajDep = new TrajectoryDepartment(arr);
    trajDep->notify();
    
    //do maintanence on satellites
    MaintenanceDepartment* maintDep = new MaintenanceDepartment(sat1);
    sat1->requireMaintenance = true;
    maintDep->update();

    
    //do risk analysis
    RiskAnalysis* riskDep = new RiskAnalysis(arr);
    riskDep->notify();


    return 0;
}