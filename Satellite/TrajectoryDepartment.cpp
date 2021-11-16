#include "TrajectoryDepartment.h"

TrajectoryDepartment::TrajectoryDepartment(){}

TrajectoryDepartment::~TrajectoryDepartment(){}

void TrajectoryDepartment::notify(Satellite* newSat, int id)
{
    cout << "Changing Trajectory to " << newSat->currPath->getCurrContinent(id)  << endl; //unsure
}