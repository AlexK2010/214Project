#include "Button.h"
#include "SpaceCraftCommand.h"

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
        delete command;
        command = nullptr;
    }
}