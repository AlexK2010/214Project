#ifndef SPACECRAFTBUILDER_H
#define SPACECRAFTBUILDER_H

#include "ComponentBuilder.h"
#include "Spacecraft/CrewDragon.h"
#include "Spacecraft/Dragon.h"

class SpacecraftBuilder : public ComponentBuilder{
    public:
        ~SpacecraftBuilder();
        CrewDragon* buildCrewDragon(Rocket*, int);
        Dragon* buildDragon(Rocket*);
};
#endif