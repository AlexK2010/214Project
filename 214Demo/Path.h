#ifndef PATH_H
#define PATH_H
#include <string>

#include "Satellite.h"

using namespace std;

class Path{
	private:
		int id;
    public:
    Path();
    Path(int);
    ~Path();
    string getCurrContinent(int time);
    string ListCont();
  public:
    int getID();
    void setID(int i);
};
#endif