#include "StageCreator.h"

StageCreator::StageCreator()
{

}

StageCreator::~StageCreator()
{
    cout<<"StageCreator destroyed"<<endl;
}

RocketStage * StageCreator::createRSS(RocketIterator *ri)
{
    return NULL; //pure virtual function
}