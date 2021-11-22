#ifndef BUTTON_H
#define BUTTON_H

class SpaceCraftCommand;

#include "SpaceCraftCommand.h"

using namespace std;

class Button{
    
    private:
        SpaceCraftCommand* command;
    public:
        Button(SpaceCraftCommand* c);
        void press();
        ~Button();

        void setCommand(SpaceCraftCommand *c);
};
#endif