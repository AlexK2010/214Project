#include "FalconHeavy.h"
#include "EngineObserver.h"
#include "RocketFirstStage.h"
#include "../Satellite/SatelliteIterator.h"
#include <iostream>

using namespace std;

FalconHeavy::FalconHeavy(StageCreator* sc, CollectionOfSatellites* colOfSat = nullptr){
    obsList = new EngineObserver*[28];              //Number of observers = number of engines * 27 + 1
    for (int i = 0; i < 28; i++)
        obsList[i] = new EngineObserver();
    obsIter = new EOIterator(obsList, 28);

    fs = new RocketFirstStage(true, obsIter);
    ss = sc->createRSS(obsIter);
    numEnginesFailed = 0;
    cost = 28 * 4100000 + 3 * 2050000 + 2 * 8200000 + 2550000;
    payloadType = (colOfSat != nullptr);
    colSat = colOfSat;
    carryWeight = 3 * 60 * 1000;
}

FalconHeavy::~FalconHeavy(){
    delete ss;
    delete fs;
    delete obsIter;
    for(int i = 0; i < 28; i++)
        delete obsList[i];
    delete [] obsList;
}

bool FalconHeavy::fly(){
    cost = 28 * 4100000 + 3 * 2050000 + 2 * 8200000 + 2550000;
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

    cout<<"Falcon Heavy rocket preparing for launch"<<endl;
    fs->breakEngines(carryWeight, attachedWeight);
    numEnginesFailed = obsIter->checkEngines();

    if(numEnginesFailed != 0)
        if(27/numEnginesFailed < 3){
            cout<<numEnginesFailed<<" Merlin engines failed during launch."<<endl;
            cout<<"Launch failed."<<endl;
            return false;
        }
    cout<<"Rocket launched successfully."<<endl;
    
    fs->breakEngines(carryWeight, attachedWeight);
    numEnginesFailed = obsIter->checkEngines();
    
    if(numEnginesFailed != 0)
        if(27/numEnginesFailed < 3){
            cout<<numEnginesFailed<<" Merlin engines failed during launch."<<endl;
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
