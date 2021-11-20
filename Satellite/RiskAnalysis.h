#ifndef RISKANALYSIS_H
#define RISKANALYSIS_H

#include "Satellite.h"
#include "CollectionOfSatellites.h"
#include "ToggleSignal.h"
#include "ChangeTrajectory.h"

class RiskAnalysis : public Department{
        CollectionOfSatellites* arr;
        SatelliteFunctionality* strategy1;
        SatelliteFunctionality* strategy2;
    public:
        RiskAnalysis(CollectionOfSatellites* );
        ~RiskAnalysis();
        void calcCost();
        void notify();
};

#endif