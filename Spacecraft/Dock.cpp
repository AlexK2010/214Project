#include "Dock.h"

#include <iostream>

using namespace std;

Dock :: Dock()
{

}

void Dock :: execute()
{
    getReceiver()->Dock();
}

Dock :: ~Dock()
{
    cout << "Dock is going out of scope." <<endl;
}