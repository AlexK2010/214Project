#include "Button.h"


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
        command = nullptr;
    }

    cout <<"Button is destroyed!" <<endl;
}