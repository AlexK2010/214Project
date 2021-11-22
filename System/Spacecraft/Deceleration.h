#ifndef DECELERATION_H
#define DECELERATION_H

#include "SpaceCraftCommand.h"

#include <iostream>

using namespace std;


class Deceleration : public SpaceCraftCommand{

    public:
        Deceleration();
        virtual void execute();
        ~Deceleration();
};
#endif