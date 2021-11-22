#include "SatelliteIterator.h"

SatelliteIterator::SatelliteIterator(Satellite* s){
    firstS = s;
    currentS = s;
}
SatelliteIterator::~SatelliteIterator(){
    firstS = nullptr;
    currentS = nullptr;
}
Satellite* SatelliteIterator::first(){
    currentS = firstS;
    return currentS;
}
Satellite* SatelliteIterator::next(){
    currentS = currentS->getNext();
    return currentS;
}
bool SatelliteIterator::hasNext(){
    return currentS->getNext() != nullptr;
}
Satellite* SatelliteIterator::current(){
    return currentS;
}