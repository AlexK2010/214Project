#ifndef SPACECRAFTBUILDER_H
#define SPACECRAFTBUILDER_H

#include "ComponentBuilder.h"
#include "CrewDragon.h"
#include "Dragon.h"

class SpacecraftBuilder : public ComponentBuilder{
    public:
        CrewDragon* buildCrewDragon(Rocket*, int);
        Dragon* buildDragon(Rocket*);
};
#endif
