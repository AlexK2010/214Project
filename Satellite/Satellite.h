#ifndef SATELLITE_H
#define SATELLITE_H

#include <iostream>
#include <string>

using namespace std;

class Satellite {
    private:
        double cost;
        bool attached;
        Department *currentDepartment;
        int xPos, yPos, zPos;

};

#endif