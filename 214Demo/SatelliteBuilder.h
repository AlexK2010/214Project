#ifndef SATELLITEBUILDER_H
#define SATELLITEBUILDER_H

#include "ComponentBuilder.h"
#include "CollectionOfSatellites.h"
#include "Satellite.h"

//forward declaring section

//class CollectionOfSatellites;

class SatelliteBuilder : public ComponentBuilder{
    public:
        CollectionOfSatellites* buildSatellites(int);
};
#endif
