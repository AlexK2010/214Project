#include "Button.h"


Button :: Button(SpaceCraftCommand* c)
{
    command = c;
}

void Button :: press()
{
    command->execute();
}

Button :: ~Button()
{
    if(command!=nullptr)
    {
        command = nullptr;
    }

    cout <<"Button is destroyed!" <<endl;
}

void Button::setCommand(SpaceCraftCommand *c)
{
    command=NULL;
    command=c;
}