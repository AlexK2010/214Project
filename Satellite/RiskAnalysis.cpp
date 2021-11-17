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
    //algorithm here. Path determine cost ?
    //cost has own unique units
    if(newSat->currPath->getID() == 1)
    {
        newSat->setCost(10);
    }
    else if(newSat->currPath->getID() == 2)
    {
        newSat->setCost(20);
    }
    else if(newSat->currPath->getID() == 3)
    {
        newSat->setCost(30);
    }
    else{
        newSat->setCost(40);
    };
}