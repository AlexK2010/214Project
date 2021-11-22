#include "VacuumEngine.h"
#include <iostream>

using namespace std;

VacuumEngine::VacuumEngine()
{
}

VacuumEngine::VacuumEngine(RocketIterator* rIter){
    obsIter = rIter;
    status = false;
    obs = nullptr;
}

VacuumEngine::~VacuumEngine(){
    obsIter = nullptr;
    obs = nullptr;
}

void VacuumEngine::attach(){
    obs = obsIter->currentItem();
    obsIter->next();
}

void VacuumEngine::notify(){
    if(!status){
        status = true;
        cout<<"Engine has failed."<<endl;
        obs->update();
    }
}
