#include <iostream>

using namespace std;


template <class habitat>
class Cage : public Cell {
	public:
		Cage();
		~Cage();
		Cage(habitat const&);
		static int countCell;
		habitat getLand();
		habitat getWater();
		habitat getAir();

	protected:
		enum habitat 
		{
			land const,		// darat
			water const,	// perairan
			air const		// udara
		};	
		Animal* animal;
    int length;
    int width;
};