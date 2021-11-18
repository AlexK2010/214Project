#include "RiskAnalysis.h"

RiskAnalysis::RiskAnalysis(CollectionOfSatellites* collec){
    arr = collec;
}

RiskAnalysis::~RiskAnalysis(){}

void RiskAnalysis::notify()
{
    calcCost(); //calculate the cost
}

double RiskAnalysis::calcCost()
{
    //algorithm here. Path determine cost./ ?
    //cost has own unique units
    SatelliteIterator* it = arr->createSatelliteIterator();
    
}