#include "string"
#include <iostream>
#include <ctime>
#include <cstdlib>

//spaceCraft
#include "Dragon.h"
#include "CrewDragon.h"
#include "SpaceShuttle.h"

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

    CrewDragon * crewDragon=new CrewDragon(rocket);

    //attatch the crewDragon to the rocket

    rocket->attatch(crewDragon);

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
    
    



    return 0;
}