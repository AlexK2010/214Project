#ifndef PATH_H
#define PATH_H
using namespace std;
class Path{
	private:
		int ID;
    public:
    Path();
    ~Path();
    string getCurrContinent(int time);
    string ListCont();
};
#endif