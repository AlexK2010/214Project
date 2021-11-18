#ifndef RISKANALYSIS_H
#define RISKANALYSIS_H

#include "Satellite.h"
#include "CollectionOfSatellites.h"

class RiskAnalysis : public Department{
        CollectionOfSatellites* arr;
    public:
        RiskAnalysis(CollectionOfSatellites* collec);
        ~RiskAnalysis();
        double calcCost();
        void notify();
};

#endif