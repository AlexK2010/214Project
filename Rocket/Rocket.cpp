#include "Rocket.h"

using namespace std;

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