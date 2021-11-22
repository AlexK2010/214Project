#ifndef TOGGLESIGNAL_H
#define TOGGLESIGNAL_H
#include "SatelliteFunctionality.h"
using namespace std;
class ToggleSignal : public SatelliteFunctionality{
	public:
		void execute(CollectionOfSatellites* collection, int time);
};
#endif