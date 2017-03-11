#include <iostream>

using namespace std;


template <class Habitat>
class Cage : public Cell {
	public:
		Cage();
		~Cage();
		Cage(habitat const&);
		static int countCell;
		Habitat getLand();
		Habitat getWater();
		Habitat getAir();

	private:
		Animal* animal;
    	int length;
    	int width;
};