#include <iostream>
#include <string>

using namespace std;


template <class roadType>
class Road : public Facility {
	public:
		getEntrance();
		getExit();
		getSpace();
	private:
		enum roadType
		{
			entrance const, // pintu masuk
			exit const,		// pintu keluar
			space const		// jalan lowong
		};
};