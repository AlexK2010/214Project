#ifndef TRAJECTORYDEPARTMENT_H
#define TRAJECTORYDEPARTMENT_H

#include "Satellite.h"
#include "Path.h"
#include "ChangeTrajectory.h"

class TrajectoryDepartment : public Department{
    public:
        TrajectoryDepartment(){};
        ~TrajectoryDepartment(){};
        //  void notify(Satellite *colleague);
         void notify(Satellite *colleague, int id);
};

#endif