#include "EOIterator.h"

using namespace std;

EOIterator::EOIterator(RocketObserver** obList, int s){
    obsList = obList;
    pos = 0;
    size = s;
}

EOIterator::~EOIterator(){
    obsList = nullptr;
}

void EOIterator::first(){
    pos = 0;
}   
            
void EOIterator::next(){
    if(!isDone())
        pos++;
}

bool EOIterator::isDone(){
    return pos == size;
}

RocketObserver* EOIterator::currentItem(){
    return obsList[pos];
}

int EOIterator::checkEngines(){
    int count = 0;
    for(int i = 0; i < size - 1; i++){
        if(obsList[i]->getState())
            count++;
    }
    return count;
}

bool EOIterator::checkVacEngine(){
    return obsList[size-1]->getState();
}