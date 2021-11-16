#include "Human.h"
#include <string>

using namespace std;
Human :: Human()
{

}

void Human :: setName(string name)
{
    this->name = name;
}

string Human :: getName()
{
    return name;
}

void Human :: setWeight(double w)
{
    weight = w;
}

double Human :: getWeight()
{
    return weight;
}