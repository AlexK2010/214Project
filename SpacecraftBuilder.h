#ifndef SPACECRAFTBUILDER_H
#define SPACECRAFTBUILDER_H

#include "ComponentBuilder.h"

class SpacecraftBuilder : ComponentBuilder{
    CrewDragon* newCrew;
    Dragon* newDragon;
    public:
        CrewDragon* buildCrewDragon();
        Dragon* buildDragon();
};
#endif