#ifndef SPACESHUTTLE_H
#define SPACESHUTTLE_H
#include "SpaceStation.h"

class SpaceShuttle{
    protected:
        double weightCapacity;
        bool stage;
        double currentWeight;
        bool dockReady;
        SpaceStation* space;
    public:
        SpaceShuttle();
        virtual double getWeightCapacity()=0;
        virtual void setWeightCapacity(double weight)=0;
        virtual void notify()=0;
        virtual bool getStage()=0;
        virtual void setStage(bool s)=0;
        virtual double getCurrentWeight()=0;
        virtual void setCurrentWeight(double weight)=0;
        virtual void attach(SpaceStation* s)=0;
        virtual void detach()=0;
        virtual SpaceStation* getInternationalSpace()=0;
        virtual void Deceleration()=0;
        virtual void MoveLeft()=0;
        virtual void MoveRight()=0;
        virtual void Dock()=0;
        virtual void Thrust()=0;
};
#endif