#ifndef SATELLITEBUILDER_H
#define SATELLITEBUILDER_H

#include "ComponentBuilder.h"
#include "Satellite/CollectionOfSatellites.h"
#include "Satellite/Satellite.h"

class SatelliteBuilder : public ComponentBuilder{
    public:
        CollectionOfSatellites* buildSatellites(int);
};
#endif