#ifndef COLLECTIONOFSATELLITES_H
#define COLLECTIONOFSATELLITES_H

#include "Satellite.h"
#include "SatelliteIterator.h"

class CollectionOfSatellites{
        Satellite* start;
    public:
        CollectionOfSatellites();
        ~CollectionOfSatellites();
        SatelliteIterator* createSatelliteIterator();
        void addSatellite(Satellite*); // add from back
        void removeSatellite(); //remove from back
        bool isEmpty();
};
#endif