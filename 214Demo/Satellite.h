#ifndef SATELLITE_H
#define SATELLITE_H
//Remember to add trajectory calculator
#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include "Department.h"
#include "GroundControl.h"
#include "SatelliteFunctionality.h"
#include "Path.h"

using namespace std;

class Satellite {
    private:
        double cost; 
        bool attached=true;;
        Department *currentDepartment;
        Satellite* next;
        GroundControl *GroundControlDep;
        
        //Observer stuff (used for simulations)
        vector<GroundControl*> l;
        void attach(GroundControl*); //function to add observers to the observerList
		void detach(GroundControl*); //function to remove observers from the observerList
		void notify(); //function that should notify all the observers in the observerList
    
    public:
        int timeReleased;
        string name;
        Path currPath;
        bool hasSignal=false;
        bool requireMaintenance=false;
        Satellite();
        Satellite(double c, string s);
        ~Satellite();
        void doFunctionality();
        void detachFromRocket(int t);

        //getters
        double getCost();
        bool getAttached();
        Satellite* getNext();
        Path getPath();

        //setters
        void setCost(double x);
        void setAttached(bool b);
        void setNext(Satellite*);
        void setPath(int i);
    
};

#endif