#ifndef SIGNALDEPARTMENT_H
#define SIGNALDEPARTMENT_H

#include "GroundControl.h"
#include "CollectionOfSatellites.h"
using namespace std;

class SignalDepartment : public GroundControl, public Satellite{
	public:
        Satellite* signalSatellite; //CollectionOfSatellites May Be Used (toggleSignal needs to be done beforehand)
        SignalDepartment(Satellite*);
        void update();
        void print();
        bool waving;
};
#endif