#include <iostream>
#include "Cell.h"
#include "Animal.h"
#include "Land.h"
#include "Water.h"
#include "Air.h"

using namespace std;

template <class Habitat>
class Cage : public Cell {
	public:
		Cage();
		~Cage();
		Cage(Habitat const&);
		static int countCell;
		// Habitat getLand();
		// Habitat getWater();
		// Habitat getAir();
		friend class Cell;

	protected:
		Animal* animal;
    	int length;
    	int width;
    	// Habitat
    	Habitat* Land, Water, Air;
};