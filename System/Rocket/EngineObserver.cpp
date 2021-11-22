#include "EngineObserver.h"

using namespace std;

EngineObserver::EngineObserver(){
    state = false;
}

void EngineObserver::update(){
    state = true;
}

bool EngineObserver::getState(){
    return state;
}