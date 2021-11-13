#ifndef SATELLITE_H
#define SATELLITE_H
//Remember to add trajectory calculator
#include <iostream>
#include <string>
#include "Department.h"
#include "GroundControl.h"
#include "SatelliteFunctionality.h"

using namespace std;

class Satellite {
    private:
        double cost;
        bool attached;
        Department *currentDepartment;
        int xPos, yPos, zPos;
        SatelliteFunctionality *strategy;
        GroundControl *GroundControlDep;
    
    public:
        Satellite(double c);
        ~Satellite();
        void doFunctionality();


        //getters
        double getCost();
        bool getAttached();
        int getX();
        int getY();
        int getZ();

        //setters
        void setCost(double x);
        void setAttached(bool b);
        void setX(int x);
        void setY(int y);
        void setZ(int z);


};

#endif