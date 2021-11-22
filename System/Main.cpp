#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>

//builders [when using makefile, comment out the .cpps]
#include "Director.h"
#include "Director.cpp"
#include "ComponentBuilder.h"
#include "RocketBuilder.h"
#include "RocketBuilder.cpp"
#include "SatelliteBuilder.h"
#include "SatelliteBuilder.cpp"
#include "SpacecraftBuilder.h"
#include "SpacecraftBuilder.cpp"

//Satellite stuff
#include "Satellite/Satellite.h"
#include "Satellite/Satellite.cpp"
#include "Satellite/ChangeTrajectory.h"
#include "Satellite/ChangeTrajectory.cpp"
#include "Satellite/CollectionOfSatellites.h"
#include "Satellite/CollectionOfSatellites.cpp"
#include "Satellite/MaintenanceDepartment.h"
#include "Satellite/MaintenanceDepartment.cpp"
#include "Satellite/Path.h"
#include "Satellite/Path.cpp"
#include "Satellite/RiskAnalysis.h"
#include "Satellite/RiskAnalysis.cpp"
#include "Satellite/SatelliteIterator.h"
#include "Satellite/SatelliteIterator.cpp"
#include "Satellite/SignalDepartment.h"
#include "Satellite/SignalDepartment.cpp"
#include "Satellite/ToggleSignal.h"
#include "Satellite/ToggleSignal.cpp"
#include "Satellite/TrajectoryDepartment.h"
#include "Satellite/TrajectoryDepartment.cpp"

//Rocket Stuff
#include "Rocket/Engine.h"
#include "Rocket/EngineObserver.h"
#include "Rocket/EngineObserver.cpp"
#include "Rocket/EOIterator.h"
#include "Rocket/EOIterator.cpp"
#include "Rocket/F9Core.h"
#include "Rocket/F9Core.cpp"
#include "Rocket/Falcon9.h"
#include "Rocket/Falcon9.cpp"
#include "Rocket/Falcon9Factory.h"
#include "Rocket/Falcon9Factory.cpp"
#include "Rocket/FalconHeavy.h"
#include "Rocket/FalconHeavy.cpp"
#include "Rocket/FalconHeavyFactory.h"
#include "Rocket/FalconHeavyFactory.cpp"
#include "Rocket/MerlinEngine.h"
#include "Rocket/MerlinEngine.cpp"
#include "Rocket/RocketFactory.h"
#include "Rocket/RocketFirstStage.h"
#include "Rocket/RocketFirstStage.cpp"
#include "Rocket/RocketIterator.h"
#include "Rocket/RocketObserver.h"
#include "Rocket/RocketSecondStage.h"
#include "Rocket/RocketSecondStage.cpp"
#include "Rocket/RocketStage.h"
#include "Rocket/RSSCreator.h"
#include "Rocket/RSSCreator.cpp"
#include "Rocket/StageCreator.h"
#include "Rocket/VacuumEngine.h"
#include "Rocket/VacuumEngine.cpp"
#include "Rocket/Rocket.h"
#include "Rocket/Rocket.cpp"

//Spacecraft stuff

//Base 
#include "Spacecraft/SpaceShuttle.h"
#include "Spacecraft/SpaceShuttle.cpp"
#include "Spacecraft/SpaceCraftCommand.h"
#include "Spacecraft/SpaceCraftCommand.cpp"
#include "Spacecraft/SpaceStation.h"
#include "Spacecraft/SpaceStation.cpp"

//Derived

//spaceShuttles
#include "Spacecraft/CrewDragon.h"
#include "Spacecraft/Dragon.h"
#include "Spacecraft/CrewDragon.cpp"
#include "Spacecraft/Dragon.cpp"

//commands
#include "Spacecraft/Deceleration.h"
#include "Spacecraft/MoveLeft.h"
#include "Spacecraft/MoveRight.h"
#include "Spacecraft/Thrust.h"
#include "Spacecraft/Dock.h"
#include "Spacecraft/Deceleration.cpp"
#include "Spacecraft/MoveLeft.cpp"
#include "Spacecraft/MoveRight.cpp"
#include "Spacecraft/Thrust.cpp"
#include "Spacecraft/Dock.cpp"

//operations
#include "Spacecraft/Button.h"
#include "Spacecraft/Button.cpp"

//spaceStations
#include "Spacecraft/InternationalSpaceStation.h"
#include "Spacecraft/InternationalSpaceStation.cpp"


//forward declaring section

//class CollectionOfSatellites;
//class InternationalSpaceStation;
//class Director;
using namespace std;

