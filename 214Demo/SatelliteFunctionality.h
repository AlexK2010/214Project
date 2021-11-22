#ifndef SATELLITEFUNCTIONALITY_H
#define SATELLITEFUNCTIONALITY_H

#include "Satellite.h"
#include "CollectionOfSatellites.h"

class CollectionOfSatellites;

class SatelliteFunctionality{
    private:
    public:
        SatelliteFunctionality();
        ~SatelliteFunctionality();
        virtual void execute(CollectionOfSatellites* collection, int time) =0;
};

#endif