#ifndef SATELLITE_H
#define SATELLITE_H
//Remember to add trajectory calculator
#include <iostream>
#include <string>
#include <vector>
#include "Department.h"
#include "GroundControl.h"
#include "SatelliteFunctionality.h"
#include "Path.h"

using namespace std;

class Satellite {
    private:
        double cost; 
        bool attached;
        Department *currentDepartment;
        Satellite* next;
        SatelliteFunctionality *strategy;
        GroundControl *GroundControlDep;
        Path *currPath;

        //Observer stuff (used for simulations)
        vector<GroundControl*> l;
        void attach(GroundControl*); //function to add observers to the observerList
		void detach(GroundControl*); //function to remove observers from the observerList
		void notify(); //function that should notify all the observers in the observerList
    
    public:
        bool hasSignal;
        bool requireMaintenance;
        //Satellite();
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