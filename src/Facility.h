#include <string>
#include <iostream>

using namespace std;

class Facility : public Cell {
	public:
		// 5 sekawan
		Facility();
		Facility(int area);
		Facility(const Facility&);
		~Facility();
		Facility& operator=(const Facility&);
		// getter & setter
		virtual int getArea() = 0;
		// friend with Zoo
		friend class Zoo;
		
	protected:
		int area;
    // location
    int x;
    int y;
};