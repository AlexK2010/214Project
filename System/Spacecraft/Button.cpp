#include "Button.h"
#include "SpaceCraftCommand.h"
#include <iostream>

using namespace std;
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
    cout <<"Button is destroyed!" <<endl;
}

void Button::setCommand(SpaceCraftCommand *c)
{
    command=NULL;
    command=c;
}