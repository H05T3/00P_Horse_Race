#ifndef RACE_H_EXISTS
#define RACE_H_EXISTS

#include "horse.h"

class Race{
	private:
		const int trackLength = 10;
		const int numHorses = 5;
		Horse horse[5];

	public:
		Race();
		void run();
};

#endif
