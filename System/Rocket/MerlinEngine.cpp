#include "MerlinEngine.h"
#include <iostream>

using namespace std;

MerlinEngine::MerlinEngine(RocketIterator* rIter){
    obsIter = rIter;
    status = false;
    obs = nullptr;
}

MerlinEngine::~MerlinEngine(){
    obsIter = nullptr;
    obs = nullptr;
}

void MerlinEngine::attach(){
    obs = obsIter->currentItem();
    obsIter->next();
}

void MerlinEngine::notify(){
    if(!status){
        status = true;
        cout<<"Engine has failed."<<endl;
        obs->update();
    }
}