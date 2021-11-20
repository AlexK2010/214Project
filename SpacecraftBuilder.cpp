#include "SpacecraftBuilder.h"

CrewDragon* SpacecraftBuilder::buildCrewDragon(Rocket* r, int numPeople){
    return new CrewDragon(r, numPeople);
}

Dragon* SpacecraftBuilder::buildDragon(Rocket* r){
    return new Dragon(r);
}