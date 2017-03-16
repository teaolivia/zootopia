// Pembuat :
// Thea Olivia - 13511001
// Mahesa Gandakusuma - 13513091


#include <string>
#include <iostream>
#include "Cell.h"

using namespace std;

class Facility : public Cell {
	public:
		// 5 sekawan
		Facility();
		Facility(int length, int width);
		Facility(const Facility&);
		~Facility();
		Facility& operator=(const Facility&);
		// getter & setter
		virtual int getArea() = 0;
		// friend with Zoo
		friend class Zoo;
		
	protected:
    int length;
    int width;
};