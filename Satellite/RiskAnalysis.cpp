#include "RiskAnalysis.h"

RiskAnalysis::RiskAnalysis(CollectionOfSatellites* collec){
    arr = collec;
    strategy1 = new ToggleSignal();
    strategy2 = new ChangeTrajectory();
}

RiskAnalysis::~RiskAnalysis(){}

void RiskAnalysis::notify()
{
    calcCost(); //calculate the cost
    //cout << "Total cost of Satellite: " << newSat->getCost() << endl;
}

double RiskAnalysis::calcCost()
{
    int cost = 0;
    cout << "Performing Risk Analysis" << endl;
    cout << "Doing Calculation 1 of 4..." << endl;
    SatelliteIterator *it = arr->createSatelliteIterator();
    cost+=250000;
    while(it->hasNext()){
        it->next();
        cost+=250000;
    }
    cout << "Doing Calculation 2 of 4..." << endl;
    it->first();
    if(it->current()->requireMaintenance==true){cost+=20000;}
    while(it->hasNext()){
        it->next();
        if(it->current()->requireMaintenance==true){cost+=20000;}
    }
    cout << "Doing Calculation 3 of 4..." << endl;
    

}