int main(){//add where you like

    //cout some introduction and explanation
    cout << "=============Simulation-Of-SpaceX-Rocket-Launch=============" << endl << endl;
    cout << "A simulation of The launch of a Falcon 9 with a Dragon spacecraft will be commencing. Initially the Falcon 9 is Launched and checks are done constantly to insure safety. If succesful the Dragon will engage on a mission to Dock onto the International Space Station. " << endl;

    //Builder to build everything - M
    /* 
    Construct a director with parameters. 
        First parameter is a boolean for rocket type (true=Falcon9, false=FalconHeavy).
        Second parameter is for the payload
            If payload is a collection of satellites:
                pass in number of satellites to be constructed
            If payload is a spacecraft:
                pass in true or false (true=dragon, false=crewdragon)
                third parameter for number of people (if it is a dragon then this parameter is ignored)
    */
    Director* director = new Director(true, 60);
    Director* director2 = new Director(false, true, 4);

    /*
        Using Director:
            There is a getter function for every relevant part (Rocket, CollectionOfSatellites, Spacecraft).
            Just use the getter to get the object you need and from there you should be able to access it normally.

        Using Rocket:
            There is a fly function in rocket that will launch the rocket, checking for engine failures along the way and outputting them.
            fly() returns a boolean - If the flight is successful, true is returned and that means the payload is detached and everything else can carry on as normal for you guys.
                                      If the flight is unsuccessful, the launch is a failure and retry
            getCost() returns the cost of the rocket - this does not include the payload's cost. 
            The cost gets reduced during fly() based on the rocket's first stage landing successfully or not.
    */

    //rocket stuff - demonstrate a failure
    /* to make the rocket fail a spacecraft with a ridiculously high weight should be attached to the rocket. 
    Then the chance for engines to fail will be over 100% and all of the engines will fail on attempt to fly. */
    
    //spacecraft stuff - operate a mission
    //cout something to screen to show what mission was, how it was done and the cost and objective
    cout << endl << "=============================================================" << endl << endl;
    cout<<"Building the SpaceShip: Falcon 9 + Dragon"<<endl;

    Rocket *F9=director2->getRocket();
    SpaceShuttle * dragon=director2->getSpaceCraft();
    
    //spaceStation
    
    
    SpaceStation * ISS=new InternationalSpaceStation(dragon);
    dragon->attatch(ISS);

    //create commands to be used

    SpaceCraftCommand* moveLeft = new MoveLeft();
    SpaceCraftCommand* moveRight = new MoveRight();
    SpaceCraftCommand* thrust = new Thrust();
    SpaceCraftCommand* deceleration=new Deceleration();
    SpaceCraftCommand* dock=new Dock();

    Button* button = new Button(thrust);

    F9->fly();

    cout << endl <<"=============================================================" <<endl <<endl;
    


    cout<<"SpaceCraft Manuevering towards the spaceStation"<<endl;

    //this section maps the commands to the reciever

    moveLeft->setReceiver(dragon);
    moveRight->setReceiver(dragon);
    thrust->setReceiver(dragon);
    deceleration->setReceiver(dragon); 
    dock->setReceiver(dragon);

    //initial Thrust
    button->press();

    button->setCommand(moveLeft);
    button->press();

    button->setCommand(moveRight);
    button->press();

    button->setCommand(thrust);
    button->press();

    button->setCommand(moveRight);
    button->press();

    button->setCommand(deceleration);
    button->press();

    button->setCommand(dock);
    button->press();


    cout<<"Docking on the ISS"<<endl;
    


    cout << endl << "============================================================="  << endl;
    cout << endl << "Preparing Falcon 9 and 60 Starlink satellites attached." << endl;
    cout << endl << "If the Falcon 9 trip is succesful then the satellites will proceed to release in increments of 1 hour each. They will follow a distinct path around the globe." << endl;
    cout << endl;
    //Rockets detach the satellites
    if(director->getRocket()->fly()==true){//first has to fly (most likely successful)

        cout << endl << "=============================================================" << endl;
        cout << endl << "Proceeding to complete a Signal Check, Trajectory Check and Maintanence Check on the satellites and then finally a risk analysis to end things off." << endl;
        //Do full simulation of launching 60 satellites into orbit
        CollectionOfSatellites* starlinkSats = director->getSatellites();
        SatelliteIterator* it = starlinkSats->createSatelliteIterator();
        int counter = 0;
        while(it->current()!=nullptr){
            it->current()->detachFromRocket(counter++);
            if(counter==25)counter=0;
            it->next();
        }

         //monitor them, Perform department operations (Maintenance, Signal, Trajectory)
        SignalDepartment* signalDep = new SignalDepartment(starlinkSats); //Checking if all sats in collection will toggle based on whether they are in the same trajectory
        signalDep->update();

        TrajectoryDepartment* trajDep = new TrajectoryDepartment(starlinkSats); //Checking if in same trajectory and then changing respectively
        trajDep->notify();

        cout << "Doing Maintanence on three random Satellites: " << endl;
        
        it->first(); //getting random satellites
        for(int i = 0; i<rand() % 60; i++){
            it->next();
        }

        MaintenanceDepartment* maintDep1 = new MaintenanceDepartment(it->current());
        it->current()->requireMaintenance = true;
        maintDep1->update();

        it->first();
        for(int i = 0; i<rand() % 60; i++){
            it->next();
        }

        MaintenanceDepartment* maintDep2 = new MaintenanceDepartment(it->current());
        it->current()->requireMaintenance = true;
        maintDep2->update();

        it->first();
        for(int i = 0; i<rand() % 60; i++){
            it->next();
        }

        MaintenanceDepartment* maintDep3 = new MaintenanceDepartment(it->current());
        it->current()->requireMaintenance = true;
        maintDep3->update();

        RiskAnalysis* riskDep = new RiskAnalysis(starlinkSats);
        riskDep->notify();
    } 

    cout << endl << "=============================================================" << endl << endl;
    
    
    //End off with full explanation of cost vs income
    //Say whether a real life follow up of the sim would be viable

    //delete stuff
    delete ISS;
    delete button;
    delete moveRight;
    delete moveLeft;
    delete thrust;
    delete deceleration;
    delete dock;
    delete director;
    delete director2;
    

    return 0;
}

