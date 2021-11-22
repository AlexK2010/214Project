#include "Falcon9.h"
#include "EngineObserver.h"
#include "RocketFirstStage.h"
#include <iostream>

using namespace std;

Falcon9::Falcon9(StageCreator* sc, CollectionOfSatellites* colOfSat = nullptr){
    obsList = new EngineObserver*[10];          //Number of observers = number of engines * 9 + 1
    for(int i = 0; i<10; i++)
        obsList[i] = new EngineObserver();
    obsIter = new EOIterator(obsList, 10);
    
    fs = new RocketFirstStage(false, obsIter);
    ss = sc->createRSS(obsIter);
    numEnginesFailed = 0;
    cost = 10 * 4100000 + 2050000 + 2 * 8200000 + 2550000;
    payloadType = (colOfSat != nullptr);
    colSat = colOfSat;
    carryWeight = 1 * 60 * 1000;
}

Falcon9::~Falcon9(){
    delete ss;
    delete fs;
    delete obsIter;
    for(int i = 0; i<10; i++)
        delete obsList[i];
    delete [] obsList;
}

bool Falcon9::fly(){
    cost = 10 * 4100000 + 2050000 + 2 * 8200000 + 2550000;
    if(payloadType){
        int numSat = 1;
        SatelliteIterator* temp = colSat->createSatelliteIterator();
        while(temp->hasNext()){
            numSat++;
            temp->next();   
        }
        attachedWeight = numSat * 1000;
        delete temp;
    }else{
        attachedWeight = spaceS->getCurrentWeight();
    }

    cout<<"Falcon 9 rocket preparing for launch."<<endl;
    fs->breakEngines(carryWeight, attachedWeight);
    numEnginesFailed = obsIter->checkEngines();
    if(numEnginesFailed != 0)
        if((9/numEnginesFailed)<3){
            cout<<numEnginesFailed<<" Merlin engines failed during launch."<<endl;
            cout<<"Launch failed."<<endl;
            return false;
        }
    cout<<"Rocket launched successfully."<<endl;

    fs->breakEngines(carryWeight, attachedWeight);
    numEnginesFailed = obsIter->checkEngines();
    if(numEnginesFailed != 0)
        if((9/numEnginesFailed)<3){
            cout<<numEnginesFailed<<" Merlin engines failed during flight."<<endl;
            cout<<"Rocket failed to reach orbit."<<endl;
            return false;
        }
    cout<<"Rocket's first stage detached."<<endl;
    cost -= fs->land();

    cout<<"Proceeding to attempt to reach desired orbit."<<endl;
    ss->breakEngine(carryWeight, attachedWeight);
    if(obsIter->checkVacEngine()){
        cout<<"Vacuum engine failed during flight."<<endl;
        cout<<"Rocket failed to reach desired orbit."<<endl;
        return false;
    }

    cout<<"Rocket reached desired orbit. Payload has detached safely."<<endl;
    if(!payloadType){
        notify(true);
        detach();
    }else{
        int counter = 0;
        SatelliteIterator* tempIter = colSat->createSatelliteIterator();
        while(tempIter->hasNext()){
            tempIter->current()->detachFromRocket(counter++);
            tempIter->next();   
        }
        delete tempIter;
    }
    return true;
}