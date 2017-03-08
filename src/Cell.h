#include <iostream>

using namespace std;

class Cell {
	public:
	friend class Zoo;

	protected:
		// generik
		Cage<Habitat> cage;
		Road<RoadType> road;
};