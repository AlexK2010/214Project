#include "Dock.h"

#include <iostream>

using namespace std;

Dock :: Dock()
{

}

void Dock :: execute()
{
    this->getReceiver()->dock();
}

Dock :: ~Dock()
{
    cout << "Dock destroyed" <<endl;
}