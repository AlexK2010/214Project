#ifndef GROUNDCONTROL_H
#define GROUNDCONTROL_H

#include "Satellite.h"

class GroundControl{ //Acts as Concrete Observer
    private:
    public:
        // GroundControl(){}
        // virtual ~GroundControl()=0;
        //virtual void notify(Satellite *colleague)=0;
        virtual void update()=0;
};

#endif