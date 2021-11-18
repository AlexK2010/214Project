#include "RiskAnalysis.h"

RiskAnalysis::RiskAnalysis(CollectionOfSatellites* collec){
    arr = collec;
}

RiskAnalysis::~RiskAnalysis(){}

void RiskAnalysis::notify(CollectionOfSatellites* newSat)
{
    calcCost(newSat); //calculate the cost
    //cout << "Total cost of Satellite: " << newSat->getCost() << endl;
}

double RiskAnalysis::calcCost(CollectionOfSatellites *newSat)
{
    //algorithm here. Path determine cost./ ?
    //cost has own unique units
    // if(newSat->currPath->getID() == 1)
    // {
    //     newSat->setCost(10);
    // }
    // else if(newSat->currPath->getID() == 2)
    // {
    //     newSat->setCost(20);
    // }
    // else if(newSat->currPath->getID() == 3)
    // {
    //     newSat->setCost(30);
    // }
    // else{
    //     newSat->setCost(40);
    // };
}