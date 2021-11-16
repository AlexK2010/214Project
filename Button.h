#ifndef BUTTON_H
#define BUTTON_H

#include "SpaceCraftCommand.h"

class Button{
    private:
        SpaceCraftCommand* command;
    public:
        Button(SpaceCraftCommand* c);
        void press();
        ~Button();
};
#endif