#include "Cargo.h"
#include <string>

using namespace std;

Cargo :: Cargo()
{

}

void Cargo :: setType(string Type)
{
    this->Type = Type;
}

string Cargo :: getType()
{
    return Type;
}

void Cargo :: setWeight(double w)
{
    weight = w;
}

double Cargo :: getWeight()
{
    return weight;
}