#include "RSSCreator.h"
#include "RocketSecondStage.h"

using namespace std;

RSSCreator::RSSCreator()
{}
 
RocketStage* RSSCreator::createRSS(RocketIterator* ri){
    return new RocketSecondStage(ri);
}