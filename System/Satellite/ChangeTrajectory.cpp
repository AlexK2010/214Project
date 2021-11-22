#include "ChangeTrajectory.h"

void ChangeTrajectory::execute(CollectionOfSatellites* collection, int time){
    int checker = 0;
    SatelliteIterator* it = collection->createSatelliteIterator();
    while(it->hasNext()){
        SatelliteIterator* runner = collection->createSatelliteIterator(); 

        if(it->current()->getPath().getCurrContinent(time + it->current()->timeReleased) == runner->current()->getPath().getCurrContinent(time + runner->current()->timeReleased) && it->current() != runner->current()){
                if(it->current()->getPath().getID()==4){
                    it->current()->setPath(1);
                    cout << "Changing " << it->current()->name << " Path from 4 to 1" << endl;
                }
                else if(it->current()->getPath().getID()<4){
                    cout << "Changing " << it->current()->name << " Path from " << it->current()->getPath().getID() << " to " << it->current()->getPath().getID() +1 << endl;
                    it->current()->setPath(it->current()->getPath().getID()+1);
                }
                runner->first();//set iterator back to first element
                checker++;
                if(checker==5){
                    it->current()->timeReleased++;
                    checker =0;
                }
            }

        while(runner->next()!=nullptr){
            if(it->current()->getPath().getCurrContinent(time + it->current()->timeReleased) == runner->current()->getPath().getCurrContinent(time + runner->current()->timeReleased) && it->current() != runner->current()){
                if(it->current()->getPath().getID()==4){
                    it->current()->setPath(1);
                    cout << "Changing " << it->current()->name << " Path from 4 to 1" << endl;
                }
                else if(it->current()->getPath().getID()<4){
                    cout << "Changing " << it->current()->name << " Path from " << it->current()->getPath().getID() << " to " << it->current()->getPath().getID() +1 << endl;
                    it->current()->setPath(it->current()->getPath().getID()+1);
                }
                runner->first();//set iterator back to first element
                checker++;
                if(checker==5){
                    it->current()->timeReleased++;
                    checker =0;
                }
            }
        }
        it->next();
    }
}