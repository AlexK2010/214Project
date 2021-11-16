#ifndef DRAGON_H
#define DRAGON_H

#include "Cargo.h"
#include "SpaceShuttle.h"  

#include "SpaceStation.h"
class Dragon : public SpaceShuttle{
    private:
        Cargo* cargo;
        int cargoSize;
    public:
        Dragon(Cargo* c,int cargoSize);
        ~Dragon();
        double getWeightCapacity();
        void setWeightCapacity(double weight);
        void notify();
        bool getStage();
        void setStage(bool s);
        double getCurrentWeight();
        void setCurrentWeight(double weight);
        void attach(SpaceStation* s);
        void detach();
        SpaceStation* getInternationalSpace();
        void Deceleration();
        void MoveLeft();
        void MoveRight();
        void Dock();
        void Thrust();
};
#endif