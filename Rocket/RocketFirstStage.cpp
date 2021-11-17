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

bool RocketFirstStage::land(){
    int num = numCores * 9;
    if(num / obsList->checkEngines()<3){
        cout<<"Landing of rocket first stage unsuccessful."<<endl;
        return false;
    }
    cout<<"Landing of rocket first stage successful!"<<endl;
    return true;
}

void RocketFirstStage::breakEngines(int cw, int aw){
    for(int i = 0; i<numCores; i++)
        coreList[i]->breakEngines(cw, aw);
}