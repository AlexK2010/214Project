#ifndef MAINTENANCEDEPARTMENT_H
#define MAINTENANCEDEPARTMENT_H

#include "GroundControl.h"
using namespace std;

class MaintenanceDepartment : public GroundControl, public Satellite{
	public:
        Satellite* signalSatellite;
        MaintenanceDepartment(Satellite*);
        void update();
        void print();
        bool waving;
};
#endif