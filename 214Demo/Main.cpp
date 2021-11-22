#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>

//Rocket Stuff
#include "Engine.h"
#include "EngineObserver.h"
#include "EOIterator.h"
#include "F9Core.h"
#include "Falcon9.h"
#include "Falcon9Factory.h"
#include "FalconHeavy.h"
#include "FalconHeavyFactory.h"
#include "MerlinEngine.h"
#include "Rocket.h"
#include "RocketFactory.h"
#include "RocketFirstStage.h"
#include "RocketIterator.h"
#include "RocketObserver.h"
#include "RocketSecondStage.h"
#include "RocketStage.h"
#include "RSSCreator.h"
#include "StageCreator.h"
#include "VacuumEngine.h"

//Spacecraft stuff

//Base 
#include "SpaceShuttle.h"
#include "SpaceCraftCommand.h"
#include "SpaceStation.h"

//Derived

//spaceShuttles
#include "CrewDragon.h"
#include "Dragon.h"

//commands
#include "Deceleration.h"
#include "MoveLeft.h"
#include "MoveRight.h"
#include "Thrust.h"
#include "Dock.h"

//operations
#include "Button.h"

//spaceStations
#include "InternationalSpaceStation.h"


//forward declaring section

class CollectionOfSatellites;
class InternationalSpaceStation;





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
   // Director* director = new Director(true, 60);
   // Director* director2 = new Director(false, true, 4);

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

    cout<<"Building the SpaceShip: Falcon 9 + Dragon"<<endl;
/*
    Rocket *F9=director2->getRocket();
    SpaceShuttle * dragon=director2->getSpaceCraft();
    
    //spaceStation
    
    SpaceStation * ISS=new InternationalSpaceStation(dragon);

    //create commands to be used

    SpaceCraftCommand* moveLeft = new MoveLeft();
    SpaceCraftCommand* moveRight = new MoveRight();
    SpaceCraftCommand* thrust = new Thrust();
    SpaceCraftCommand* deceleration=new Deceleration();
    SpaceCraftCommand* dock=new Dock();

    Button* button = new Button(thrust);

    F9->fly();

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
    
    cout<<endl;

    cout<<"Docking on the ISS"<<endl;

    button->setCommand(dock); //docking sequesce done through button
    button->press();

    cout<<endl;

*/


    //Rockets detach the satellites
    //Do full simulation of launching 60 satellites into orbit
    //monitor them, Perform department operations

    //End off with full explanation of cost vs income
    //Say whether a real life follow up of the sim would be viable




    //delete stuff
    /*delete ISS;
    delete button;
    delete moveRight;
    delete moveLeft;
    delete thrust;
    delete deceleration;
    delete dock;*/
    



    return 0;
}

