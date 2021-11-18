#include "string"
#include <iostream>
#include <ctime>
#include <cstdlib>

//spaceCraft
#include "Dragon.h"
#include "CrewDragon.h"
#include "SpaceShuttle.h"

//spacestation
#include "SpaceStation.h"
#include "InternationalSpaceStation.h"

//commands
#include "Thrust.h"
#include "Deceleration.h"
#include "MoveLeft.h"
#include "MoveRight.h"
#include "Dock.h"
#include "SpaceCraftCommand.h"
#include "Button.h"

using namespace std;

int main() {

    unsigned seed= time(0);

    srand(seed);

    const int MIN_VALUE=0;
    const int MAX_VALUE=20;

    /**
     * @brief This main will be used to test how the shuttle works and how it
     * 
     * interacts with the Rocket and SpaceStation
     *  
     */


    Rocket * rocket=new Rocket();

    SpaceShuttle * dragon=new Dragon(rocket);

    SpaceStation * ISS=new InternationalSpaceStation(dragon);

    SpaceCraftCommand* moveLeft = new MoveLeft();
    SpaceCraftCommand* moveRight = new MoveRight();
    SpaceCraftCommand* thrust = new Thrust();
    SpaceCraftCommand* deceleration=new Deceleration();
    SpaceCraftCommand* dock=new Dock();

    Button* button = new Button(thrust);

    /**
     * TEST 1: Rocket vs SpaceShuttle
     * 
     * A Shuttle object will continually observe a rocket while it ascends.
     * 
     * When stage 2 kicks in a message will be printed to show this change of state.
     * */
    

    //attatch the crewDragon to the rocket


    cout<<"Test 1: Observing the Rocket"<<endl;

    rocket->attatch(dragon);

    int counter=0;

    //silly comment
    //Hello Njabulo!
    //Niri mini
    //ndi hone 

    while(counter<rand()%(MAX_VALUE-MIN_VALUE+1)+MIN_VALUE)
    {
        rocket->setRocketStage2(false);
        rocket->notify();
        ++counter;
    }

    rocket->setRocketStage2(true);
    rocket->notify();

    cout<<""<<endl;

    /***
     * TEST 2: Commands vs SpaceShuttle
     * We'll see how the SpaceShuttle uses the commands before docking
     * */

    cout<<"Test 2: SpaceShuttle using the commands"<<endl;

    moveLeft->setReceiver(dragon);
    moveRight->setReceiver(dragon);
    thrust->setReceiver(dragon);
    deceleration->setReceiver(dragon); 
    dock->setReceiver(dragon);

    button->press();

    button->setCommand(moveLeft);
    button->press();

    button->setCommand(moveRight);
    button->press();

    button->setCommand(deceleration);
    button->press();
    
    cout<<endl;


    /***
     * TEST 3: SpaceStation vs SpaceShuttle
     * We'll see how the SpaceShuttle uses the SpaceStation before and after docking
     * */

    cout<<"Test 3:Going to the ISS"<<endl;

    dragon->attatch(ISS);

    counter=0;

    while(counter<rand()%(MAX_VALUE-MIN_VALUE+1)+MIN_VALUE)
    {
        dragon->setDockReady(false);
        dragon->notify();
        ++counter;
    }

    

    button->setCommand(dock); //docking sequesce done through button
    button->press();

    cout<<endl;

    delete rocket;
    delete dragon;
    delete ISS;
    delete button;
    delete moveRight;
    delete moveLeft;
    delete thrust;
    delete deceleration;
    delete dock;
    
    
    

    return 0;
}