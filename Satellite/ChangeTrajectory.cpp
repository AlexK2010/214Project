#include "ChangeTrajectory.h"

void ChangeTrajectory::execute(CollectionOfSatellites* collection, int time){
    SatelliteIterator* it = collection->createSatelliteIterator();
    while(it->hasNext()){
        SatelliteIterator* runner = collection->createSatelliteIterator(); 
        while(runner->hasNext()){
            if(it->current()->getPath().getCurrContinent(time + it->current()->timeReleased) == runner->current()->getPath().getCurrContinent(time + it->current()->timeReleased)){
                if(it->current()->getPath().getID()==4){
                    it->current()->setPath(1);
                    cout << "Changing " << it->current()->name << " Path from 4 to 1" << endl;
                }
                else{
                    it->current()->setPath(it->current()->getPath().getID()+1);
                    cout << "Changing " << it->current()->name << " Path from " << it->current()->getPath().getID() << "to " << it->current()->getPath().getID() +1 << endl;
                }
                runner->first();//set iterator back to first element
            }
            runner->next();
        }
        it->next();
    }
}