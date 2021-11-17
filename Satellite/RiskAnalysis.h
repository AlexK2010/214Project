#ifndef RISKANALYSIS_H
#define RISKANALYSIS_H

#include "Satellite.h"
#include "CollectionOfSatellites.h"

class RiskAnalysis : public Department{
    public:
        RiskAnalysis(){};
        ~RiskAnalysis(){};
        double calcCost(CollectionOfSatellites *colleague);
        void notify(CollectionOfSatellites *colleague);
};

#endif