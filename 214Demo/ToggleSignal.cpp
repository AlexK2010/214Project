#include "ToggleSignal.h"

void ToggleSignal::execute(CollectionOfSatellites* collection, int time)
{
    SatelliteIterator* it = collection->createSatelliteIterator(); 
    while(it->hasNext()){
        SatelliteIterator* runner = collection->createSatelliteIterator(); 
        while(runner->hasNext()){
            if(it->current()->getPath()->getCurrContinent(time + it->current()->timeReleased) == runner->current()->getPath()->getCurrContinent(time + runner->current()->timeReleased) && it->current() != runner->current()){
                it->current()->hasSignal = false;
                cout << "Switching off " << it->current()->name << " signal" << endl;
            }
            runner->next();
        }
        it->next();
    }
}