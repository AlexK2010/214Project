#ifndef SATELLITEBUILDER_H
#define SATELLITEBUILDER_H

#include "ComponentBuilder.h"
#include "Satellite/CollectionOfSatellites.h"
#include "Satellite/Satellite.h"

//forward declaring section

class CollectionOfSatellites;

class SatelliteBuilder : public ComponentBuilder{
    public:
        CollectionOfSatellites* buildSatellites(int);
};
#endif