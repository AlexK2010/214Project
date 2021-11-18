#include "RocketSecondStage.h"
#include "VacuumEngine.h"
#include <cstdlib>

using namespace std;

RocketSecondStage::RocketSecondStage(RocketIterator* ri){
    vacEng = new VacuumEngine(ri);
}

RocketSecondStage::~RocketSecondStage(){
    delete vacEng;
}

void RocketSecondStage::breakEngine(int cw, int aw){
    double breakChance;
    if(aw<cw)
        breakChance = 0.02;
    else
        breakChance = 0.02 + (aw - cw)/cw;
    breakChance *= 100;
    double random;
    random = rand()%100 + 1;
    if(random<=breakChance)
        vacEng->notify();
}