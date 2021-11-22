#ifndef TRAJECTORYDEPARTMENT_H
#define TRAJECTORYDEPARTMENT_H

#include "Satellite.h"
#include "Path.h"
#include "ChangeTrajectory.h"
#include "CollectionOfSatellites.h"
#include "SatelliteFunctionality.h"
#include "Department.h"

class ChangeTrajectory;
class SatelliteFunctionality;

class TrajectoryDepartment : public Department{
    public:

        TrajectoryDepartment();
        TrajectoryDepartment(CollectionOfSatellites*);
        ~TrajectoryDepartment();

        SatelliteFunctionality* strategy;
        CollectionOfSatellites* signalSatellites;
        
        //void notify(Satellite *colleague);
         void notify();
};

#endif