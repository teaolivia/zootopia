#include <iostream>

using namespace std;

class Cell {
	public:
    friend class Zoo;
    //getter setter
    int GetX();
    int GetY();
  
	protected:
		// generik
		Cage<Habitat> cage;
		Road<RoadType> road;
    // location
    int x;
    int y;
};