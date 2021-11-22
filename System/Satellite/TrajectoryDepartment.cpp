#include "TrajectoryDepartment.h"

TrajectoryDepartment::TrajectoryDepartment(CollectionOfSatellites* n){
    signalSatellites = n;
    strategy = new ChangeTrajectory();
}

TrajectoryDepartment::~TrajectoryDepartment(){}

void TrajectoryDepartment::notify()
{
    strategy->execute(signalSatellites, 4);
    cout << "Calculations are done, no clashes within the next 4 hours "  << endl; 
}