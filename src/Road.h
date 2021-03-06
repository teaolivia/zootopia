// Pembuat :
// Thea Olivia - 13511001
// Mahesa Gandakusuma - 13513091


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
		// friend with zoo
		friend class Zoo;
	private:
		enum roadType	{
			cell_entrance, 	// pintu masuk
			cell_exit,		// pintu keluar
			cell_space		// jalan lowong
		};
};