#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>

//builders
#include "Director.h"
#include "ComponentBuilder.h"
#include "RocketBuilder.h"
#include "SatelliteBuilder.h"
#include "SpacecraftBuilder.h"

//Satellite stuff
#include "Satellite/Satellite.h"
#include "Satellite/ChangeTrajectory.h"
#include "Satellite/CollectionOfSatellites.h"
#include "Satellite/MaintenanceDepartment.h"
#include "Satellite/Path.h"
#include "Satellite/RiskAnalysis.h"
#include "Satellite/SatelliteIterator.h"
#include "Satellite/SignalDepartment.h"
#include "Satellite/ToggleSignal.h"
#include "Satellite/TrajectoryDepartment.h"

//Rocket Stuff
#include "Rocket/Engine.h"
#include "Rocket/EngineObserver.h"
#include "Rocket/EOIterator.h"
#include "Rocket/F9Core.h"
#include "Rocket/Falcon9.h"
#include "Rocket/Falcon9Factory.h"
#include "Rocket/FalconHeavy.h"
#include "Rocket/FalconHeavyFactory.h"
#include "Rocket/MerlinEngine.h"
#include "Rocket/Rocket.h"
#include "Rocket/RocketFactory.h"
#include "Rocket/RocketFirstStage.h"
#include "Rocket/RocketIterator.h"
#include "Rocket/RocketObserver.h"
#include "Rocket/RocketSecondStage.h"
#include "Rocket/RocketStage.h"
#include "Rocket/RSSCreator.h"
#include "Rocket/StageCreator.h"
#include "Rocket/VacuumEngine.h"

//Spacecraft stuff
#include "Spacecraft/Button.h"
#include "Spacecraft/CrewDragon.h"
#include "Spacecraft/Deceleration.h"
#include "Spacecraft/Dock.h"
#include "Spacecraft/Dragon.h"
#include "Spacecraft/InternationalSpaceStation.h"

using namespace std;

int main(){//add where you like

    //cout some introduction and explanation

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
    Director* director2 = new Director(false, true, 20);

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

    //Rockets detach the satellites
    //Do full simulation of launching 60 satellites into orbit
    //monitor them, Perform department operations

    //End off with full explanation of cost vs income
    //Say whether a real life follow up of the sim would be viable



    return 0;
}

