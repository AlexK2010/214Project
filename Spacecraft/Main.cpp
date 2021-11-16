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

    Dragon * dragon=new Dragon(rocket);

    SpaceStation * ISS=new InternationalSpaceStation(dragon);

    /**
     * TEST 1: Rocket vs SpaceShuttle
     * 
     * A Shuttle object will continually observe a rocket while it ascends.
     * 
     * When stage 2 kicks in a message will be printed to show this change of state.
     * */
    

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

    /***
     * TEST 2: Commands vs SpaceShuttle
     * We'll see how the SpaceShuttle uses the commands before docking
     * */


    /***
     * TEST 3: SpaceStation vs SpaceShuttle
     * We'll see how the SpaceShuttle uses the SpaceStation before and after docking
     * */

    dragon->attatch(ISS);

    counter=0;

    while(counter<rand()%(MAX_VALUE-MIN_VALUE+1)+MIN_VALUE)
    {
        dragon->setDockReady(false);
        dragon->notify();
        ++counter;
    }

    dragon->setDockReady(true);
    dragon->notify();
    

    delete rocket;
    delete dragon;
    delete ISS;
    



    return 0;
}