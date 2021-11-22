#include "SatelliteBuilder.h"

SatelliteBuilder::~SatelliteBuilder(){}

CollectionOfSatellites* SatelliteBuilder::buildSatellites(int numSat){
    CollectionOfSatellites* colSat = new CollectionOfSatellites();
    for(int i = 0; i<numSat; i++)
        colSat->addSatellite(new Satellite(250000,("Sat"+to_string(i)))); //Need to explicitly state the cost and name
    return colSat;
}