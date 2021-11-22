#include "TrajectoryDepartment.h"


TrajectoryDepartment::TrajectoryDepartment()
{

}

TrajectoryDepartment::~TrajectoryDepartment()
{
    cout<<"Trajectory Department destroyed"<<endl;
}

TrajectoryDepartment::TrajectoryDepartment(CollectionOfSatellites* n)
{
    signalSatellites = n;
    strategy = new ChangeTrajectory();
}

void TrajectoryDepartment::notify()
{
    strategy->execute(signalSatellites, 4);
    cout << "Calculations are done, no clashes within the next 4 hours "  << endl; 
}