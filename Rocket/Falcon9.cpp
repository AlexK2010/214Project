#include "Falcon9.h"
#include "EngineObserver.h"
#include "RocketFirstStage.h"
#include <iostream>

using namespace std;

Falcon9::Falcon9(StageCreator* sc, int attWeight){
    obsList = new EngineObserver*[10];          //Number of observers = number of cores * 9 + 1
    for(int i = 0; i<10; i++)
        obsList[i] = new EngineObserver();
    obsIter = new EOIterator(obsList, 10);
    fs = new RocketFirstStage(false, obsIter);
    ss = sc->createRSS(obsIter);
    numEnginesFailed = 0;
    landed = false;
    attachedWeight = attWeight;
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
    landed = false;
    cout<<"Falcon 9 rocket preparing for launch."<<endl;
    fs->breakEngines(carryWeight, attachedWeight);
    numEnginesFailed = obsIter->checkEngines();
    if(9/numEnginesFailed<3){
        cout<<numEnginesFailed<<" Merlin engines failed during launch."<<endl;
        cout<<"Launch failed."<<endl;
        return false;
    }
    cout<<"Rocket launched successfully."<<endl;

    fs->breakEngines(carryWeight, attachedWeight);
    numEnginesFailed = obsIter->checkEngines();
    if(9/numEnginesFailed<3){
        cout<<numEnginesFailed<<" Merlin engines failed during flight."<<endl;
        cout<<"Rocket failed to reach orbit."<<endl;
        return false;
    }

    cout<<"Rocket's first stage detached."<<endl;
    landed = fs->land();

    cout<<"Proceeding to attempt to reach desired orbit."<<endl;
    ss->breakEngine(carryWeight, attachedWeight);
    if(obsIter->checkVacEngine()){
        cout<<"Vacuum engine failed during flight."<<endl;
        cout<<"Rocket failed to reach desired orbit."<<endl;
        return false;
    }

    cout<<"Rocket reached desired orbit. Payload has detached safely."<<endl;
    return true;
}