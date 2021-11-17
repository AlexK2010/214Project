#ifndef TRAJECTORYDEPARTMENT_H
#define TRAJECTORYDEPARTMENT_H

#include "Satellite.h"
#include "Path.h"
#include "ChangeTrajectory.h"
#include "CollectionOfSatellites.h"

class TrajectoryDepartment : public Department{
    public:
        TrajectoryDepartment(){};
        ~TrajectoryDepartment(){};
        //void notify(Satellite *colleague);
         void notify(CollectionOfSatellites *colleague, int id);
};

#endif