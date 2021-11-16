#include "string"
#include <iostream>
#include <ctime>
#include <cstdlib>

//spaceCraft
#include "Dragon.h"
#include "CrewDragon.h"
#include "SpaceShuttle.h"

#include "MoveRight.h"
#include "MoveLeft.h"
#include "Dock.h"
#include "Deceleration.h"
#include "Thrust.h"

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

    /**
     * TEST 1: Rocket vs SpaceShuttle
     * 
     * A Shuttle object will continually observe a rocket while it ascends.
     * 
     * When stage 2 kicks in a message will be printed to show this change of state.
     * */
    
    Rocket * rocket=new Rocket();

    Dragon * dragon=new Dragon(rocket);

    //attatch the crewDragon to the rocket

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
    

    delete rocket;
    delete dragon;
    
    /*
    MOVE THE SHUTTLE TO LEFT AND THEN THRUST
    */

    SpaceShuttle* shuttle = new SpaceShuttle();
    SpaceCraftCommand* moveLeft = new MoveLeft();
    moveLeft->setReceiver(shuttle); //PASS THE POINTER TO THE SHUTTLE(RECEIVER)
    Button* button = new Button(moveLeft);
    button->press();
    //Thrust
    SpaceCraftCommand* thrust = new Thrust();
    thrust->setReceiver(shuttle);
    button = new Button(thrust);
    button->press();
    
    delete button;

    return 0;
}