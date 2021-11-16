#include "RiskAnalysis.h"

RiskAnalysis::RiskAnalysis(){}

RiskAnalysis::~RiskAnalysis(){}

void RiskAnalysis::notify(Satellite* newSat)
{
    calcCost(newSat); //calculate the cost
    cout << "Total cost of Satellite: " << newSat->getCost() << endl;
}

double RiskAnalysis::calcCost(Satellite *newSat)
{
    //algorithm here.
}