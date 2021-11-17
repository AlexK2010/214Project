#include "FalconHeavy.h"
#include "EngineObserver.h"
#include "RocketFirstStage.h"
#include <iostream>

using namespace std;

FalconHeavy::FalconHeavy(StageCreator* sc, int attWeight){
    obsList = new EngineObserver*[28];              //Number of observers = number of cores * 27 + 1
    for (int i = 0; i < 28; i++)
        obsList[i] = new EngineObserver();
    obsIter = new EOIterator(obsList, 28);

    fs = new RocketFirstStage(true, obsIter);
    ss = sc->createRSS(obsIter);
    numEnginesFailed = 0;
    landed = false;
    attachedWeight = attWeight;
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
    landed = false;
    cout<<"Falcon Heavy rocket preparing for launch"<<endl;
    fs->breakEngines(carryWeight, attachedWeight);
    numEnginesFailed = obsIter->checkEngines();
    if(27/numEnginesFailed < 3){
        cout<<numEnginesFailed<<" Merlin engines failed during launch."<<endl;
        cout<<"Launch failed."<<endl;
        return false;
    }
    cout<<"Rocket launched successfully."<<endl;
    
    fs->breakEngines(carryWeight, attachedWeight);
    numEnginesFailed = obsIter->checkEngines();
    if(27/numEnginesFailed < 3){
        cout<<numEnginesFailed<<" Merlin engines failed during launch."<<endl;
        cout<<"Rocket failed to reach orbit."<<endl;
        return false;
    }
    
    cout<<"Rocket's first stage detached."<<endl;
    landed = fs->land();
    
    cout<<"Proceeding to attempt to reach desired orbit."<<endl;
    if(obsIter->checkVacEngine()){
        cout<<"Vacuum engine failed during flight."<<endl;
        cout<<"Rocket failed to reach desired orbit."<<endl;
        return false;
    }

    cout<<"Rocket reached desired orbit. Payload has detached safely."<<endl;
    return true;
}