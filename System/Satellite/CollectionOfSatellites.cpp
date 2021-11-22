#include "CollectionOfSatellites.h"

CollectionOfSatellites::CollectionOfSatellites(){
    start=nullptr;
}
CollectionOfSatellites::~CollectionOfSatellites(){
    if (start==nullptr)return;
    else{
        while(start->getNext()!=nullptr){
            delete start;
            start=start->getNext();
        }
        delete start;
        start = nullptr;
    }
}

SatelliteIterator* CollectionOfSatellites::createSatelliteIterator(){
    return new SatelliteIterator(start);
}
void CollectionOfSatellites::addSatellite(Satellite* n){
    if(start==nullptr)start = n;
    else{
        Satellite* ptr = start;
        while (ptr->getNext() != nullptr){
            ptr = ptr->getNext();
        }
        ptr->setNext(n);
    }
}
void CollectionOfSatellites::removeSatellite(){
    if(start==nullptr)return;
    else if(start->getNext()==nullptr){
        start = nullptr;
    }
    else{
        Satellite* ptr = start;
        while (ptr->getNext()->getNext() != nullptr){
            ptr = ptr->getNext();
        }
        ptr->setNext(nullptr);
    }
}
bool CollectionOfSatellites::isEmpty(){
    return start==nullptr;
}