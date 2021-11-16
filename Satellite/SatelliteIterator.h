#ifndef SATELLITEITERATOR_H
#define SATELLITEITERATOR_H

#include "CollectionOfSatellites.h"

class SatelliteIterator{
    Satellite* firstS;
    Satellite* currentS;
    public:
        SatelliteIterator(Satellite* s);
        ~SatelliteIterator();
        Satellite* first();
        Satellite* next();
        bool hasNext();
        Satellite* current();
};
#endif