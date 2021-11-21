#include "Rocket.h"

using namespace std;

Rocket::Rocket()
{

}

Rocket::~Rocket()
{
    cout<<"Rocket Destroyed"<<endl;
}

void Rocket::attach(SpaceShuttle* shuttle){
    this->spaceS=shuttle;
}

void Rocket::detach(){
    spaceS=nullptr;
}

void Rocket::notify(){
    spaceS->update();
}

int Rocket::getCost(){
    return cost;
}