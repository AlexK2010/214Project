#ifndef PATH_H
#define PATH_H

#include "Satellite.h"
class Path{
	private:
		int id;
    public:
    Path(int);
    ~Path();
    string getCurrContinent(int time);
    string ListCont();
  public:
    int getID();
    void setID(int i);
};
#endif