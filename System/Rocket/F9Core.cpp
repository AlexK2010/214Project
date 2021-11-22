#include "F9Core.h"
#include "MerlinEngine.h"
#include <cstdlib>
#include <iostream>

using namespace std;

F9Core::F9Core(RocketIterator* roIter){
    engList = new Engine*[9];
    for(int i = 0; i < 9; i++){
        engList[i] = new MerlinEngine(roIter);
        engList[i]->attach();
    }
}

F9Core::~F9Core(){
    for(int i = 0; i < 9; i++){
        delete engList[i];
    }
    delete [] engList;
}

void F9Core::breakEngines(long cw, long aw){
    float breakChance;
    if(aw<cw)
        breakChance = 0.02;
    else{
        breakChance = (aw - cw);
        breakChance /= cw;
        breakChance += 0.02;
    }
    breakChance *= 100;
    float random;
    for(int i = 0; i < 9; i++){
        random = rand()%100 + 1;
        if(random<=breakChance)
            engList[i]->notify();
    }
}