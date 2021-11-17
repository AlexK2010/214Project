#include "ChangeTrajectory.h"

void ChangeTrajectory::execute(CollectionOfSatellites* collection, int time){
    SatelliteIterator* it = collection->createSatelliteIterator();
    while(it->hasNext()){
        SatelliteIterator* runner = collection->createSatelliteIterator(); 
        while(runner->hasNext()){
            if(it->current()->getPath().getCurrContinent(time) == runner->current()->getPath().getCurrContinent(time)){
                if(it->current()->getPath().getID()==4){
                    it->current()->setPath(1);
                }
                else{
                    it->current()->setPath(it->current()->getPath().getID()+1);
                }
                runner->first();//set iterator back to first element
            }
            runner->next();
        }
        it->next();
    }
}