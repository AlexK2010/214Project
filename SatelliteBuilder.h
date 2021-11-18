#ifndef SATELLITEBUILDER_H
#define SATELLITEBUILDER_H

#include "ComponentBuilder.h"

class SatelliteBuilder : ComponentBuilder{
    Satellite* newSatellite;
    public:
        Satellite* buildSatellite();
};
#endif