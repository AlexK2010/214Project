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

void RiskAnalysis::calcCost()
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
    cost+=20000;
    cout << "Doing Calculation 4 of 4..." << endl;
    cost+=15000;
    cout << "Finished Full Risk Analysis"<< endl;
    cout << "Total Cost of Starlink Satellite System: $" << cost << endl;
    cout << "Expected Revenue is $13 000 000" << endl;
    if(cost < 13000000)cout << "According to Calculations We will be Profitable" << endl;
    else cout << "According to Calculations We will not be Profitable" << endl;

}