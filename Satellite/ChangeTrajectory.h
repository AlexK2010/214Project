#ifndef CHANGETRAJECTORY_H
#define CHANGETRAJECTORY_H
#include "SatelliteFunctionality.h"
using namespace std;
class ChangeTrajectory : public SatelliteFunctionality{
	public:
		void execute(CollectionOfSatellites* collection, int time);
};
#endif