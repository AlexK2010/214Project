#ifndef CHANGETRAJECTORY_H
#define CHANGETRAJECTORY_H

#include "SatelliteFunctionality.h"
#include "CollectionOfSatellites.h"
#include "SatelliteIterator.h"

using namespace std;

class ChangeTrajectory : public SatelliteFunctionality{

	public:
		ChangeTrajectory();
		~ChangeTrajectory();
		void execute(CollectionOfSatellites* collection, int time);
};
#endif