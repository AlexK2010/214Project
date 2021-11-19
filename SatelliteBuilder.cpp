#include "SatelliteBuilder.h"

CollectionOfSatellites* SatelliteBuilder::buildSatellites(int numSat){
    CollectionOfSatellites* colSat = new CollectionOfSatellites();
    for(int i = 0; i<numSat; i++)
        colSat->addSatellite(new Satellite());
    return colSat;
}