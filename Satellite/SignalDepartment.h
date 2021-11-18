#ifndef SIGNALDEPARTMENT_H
#define SIGNALDEPARTMENT_H

#include "GroundControl.h"
#include "CollectionOfSatellites.h"
#include "ToggleSignal.h"
using namespace std;

class SignalDepartment : public GroundControl, public Satellite{
	public:
        SatelliteFunctionality* strategy;
        CollectionOfSatellites* signalSatellites;
        SignalDepartment(CollectionOfSatellites*);
        void update();
        bool waving;
};
#endif