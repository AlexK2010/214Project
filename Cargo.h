#ifndef CARGO_H
#define CARGO_H
#include <string>

using namespace std;

class Cargo{
    private:
        string Type;
        double weight;
    public:
        Cargo();
        void setType(string name);
        string getType();
        void setWeight(double w);
        double getWeight();
};
#endif