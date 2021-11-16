#include "InternationalSpaceStation.h"
#include "SpaceShuttle.h"

InternationalSpaceStation :: InternationalSpaceStation(SpaceShuttle* s)
{
    shuttle = s;
}

void  InternationalSpaceStation :: setIsHere(bool is)
{
    isHere = is;
}

bool InternationalSpaceStation :: getIsHere()
{
    return isHere;
}

void InternationalSpaceStation :: update()
{
    isHere = shuttle->getStage();
}

InternationalSpaceStation :: ~InternationalSpaceStation()
{
    if(shuttle!=nullptr){
        delete shuttle;
        shuttle = nullptr;
    }
}