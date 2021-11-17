#ifndef RISKANALYSIS_H
#define RISKANALYSIS_H

#include "Satellite.h"

class RiskAnalysis : public Department{
    public:
        RiskAnalysis(){};
        ~RiskAnalysis(){};
        double calcCost(Satellite *colleague);
        void notify(Satellite *colleague);
};

#endif