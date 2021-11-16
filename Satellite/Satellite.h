#ifndef SATELLITE_H
#define SATELLITE_H
//Remember to add trajectory calculator
#include <iostream>
#include <string>
#include "Department.h"
#include "GroundControl.h"
#include "SatelliteFunctionality.h"
#include "Path.h"

using namespace std;

class Satellite {
    private:
        double cost;
        bool attached;
        bool hasSignal;
        Department *currentDepartment;
        Satellite* next;
        SatelliteFunctionality *strategy;
        GroundControl *GroundControlDep;
        Path *currPath;
    
    public:
        Satellite(double c);
        ~Satellite();
        void doFunctionality();

        //getters
        double getCost();
        bool getAttached();
        Satellite* getNext();

        //setters
        void setCost(double x);
        void setAttached(bool b);
        void setNext(Satellite*);
    
};

#endif