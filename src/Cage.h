#include <iostream>
#include "Animal.h"
#include "Land.h"
#include "Water.h"
#include "Air.h"
#include "habitat.h"

using namespace std;

class Habitat;

template <class habitat>
class Cage : public Cell {
	public:
		Cage();
		~Cage();
		Cage(habitat const&);
		static int countCell;
		// Habitat& getLand();
		// Habitat& getWater();
		// Habitat& getAir();
		friend class Cell;
		// fungsi untuk testing


	protected:
		Animal* animal;
    	// Habitat
    	habitat* land, water, air;
    	const char land = 'l';
    	const char water = 'w'; 
    	const char air = 'a';
    	const char habitat;
};