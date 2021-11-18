#ifndef COMPONENTBUILDER_H
#define COMPONENTBUILDER_H
#include "Satellite/Satellite.h"
#include "Rocket/Rocket.h"
#include "Spacecraft/Dragon.h"
#include "Spacecraft/CrewDragon.h"

#include "iostream"

using namespace std;

class ComponentBuilder{
    Satellite* sat;
    Rocket* rocket;
    Dragon* dragon;
    CrewDragon* crewDragon;

    public:
        virtual Satellite* buildSatellite()=0;
        virtual Rocket* buildRocket()=0;
        virtual Dragon* buildDragon()=0;
        virtual CrewDragon* buildCrewDragon()=0;
};

#endif
