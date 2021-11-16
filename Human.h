#ifndef HUMAN_H
#define HUMAN_H

#include <string>

using namespace std;
class Human{
    private:
        string name;
        double weight;
    public:
        Human();
        void setName(string name);
        string getName();
        void setWeight(double w);
        double getWeight();
};
#endif