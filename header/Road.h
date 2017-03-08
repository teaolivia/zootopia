#include <iostream>
#include <string>

using namespace std;


template <class roadType>
class Road : public Facility {
	public:
		// 5 sekawan
		Road();
		~Road();
		Road(const Road&);
		Road& operator=(const Road&);
		roadType getEntrance();
		roadType getExit();
		roadType getSpace();
	private:
		enum roadType
		{
			cell_entrance const, 	// pintu masuk
			cell_exit const,		// pintu keluar
			cell_space const		// jalan lowong
		};
};