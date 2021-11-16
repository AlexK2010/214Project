#include "Button.h"
#include "SpaceCraftCommand.h"
#include <isotream>

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
    if(command!=nullptr)
    {
        delete command;
        command = nullptr;
    }

    cout <<"BUTTON is destroyed!" <<endl;
}