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

void Rocket::notify(bool stage2){
    spaceS->update(stage2);
}

int Rocket::getCost(){
    return cost;
}