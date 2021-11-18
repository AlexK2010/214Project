#ifndef ROCKETBUILDER_H
#define ROCKETBUILDER_H

#include "ComponentBuilder.h"

class RocketBuilder : ComponentBuilder{
    Rocket* rocket;
    public:
        Rocket* buildRocket();
};
#endif