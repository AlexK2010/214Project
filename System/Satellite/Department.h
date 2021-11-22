#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include "Satellite.h"


class Department{
    private:
    public:
        Department(){};
        ~Department(){};
        virtual void notify()=0;
};

#endif