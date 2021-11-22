#include "RocketFirstStage.h"
#include <iostream>

using namespace std;

RocketFirstStage::RocketFirstStage(bool type, RocketIterator* obList){
    if(type){
        coreList = new F9Core*[3];
        numCores = 3;
    }else{
        coreList = new F9Core*[1];
        numCores = 1;
    }
    obList->first();
    for(int i = 0; i<numCores; i++)
        coreList[i] = new F9Core(obList);
    obsList = obList;
}

RocketFirstStage::~RocketFirstStage(){
    for(int i = 0; i < numCores; i++){
        delete coreList[i];
    }
    delete [] coreList;
}

double RocketFirstStage::land(){
    int numEng = numCores * 9;
    if(obsList->checkEngines() != 0)
        if(numEng / obsList->checkEngines()<3){
            cout<<"Landing of rocket first stage unsuccessful."<<endl;
            return 0;
        }
    double cost = 0;
    cost += (numEng - obsList->checkEngines()) * 2050000;         //Cost reduced on number of engines not broken
    
    obsList->first();
    for(int i = 0; i<numCores; i++){
        int numBroken = 0;
        for(int j = 0; j<9; j++){
            if(obsList->currentItem()->getState())
                numBroken++;
            obsList->next();
        }
        if(numBroken != 0)
            if(!(9 / numBroken < 3))
                cost += 1025000;                                      //Cost reduced on the number of cores not broken
    }

    if((numEng - obsList->checkEngines()) >= (numEng - numCores))
        cost += 4100000;                                         //Cost reduced on the rocket's first stage if number of broken engines is low

    cout<<"Landing of rocket first stage successful!"<<endl;
    return cost;
}

void RocketFirstStage::breakEngines(long cw, long aw){
    for(int i = 0; i<numCores; i++)
        coreList[i]->breakEngines(cw, aw);
}