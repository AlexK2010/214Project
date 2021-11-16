#ifndef GROUNDCONTROL_H
#define GROUNDCONTROL_H

#include "Satellite.h"

class GroundControl{
    private:
    public:
        GroundControl(){}
        virtual ~GroundControl()=0;
        virtual void notify(Satellite *colleague)=0;
};


#endif